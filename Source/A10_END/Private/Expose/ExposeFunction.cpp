// Fill out your copyright notice in the Description page of Project Settings.


#include "Expose/ExposeFunction.h"
#include "../../A10_END.h"

// Sets default values
AExposeFunction::AExposeFunction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExposeFunction::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExposeFunction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExposeFunction::BlueprintCallable()
{
	UE_LOG(Game, Warning, TEXT("BlueprintCallable"));
}

//void AExposeFunction::BlueprintImplementableEvent()
//{
//	UE_LOG(Game, Warning, TEXT("BlueprintImplementableEvent"));
//}

void AExposeFunction::BlueprintNativeEvent_Implementation()
{
	UE_LOG(Game, Warning, TEXT("BlueprintNativeEvent"));
}