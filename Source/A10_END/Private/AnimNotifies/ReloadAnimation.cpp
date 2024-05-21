// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimNotifies/ReloadAnimation.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "../Public/AnimationEventGraph.h"

void UReloadAnimation::Notify(USkeletalMeshComponent* SkeletalMesh, UAnimSequenceBase* Animation)
{
	Super::Notify(SkeletalMesh, Animation);
	Animations = Cast< UAnimationEventGraph>(SkeletalMesh->GetAnimInstance());

	if (!Animations)
		return;

	Animations->OnReloadNow.Broadcast();
}