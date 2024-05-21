// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/A10_ENDGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA10_ENDGameModeBase() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_AA10_ENDGameModeBase_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_AA10_ENDGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_A10_END();
// End Cross Module References
	void AA10_ENDGameModeBase::StaticRegisterNativesAA10_ENDGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AA10_ENDGameModeBase_NoRegister()
	{
		return AA10_ENDGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AA10_ENDGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA10_ENDGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA10_ENDGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "A10_ENDGameModeBase.h" },
		{ "ModuleRelativePath", "A10_ENDGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA10_ENDGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA10_ENDGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AA10_ENDGameModeBase_Statics::ClassParams = {
		&AA10_ENDGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AA10_ENDGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA10_ENDGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA10_ENDGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AA10_ENDGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AA10_ENDGameModeBase, 464116535);
	template<> A10_END_API UClass* StaticClass<AA10_ENDGameModeBase>()
	{
		return AA10_ENDGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA10_ENDGameModeBase(Z_Construct_UClass_AA10_ENDGameModeBase, &AA10_ENDGameModeBase::StaticClass, TEXT("/Script/A10_END"), TEXT("AA10_ENDGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA10_ENDGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
