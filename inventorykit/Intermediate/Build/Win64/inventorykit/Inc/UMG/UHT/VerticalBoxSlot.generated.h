// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VerticalBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
struct FSlateChildSize;
#ifdef UMG_VerticalBoxSlot_generated_h
#error "VerticalBoxSlot.generated.h already included, missing '#pragma once' in VerticalBoxSlot.h"
#endif
#define UMG_VerticalBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_ACCESSORS \
static void SetSize_WrapperImpl(void* Object, const void* InValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVerticalBoxSlot(); \
	friend struct Z_Construct_UClass_UVerticalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UVerticalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UVerticalBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UVerticalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UVerticalBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVerticalBoxSlot(UVerticalBoxSlot&&); \
	UVerticalBoxSlot(const UVerticalBoxSlot&); \
public: \
	UMG_API virtual ~UVerticalBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UVerticalBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
