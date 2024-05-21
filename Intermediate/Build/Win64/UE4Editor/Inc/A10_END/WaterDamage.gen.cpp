// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/Utility/WaterDamage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterDamage() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_UWaterDamage_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_UWaterDamage();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	A10_END_API UClass* Z_Construct_UClass_UBPI_DamageTypeCode_NoRegister();
// End Cross Module References
	void UWaterDamage::StaticRegisterNativesUWaterDamage()
	{
	}
	UClass* Z_Construct_UClass_UWaterDamage_NoRegister()
	{
		return UWaterDamage::StaticClass();
	}
	struct Z_Construct_UClass_UWaterDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterDamage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utility/WaterDamage.h" },
		{ "ModuleRelativePath", "Public/Utility/WaterDamage.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWaterDamage_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_DamageTypeCode_NoRegister, (int32)VTABLE_OFFSET(UWaterDamage, IBPI_DamageTypeCode), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterDamage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWaterDamage_Statics::ClassParams = {
		&UWaterDamage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterDamage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWaterDamage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWaterDamage, 15045154);
	template<> A10_END_API UClass* StaticClass<UWaterDamage>()
	{
		return UWaterDamage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaterDamage(Z_Construct_UClass_UWaterDamage, &UWaterDamage::StaticClass, TEXT("/Script/A10_END"), TEXT("UWaterDamage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterDamage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
