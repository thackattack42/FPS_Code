// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/Actors/BaseRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRifle() {}
// Cross Module References
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature();
	A10_END_API UClass* Z_Construct_UClass_ABaseRifle_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_ABaseRifle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	A10_END_API UEnum* Z_Construct_UEnum_A10_END_ETypes();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	A10_END_API UClass* Z_Construct_UClass_ABaseBullet_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics
	{
		struct _Script_A10_END_eventAmmoDelegate_Parms
		{
			float CurrentAmmo;
			float MaxAmmo;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAmmo;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_A10_END_eventAmmoDelegate_Parms, CurrentAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_A10_END_eventAmmoDelegate_Parms, MaxAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::NewProp_MaxAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_A10_END, nullptr, "AmmoDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_A10_END_eventAmmoDelegate_Parms), Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_A10_END, nullptr, "RifleDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABaseRifle::execGetStartLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetStartLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execSetElement)
	{
		P_GET_ENUM(ETypes,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElement(ETypes(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execUseAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execRequestReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execOwnerDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwnerDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execResetFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execStopProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopProcess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execFireWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireWeapon();
		P_NATIVE_END;
	}
	void ABaseRifle::StaticRegisterNativesABaseRifle()
	{
		UClass* Class = ABaseRifle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanFire", &ABaseRifle::execCanFire },
			{ "FireWeapon", &ABaseRifle::execFireWeapon },
			{ "GetStartLocation", &ABaseRifle::execGetStartLocation },
			{ "OwnerDead", &ABaseRifle::execOwnerDead },
			{ "Reload", &ABaseRifle::execReload },
			{ "RequestReload", &ABaseRifle::execRequestReload },
			{ "ResetFire", &ABaseRifle::execResetFire },
			{ "SetElement", &ABaseRifle::execSetElement },
			{ "StopProcess", &ABaseRifle::execStopProcess },
			{ "UseAmmo", &ABaseRifle::execUseAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseRifle_CanFire_Statics
	{
		struct BaseRifle_eventCanFire_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseRifle_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseRifle_eventCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseRifle_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseRifle_eventCanFire_Parms), &Z_Construct_UFunction_ABaseRifle_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRifle_CanFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRifle_CanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_CanFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "CanFire", nullptr, nullptr, sizeof(BaseRifle_eventCanFire_Parms), Z_Construct_UFunction_ABaseRifle_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_CanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_CanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_CanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_CanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_CanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_FireWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_FireWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "FireWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_FireWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_FireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_FireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_FireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics
	{
		struct BaseRifle_eventGetStartLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseRifle_eventGetStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "GetStartLocation", nullptr, nullptr, sizeof(BaseRifle_eventGetStartLocation_Parms), Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_GetStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_GetStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_OwnerDead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_OwnerDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_OwnerDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "OwnerDead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_OwnerDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_OwnerDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_OwnerDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_OwnerDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_RequestReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_RequestReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_RequestReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "RequestReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_RequestReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_RequestReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_RequestReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_RequestReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_ResetFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_ResetFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_ResetFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "ResetFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_ResetFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_ResetFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_ResetFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_ResetFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_SetElement_Statics
	{
		struct BaseRifle_eventSetElement_Parms
		{
			ETypes Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABaseRifle_SetElement_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABaseRifle_SetElement_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseRifle_eventSetElement_Parms, Type), Z_Construct_UEnum_A10_END_ETypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRifle_SetElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRifle_SetElement_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRifle_SetElement_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_SetElement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_SetElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "SetElement", nullptr, nullptr, sizeof(BaseRifle_eventSetElement_Parms), Z_Construct_UFunction_ABaseRifle_SetElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_SetElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_SetElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_SetElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_SetElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_SetElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_StopProcess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_StopProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_StopProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "StopProcess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_StopProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_StopProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_StopProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_StopProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_UseAmmo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_UseAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_UseAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "UseAmmo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_UseAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_UseAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_UseAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_UseAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseRifle_NoRegister()
	{
		return ABaseRifle::StaticClass();
	}
	struct Z_Construct_UClass_ABaseRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProcess_MetaData[];
#endif
		static void NewProp_InProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dead_MetaData[];
#endif
		static void NewProp_Dead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Dead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAmmo;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BulletTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShotHappened_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShotHappened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReload_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAmmoChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAmmoChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseRifle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRifle_CanFire, "CanFire" }, // 242998060
		{ &Z_Construct_UFunction_ABaseRifle_FireWeapon, "FireWeapon" }, // 3646584029
		{ &Z_Construct_UFunction_ABaseRifle_GetStartLocation, "GetStartLocation" }, // 1530091686
		{ &Z_Construct_UFunction_ABaseRifle_OwnerDead, "OwnerDead" }, // 205104138
		{ &Z_Construct_UFunction_ABaseRifle_Reload, "Reload" }, // 4179557251
		{ &Z_Construct_UFunction_ABaseRifle_RequestReload, "RequestReload" }, // 3825648756
		{ &Z_Construct_UFunction_ABaseRifle_ResetFire, "ResetFire" }, // 2767255752
		{ &Z_Construct_UFunction_ABaseRifle_SetElement, "SetElement" }, // 3699137458
		{ &Z_Construct_UFunction_ABaseRifle_StopProcess, "StopProcess" }, // 1077498880
		{ &Z_Construct_UFunction_ABaseRifle_UseAmmo, "UseAmmo" }, // 299469751
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BaseRifle.h" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_ParentPawn_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_ParentPawn = { "ParentPawn", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, ParentPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_ParentPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_ParentPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, SocketName), METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, BulletClass), Z_Construct_UClass_ABaseBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_InProcess_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRifle_Statics::NewProp_InProcess_SetBit(void* Obj)
	{
		((ABaseRifle*)Obj)->InProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_InProcess = { "InProcess", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseRifle), &Z_Construct_UClass_ABaseRifle_Statics::NewProp_InProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_InProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_InProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_Dead_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	void Z_Construct_UClass_ABaseRifle_Statics::NewProp_Dead_SetBit(void* Obj)
	{
		((ABaseRifle*)Obj)->Dead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_Dead = { "Dead", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseRifle), &Z_Construct_UClass_ABaseRifle_Statics::NewProp_Dead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_Dead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_Dead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, Cooldown), METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_MaxAmmo_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletTypes_Inner = { "BulletTypes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletTypes_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletTypes = { "BulletTypes", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, BulletTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnShotHappened_MetaData[] = {
		{ "Category", "Variable|Delegate" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnShotHappened = { "OnShotHappened", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, OnShotHappened), Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnShotHappened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnShotHappened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnReload_MetaData[] = {
		{ "Category", "Variable|Delegate" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnReload = { "OnReload", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, OnReload), Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnReload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnReload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnAmmoChanged_MetaData[] = {
		{ "Category", "Variable|Delegate" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnAmmoChanged = { "OnAmmoChanged", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, OnAmmoChanged), Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnAmmoChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnAmmoChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_ParentPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_InProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_Dead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_MaxAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnShotHappened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnReload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_OnAmmoChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseRifle_Statics::ClassParams = {
		&ABaseRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseRifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseRifle, 1941596261);
	template<> A10_END_API UClass* StaticClass<ABaseRifle>()
	{
		return ABaseRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseRifle(Z_Construct_UClass_ABaseRifle, &ABaseRifle::StaticClass, TEXT("/Script/A10_END"), TEXT("ABaseRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
