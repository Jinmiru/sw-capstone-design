// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SizeBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_SizeBoxSlot_generated_h
#error "SizeBoxSlot.generated.h already included, missing '#pragma once' in SizeBoxSlot.h"
#endif
#define UMG_SizeBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSizeBoxSlot(); \
	friend struct Z_Construct_UClass_USizeBoxSlot_Statics; \
public: \
	DECLARE_CLASS(USizeBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(USizeBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USizeBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USizeBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USizeBoxSlot(USizeBoxSlot&&); \
	USizeBoxSlot(const USizeBoxSlot&); \
public: \
	UMG_API virtual ~USizeBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USizeBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SizeBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
