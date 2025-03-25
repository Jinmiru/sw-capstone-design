// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ScrollBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_ScrollBar_generated_h
#error "ScrollBar.generated.h already included, missing '#pragma once' in ScrollBar.h"
#endif
#define UMG_ScrollBar_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetState);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ACCESSORS \
static void GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidgetStyle_WrapperImpl(void* Object, const void* InValue); \
static void GetbAlwaysShowScrollbar_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAlwaysShowScrollbar_WrapperImpl(void* Object, const void* InValue); \
static void GetbAlwaysShowScrollbarTrack_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAlwaysShowScrollbarTrack_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void GetThickness_WrapperImpl(const void* Object, void* OutValue); \
static void SetThickness_WrapperImpl(void* Object, const void* InValue); \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UScrollBar, UMG_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScrollBar(); \
	friend struct Z_Construct_UClass_UScrollBar_Statics; \
public: \
	DECLARE_CLASS(UScrollBar, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UScrollBar) \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UScrollBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UScrollBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScrollBar(UScrollBar&&); \
	UScrollBar(const UScrollBar&); \
public: \
	UMG_API virtual ~UScrollBar();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_14_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScrollBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
