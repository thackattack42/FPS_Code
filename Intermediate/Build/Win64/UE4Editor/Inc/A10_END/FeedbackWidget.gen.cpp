// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/Widgets/FeedbackWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbackWidget() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_UFeedbackWidget_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_UFeedbackWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFeedbackWidget::execGetEndPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetEndPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackWidget::execSetAmmo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_currAmmo);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmmo(Z_Param_currAmmo,Z_Param_maxAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFeedbackWidget::execSetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_ratio);
		P_NATIVE_END;
	}
	void UFeedbackWidget::StaticRegisterNativesUFeedbackWidget()
	{
		UClass* Class = UFeedbackWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndPoint", &UFeedbackWidget::execGetEndPoint },
			{ "SetAmmo", &UFeedbackWidget::execSetAmmo },
			{ "SetHealth", &UFeedbackWidget::execSetHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics
	{
		struct FeedbackWidget_eventGetEndPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FeedbackWidget_eventGetEndPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackWidget, nullptr, "GetEndPoint", nullptr, nullptr, sizeof(FeedbackWidget_eventGetEndPoint_Parms), Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackWidget_GetEndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFeedbackWidget_GetEndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics
	{
		struct FeedbackWidget_eventSetAmmo_Parms
		{
			float currAmmo;
			float maxAmmo;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currAmmo;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::NewProp_currAmmo = { "currAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FeedbackWidget_eventSetAmmo_Parms, currAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FeedbackWidget_eventSetAmmo_Parms, maxAmmo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::NewProp_currAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::NewProp_maxAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackWidget, nullptr, "SetAmmo", nullptr, nullptr, sizeof(FeedbackWidget_eventSetAmmo_Parms), Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackWidget_SetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFeedbackWidget_SetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics
	{
		struct FeedbackWidget_eventSetHealth_Parms
		{
			float ratio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ratio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::NewProp_ratio = { "ratio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FeedbackWidget_eventSetHealth_Parms, ratio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::NewProp_ratio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbackWidget, nullptr, "SetHealth", nullptr, nullptr, sizeof(FeedbackWidget_eventSetHealth_Parms), Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFeedbackWidget_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFeedbackWidget_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFeedbackWidget_NoRegister()
	{
		return UFeedbackWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFeedbackWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaximumAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReticleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SafeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFeedbackWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFeedbackWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFeedbackWidget_GetEndPoint, "GetEndPoint" }, // 2267076051
		{ &Z_Construct_UFunction_UFeedbackWidget_SetAmmo, "SetAmmo" }, // 1909478000
		{ &Z_Construct_UFunction_UFeedbackWidget_SetHealth, "SetHealth" }, // 2869573518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/FeedbackWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, CurrentAmmo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_MaximumAmmo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_MaximumAmmo = { "MaximumAmmo", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, MaximumAmmo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_MaximumAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_MaximumAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ReticleMaterial_MetaData[] = {
		{ "Category", "FeedbackWidget" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ReticleMaterial = { "ReticleMaterial", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, ReticleMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ReticleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ReticleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EndPoint_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ColorName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ColorName = { "ColorName", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, ColorName), METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ColorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_SafeColor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_SafeColor = { "SafeColor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, SafeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_SafeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_SafeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EnemyColor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EnemyColor = { "EnemyColor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, EnemyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EnemyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EnemyColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_Reticle_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FeedbackWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/FeedbackWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_Reticle = { "Reticle", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFeedbackWidget, Reticle), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_Reticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_Reticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFeedbackWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_HealthBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_CurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_MaximumAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ReticleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_ColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_SafeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_EnemyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFeedbackWidget_Statics::NewProp_Reticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFeedbackWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbackWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFeedbackWidget_Statics::ClassParams = {
		&UFeedbackWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFeedbackWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFeedbackWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbackWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFeedbackWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFeedbackWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFeedbackWidget, 3023184366);
	template<> A10_END_API UClass* StaticClass<UFeedbackWidget>()
	{
		return UFeedbackWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFeedbackWidget(Z_Construct_UClass_UFeedbackWidget, &UFeedbackWidget::StaticClass, TEXT("/Script/A10_END"), TEXT("UFeedbackWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbackWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
