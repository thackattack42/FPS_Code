// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ActionEnded.generated.h"

/**
 * 
 */
UCLASS()
class A10_END_API UActionEnded : public UAnimNotify
{
	GENERATED_BODY()
		virtual void Notify(USkeletalMeshComponent* SkeletalMesh, UAnimSequenceBase* Animation) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable|AnimationGraph")
		class UAnimationEventGraph* Animations;
};
