// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ScrollBoxSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_ScrollBoxSlot_generated_h
#error "ScrollBoxSlot.generated.h already included, missing '#pragma once' in ScrollBoxSlot.h"
#endif
#define UMG_ScrollBoxSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_ACCESSORS \
static void GetSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetSize_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUScrollBoxSlot(); \
	friend struct Z_Construct_UClass_UScrollBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UScrollBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UScrollBoxSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UScrollBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UScrollBoxSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScrollBoxSlot(UScrollBoxSlot&&); \
	UScrollBoxSlot(const UScrollBoxSlot&); \
public: \
	UMG_API virtual ~UScrollBoxSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScrollBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
