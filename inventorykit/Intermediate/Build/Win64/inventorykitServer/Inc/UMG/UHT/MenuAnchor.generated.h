// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MenuAnchor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef UMG_MenuAnchor_generated_h
#error "MenuAnchor.generated.h already included, missing '#pragma once' in MenuAnchor.h"
#endif
#define UMG_MenuAnchor_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_14_DELEGATE \
UMG_API void FOnMenuOpenChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMenuOpenChangedEvent, bool bIsOpen);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_29_DELEGATE \
static UMG_API UUserWidget* FGetUserWidget_DelegateWrapper(const FScriptDelegate& GetUserWidget);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHasOpenSubMenus); \
	DECLARE_FUNCTION(execGetMenuPosition); \
	DECLARE_FUNCTION(execShouldOpenDueToClick); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execToggleOpen); \
	DECLARE_FUNCTION(execFitInWindow); \
	DECLARE_FUNCTION(execSetPlacement);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_ACCESSORS \
static void GetPlacement_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlacement_WrapperImpl(void* Object, const void* InValue); \
static void GetbFitInWindow_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFitInWindow_WrapperImpl(void* Object, const void* InValue); \
static void GetShouldDeferPaintingAfterWindowContent_WrapperImpl(const void* Object, void* OutValue); \
static void GetUseApplicationMenuStack_WrapperImpl(const void* Object, void* OutValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMenuAnchor(); \
	friend struct Z_Construct_UClass_UMenuAnchor_Statics; \
public: \
	DECLARE_CLASS(UMenuAnchor, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UMenuAnchor)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UMenuAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuAnchor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMenuAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuAnchor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMenuAnchor(UMenuAnchor&&); \
	UMenuAnchor(const UMenuAnchor&); \
public: \
	UMG_API virtual ~UMenuAnchor();


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_22_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMenuAnchor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
