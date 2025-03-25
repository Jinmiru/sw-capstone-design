// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationControllerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONCONTROLLER_AutomationControllerSettings_generated_h
#error "AutomationControllerSettings.generated.h already included, missing '#pragma once' in AutomationControllerSettings.h"
#endif
#define AUTOMATIONCONTROLLER_AutomationControllerSettings_generated_h

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomatedTestFilterBase>();

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct(); \
	typedef FAutomatedTestFilterBase Super;


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomatedTestFilter>();

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomatedTestGroup>();

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_140_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationControllerSettings(); \
	friend struct Z_Construct_UClass_UAutomationControllerSettings_Statics; \
public: \
	DECLARE_CLASS(UAutomationControllerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationController"), NO_API) \
	DECLARE_SERIALIZER(UAutomationControllerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_140_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationControllerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationControllerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutomationControllerSettings(UAutomationControllerSettings&&); \
	UAutomationControllerSettings(const UAutomationControllerSettings&); \
public: \
	NO_API virtual ~UAutomationControllerSettings();


#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_137_PROLOG
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_140_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_140_INCLASS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_140_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONCONTROLLER_API UClass* StaticClass<class UAutomationControllerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
