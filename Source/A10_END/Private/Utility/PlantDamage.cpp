// Fill out your copyright notice in the Description page of Project Settings.


#include "Utility/PlantDamage.h"

float UPlantDamage::HandleDamageType(ETypes Type, float Damage) const
{
	printf("Plant");
	switch (Type)
	{
	case ETypes::FIRE:
		Damage *= 0.5f;
		break;
	case ETypes::PLANT:
		break;
	case ETypes::WATER:
		Damage *= 2.0f;
		break;
	case ETypes::NUM_TYPES:
		Damage = 0;
		break;
	}
	return Damage;
}
