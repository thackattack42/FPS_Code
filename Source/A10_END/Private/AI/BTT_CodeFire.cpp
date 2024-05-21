// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTT_CodeFire.h"
#include "Utility/AIInterface.h"
#include "AIController.h"
#include "../../A10_END.h"

EBTNodeResult::Type UBTT_CodeFire::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    IAIInterface* Owner = Cast<IAIInterface>(OwnerComp.GetAIOwner()->GetPawn());

    if (!Owner)
    {
        UE_LOG(Game, Warning, TEXT("CAST FAILED IN BTT_CODEFIRE NODE"));
        return EBTNodeResult::Failed;
    }

    Owner->InterfaceFire();
    OwnerComp.RegisterMessageObserver(this, "FireDone");
    return EBTNodeResult::Succeeded;
}
