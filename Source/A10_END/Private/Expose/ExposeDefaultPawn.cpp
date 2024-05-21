// Fill out your copyright notice in the Description page of Project Settings.


#include "Expose/ExposeDefaultPawn.h"
#include "Components/SphereComponent.h"
#include "../../A10_END.h"

// Sets default values
AExposeDefaultPawn::AExposeDefaultPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SetRootComponent(SphereComponent);
}

// Called when the game starts or when spawned
void AExposeDefaultPawn::BeginPlay()
{
	Super::BeginPlay();
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AExposeDefaultPawn::HandleHit);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AExposeDefaultPawn::K2_DestroyActor, 3.0f, false);

	AActor* TestActor = this;
	APawn* TestPawn = Cast<APawn>(TestActor);
	if (nullptr == TestPawn)
	{
		UE_LOG(Game, Error, TEXT("Cast is no good"));
	}
}

// Called every frame
void AExposeDefaultPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AExposeDefaultPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AExposeDefaultPawn::K2_DestroyActor()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = GetController();
	SpawnParams.Instigator = this;
	GetWorld()->SpawnActor<APawn>(ClassType, GetActorLocation(), GetActorRotation(), SpawnParams);

	Super::K2_DestroyActor();
}

void AExposeDefaultPawn::HandleHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}