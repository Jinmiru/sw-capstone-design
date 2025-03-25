// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GridSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_GridSlot_generated_h
#error "GridSlot.generated.h already included, missing '#pragma once' in GridSlot.h"
#endif
#define UMG_GridSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetNudge); \
	DECLARE_FUNCTION(execSetLayer); \
	DECLARE_FUNCTION(execSetColumnSpan); \
	DECLARE_FUNCTION(execSetColumn); \
	DECLARE_FUNCTION(execSetRowSpan); \
	DECLARE_FUNCTION(execSetRow); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_ACCESSORS \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetRow_WrapperImpl(const void* Object, void* OutValue); \
static void SetRow_WrapperImpl(void* Object, const void* InValue); \
static void GetRowSpan_WrapperImpl(const void* Object, void* OutValue); \
static void SetRowSpan_WrapperImpl(void* Object, const void* InValue); \
static void GetColumn_WrapperImpl(const void* Object, void* OutValue); \
static void SetColumn_WrapperImpl(void* Object, const void* InValue); \
static void GetColumnSpan_WrapperImpl(const void* Object, void* OutValue); \
static void SetColumnSpan_WrapperImpl(void* Object, const void* InValue); \
static void GetLayer_WrapperImpl(const void* Object, void* OutValue); \
static void SetLayer_WrapperImpl(void* Object, const void* InValue); \
static void GetNudge_WrapperImpl(const void* Object, void* OutValue); \
static void SetNudge_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUGridSlot(); \
	friend struct Z_Construct_UClass_UGridSlot_Statics; \
public: \
	DECLARE_CLASS(UGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UGridSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UGridSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridSlot(UGridSlot&&); \
	UGridSlot(const UGridSlot&); \
public: \
	UMG_API virtual ~UGridSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UGridSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
