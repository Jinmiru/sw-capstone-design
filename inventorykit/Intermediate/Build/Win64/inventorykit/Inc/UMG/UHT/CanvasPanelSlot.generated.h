// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CanvasPanelSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnchorData;
struct FAnchors;
struct FMargin;
#ifdef UMG_CanvasPanelSlot_generated_h
#error "CanvasPanelSlot.generated.h already included, missing '#pragma once' in CanvasPanelSlot.h"
#endif
#define UMG_CanvasPanelSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnchorData_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FAnchorData>();

#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMaximum); \
	DECLARE_FUNCTION(execSetMinimum); \
	DECLARE_FUNCTION(execGetZOrder); \
	DECLARE_FUNCTION(execSetZOrder); \
	DECLARE_FUNCTION(execGetAutoSize); \
	DECLARE_FUNCTION(execSetAutoSize); \
	DECLARE_FUNCTION(execGetAlignment); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execGetAnchors); \
	DECLARE_FUNCTION(execSetAnchors); \
	DECLARE_FUNCTION(execGetOffsets); \
	DECLARE_FUNCTION(execSetOffsets); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetLayout); \
	DECLARE_FUNCTION(execSetLayout);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_ACCESSORS \
static void GetLayoutData_WrapperImpl(const void* Object, void* OutValue); \
static void SetLayoutData_WrapperImpl(void* Object, const void* InValue); \
static void GetbAutoSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAutoSize_WrapperImpl(void* Object, const void* InValue); \
static void GetZOrder_WrapperImpl(const void* Object, void* OutValue); \
static void SetZOrder_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasPanelSlot(); \
	friend struct Z_Construct_UClass_UCanvasPanelSlot_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanelSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UCanvasPanelSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UCanvasPanelSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanelSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UCanvasPanelSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanelSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCanvasPanelSlot(UCanvasPanelSlot&&); \
	UCanvasPanelSlot(const UCanvasPanelSlot&); \
public: \
	UMG_API virtual ~UCanvasPanelSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_65_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCanvasPanelSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
