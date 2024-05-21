// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTT_CodeWander.h"
#include "AIController.h"
#include "NavigationSystem.h"

EBTNodeResult::Type UBTT_CodeWander::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    FVector RandomPoint;
    AAIController* AIController = OwnerComp.GetAIOwner();

    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    RandomPoint = NavSystem->GetRandomPointInNavigableRadius(AIController->GetPawn(), AIController->GetPawn()->GetActorLocation(), Radius, NULL, NULL);

    OwnerComp.GetBlackboardComponent()->SetValueAsVector(BBKey.SelectedKeyName, RandomPoint);

    return EBTNodeResult::Succeeded;
}