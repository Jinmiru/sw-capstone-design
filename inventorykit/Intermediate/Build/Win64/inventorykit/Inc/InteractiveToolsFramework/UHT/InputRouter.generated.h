// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputRouter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InputRouter_generated_h
#error "InputRouter.generated.h already included, missing '#pragma once' in InputRouter.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputRouter_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputRouter(); \
	friend struct Z_Construct_UClass_UInputRouter_Statics; \
public: \
	DECLARE_CLASS(UInputRouter, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UInputRouter)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputRouter(UInputRouter&&); \
	UInputRouter(const UInputRouter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInputRouter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputRouter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputRouter) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInputRouter();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_37_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInputRouter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
