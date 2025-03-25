// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WmfMediaSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WMFMEDIAFACTORY_WmfMediaSettings_generated_h
#error "WmfMediaSettings.generated.h already included, missing '#pragma once' in WmfMediaSettings.h"
#endif
#define WMFMEDIAFACTORY_WmfMediaSettings_generated_h

#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWmfMediaSettings(); \
	friend struct Z_Construct_UClass_UWmfMediaSettings_Statics; \
public: \
	DECLARE_CLASS(UWmfMediaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WmfMediaFactory"), NO_API) \
	DECLARE_SERIALIZER(UWmfMediaSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWmfMediaSettings(UWmfMediaSettings&&); \
	UWmfMediaSettings(const UWmfMediaSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWmfMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWmfMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWmfMediaSettings) \
	NO_API virtual ~UWmfMediaSettings();


#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_12_PROLOG
#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WMFMEDIAFACTORY_API UClass* StaticClass<class UWmfMediaSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
