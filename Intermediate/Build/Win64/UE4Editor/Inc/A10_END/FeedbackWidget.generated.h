// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef A10_END_FeedbackWidget_generated_h
#error "FeedbackWidget.generated.h already included, missing '#pragma once' in FeedbackWidget.h"
#endif
#define A10_END_FeedbackWidget_generated_h

#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_SPARSE_DATA
#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEndPoint); \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execSetHealth);


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEndPoint); \
	DECLARE_FUNCTION(execSetAmmo); \
	DECLARE_FUNCTION(execSetHealth);


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFeedbackWidget(); \
	friend struct Z_Construct_UClass_UFeedbackWidget_Statics; \
public: \
	DECLARE_CLASS(UFeedbackWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UFeedbackWidget)


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFeedbackWidget(); \
	friend struct Z_Construct_UClass_UFeedbackWidget_Statics; \
public: \
	DECLARE_CLASS(UFeedbackWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/A10_END"), NO_API) \
	DECLARE_SERIALIZER(UFeedbackWidget)


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFeedbackWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFeedbackWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFeedbackWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFeedbackWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFeedbackWidget(UFeedbackWidget&&); \
	NO_API UFeedbackWidget(const UFeedbackWidget&); \
public:


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFeedbackWidget(UFeedbackWidget&&); \
	NO_API UFeedbackWidget(const UFeedbackWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFeedbackWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFeedbackWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFeedbackWidget)


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthBar() { return STRUCT_OFFSET(UFeedbackWidget, HealthBar); } \
	FORCEINLINE static uint32 __PPO__CurrentAmmo() { return STRUCT_OFFSET(UFeedbackWidget, CurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__MaximumAmmo() { return STRUCT_OFFSET(UFeedbackWidget, MaximumAmmo); } \
	FORCEINLINE static uint32 __PPO__ReticleMaterial() { return STRUCT_OFFSET(UFeedbackWidget, ReticleMaterial); } \
	FORCEINLINE static uint32 __PPO__EndPoint() { return STRUCT_OFFSET(UFeedbackWidget, EndPoint); } \
	FORCEINLINE static uint32 __PPO__ColorName() { return STRUCT_OFFSET(UFeedbackWidget, ColorName); } \
	FORCEINLINE static uint32 __PPO__SafeColor() { return STRUCT_OFFSET(UFeedbackWidget, SafeColor); } \
	FORCEINLINE static uint32 __PPO__EnemyColor() { return STRUCT_OFFSET(UFeedbackWidget, EnemyColor); }


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_17_PROLOG
#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_RPC_WRAPPERS \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_INCLASS \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_SPARSE_DATA \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_INCLASS_NO_PURE_DECLS \
	A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> A10_END_API UClass* StaticClass<class UFeedbackWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID A10_END_Source_A10_END_Public_Widgets_FeedbackWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
