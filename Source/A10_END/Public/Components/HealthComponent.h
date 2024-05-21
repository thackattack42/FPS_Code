// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Utility/BPI_DamageTypeCode.h"

#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthDelegateChange, float, ratio);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class A10_END_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float CurrentHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		ETypes ElementType;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION()
		void DoDamage(AActor* damageactor, float damage, const UDamageType* damagetype, AController* instigatedby, AActor* damagecauser);

	UFUNCTION()
		float GetDamage(const UDamageType* Type, float Damage);

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FHealthDelegate OnHit;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FHealthDelegate OnDeath;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Variable|Delegate")
		FHealthDelegateChange OnHealthChanged;
};
