// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WrapBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UWrapBoxSlot;
#ifdef UMG_WrapBox_generated_h
#error "WrapBox.generated.h already included, missing '#pragma once' in WrapBox.h"
#endif
#define UMG_WrapBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddChildToWrapBox); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetInnerSlotPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_ACCESSORS \
static void GetInnerSlotPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetInnerSlotPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetWrapSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetWrapSize_WrapperImpl(void* Object, const void* InValue); \
static void GetbExplicitWrapSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetbExplicitWrapSize_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientation_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUWrapBox(); \
	friend struct Z_Construct_UClass_UWrapBox_Statics; \
public: \
	DECLARE_CLASS(UWrapBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWrapBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWrapBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWrapBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWrapBox(UWrapBox&&); \
	UWrapBox(const UWrapBox&); \
public: \
	UMG_API virtual ~UWrapBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_21_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWrapBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
