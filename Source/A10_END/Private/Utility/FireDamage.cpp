// Fill out your copyright notice in the Description page of Project Settings.


#include "Utility/FireDamage.h"

float UFireDamage::HandleDamageType(ETypes Type, float Damage) const
{
	printf("Fire");
	switch (Type)
	{
	case ETypes::FIRE:
			break;
	case ETypes::PLANT:
		Damage *= 2.0f;
		break;
	case ETypes::WATER:
		Damage *= 0.5f;
		break;
	case ETypes::NUM_TYPES:
		Damage = 0;
		break;
	}
	return Damage;
}
