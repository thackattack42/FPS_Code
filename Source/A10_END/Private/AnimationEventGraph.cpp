// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimationEventGraph.h"

void UAnimationEventGraph::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* Pawn = TryGetPawnOwner();
	if (Pawn)
	{
		//valid
		Speed = Pawn->GetVelocity().Size();
		Direction = CalculateDirection(Pawn->GetVelocity(), Pawn->GetActorRotation());
	}
	else
	{
		//invalid
		PersonaUpdate();
	}
}

void UAnimationEventGraph::PersonaUpdate_Implementation()
{

}

void UAnimationEventGraph::FireAnimation()
{
	PlaySlotAnimationAsDynamicMontage(FireAsset, ActionSlotName);
}

void UAnimationEventGraph::HitAnimation()
{
	PlaySlotAnimationAsDynamicMontage(HitAsset, DamageSlotName);
}

void UAnimationEventGraph::DeadAnimation()
{
	FMath math;
	int i = math.RandRange(0, 1);
	CurrentDeadAsset = DeathAssets[i];
}

void UAnimationEventGraph::ReloadAnimation()
{
	PlaySlotAnimationAsDynamicMontage(ReloadAsset, ActionSlotName);
}
