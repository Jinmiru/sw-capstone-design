// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBehaviors/MouseWheelBehavior.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_MouseWheelBehavior_generated_h
#error "MouseWheelBehavior.generated.h already included, missing '#pragma once' in MouseWheelBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_MouseWheelBehavior_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMouseWheelInputBehavior(); \
	friend struct Z_Construct_UClass_UMouseWheelInputBehavior_Statics; \
public: \
	DECLARE_CLASS(UMouseWheelInputBehavior, UAnyButtonInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UMouseWheelInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMouseWheelInputBehavior(UMouseWheelInputBehavior&&); \
	UMouseWheelInputBehavior(const UMouseWheelInputBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UMouseWheelInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseWheelInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMouseWheelInputBehavior) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UMouseWheelInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_19_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UMouseWheelInputBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_MouseWheelBehavior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
