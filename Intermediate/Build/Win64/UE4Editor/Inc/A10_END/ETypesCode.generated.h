// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A10_END_ETypesCode_generated_h
#error "ETypesCode.generated.h already included, missing '#pragma once' in ETypesCode.h"
#endif
#define A10_END_ETypesCode_generated_h

#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_RPC_WRAPPERS
#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUETypesCode(); \
	friend struct Z_Construct_UClass_UETypesCode_Statics; \
public: \
	DECLARE_CLASS(UETypesCode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UETypesCode)


#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUETypesCode(); \
	friend struct Z_Construct_UClass_UETypesCode_Statics; \
public: \
	DECLARE_CLASS(UETypesCode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UETypesCode)


#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UETypesCode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UETypesCode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UETypesCode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UETypesCode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UETypesCode(UETypesCode&&); \
	NO_API UETypesCode(const UETypesCode&); \
public:


#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UETypesCode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UETypesCode(UETypesCode&&); \
	NO_API UETypesCode(const UETypesCode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UETypesCode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UETypesCode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UETypesCode)


#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_PRIVATE_PROPERTY_OFFSET
#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_18_PROLOG
#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_INCLASS \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Enums_ETypesCode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class UETypesCode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Enums_ETypesCode_h


#define FOREACH_ENUM_ETYPES(op) \
	op(ETypes::FIRE) \
	op(ETypes::WATER) \
	op(ETypes::PLANT) \
	op(ETypes::NUM_TYPES) 

enum class ETypes : uint8;
template<> A10_END_API UEnum* StaticEnum<ETypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
