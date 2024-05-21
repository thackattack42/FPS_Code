// Fill out your copyright notice in the Description page of Project Settings.


#include "Utility/WaterDamage.h"

float UWaterDamage::HandleDamageType(ETypes Type, float Damage) const
{
	printf("Water");
	switch (Type)
	{
	case ETypes::FIRE:
		Damage *= 2.0f;
		break;
	case ETypes::PLANT:
		Damage *= 0.5f;
		break;
	case ETypes::WATER:
		break;
	case ETypes::NUM_TYPES:
		Damage = 0;
		break;
	}
	return Damage;
}
