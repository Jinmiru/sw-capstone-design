// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ButtonSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_ButtonSlot_generated_h
#error "ButtonSlot.generated.h already included, missing '#pragma once' in ButtonSlot.h"
#endif
#define UMG_ButtonSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_ACCESSORS \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUButtonSlot(); \
	friend struct Z_Construct_UClass_UButtonSlot_Statics; \
public: \
	DECLARE_CLASS(UButtonSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UButtonSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UButtonSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UButtonSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UButtonSlot(UButtonSlot&&); \
	UButtonSlot(const UButtonSlot&); \
public: \
	UMG_API virtual ~UButtonSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UButtonSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ButtonSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
