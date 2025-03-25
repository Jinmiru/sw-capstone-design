// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BackgroundBlur.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
struct FSlateBrush;
#ifdef UMG_BackgroundBlur_generated_h
#error "BackgroundBlur.generated.h already included, missing '#pragma once' in BackgroundBlur.h"
#endif
#define UMG_BackgroundBlur_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLowQualityFallbackBrush); \
	DECLARE_FUNCTION(execSetCornerRadius); \
	DECLARE_FUNCTION(execSetBlurStrength); \
	DECLARE_FUNCTION(execSetBlurRadius); \
	DECLARE_FUNCTION(execSetApplyAlphaToBlur); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ACCESSORS \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetbApplyAlphaToBlur_WrapperImpl(const void* Object, void* OutValue); \
static void SetbApplyAlphaToBlur_WrapperImpl(void* Object, const void* InValue); \
static void GetBlurStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetBlurStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetbOverrideAutoRadiusCalculation_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOverrideAutoRadiusCalculation_WrapperImpl(void* Object, const void* InValue); \
static void GetBlurRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetBlurRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetCornerRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetCornerRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetLowQualityFallbackBrush_WrapperImpl(const void* Object, void* OutValue); \
static void SetLowQualityFallbackBrush_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlur, UMG_API)


#define FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBackgroundBlur(); \
	friend struct Z_Construct_UClass_UBackgroundBlur_Statics; \
public: \
	DECLARE_CLASS(UBackgroundBlur, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UBackgroundBlur) \
	FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UBackgroundBlur(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlur) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UBackgroundBlur); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlur); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBackgroundBlur(UBackgroundBlur&&); \
	UBackgroundBlur(const UBackgroundBlur&); \
public: \
	UMG_API virtual ~UBackgroundBlur();


#define FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBackgroundBlur>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
