// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WrapBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_WrapBoxSlot_generated_h
#error "WrapBoxSlot.generated.h already included, missing '#pragma once' in WrapBoxSlot.h"
#endif
#define UMG_WrapBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetNewLine); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetFillSpanWhenLessThan); \
	DECLARE_FUNCTION(execSetFillEmptySpace); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ACCESSORS \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetFillSpanWhenLessThan_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetbFillEmptySpace_WrapperImpl(void* Object, const void* InValue); \
static void SetbForceNewLine_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWrapBoxSlot(); \
	friend struct Z_Construct_UClass_UWrapBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UWrapBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWrapBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWrapBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWrapBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWrapBoxSlot(UWrapBoxSlot&&); \
	UWrapBoxSlot(const UWrapBoxSlot&); \
public: \
	UMG_API virtual ~UWrapBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWrapBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
