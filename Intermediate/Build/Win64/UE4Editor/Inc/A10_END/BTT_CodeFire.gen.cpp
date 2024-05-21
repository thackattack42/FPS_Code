// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/AI/BTT_CodeFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_CodeFire() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_UBTT_CodeFire_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_UBTT_CodeFire();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_A10_END();
// End Cross Module References
	void UBTT_CodeFire::StaticRegisterNativesUBTT_CodeFire()
	{
	}
	UClass* Z_Construct_UClass_UBTT_CodeFire_NoRegister()
	{
		return UBTT_CodeFire::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_CodeFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_CodeFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_CodeFire_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTT_CodeFire.h" },
		{ "ModuleRelativePath", "Public/AI/BTT_CodeFire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_CodeFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_CodeFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTT_CodeFire_Statics::ClassParams = {
		&UBTT_CodeFire::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTT_CodeFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_CodeFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_CodeFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTT_CodeFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTT_CodeFire, 3244526608);
	template<> A10_END_API UClass* StaticClass<UBTT_CodeFire>()
	{
		return UBTT_CodeFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTT_CodeFire(Z_Construct_UClass_UBTT_CodeFire, &UBTT_CodeFire::StaticClass, TEXT("/Script/A10_END"), TEXT("UBTT_CodeFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_CodeFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
