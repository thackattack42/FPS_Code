// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HealthComponent.h"
#include "../../A10_END.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent() : MaxHealth(5.0f)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::DoDamage);
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::DoDamage(AActor* damageactor, float damage, const UDamageType* damagetype, AController* instigatedby, AActor* damagecauser)
{
	float NewDamage = GetDamage(damagetype, damage);
	CurrentHealth = FMath::Clamp((CurrentHealth - NewDamage), 0.f, MaxHealth);

	if (CurrentHealth > 0.f)
	{
		OnHit.Broadcast();
	}
	else
	{
		GetOwner()->OnTakeAnyDamage.RemoveDynamic(this, &UHealthComponent::DoDamage);
		OnDeath.Broadcast();
	}
	OnHealthChanged.Broadcast(CurrentHealth / MaxHealth);
}

float UHealthComponent::GetDamage(const UDamageType* Type, float Damage)
{
	const IBPI_DamageTypeCode* Interface = Cast<IBPI_DamageTypeCode>(Type);
	if (Interface != nullptr)
		return Interface->HandleDamageType(ElementType, Damage);
	else
		return Damage;
}
