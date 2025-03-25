// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UniformGridSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_UniformGridSlot_generated_h
#error "UniformGridSlot.generated.h already included, missing '#pragma once' in UniformGridSlot.h"
#endif
#define UMG_UniformGridSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetColumn); \
	DECLARE_FUNCTION(execSetRow);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ACCESSORS \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetRow_WrapperImpl(void* Object, const void* InValue); \
static void SetColumn_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUniformGridSlot(); \
	friend struct Z_Construct_UClass_UUniformGridSlot_Statics; \
public: \
	DECLARE_CLASS(UUniformGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UUniformGridSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUniformGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUniformGridSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUniformGridSlot(UUniformGridSlot&&); \
	UUniformGridSlot(const UUniformGridSlot&); \
public: \
	UMG_API virtual ~UUniformGridSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUniformGridSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
