// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
class AActor;
class AController;
#ifdef A10_END_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define A10_END_HealthComponent_generated_h

#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_12_DELEGATE \
struct _Script_A10_END_eventHealthDelegateChange_Parms \
{ \
	float ratio; \
}; \
static inline void FHealthDelegateChange_DelegateWrapper(const FMulticastScriptDelegate& HealthDelegateChange, float ratio) \
{ \
	_Script_A10_END_eventHealthDelegateChange_Parms Parms; \
	Parms.ratio=ratio; \
	HealthDelegateChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_11_DELEGATE \
static inline void FHealthDelegate_DelegateWrapper(const FMulticastScriptDelegate& HealthDelegate) \
{ \
	HealthDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execDoDamage);


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execDoDamage);


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(UHealthComponent, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UHealthComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__ElementType() { return STRUCT_OFFSET(UHealthComponent, ElementType); }


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_13_PROLOG
#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_INCLASS \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Components_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
