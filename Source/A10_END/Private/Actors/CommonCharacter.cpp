// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CommonCharacter.h"
#include "Components/ChildActorComponent.h"
#include "AnimationEventGraph.h"
#include "Actors/BaseRifle.h"
#include "Components/HealthComponent.h"
#include "../../A10_END.h"

// Sets default values
ACommonCharacter::ACommonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));

	SocketName = TEXT("WeaponPlacement");
	WeaponChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponChildActorComponent"));
	WeaponChildActorComponent->SetupAttachment(GetMesh(), SocketName);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("BP_HealthComponent"));
}

// Called when the game starts or when spawned
void ACommonCharacter::BeginPlay()
{
	Super::BeginPlay();
	WeaponChildActorComponent->SetChildActorClass(WeaponClass);

	Weapon = Cast<ABaseRifle>(WeaponChildActorComponent->GetChildActor());
	if (Weapon == nullptr)
	{
		UE_LOG(Game, Error, TEXT("Missing Rifle"));
		Destroy();
	}
	Animations = Cast<UAnimationEventGraph>(GetMesh()->GetAnimInstance());
	if (Animations == nullptr)
	{
		UE_LOG(Game, Error, TEXT("Missing Animation"))
	}

	Weapon->OnShotHappened.AddDynamic(Animations, &UAnimationEventGraph::FireAnimation);

	Animations->OnShootEnd.AddDynamic(Weapon, &ABaseRifle::StopProcess);
	Animations->OnReloadNow.AddDynamic(Weapon, &ABaseRifle::Reload);

	HealthComponent->OnHit.AddDynamic(Animations, &UAnimationEventGraph::HitAnimation);
	HealthComponent->OnDeath.AddDynamic(this, &ACommonCharacter::HandleDeath);
}

// Called every frame
void ACommonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACommonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ACommonCharacter::HandleDeath()
{
	Animations->DeadAnimation();
	Weapon->OwnerDead();
	SetActorEnableCollision(false);
}