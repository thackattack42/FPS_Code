// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/AnimationEventGraph.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationEventGraph() {}
// Cross Module References
	A10_END_API UFunction* Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	A10_END_API UClass* Z_Construct_UClass_UAnimationEventGraph_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_UAnimationEventGraph();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_A10_END, nullptr, "AnimDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAnimationEventGraph::execPersonaUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PersonaUpdate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationEventGraph::execReloadAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationEventGraph::execDeadAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeadAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationEventGraph::execHitAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationEventGraph::execFireAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireAnimation();
		P_NATIVE_END;
	}
	static FName NAME_UAnimationEventGraph_PersonaUpdate = FName(TEXT("PersonaUpdate"));
	void UAnimationEventGraph::PersonaUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAnimationEventGraph_PersonaUpdate),NULL);
	}
	void UAnimationEventGraph::StaticRegisterNativesUAnimationEventGraph()
	{
		UClass* Class = UAnimationEventGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeadAnimation", &UAnimationEventGraph::execDeadAnimation },
			{ "FireAnimation", &UAnimationEventGraph::execFireAnimation },
			{ "HitAnimation", &UAnimationEventGraph::execHitAnimation },
			{ "PersonaUpdate", &UAnimationEventGraph::execPersonaUpdate },
			{ "ReloadAnimation", &UAnimationEventGraph::execReloadAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationEventGraph, nullptr, "DeadAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationEventGraph_FireAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationEventGraph_FireAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationEventGraph_FireAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationEventGraph, nullptr, "FireAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationEventGraph_FireAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationEventGraph_FireAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationEventGraph_FireAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationEventGraph_FireAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationEventGraph_HitAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationEventGraph_HitAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationEventGraph_HitAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationEventGraph, nullptr, "HitAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationEventGraph_HitAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationEventGraph_HitAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationEventGraph_HitAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationEventGraph_HitAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationEventGraph, nullptr, "PersonaUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationEventGraph, nullptr, "ReloadAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationEventGraph_NoRegister()
	{
		return UAnimationEventGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationEventGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShootEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShootEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReloadNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadNow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFire_MetaData[];
#endif
		static void NewProp_DebugFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DamageSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDeadAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDeadAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeathAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationEventGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationEventGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationEventGraph_DeadAnimation, "DeadAnimation" }, // 2436148795
		{ &Z_Construct_UFunction_UAnimationEventGraph_FireAnimation, "FireAnimation" }, // 3966044087
		{ &Z_Construct_UFunction_UAnimationEventGraph_HitAnimation, "HitAnimation" }, // 1757705205
		{ &Z_Construct_UFunction_UAnimationEventGraph_PersonaUpdate, "PersonaUpdate" }, // 4073585219
		{ &Z_Construct_UFunction_UAnimationEventGraph_ReloadAnimation, "ReloadAnimation" }, // 2356684656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationEventGraph.h" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnShootEnd_MetaData[] = {
		{ "Category", "Variable|Delegate" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnShootEnd = { "OnShootEnd", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, OnShootEnd), Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnShootEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnShootEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnReloadNow_MetaData[] = {
		{ "Category", "Variable|Delegate" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnReloadNow = { "OnReloadNow", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, OnReloadNow), Z_Construct_UDelegateFunction_A10_END_AnimDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnReloadNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnReloadNow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, Speed), METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, Direction), METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DebugFire_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DebugFire_SetBit(void* Obj)
	{
		((UAnimationEventGraph*)Obj)->DebugFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DebugFire = { "DebugFire", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationEventGraph), &Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DebugFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DebugFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DebugFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ActionSlotName_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ActionSlotName = { "ActionSlotName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, ActionSlotName), METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ActionSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ActionSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DamageSlotName_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DamageSlotName = { "DamageSlotName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, DamageSlotName), METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DamageSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DamageSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_FireAsset_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_FireAsset = { "FireAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, FireAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_FireAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_FireAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_HitAsset_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_HitAsset = { "HitAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, HitAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_HitAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_HitAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_CurrentDeadAsset_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_CurrentDeadAsset = { "CurrentDeadAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, CurrentDeadAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_CurrentDeadAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_CurrentDeadAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ReloadAsset_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ReloadAsset = { "ReloadAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, ReloadAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ReloadAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ReloadAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DeathAssets_Inner = { "DeathAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DeathAssets_MetaData[] = {
		{ "Category", "AnimationEventGraph" },
		{ "ModuleRelativePath", "Public/AnimationEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DeathAssets = { "DeathAssets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationEventGraph, DeathAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DeathAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DeathAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationEventGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnShootEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_OnReloadNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DebugFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ActionSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DamageSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_FireAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_HitAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_CurrentDeadAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_ReloadAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DeathAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationEventGraph_Statics::NewProp_DeathAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationEventGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationEventGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationEventGraph_Statics::ClassParams = {
		&UAnimationEventGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationEventGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationEventGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationEventGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationEventGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationEventGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationEventGraph, 1725739373);
	template<> A10_END_API UClass* StaticClass<UAnimationEventGraph>()
	{
		return UAnimationEventGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationEventGraph(Z_Construct_UClass_UAnimationEventGraph, &UAnimationEventGraph::StaticClass, TEXT("/Script/A10_END"), TEXT("UAnimationEventGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationEventGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
