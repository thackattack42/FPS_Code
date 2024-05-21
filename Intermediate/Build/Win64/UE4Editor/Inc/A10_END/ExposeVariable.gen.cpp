// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A10_END/Public/Expose/ExposeVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposeVariable() {}
// Cross Module References
	A10_END_API UClass* Z_Construct_UClass_AExposeVariable_NoRegister();
	A10_END_API UClass* Z_Construct_UClass_AExposeVariable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_A10_END();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void AExposeVariable::StaticRegisterNativesAExposeVariable()
	{
	}
	UClass* Z_Construct_UClass_AExposeVariable_NoRegister()
	{
		return AExposeVariable::StaticClass();
	}
	struct Z_Construct_UClass_AExposeVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhere_MetaData[];
#endif
		static void NewProp_VisibleAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibleDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibleInstanceOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_VisibleInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditAnywhere_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EditAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EditDefaultsOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EditDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnlyOdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EditInstanceOnlyOdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExposeVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_A10_END,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Expose/ExposeVariable.h" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "Comment", "//Read Only\n" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
		{ "ToolTip", "Read Only" },
	};
#endif
	void Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleAnywhere_SetBit(void* Obj)
	{
		((AExposeVariable*)Obj)->VisibleAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleAnywhere = { "VisibleAnywhere", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AExposeVariable), &Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleDefaultsOnly = { "VisibleDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000030015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, VisibleDefaultsOnly), nullptr, METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnlyOdd = { "VisibleInstanceOnlyOdd", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, VisibleInstanceOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadOnly" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnly = { "VisibleInstanceOnly", nullptr, (EPropertyFlags)0x0020080000020801, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, VisibleInstanceOnly), METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditAnywhere_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "Comment", "//Read Write\n" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
		{ "ToolTip", "Read Write" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditAnywhere = { "EditAnywhere", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, EditAnywhere), METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnlyOdd = { "EditDefaultsOnlyOdd", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, EditDefaultsOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnly = { "EditDefaultsOnly", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, EditDefaultsOnly), METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnlyOdd_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnlyOdd = { "EditInstanceOnlyOdd", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, EditInstanceOnlyOdd), METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnlyOdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnlyOdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnly_MetaData[] = {
		{ "Category", "Variable|ReadWrite" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnly = { "EditInstanceOnly", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, EditInstanceOnly), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExposeVariable_Statics::NewProp_ClassType_MetaData[] = {
		{ "Category", "Variable|ClassRef" },
		{ "Comment", "//Class ref\n" },
		{ "ModuleRelativePath", "Public/Expose/ExposeVariable.h" },
		{ "ToolTip", "Class ref" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExposeVariable_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExposeVariable, ClassType), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::NewProp_ClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::NewProp_ClassType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExposeVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_VisibleInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnlyOdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_EditInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExposeVariable_Statics::NewProp_ClassType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExposeVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExposeVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExposeVariable_Statics::ClassParams = {
		&AExposeVariable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExposeVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExposeVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExposeVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExposeVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExposeVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExposeVariable, 2737116283);
	template<> A10_END_API UClass* StaticClass<AExposeVariable>()
	{
		return AExposeVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExposeVariable(Z_Construct_UClass_AExposeVariable, &AExposeVariable::StaticClass, TEXT("/Script/A10_END"), TEXT("AExposeVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExposeVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
