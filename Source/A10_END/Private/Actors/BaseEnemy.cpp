// Fill out your copyright notice in the Description page of Project Settings.

#include "Actors/BaseEnemy.h"
#include "Actors/BaseRifle.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "../Public/AnimationEventGraph.h"
#include "../../A10_END.h"
#include "Perception/AIPerceptionSystem.h"
#include "AIController.h"
#include <Blueprint/AIBlueprintHelperLibrary.h>

ABaseEnemy::ABaseEnemy() : Message("FireDone"), AmmoKeyName("Ammo")
{
	PrimaryActorTick.bCanEverTick = true;
	this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	auto Controller = UAIBlueprintHelperLibrary::GetAIController(this);
	if (!Controller)
	{
		UE_LOG(Game, Warning, TEXT("CONTROLLER NOT FOUND"));
		return;
	}

	Controller->SetGenericTeamId(TeamID);
	auto PercpetionSystem = UAIPerceptionSystem::GetCurrent(GetWorld());
	if (!PercpetionSystem)
	{
		UE_LOG(Game, Warning, TEXT("PERCEPTION NOT FOUND"));
		return;
	}

	PercpetionSystem->UpdateListener(*Controller->GetAIPerceptionComponent());
	Animations->OnShootEnd.AddDynamic(this, &ABaseEnemy::EndAICodeTask);
	Weapon->OnAmmoChanged.AddDynamic(this, &ABaseEnemy::HandleAmmoChange);
	Weapon->Reload();
}

void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	InterfaceFire();
}

void ABaseEnemy::InterfaceFire() const
{
	Weapon->FireWeapon();
}

void ABaseEnemy::InterfaceReload() const
{
	Weapon->RequestReload();
}

void ABaseEnemy::HandleAmmoChange(float currAmmo, float maxAmmo)
{
	UBlackboardComponent* BlackboardComponent = UAIBlueprintHelperLibrary::GetBlackboard(this);

	if (!BlackboardComponent)
	{
		UE_LOG(Game, Warning, TEXT("BLACK BOARD NOT FOUND"));
		return;
	}

	BlackboardComponent->SetValueAsFloat(AmmoKeyName, currAmmo);
}

void ABaseEnemy::EndAICodeTask()
{
	FAIMessage::Send(this, FAIMessage(Message, nullptr, true));
}