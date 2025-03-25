// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TextBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
enum class ETextOverflowPolicy : uint8;
enum class ETextTransformPolicy : uint8;
struct FLinearColor;
struct FSlateBrush;
struct FSlateColor;
struct FSlateFontInfo;
#ifdef UMG_TextBlock_generated_h
#error "TextBlock.generated.h already included, missing '#pragma once' in TextBlock.h"
#endif
#define UMG_TextBlock_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDynamicOutlineMaterial); \
	DECLARE_FUNCTION(execGetDynamicFontMaterial); \
	DECLARE_FUNCTION(execSetFontOutlineMaterial); \
	DECLARE_FUNCTION(execSetFontMaterial); \
	DECLARE_FUNCTION(execSetTextOverflowPolicy); \
	DECLARE_FUNCTION(execSetTextTransformPolicy); \
	DECLARE_FUNCTION(execSetAutoWrapText); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execSetStrikeBrush); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_ACCESSORS \
static void GetText_WrapperImpl(const void* Object, void* OutValue); \
static void SetText_WrapperImpl(void* Object, const void* InValue); \
static void GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetFont_WrapperImpl(const void* Object, void* OutValue); \
static void SetFont_WrapperImpl(void* Object, const void* InValue); \
static void GetStrikeBrush_WrapperImpl(const void* Object, void* OutValue); \
static void SetStrikeBrush_WrapperImpl(void* Object, const void* InValue); \
static void GetShadowOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetShadowOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetShadowColorAndOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetShadowColorAndOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetTextTransformPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextTransformPolicy_WrapperImpl(void* Object, const void* InValue); \
static void GetTextOverflowPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextOverflowPolicy_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTextBlock(); \
	friend struct Z_Construct_UClass_UTextBlock_Statics; \
public: \
	DECLARE_CLASS(UTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UTextBlock)


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextBlock(UTextBlock&&); \
	UTextBlock(const UTextBlock&); \
public: \
	UMG_API virtual ~UTextBlock();


#define FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_22_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_TextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
