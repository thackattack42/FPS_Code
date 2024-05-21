// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CommonCharacter.generated.h"

UCLASS(Abstract)
class A10_END_API ACommonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACommonCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UChildActorComponent* WeaponChildActorComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UAnimationEventGraph* Animations;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UHealthComponent* HealthComponent;

	UFUNCTION(BlueprintCallable)
		virtual void HandleDeath();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class ABaseRifle> WeaponClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		ABaseRifle* Weapon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FName SocketName;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
