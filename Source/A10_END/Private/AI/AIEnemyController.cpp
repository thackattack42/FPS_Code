// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AIEnemyController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "../../A10_END.h"

AAIEnemyController::AAIEnemyController() : PerceptionComponent(CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component"))), AISenseComponent(CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AI Sense Component"))), PlayerName("Player")
{
	if (!PerceptionComponent)
	{
		UE_LOG(Game, Warning, TEXT("MISSING PERCEPTION COMPONENT"));
		Destroy();
	}
	if (!AISenseComponent)
	{
		UE_LOG(Game, Warning, TEXT("MISSING AISENSE COMPONENT"));
		Destroy();
	}

	AISenseComponent->SightRadius = 900;
	AISenseComponent->LoseSightRadius = 1100;
	AISenseComponent->PeripheralVisionAngleDegrees = 35;
	AISenseComponent->AutoSuccessRangeFromLastSeenLocation = 500;
	AISenseComponent->DetectionByAffiliation.bDetectEnemies = true;
	AISenseComponent->DetectionByAffiliation.bDetectFriendlies = false;
	AISenseComponent->DetectionByAffiliation.bDetectNeutrals = false;
	PerceptionComponent->ConfigureSense(*AISenseComponent);
	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AAIEnemyController::TargetPerception);
}
void AAIEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	RunBehaviorTree(BehaviorTree);
}
void AAIEnemyController::TargetPerception(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		Blackboard->SetValueAsObject(PlayerName, Actor);
	}
	else
	{
		Blackboard->ClearValue(PlayerName);
	}
}

ETeamAttitude::Type AAIEnemyController::GetTeamAttitudeTowards(const AActor& Other) const
{
	const IGenericTeamAgentInterface* OtherTeamAgent = Cast<const IGenericTeamAgentInterface>(GetAIController(Other));
	return OtherTeamAgent ? FGenericTeamId::GetAttitude(GetGenericTeamId(), OtherTeamAgent->GetGenericTeamId())
		: ETeamAttitude::Hostile;
}