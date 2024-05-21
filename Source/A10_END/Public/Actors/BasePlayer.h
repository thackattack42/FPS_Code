// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/CommonCharacter.h"
#include "BasePlayer.generated.h"

/**
 * 
 */
UCLASS()
class A10_END_API ABasePlayer : public ACommonCharacter
{
	GENERATED_BODY()
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		APlayerController* PlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UFeedbackWidget* FeedbackWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable|ClassReference")
		TSubclassOf<class UUserWidget> UserWidget;

public:
	ABasePlayer();
	virtual void BeginPlay() override;
	virtual FRotator GetBaseAimRotation() const override;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	void InputAxisForward(float AxisInput);
	void InputAxisRight(float AxisInput);
	void InputFire();
	void InputReload();
	void HandleDeath() override;
	void SetFireType();
	void SetPlantType();
	void SetWaterType();
};
