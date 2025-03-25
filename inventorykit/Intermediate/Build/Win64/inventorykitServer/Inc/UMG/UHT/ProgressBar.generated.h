// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ProgressBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UMG_ProgressBar_generated_h
#error "ProgressBar.generated.h already included, missing '#pragma once' in ProgressBar.h"
#endif
#define UMG_ProgressBar_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetFillColorAndOpacity); \
	DECLARE_FUNCTION(execSetIsMarquee); \
	DECLARE_FUNCTION(execSetPercent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_ACCESSORS \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetPercent_WrapperImpl(const void* Object, void* OutValue); \
static void SetPercent_WrapperImpl(void* Object, const void* InValue); \
static void GetBarFillType_WrapperImpl(const void* Object, void* OutValue); \
static void SetBarFillType_WrapperImpl(void* Object, const void* InValue); \
static void GetBarFillStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetBarFillStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsMarquee_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsMarquee_WrapperImpl(void* Object, const void* InValue); \
static void GetBorderPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetBorderPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetFillColorAndOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetFillColorAndOpacity_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUProgressBar(); \
	friend struct Z_Construct_UClass_UProgressBar_Statics; \
public: \
	DECLARE_CLASS(UProgressBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UProgressBar)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProgressBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UProgressBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProgressBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProgressBar(UProgressBar&&); \
	UProgressBar(const UProgressBar&); \
public: \
	UMG_API virtual ~UProgressBar();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Percent) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsMarquee) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(FillColorAndOpacity) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(Percent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsMarquee) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(FillColorAndOpacity) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_23_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UProgressBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
