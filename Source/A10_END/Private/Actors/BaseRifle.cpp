// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseRifle.h"
#include "Actors/BaseBullet.h"
#include "Components/SkeletalMeshComponent.h"
#include "../../A10_END.h"

// Sets default values
ABaseRifle::ABaseRifle() : MaxAmmo(10.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");
	SetRootComponent(SkeletalMesh);
	SocketName = TEXT("MuzzleFlashSocket");
	ParentPawn = nullptr;
	SkeletalMesh->SetCollisionProfileName("NoCollision");
}

// Called when the game starts or when spawned
void ABaseRifle::BeginPlay()
{
	Super::BeginPlay();
	
	AActor* ParentActor = this->GetParentActor();
	if (nullptr == Cast<APawn>(ParentActor))
	{
		UE_LOG(Game, Error, TEXT("Invalid Pawn"));
	}
	else
	{
		ParentPawn = Cast<APawn>(ParentActor);
	}

	//this->OnReload.AddDynamic(this, &ABaseRifle::Reload);
}

// Called every frame
void ABaseRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseRifle::FireWeapon()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = ParentPawn;

	FVector Location = SkeletalMesh->GetSocketLocation(SocketName);
	FRotator Rotation = ParentPawn->GetBaseAimRotation();

	if (CanFire())
	{
		GetWorld()->SpawnActor<AActor>(BulletClass, SkeletalMesh->GetSocketLocation(SocketName), ParentPawn->GetBaseAimRotation(), SpawnParams);
		InProcess = true;
		OnShotHappened.Broadcast();
		UseAmmo();
	}
}

bool ABaseRifle::CanFire()
{
	if (InProcess || Dead || CurrentAmmo <= 0.0f)
		return false;
	else
		return true;
}

void ABaseRifle::StopProcess()
{
	InProcess = false;
}

void ABaseRifle::ResetFire()
{
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABaseRifle::StopProcess, 2.0f);
}

void ABaseRifle::OwnerDead()
{
	Dead = true;
}

void ABaseRifle::RequestReload()
{
	if (!InProcess)
	{
		InProcess = true;
		OnReload.Broadcast();
	}
}

void ABaseRifle::Reload()
{
	CurrentAmmo = MaxAmmo;
	OnAmmoChanged.Broadcast(CurrentAmmo, MaxAmmo);
}

void ABaseRifle::UseAmmo()
{
	CurrentAmmo--;
	CurrentAmmo = FMath::Max(CurrentAmmo, 0.0f);
	OnAmmoChanged.Broadcast(CurrentAmmo, MaxAmmo);
}

void ABaseRifle::SetElement(ETypes Type)
{
	if (Type < ETypes::NUM_TYPES)
		BulletClass = BulletTypes[(int32)Type];
}

FVector ABaseRifle::GetStartLocation()
{
	return SkeletalMesh->GetSocketLocation("MuzzleFlashSocket");
}