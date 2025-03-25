// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneralEngineSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_GeneralEngineSettings_generated_h
#error "GeneralEngineSettings.generated.h already included, missing '#pragma once' in GeneralEngineSettings.h"
#endif
#define ENGINESETTINGS_GeneralEngineSettings_generated_h

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGeneralEngineSettings(); \
	friend struct Z_Construct_UClass_UGeneralEngineSettings_Statics; \
public: \
	DECLARE_CLASS(UGeneralEngineSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineSettings"), ENGINESETTINGS_API) \
	DECLARE_SERIALIZER(UGeneralEngineSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINESETTINGS_API UGeneralEngineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralEngineSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINESETTINGS_API, UGeneralEngineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralEngineSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeneralEngineSettings(UGeneralEngineSettings&&); \
	UGeneralEngineSettings(const UGeneralEngineSettings&); \
public: \
	ENGINESETTINGS_API virtual ~UGeneralEngineSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_11_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINESETTINGS_API UClass* StaticClass<class UGeneralEngineSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
