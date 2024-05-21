// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIEnemyController.generated.h"

/**
 * 
 */
UCLASS()
class A10_END_API AAIEnemyController : public AAIController
{
	GENERATED_BODY()
protected:
	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UAIPerceptionComponent* PerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UAISenseConfig_Sight* AISenseComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		FName PlayerName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Variable|TreeReference")
		class UBehaviorTree* BehaviorTree;

	UFUNCTION()
		void TargetPerception(AActor* Actor, FAIStimulus Stimulus);
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	const AAIController* GetAIController(const AActor& Other) const;
public:
	AAIEnemyController();
};
