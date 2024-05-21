// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A10_END_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define A10_END_BaseEnemy_generated_h

#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndAICodeTask); \
	DECLARE_FUNCTION(execHandleAmmoChange);


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndAICodeTask); \
	DECLARE_FUNCTION(execHandleAmmoChange);


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACommonCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ACommonCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy)


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public:


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseEnemy(ABaseEnemy&&); \
	NO_API ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy)


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Message() { return STRUCT_OFFSET(ABaseEnemy, Message); } \
	FORCEINLINE static uint32 __PPO__AmmoKeyName() { return STRUCT_OFFSET(ABaseEnemy, AmmoKeyName); } \
	FORCEINLINE static uint32 __PPO__TeamID() { return STRUCT_OFFSET(ABaseEnemy, TeamID); }


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_14_PROLOG
#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_INCLASS \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BaseEnemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class ABaseEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Actors_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
