// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Overlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOverlaySlot;
class UWidget;
#ifdef UMG_Overlay_generated_h
#error "Overlay.generated.h already included, missing '#pragma once' in Overlay.h"
#endif
#define UMG_Overlay_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReplaceOverlayChildAt); \
	DECLARE_FUNCTION(execAddChildToOverlay);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOverlay(); \
	friend struct Z_Construct_UClass_UOverlay_Statics; \
public: \
	DECLARE_CLASS(UOverlay, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UOverlay)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOverlay(UOverlay&&); \
	UOverlay(const UOverlay&); \
public: \
	UMG_API virtual ~UOverlay();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
