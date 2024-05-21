// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/AnimNotifies/ReloadAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadAnimation() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_UReloadAnimation_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_UReloadAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	A10_END_API UClass* Z_Construct_UClass_UAnimationEventGraph_NoRegister();
// End Cross Module References
	void UReloadAnimation::StaticRegisterNativesUReloadAnimation()
	{
	}
	UClass* Z_Construct_UClass_UReloadAnimation_NoRegister()
	{
		return UReloadAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UReloadAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReloadAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/ReloadAnimation.h" },
		{ "ModuleRelativePath", "Public/AnimNotifies/ReloadAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadAnimation_Statics::NewProp_Animations_MetaData[] = {
		{ "Category", "Variable|AnimationGraph" },
		{ "ModuleRelativePath", "Public/AnimNotifies/ReloadAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReloadAnimation_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReloadAnimation, Animations), Z_Construct_UClass_UAnimationEventGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReloadAnimation_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReloadAnimation_Statics::NewProp_Animations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReloadAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReloadAnimation_Statics::NewProp_Animations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReloadAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReloadAnimation_Statics::ClassParams = {
		&UReloadAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReloadAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReloadAnimation_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReloadAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReloadAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReloadAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReloadAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReloadAnimation, 783386085);
	template<> A10_END_API UClass* StaticClass<UReloadAnimation>()
	{
		return UReloadAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReloadAnimation(Z_Construct_UClass_UReloadAnimation, &UReloadAnimation::StaticClass, TEXT("/Script/A10_END"), TEXT("UReloadAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
