// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/Expose/ExposeFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposeFunction() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_AExposeFunction_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_AExposeFunction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_A10_END();
// End Cross Module References
	DEFINE_FUNCTION(AExposeFunction::execBlueprintNativeEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintNativeEvent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExposeFunction::execBlueprintCallable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintCallable();
		P_NATIVE_END;
	}
	static FName NAME_AExposeFunction_BlueprintImplementableEvent = FName(TEXT("BlueprintImplementableEvent"));
	void AExposeFunction::BlueprintImplementableEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExposeFunction_BlueprintImplementableEvent),NULL);
	}
	static FName NAME_AExposeFunction_BlueprintNativeEvent = FName(TEXT("BlueprintNativeEvent"));
	void AExposeFunction::BlueprintNativeEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AExposeFunction_BlueprintNativeEvent),NULL);
	}
	void AExposeFunction::StaticRegisterNativesAExposeFunction()
	{
		UClass* Class = AExposeFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueprintCallable", &AExposeFunction::execBlueprintCallable },
			{ "BlueprintNativeEvent", &AExposeFunction::execBlueprintNativeEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExposeFunction_BlueprintCallable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExposeFunction_BlueprintCallable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expose/ExposeFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExposeFunction_BlueprintCallable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExposeFunction, nullptr, "BlueprintCallable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExposeFunction_BlueprintCallable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExposeFunction_BlueprintCallable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExposeFunction_BlueprintCallable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExposeFunction_BlueprintCallable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expose/ExposeFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExposeFunction, nullptr, "BlueprintImplementableEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Expose/ExposeFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExposeFunction, nullptr, "BlueprintNativeEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExposeFunction_NoRegister()
	{
		return AExposeFunction::StaticClass();
	}
	struct Z_Construct_UClass_AExposeFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExposeFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExposeFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExposeFunction_BlueprintCallable, "BlueprintCallable" }, // 3603364941
		{ &Z_Construct_UFunction_AExposeFunction_BlueprintImplementableEvent, "BlueprintImplementableEvent" }, // 1457471318
		{ &Z_Construct_UFunction_AExposeFunction_BlueprintNativeEvent, "BlueprintNativeEvent" }, // 3199415611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Expose/ExposeFunction.h" },
		{ "ModuleRelativePath", "Public/Expose/ExposeFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExposeFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExposeFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExposeFunction_Statics::ClassParams = {
		&AExposeFunction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExposeFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExposeFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExposeFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExposeFunction, 3423372563);
	template<> A10_END_API UClass* StaticClass<AExposeFunction>()
	{
		return AExposeFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExposeFunction(Z_Construct_UClass_AExposeFunction, &AExposeFunction::StaticClass, TEXT("/Script/A10_END"), TEXT("AExposeFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExposeFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
