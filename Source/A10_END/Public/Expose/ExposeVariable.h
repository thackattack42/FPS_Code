// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExposeVariable.generated.h"

UCLASS()
class A10_END_API AExposeVariable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExposeVariable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Read Only
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable|ReadOnly")
		bool VisibleAnywhere;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Variable|ReadOnly")
		uint8 VisibleDefaultsOnly;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Variable|ReadOnly")
		int32 VisibleInstanceOnlyOdd;
	UPROPERTY(VisibleInstanceOnly, Category = "Variable|ReadOnly")
		int64 VisibleInstanceOnly;

	//Read Write
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable|ReadWrite")
		float EditAnywhere;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable|ReadWrite")
		FName EditDefaultsOnlyOdd;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Variable|ReadWrite")
		FString EditDefaultsOnly;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Variable|ReadWrite")
		FText EditInstanceOnlyOdd;
	UPROPERTY(EditInstanceOnly, Category = "Variable|ReadWrite")
		FVector EditInstanceOnly;

	//Class ref
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable|ClassRef")
		TSubclassOf<class APawn>ClassType;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
