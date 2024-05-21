// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef A10_END_AnimationEventGraph_generated_h
#error "AnimationEventGraph.generated.h already included, missing '#pragma once' in AnimationEventGraph.h"
#endif
#define A10_END_AnimationEventGraph_generated_h

#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_12_DELEGATE \
static inline void FAnimDelegate_DelegateWrapper(const FMulticastScriptDelegate& AnimDelegate) \
{ \
	AnimDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_SPARSE_DATA
#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_RPC_WRAPPERS \
	virtual void PersonaUpdate_Implementation(); \
 \
	DECLARE_FUNCTION(execPersonaUpdate); \
	DECLARE_FUNCTION(execReloadAnimation); \
	DECLARE_FUNCTION(execDeadAnimation); \
	DECLARE_FUNCTION(execHitAnimation); \
	DECLARE_FUNCTION(execFireAnimation);


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPersonaUpdate); \
	DECLARE_FUNCTION(execReloadAnimation); \
	DECLARE_FUNCTION(execDeadAnimation); \
	DECLARE_FUNCTION(execHitAnimation); \
	DECLARE_FUNCTION(execFireAnimation);


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_EVENT_PARMS
#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_CALLBACK_WRAPPERS
#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationEventGraph(); \
	friend struct Z_Construct_UClass_UAnimationEventGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationEventGraph, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UAnimationEventGraph)


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationEventGraph(); \
	friend struct Z_Construct_UClass_UAnimationEventGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationEventGraph, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UAnimationEventGraph)


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationEventGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationEventGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationEventGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationEventGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationEventGraph(UAnimationEventGraph&&); \
	NO_API UAnimationEventGraph(const UAnimationEventGraph&); \
public:


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationEventGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationEventGraph(UAnimationEventGraph&&); \
	NO_API UAnimationEventGraph(const UAnimationEventGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationEventGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationEventGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationEventGraph)


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UAnimationEventGraph, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UAnimationEventGraph, Direction); } \
	FORCEINLINE static uint32 __PPO__DebugFire() { return STRUCT_OFFSET(UAnimationEventGraph, DebugFire); } \
	FORCEINLINE static uint32 __PPO__ActionSlotName() { return STRUCT_OFFSET(UAnimationEventGraph, ActionSlotName); } \
	FORCEINLINE static uint32 __PPO__DamageSlotName() { return STRUCT_OFFSET(UAnimationEventGraph, DamageSlotName); } \
	FORCEINLINE static uint32 __PPO__FireAsset() { return STRUCT_OFFSET(UAnimationEventGraph, FireAsset); } \
	FORCEINLINE static uint32 __PPO__HitAsset() { return STRUCT_OFFSET(UAnimationEventGraph, HitAsset); } \
	FORCEINLINE static uint32 __PPO__CurrentDeadAsset() { return STRUCT_OFFSET(UAnimationEventGraph, CurrentDeadAsset); } \
	FORCEINLINE static uint32 __PPO__ReloadAsset() { return STRUCT_OFFSET(UAnimationEventGraph, ReloadAsset); } \
	FORCEINLINE static uint32 __PPO__DeathAssets() { return STRUCT_OFFSET(UAnimationEventGraph, DeathAssets); }


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_13_PROLOG \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_EVENT_PARMS


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_SPARSE_DATA \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_CALLBACK_WRAPPERS \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_INCLASS \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_SPARSE_DATA \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_CALLBACK_WRAPPERS \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_AnimationEventGraph_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class UAnimationEventGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_AnimationEventGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
