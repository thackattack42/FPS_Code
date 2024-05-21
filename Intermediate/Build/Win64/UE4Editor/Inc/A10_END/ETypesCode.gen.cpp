// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/Enums/ETypesCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETypesCode() {}
// Cross Module References
	A10_END_API UEnum* Z_Construct_UEnum_A10_END_ETypes();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	A10_END_API UClass* Z_Construct_UClass_UETypesCode_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_UETypesCode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ETypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_A10_END_ETypes, Z_Construct_UPackage__Script_A10_END(), TEXT("ETypes"));
		}
		return Singleton;
	}
	template<> A10_END_API UEnum* StaticEnum<ETypes>()
	{
		return ETypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETypes(ETypes_StaticEnum, TEXT("/Script/A10_END"), TEXT("ETypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_A10_END_ETypes_Hash() { return 1120224654U; }
	UEnum* Z_Construct_UEnum_A10_END_ETypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_A10_END();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETypes"), 0, Get_Z_Construct_UEnum_A10_END_ETypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETypes::FIRE", (int64)ETypes::FIRE },
				{ "ETypes::WATER", (int64)ETypes::WATER },
				{ "ETypes::PLANT", (int64)ETypes::PLANT },
				{ "ETypes::NUM_TYPES", (int64)ETypes::NUM_TYPES },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FIRE.DisplayName", "Fire" },
				{ "FIRE.Name", "ETypes::FIRE" },
				{ "ModuleRelativePath", "Public/Enums/ETypesCode.h" },
				{ "NUM_TYPES.DisplayName", "NumTypes" },
				{ "NUM_TYPES.Name", "ETypes::NUM_TYPES" },
				{ "PLANT.DisplayName", "Plant" },
				{ "PLANT.Name", "ETypes::PLANT" },
				{ "WATER.DisplayName", "Water" },
				{ "WATER.Name", "ETypes::WATER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_A10_END,
				nullptr,
				"ETypes",
				"ETypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UETypesCode::StaticRegisterNativesUETypesCode()
	{
	}
	UClass* Z_Construct_UClass_UETypesCode_NoRegister()
	{
		return UETypesCode::StaticClass();
	}
	struct Z_Construct_UClass_UETypesCode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UETypesCode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UETypesCode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enums/ETypesCode.h" },
		{ "ModuleRelativePath", "Public/Enums/ETypesCode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UETypesCode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UETypesCode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UETypesCode_Statics::ClassParams = {
		&UETypesCode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UETypesCode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UETypesCode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UETypesCode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UETypesCode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UETypesCode, 829384966);
	template<> A10_END_API UClass* StaticClass<UETypesCode>()
	{
		return UETypesCode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UETypesCode(Z_Construct_UClass_UETypesCode, &UETypesCode::StaticClass, TEXT("/Script/A10_END"), TEXT("UETypesCode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UETypesCode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
