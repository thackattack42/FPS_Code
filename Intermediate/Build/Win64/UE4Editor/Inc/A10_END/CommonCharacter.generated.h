// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A10_END_CommonCharacter_generated_h
#error "CommonCharacter.generated.h already included, missing '#pragma once' in CommonCharacter.h"
#endif
#define A10_END_CommonCharacter_generated_h

#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleDeath);


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleDeath);


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACommonCharacter(); \
	friend struct Z_Construct_UClass_ACommonCharacter_Statics; \
public: \
	DECLARE_CLASS(ACommonCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ACommonCharacter)


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACommonCharacter(); \
	friend struct Z_Construct_UClass_ACommonCharacter_Statics; \
public: \
	DECLARE_CLASS(ACommonCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ACommonCharacter)


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACommonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACommonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACommonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACommonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACommonCharacter(ACommonCharacter&&); \
	NO_API ACommonCharacter(const ACommonCharacter&); \
public:


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACommonCharacter(ACommonCharacter&&); \
	NO_API ACommonCharacter(const ACommonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACommonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACommonCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACommonCharacter)


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(ACommonCharacter, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__Weapon() { return STRUCT_OFFSET(ACommonCharacter, Weapon); } \
	FORCEINLINE static uint32 __PPO__SocketName() { return STRUCT_OFFSET(ACommonCharacter, SocketName); }


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_9_PROLOG
#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_INCLASS \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_CommonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class ACommonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Actors_CommonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
