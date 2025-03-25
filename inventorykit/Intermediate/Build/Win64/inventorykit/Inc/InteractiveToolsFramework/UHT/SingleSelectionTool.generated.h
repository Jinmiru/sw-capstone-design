// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SingleSelectionTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_SingleSelectionTool_generated_h
#error "SingleSelectionTool.generated.h already included, missing '#pragma once' in SingleSelectionTool.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SingleSelectionTool_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleSelectionTool(); \
	friend struct Z_Construct_UClass_USingleSelectionTool_Statics; \
public: \
	DECLARE_CLASS(USingleSelectionTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(USingleSelectionTool) \
	virtual UObject* _getUObject() const override { return const_cast<USingleSelectionTool*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USingleSelectionTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USingleSelectionTool(USingleSelectionTool&&); \
	USingleSelectionTool(const USingleSelectionTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USingleSelectionTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleSelectionTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USingleSelectionTool) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USingleSelectionTool();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_12_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class USingleSelectionTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
