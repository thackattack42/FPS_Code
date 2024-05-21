// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/Utility/BPI_DamageTypeCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_DamageTypeCode() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_UBPI_DamageTypeCode_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_UBPI_DamageTypeCode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	A10_END_API UEnum* Z_Construct_UEnum_A10_END_ETypes();
// End Cross Module References
	DEFINE_FUNCTION(IBPI_DamageTypeCode::execHandleDamageType)
	{
		P_GET_ENUM(ETypes,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->HandleDamageType(ETypes(Z_Param_Type),Z_Param_Damage);
		P_NATIVE_END;
	}
	void UBPI_DamageTypeCode::StaticRegisterNativesUBPI_DamageTypeCode()
	{
		UClass* Class = UBPI_DamageTypeCode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleDamageType", &IBPI_DamageTypeCode::execHandleDamageType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics
	{
		struct BPI_DamageTypeCode_eventHandleDamageType_Parms
		{
			ETypes Type;
			float Damage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPI_DamageTypeCode_eventHandleDamageType_Parms, Type), Z_Construct_UEnum_A10_END_ETypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPI_DamageTypeCode_eventHandleDamageType_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPI_DamageTypeCode_eventHandleDamageType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/BPI_DamageTypeCode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_DamageTypeCode, nullptr, "HandleDamageType", nullptr, nullptr, sizeof(BPI_DamageTypeCode_eventHandleDamageType_Parms), Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_DamageTypeCode_NoRegister()
	{
		return UBPI_DamageTypeCode::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_DamageTypeCode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_DamageTypeCode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_DamageTypeCode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_DamageTypeCode_HandleDamageType, "HandleDamageType" }, // 3199881830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_DamageTypeCode_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Utility/BPI_DamageTypeCode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_DamageTypeCode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_DamageTypeCode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_DamageTypeCode_Statics::ClassParams = {
		&UBPI_DamageTypeCode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBPI_DamageTypeCode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_DamageTypeCode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_DamageTypeCode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_DamageTypeCode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPI_DamageTypeCode, 2704484041);
	template<> A10_END_API UClass* StaticClass<UBPI_DamageTypeCode>()
	{
		return UBPI_DamageTypeCode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_DamageTypeCode(Z_Construct_UClass_UBPI_DamageTypeCode, &UBPI_DamageTypeCode::StaticClass, TEXT("/Script/A10_END"), TEXT("UBPI_DamageTypeCode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_DamageTypeCode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
