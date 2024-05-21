// Fill out your copyright notice in the Description page of Project Settings.


#include "Error.h"

// Sets default values
AError::AError()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AError::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AError::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

