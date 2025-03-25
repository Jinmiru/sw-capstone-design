// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WidgetSwitcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef UMG_WidgetSwitcher_generated_h
#error "WidgetSwitcher.generated.h already included, missing '#pragma once' in WidgetSwitcher.h"
#endif
#define UMG_WidgetSwitcher_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetActiveWidget); \
	DECLARE_FUNCTION(execGetWidgetAtIndex); \
	DECLARE_FUNCTION(execSetActiveWidget); \
	DECLARE_FUNCTION(execSetActiveWidgetIndex); \
	DECLARE_FUNCTION(execGetActiveWidgetIndex); \
	DECLARE_FUNCTION(execGetNumWidgets);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_ACCESSORS \
static void GetActiveWidgetIndex_WrapperImpl(const void* Object, void* OutValue); \
static void SetActiveWidgetIndex_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetSwitcher(); \
	friend struct Z_Construct_UClass_UWidgetSwitcher_Statics; \
public: \
	DECLARE_CLASS(UWidgetSwitcher, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetSwitcher)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetSwitcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetSwitcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetSwitcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidgetSwitcher(UWidgetSwitcher&&); \
	UWidgetSwitcher(const UWidgetSwitcher&); \
public: \
	UMG_API virtual ~UWidgetSwitcher();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(ActiveWidgetIndex) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(ActiveWidgetIndex) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_STANDARD_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h_18_FIELDNOTIFY \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetSwitcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WidgetSwitcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
