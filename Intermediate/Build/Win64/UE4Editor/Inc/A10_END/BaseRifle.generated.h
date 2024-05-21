// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class ETypes : uint8;
#ifdef A10_END_BaseRifle_generated_h
#error "BaseRifle.generated.h already included, missing '#pragma once' in BaseRifle.h"
#endif
#define A10_END_BaseRifle_generated_h

#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_11_DELEGATE \
struct _Script_A10_END_eventAmmoDelegate_Parms \
{ \
	float CurrentAmmo; \
	float MaxAmmo; \
}; \
static inline void FAmmoDelegate_DelegateWrapper(const FMulticastScriptDelegate& AmmoDelegate, float CurrentAmmo, float MaxAmmo) \
{ \
	_Script_A10_END_eventAmmoDelegate_Parms Parms; \
	Parms.CurrentAmmo=CurrentAmmo; \
	Parms.MaxAmmo=MaxAmmo; \
	AmmoDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_10_DELEGATE \
static inline void FRifleDelegate_DelegateWrapper(const FMulticastScriptDelegate& RifleDelegate) \
{ \
	RifleDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStartLocation); \
	DECLARE_FUNCTION(execSetElement); \
	DECLARE_FUNCTION(execUseAmmo); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execRequestReload); \
	DECLARE_FUNCTION(execOwnerDead); \
	DECLARE_FUNCTION(execResetFire); \
	DECLARE_FUNCTION(execStopProcess); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execFireWeapon);


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStartLocation); \
	DECLARE_FUNCTION(execSetElement); \
	DECLARE_FUNCTION(execUseAmmo); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execRequestReload); \
	DECLARE_FUNCTION(execOwnerDead); \
	DECLARE_FUNCTION(execResetFire); \
	DECLARE_FUNCTION(execStopProcess); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execFireWeapon);


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseRifle(); \
	friend struct Z_Construct_UClass_ABaseRifle_Statics; \
public: \
	DECLARE_CLASS(ABaseRifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABaseRifle)


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseRifle(); \
	friend struct Z_Construct_UClass_ABaseRifle_Statics; \
public: \
	DECLARE_CLASS(ABaseRifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABaseRifle)


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseRifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRifle(ABaseRifle&&); \
	NO_API ABaseRifle(const ABaseRifle&); \
public:


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRifle(ABaseRifle&&); \
	NO_API ABaseRifle(const ABaseRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseRifle)


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ABaseRifle, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__ParentPawn() { return STRUCT_OFFSET(ABaseRifle, ParentPawn); } \
	FORCEINLINE static uint32 __PPO__SocketName() { return STRUCT_OFFSET(ABaseRifle, SocketName); } \
	FORCEINLINE static uint32 __PPO__BulletClass() { return STRUCT_OFFSET(ABaseRifle, BulletClass); } \
	FORCEINLINE static uint32 __PPO__InProcess() { return STRUCT_OFFSET(ABaseRifle, InProcess); } \
	FORCEINLINE static uint32 __PPO__Dead() { return STRUCT_OFFSET(ABaseRifle, Dead); } \
	FORCEINLINE static uint32 __PPO__Cooldown() { return STRUCT_OFFSET(ABaseRifle, Cooldown); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(ABaseRifle, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__MaxAmmo() { return STRUCT_OFFSET(ABaseRifle, MaxAmmo); } \
	FORCEINLINE static uint32 __PPO__BulletTypes() { return STRUCT_OFFSET(ABaseRifle, BulletTypes); }


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_12_PROLOG
#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_INCLASS \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BaseRifle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class ABaseRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Actors_BaseRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
