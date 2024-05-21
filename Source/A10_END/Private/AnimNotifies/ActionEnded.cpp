// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimNotifies/ActionEnded.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "../Public/AnimationEventGraph.h"

void UActionEnded::Notify(USkeletalMeshComponent* SkeletalMesh, UAnimSequenceBase* Animation)
{
	Super::Notify(SkeletalMesh, Animation);
	Animations = Cast< UAnimationEventGraph>(SkeletalMesh->GetAnimInstance());

	if (!Animations)
		return;

	Animations->OnShootEnd.Broadcast();
}