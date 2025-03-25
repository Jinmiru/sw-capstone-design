// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBehaviors/SingleClickOrDragBehavior.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_SingleClickOrDragBehavior_generated_h
#error "SingleClickOrDragBehavior.generated.h already included, missing '#pragma once' in SingleClickOrDragBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SingleClickOrDragBehavior_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleClickOrDragInputBehavior(); \
	friend struct Z_Construct_UClass_USingleClickOrDragInputBehavior_Statics; \
public: \
	DECLARE_CLASS(USingleClickOrDragInputBehavior, UAnyButtonInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(USingleClickOrDragInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USingleClickOrDragInputBehavior(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USingleClickOrDragInputBehavior(USingleClickOrDragInputBehavior&&); \
	USingleClickOrDragInputBehavior(const USingleClickOrDragInputBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USingleClickOrDragInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleClickOrDragInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USingleClickOrDragInputBehavior) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USingleClickOrDragInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_40_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class USingleClickOrDragInputBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_SingleClickOrDragBehavior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
