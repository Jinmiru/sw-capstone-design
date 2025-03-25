// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameNetworkManagerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_GameNetworkManagerSettings_generated_h
#error "GameNetworkManagerSettings.generated.h already included, missing '#pragma once' in GameNetworkManagerSettings.h"
#endif
#define ENGINESETTINGS_GameNetworkManagerSettings_generated_h

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameNetworkManagerSettings(); \
	friend struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics; \
public: \
	DECLARE_CLASS(UGameNetworkManagerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), ENGINESETTINGS_API) \
	DECLARE_SERIALIZER(UGameNetworkManagerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINESETTINGS_API UGameNetworkManagerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameNetworkManagerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINESETTINGS_API, UGameNetworkManagerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameNetworkManagerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameNetworkManagerSettings(UGameNetworkManagerSettings&&); \
	UGameNetworkManagerSettings(const UGameNetworkManagerSettings&); \
public: \
	ENGINESETTINGS_API virtual ~UGameNetworkManagerSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_14_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINESETTINGS_API UClass* StaticClass<class UGameNetworkManagerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
