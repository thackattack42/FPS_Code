// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA10_END_init() {}
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature();
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature();
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature();
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_HealthDelegate__DelegateSignature();
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_HealthDelegateChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_A10_END()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_A10_END_RifleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_A10_END_AmmoDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_A10_END_HealthDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_A10_END_HealthDelegateChange__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/A10_END",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFE9E3725,
				0x4098E236,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
