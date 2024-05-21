// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/deleteMe/Error.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeError() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_AError_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_AError();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_A10_END();
// End Cross Module References
	void AError::StaticRegisterNativesAError()
	{
	}
	UClass* Z_Construct_UClass_AError_NoRegister()
	{
		return AError::StaticClass();
	}
	struct Z_Construct_UClass_AError_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AError_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "deleteMe/Error.h" },
		{ "ModuleRelativePath", "deleteMe/Error.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AError_Statics::ClassParams = {
		&AError::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AError, 545125337);
	template<> A10_END_API UClass* StaticClass<AError>()
	{
		return AError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AError(Z_Construct_UClass_AError, &AError::StaticClass, TEXT("/Script/A10_END"), TEXT("AError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
