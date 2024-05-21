// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A10_END_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define A10_END_BasePlayer_generated_h

#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_RPC_WRAPPERS
#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ACommonCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ACommonCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABasePlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABasePlayer, Camera); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(ABasePlayer, PlayerController); } \
	FORCEINLINE static uint32 __PPO__FeedbackWidget() { return STRUCT_OFFSET(ABasePlayer, FeedbackWidget); } \
	FORCEINLINE static uint32 __PPO__UserWidget() { return STRUCT_OFFSET(ABasePlayer, UserWidget); }


#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_12_PROLOG
#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_INCLASS \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BasePlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Actors_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
