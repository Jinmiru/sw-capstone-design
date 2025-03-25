// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TextWidgetTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_TextWidgetTypes_generated_h
#error "TextWidgetTypes.generated.h already included, missing '#pragma once' in TextWidgetTypes.h"
#endif
#define UMG_TextWidgetTypes_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShapedTextOptions_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FShapedTextOptions>();

#define FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetJustification);


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_ACCESSORS \
static void SetShapedTextOptions_WrapperImpl(void* Object, const void* InValue); \
static void SetJustification_WrapperImpl(void* Object, const void* InValue); \
static void SetWrappingPolicy_WrapperImpl(void* Object, const void* InValue); \
static void SetAutoWrapText_WrapperImpl(void* Object, const void* InValue); \
static void SetWrapTextAt_WrapperImpl(void* Object, const void* InValue); \
static void SetMargin_WrapperImpl(void* Object, const void* InValue); \
static void SetLineHeightPercentage_WrapperImpl(void* Object, const void* InValue); \
static void SetApplyLineHeightToBottomLine_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUTextLayoutWidget(); \
	friend struct Z_Construct_UClass_UTextLayoutWidget_Statics; \
public: \
	DECLARE_CLASS(UTextLayoutWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UTextLayoutWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UTextLayoutWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextLayoutWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UTextLayoutWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextLayoutWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextLayoutWidget(UTextLayoutWidget&&); \
	UTextLayoutWidget(const UTextLayoutWidget&); \
public: \
	UMG_API virtual ~UTextLayoutWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_69_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTextLayoutWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
