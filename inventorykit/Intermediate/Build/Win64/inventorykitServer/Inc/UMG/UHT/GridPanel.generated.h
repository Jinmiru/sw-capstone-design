// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GridPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridSlot;
class UWidget;
#ifdef UMG_GridPanel_generated_h
#error "GridPanel.generated.h already included, missing '#pragma once' in GridPanel.h"
#endif
#define UMG_GridPanel_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetRowFill); \
	DECLARE_FUNCTION(execSetColumnFill); \
	DECLARE_FUNCTION(execAddChildToGrid);


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGridPanel(); \
	friend struct Z_Construct_UClass_UGridPanel_Statics; \
public: \
	DECLARE_CLASS(UGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UGridPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UGridPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridPanel(UGridPanel&&); \
	UGridPanel(const UGridPanel&); \
public: \
	UMG_API virtual ~UGridPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UGridPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
