// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enums/ETypesCode.h"
#include "BPI_DamageTypeCode.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta = (CannotImplementInBlueprint))
class UBPI_DamageTypeCode : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class A10_END_API IBPI_DamageTypeCode
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION()
		virtual float HandleDamageType(ETypes Type, float Damage) const = 0;
};
