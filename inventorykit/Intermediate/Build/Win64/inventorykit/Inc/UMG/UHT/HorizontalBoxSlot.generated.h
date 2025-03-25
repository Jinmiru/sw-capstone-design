// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HorizontalBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
struct FSlateChildSize;
#ifdef UMG_HorizontalBoxSlot_generated_h
#error "HorizontalBoxSlot.generated.h already included, missing '#pragma once' in HorizontalBoxSlot.h"
#endif
#define UMG_HorizontalBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ACCESSORS \
static void SetSize_WrapperImpl(void* Object, const void* InValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUHorizontalBoxSlot(); \
	friend struct Z_Construct_UClass_UHorizontalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UHorizontalBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UHorizontalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UHorizontalBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHorizontalBoxSlot(UHorizontalBoxSlot&&); \
	UHorizontalBoxSlot(const UHorizontalBoxSlot&); \
public: \
	UMG_API virtual ~UHorizontalBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UHorizontalBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
