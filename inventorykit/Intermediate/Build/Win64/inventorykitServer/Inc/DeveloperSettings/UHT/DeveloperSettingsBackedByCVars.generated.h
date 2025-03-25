// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DeveloperSettingsBackedByCVars.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVELOPERSETTINGS_DeveloperSettingsBackedByCVars_generated_h
#error "DeveloperSettingsBackedByCVars.generated.h already included, missing '#pragma once' in DeveloperSettingsBackedByCVars.h"
#endif
#define DEVELOPERSETTINGS_DeveloperSettingsBackedByCVars_generated_h

#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeveloperSettingsBackedByCVars(); \
	friend struct Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics; \
public: \
	DECLARE_CLASS(UDeveloperSettingsBackedByCVars, UDeveloperSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeveloperSettings"), DEVELOPERSETTINGS_API) \
	DECLARE_SERIALIZER(UDeveloperSettingsBackedByCVars)


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeveloperSettingsBackedByCVars(UDeveloperSettingsBackedByCVars&&); \
	UDeveloperSettingsBackedByCVars(const UDeveloperSettingsBackedByCVars&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEVELOPERSETTINGS_API, UDeveloperSettingsBackedByCVars); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeveloperSettingsBackedByCVars); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeveloperSettingsBackedByCVars) \
	DEVELOPERSETTINGS_API virtual ~UDeveloperSettingsBackedByCVars();


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_19_PROLOG
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVELOPERSETTINGS_API UClass* StaticClass<class UDeveloperSettingsBackedByCVars>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
