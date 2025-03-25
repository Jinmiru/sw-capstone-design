// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImgMediaSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMGMEDIAFACTORY_ImgMediaSettings_generated_h
#error "ImgMediaSettings.generated.h already included, missing '#pragma once' in ImgMediaSettings.h"
#endif
#define IMGMEDIAFACTORY_ImgMediaSettings_generated_h

#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImgMediaSettings(); \
	friend struct Z_Construct_UClass_UImgMediaSettings_Statics; \
public: \
	DECLARE_CLASS(UImgMediaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImgMediaFactory"), NO_API) \
	DECLARE_SERIALIZER(UImgMediaSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UImgMediaSettings(UImgMediaSettings&&); \
	UImgMediaSettings(const UImgMediaSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImgMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImgMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImgMediaSettings) \
	NO_API virtual ~UImgMediaSettings();


#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_17_PROLOG
#define FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMGMEDIAFACTORY_API UClass* StaticClass<class UImgMediaSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaFactory_Public_ImgMediaSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
