// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/AI/AIEnemyController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIEnemyController() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_AAIEnemyController_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_AAIEnemyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_A10_END();
// End Cross Module References
	void AAIEnemyController::StaticRegisterNativesAAIEnemyController()
	{
	}
	UClass* Z_Construct_UClass_AAIEnemyController_NoRegister()
	{
		return AAIEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AAIEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemyController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/AIEnemyController.h" },
		{ "ModuleRelativePath", "Public/AI/AIEnemyController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIEnemyController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIEnemyController_Statics::ClassParams = {
		&AAIEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIEnemyController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIEnemyController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIEnemyController, 1702664952);
	template<> A10_END_API UClass* StaticClass<AAIEnemyController>()
	{
		return AAIEnemyController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIEnemyController(Z_Construct_UClass_AAIEnemyController, &AAIEnemyController::StaticClass, TEXT("/Script/A10_END"), TEXT("AAIEnemyController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIEnemyController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
