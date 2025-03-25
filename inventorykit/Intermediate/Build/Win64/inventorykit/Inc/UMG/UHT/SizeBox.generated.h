// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SizeBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SizeBox_generated_h
#error "SizeBox.generated.h already included, missing '#pragma once' in SizeBox.h"
#endif
#define UMG_SizeBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execClearMaxAspectRatio); \
	DECLARE_FUNCTION(execSetMaxAspectRatio); \
	DECLARE_FUNCTION(execClearMinAspectRatio); \
	DECLARE_FUNCTION(execSetMinAspectRatio); \
	DECLARE_FUNCTION(execClearMaxDesiredHeight); \
	DECLARE_FUNCTION(execSetMaxDesiredHeight); \
	DECLARE_FUNCTION(execClearMaxDesiredWidth); \
	DECLARE_FUNCTION(execSetMaxDesiredWidth); \
	DECLARE_FUNCTION(execClearMinDesiredHeight); \
	DECLARE_FUNCTION(execSetMinDesiredHeight); \
	DECLARE_FUNCTION(execClearMinDesiredWidth); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execClearHeightOverride); \
	DECLARE_FUNCTION(execSetHeightOverride); \
	DECLARE_FUNCTION(execClearWidthOverride); \
	DECLARE_FUNCTION(execSetWidthOverride);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_ACCESSORS \
static void GetWidthOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetWidthOverride_WrapperImpl(void* Object, const void* InValue); \
static void GetHeightOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetHeightOverride_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxDesiredHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxDesiredHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetMinAspectRatio_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinAspectRatio_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxAspectRatio_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxAspectRatio_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSizeBox(); \
	friend struct Z_Construct_UClass_USizeBox_Statics; \
public: \
	DECLARE_CLASS(USizeBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(USizeBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USizeBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USizeBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USizeBox(USizeBox&&); \
	USizeBox(const USizeBox&); \
public: \
	UMG_API virtual ~USizeBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USizeBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
