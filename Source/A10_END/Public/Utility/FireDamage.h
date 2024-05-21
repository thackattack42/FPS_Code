// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "Utility/BPI_DamageTypeCode.h"

#include "FireDamage.generated.h"

/**
 * 
 */
UCLASS()
class A10_END_API UFireDamage : public UDamageType, public IBPI_DamageTypeCode
{
	GENERATED_BODY()
public:
	float HandleDamageType(ETypes Type, float Damage) const override;
};
