// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTT_CodeReload.h"
#include "Utility/AIInterface.h"
#include "AIController.h"
#include "../../A10_END.h"

EBTNodeResult::Type UBTT_CodeReload::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    IAIInterface* Owner = Cast<IAIInterface>(OwnerComp.GetAIOwner()->GetPawn());

    if (!Owner)
    {
        UE_LOG(Game, Warning, TEXT("CAST FAILED IN BTT_CODERELOAD NODE"));
        return EBTNodeResult::Failed;
    }

    Owner->InterfaceReload();
    OwnerComp.RegisterMessageObserver(this, "FireDone");
    return EBTNodeResult::Type();
}