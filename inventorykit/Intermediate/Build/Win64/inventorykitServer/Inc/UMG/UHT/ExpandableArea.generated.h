// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ExpandableArea.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UExpandableArea;
#ifdef UMG_ExpandableArea_generated_h
#error "ExpandableArea.generated.h already included, missing '#pragma once' in ExpandableArea.h"
#endif
#define UMG_ExpandableArea_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_19_DELEGATE \
UMG_API void FOnExpandableAreaExpansionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExpandableAreaExpansionChanged, UExpandableArea* Area, bool bIsExpanded);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetIsExpanded_Animated); \
	DECLARE_FUNCTION(execSetIsExpanded); \
	DECLARE_FUNCTION(execGetIsExpanded);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_ACCESSORS \
static void GetBorderBrush_WrapperImpl(const void* Object, void* OutValue); \
static void SetBorderBrush_WrapperImpl(void* Object, const void* InValue); \
static void GetBorderColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetBorderColor_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsExpanded_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsExpanded_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetHeaderPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetHeaderPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetAreaPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetAreaPadding_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUExpandableArea(); \
	friend struct Z_Construct_UClass_UExpandableArea_Statics; \
public: \
	DECLARE_CLASS(UExpandableArea, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UExpandableArea) \
	virtual UObject* _getUObject() const override { return const_cast<UExpandableArea*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UExpandableArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExpandableArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UExpandableArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExpandableArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExpandableArea(UExpandableArea&&); \
	UExpandableArea(const UExpandableArea&); \
public: \
	UMG_API virtual ~UExpandableArea();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsExpanded) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsExpanded) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_24_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_27_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UExpandableArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
