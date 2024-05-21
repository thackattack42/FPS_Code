// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETypesCode.generated.h"

UENUM(BlueprintType)
enum class ETypes : uint8
{
	FIRE	UMETA(DisplayName = "Fire"),
	WATER	UMETA(DisplayName = "Water"),
	PLANT	UMETA(DisplayName = "Plant"),
	NUM_TYPES	UMETA(DisplayName = "NumTypes")
};

UCLASS()
class A10_END_API UETypesCode : public UObject
{
	GENERATED_BODY()
	
};
