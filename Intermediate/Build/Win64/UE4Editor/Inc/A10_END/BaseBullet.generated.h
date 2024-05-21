// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef A10_END_BaseBullet_generated_h
#error "BaseBullet.generated.h already included, missing '#pragma once' in BaseBullet.h"
#endif
#define A10_END_BaseBullet_generated_h

#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBullet(); \
	friend struct Z_Construct_UClass_ABaseBullet_Statics; \
public: \
	DECLARE_CLASS(ABaseBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABaseBullet)


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseBullet(); \
	friend struct Z_Construct_UClass_ABaseBullet_Statics; \
public: \
	DECLARE_CLASS(ABaseBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(ABaseBullet)


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBullet(ABaseBullet&&); \
	NO_API ABaseBullet(const ABaseBullet&); \
public:


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBullet(ABaseBullet&&); \
	NO_API ABaseBullet(const ABaseBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBullet)


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ABaseBullet, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__SphereMesh() { return STRUCT_OFFSET(ABaseBullet, SphereMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABaseBullet, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__TimeToDestroy() { return STRUCT_OFFSET(ABaseBullet, TimeToDestroy); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ABaseBullet, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__ClassType() { return STRUCT_OFFSET(ABaseBullet, ClassType); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ABaseBullet, DamageType); }


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_9_PROLOG
#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_INCLASS \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Actors_BaseBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class ABaseBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Actors_BaseBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
