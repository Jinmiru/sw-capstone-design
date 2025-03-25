// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMSettings_generated_h
#error "RigVMSettings.generated.h already included, missing '#pragma once' in RigVMSettings.h"
#endif
#define RIGVM_RigVMSettings_generated_h

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURigVMEditorSettings(); \
	friend struct Z_Construct_UClass_URigVMEditorSettings_Statics; \
public: \
	DECLARE_CLASS(URigVMEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URigVMEditorSettings(URigVMEditorSettings&&); \
	URigVMEditorSettings(const URigVMEditorSettings&); \
public: \
	NO_API virtual ~URigVMEditorSettings();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
