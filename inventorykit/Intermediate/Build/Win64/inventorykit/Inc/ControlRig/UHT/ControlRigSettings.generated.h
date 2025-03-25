// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ControlRigSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigSettings_generated_h
#error "ControlRigSettings.generated.h already included, missing '#pragma once' in ControlRigSettings.h"
#endif
#define CONTROLRIG_ControlRigSettings_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigSettingsPerPinBool_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigSettingsPerPinBool>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigSettings(); \
	friend struct Z_Construct_UClass_UControlRigSettings_Statics; \
public: \
	DECLARE_CLASS(UControlRigSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigSettings(UControlRigSettings&&); \
	UControlRigSettings(const UControlRigSettings&); \
public: \
	NO_API virtual ~UControlRigSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_34_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_37_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigEditorSettings(); \
	friend struct Z_Construct_UClass_UControlRigEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UControlRigEditorSettings, URigVMEditorSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigEditorSettings)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigEditorSettings(UControlRigEditorSettings&&); \
	UControlRigEditorSettings(const UControlRigEditorSettings&); \
public: \
	NO_API virtual ~UControlRigEditorSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_55_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_58_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Settings_ControlRigSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
