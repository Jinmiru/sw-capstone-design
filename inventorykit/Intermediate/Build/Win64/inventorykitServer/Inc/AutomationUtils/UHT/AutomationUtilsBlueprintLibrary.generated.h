// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationUtilsBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONUTILS_AutomationUtilsBlueprintLibrary_generated_h
#error "AutomationUtilsBlueprintLibrary.generated.h already included, missing '#pragma once' in AutomationUtilsBlueprintLibrary.h"
#endif
#define AUTOMATIONUTILS_AutomationUtilsBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTakeGameplayAutomationScreenshot);


#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationUtilsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutomationUtilsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomationUtils"), NO_API) \
	DECLARE_SERIALIZER(UAutomationUtilsBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationUtilsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationUtilsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationUtilsBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationUtilsBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutomationUtilsBlueprintLibrary(UAutomationUtilsBlueprintLibrary&&); \
	UAutomationUtilsBlueprintLibrary(const UAutomationUtilsBlueprintLibrary&); \
public: \
	NO_API virtual ~UAutomationUtilsBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONUTILS_API UClass* StaticClass<class UAutomationUtilsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtils_Public_AutomationUtilsBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
