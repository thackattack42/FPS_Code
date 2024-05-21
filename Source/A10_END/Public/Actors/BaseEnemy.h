// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/CommonCharacter.h"
#include "Utility/AIInterface.h"
#include "GenericTeamAgentInterface.h"
#include "BaseEnemy.generated.h"

/**
 * 
 */
UCLASS()
class A10_END_API ABaseEnemy : public ACommonCharacter
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void InterfaceFire() const override;
	virtual void InterfaceReload() const override;

	UFUNCTION()
		void HandleAmmoChange(float currAmmo, float maxAmmo);
	UFUNCTION()
		void EndAICodeTask();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FName Message;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FName AmmoKeyName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FGenericTeamId TeamID;
public:
	ABaseEnemy();
};
