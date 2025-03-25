// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PanelSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_PanelSlot_generated_h
#error "PanelSlot.generated.h already included, missing '#pragma once' in PanelSlot.h"
#endif
#define UMG_PanelSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPanelSlot(); \
	friend struct Z_Construct_UClass_UPanelSlot_Statics; \
public: \
	DECLARE_CLASS(UPanelSlot, UVisual, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UPanelSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UPanelSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanelSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UPanelSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanelSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPanelSlot(UPanelSlot&&); \
	UPanelSlot(const UPanelSlot&); \
public: \
	UMG_API virtual ~UPanelSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_11_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_14_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UPanelSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
