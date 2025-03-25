// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CanvasPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasPanelSlot;
class UWidget;
#ifdef UMG_CanvasPanel_generated_h
#error "CanvasPanel.generated.h already included, missing '#pragma once' in CanvasPanel.h"
#endif
#define UMG_CanvasPanel_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddChildToCanvas);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasPanel(); \
	friend struct Z_Construct_UClass_UCanvasPanel_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UCanvasPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UCanvasPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UCanvasPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCanvasPanel(UCanvasPanel&&); \
	UCanvasPanel(const UCanvasPanel&); \
public: \
	UMG_API virtual ~UCanvasPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_24_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCanvasPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
