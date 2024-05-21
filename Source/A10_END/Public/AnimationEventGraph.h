// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimationEventGraph.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAnimDelegate);
UCLASS()
class A10_END_API UAnimationEventGraph : public UAnimInstance
{
	GENERATED_BODY()
public:
	void NativeUpdateAnimation(float DeltaSeconds) override;
	UFUNCTION(BlueprintCallable)
		void FireAnimation();

	UFUNCTION(BlueprintCallable)
		void HitAnimation();

	UFUNCTION(BlueprintCallable)
		void DeadAnimation();

	UFUNCTION(BlueprintCallable)
		void ReloadAnimation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void PersonaUpdate();

	virtual void PersonaUpdate_Implementation();

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FAnimDelegate OnShootEnd;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FAnimDelegate OnReloadNow;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Speed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Direction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool DebugFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName ActionSlotName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName DamageSlotName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UAnimSequenceBase* FireAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UAnimSequenceBase* HitAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UAnimSequenceBase* CurrentDeadAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UAnimSequenceBase* ReloadAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<UAnimSequenceBase*> DeathAssets;
};