// Fill out your copyright notice in the Description page of Project Settings.


#include "Expose/ExposeVariable.h"
#include "../../A10_END.h"

// Sets default values
AExposeVariable::AExposeVariable() : VisibleInstanceOnlyOdd(32), EditAnywhere(1.23)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AExposeVariable::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(Game, Error, TEXT("The Actor's name is %s"), *GetName());
	UE_LOG(Game, Display, TEXT("Int is %d and float is %f"), VisibleInstanceOnlyOdd, EditAnywhere);
	UE_LOG(Game, Warning, TEXT("Velocity %s"), *GetVelocity().ToString());
}

// Called every frame
void AExposeVariable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

