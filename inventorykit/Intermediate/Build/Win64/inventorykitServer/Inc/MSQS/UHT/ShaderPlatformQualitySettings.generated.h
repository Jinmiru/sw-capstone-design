// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShaderPlatformQualitySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALSHADERQUALITYSETTINGS_ShaderPlatformQualitySettings_generated_h
#error "ShaderPlatformQualitySettings.generated.h already included, missing '#pragma once' in ShaderPlatformQualitySettings.h"
#endif
#define MATERIALSHADERQUALITYSETTINGS_ShaderPlatformQualitySettings_generated_h

#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics; \
	MATERIALSHADERQUALITYSETTINGS_API static class UScriptStruct* StaticStruct();


template<> MATERIALSHADERQUALITYSETTINGS_API UScriptStruct* StaticStruct<struct FMaterialQualityOverrides>();

#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUShaderPlatformQualitySettings(); \
	friend struct Z_Construct_UClass_UShaderPlatformQualitySettings_Statics; \
public: \
	DECLARE_CLASS(UShaderPlatformQualitySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialShaderQualitySettings"), MATERIALSHADERQUALITYSETTINGS_API) \
	DECLARE_SERIALIZER(UShaderPlatformQualitySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MATERIALSHADERQUALITYSETTINGS_API UShaderPlatformQualitySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderPlatformQualitySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MATERIALSHADERQUALITYSETTINGS_API, UShaderPlatformQualitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderPlatformQualitySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UShaderPlatformQualitySettings(UShaderPlatformQualitySettings&&); \
	UShaderPlatformQualitySettings(const UShaderPlatformQualitySettings&); \
public: \
	MATERIALSHADERQUALITYSETTINGS_API virtual ~UShaderPlatformQualitySettings();


#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_80_PROLOG
#define FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_84_INCLASS \
	FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALSHADERQUALITYSETTINGS_API UClass* StaticClass<class UShaderPlatformQualitySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_ShaderPlatformQualitySettings_h


#define FOREACH_ENUM_EMOBILESHADOWQUALITY(op) \
	op(EMobileShadowQuality::NoFiltering) \
	op(EMobileShadowQuality::PCF_1x1) \
	op(EMobileShadowQuality::PCF_3x3) \
	op(EMobileShadowQuality::PCF_5x5) 

enum class EMobileShadowQuality : uint8;
template<> struct TIsUEnumClass<EMobileShadowQuality> { enum { Value = true }; };
template<> MATERIALSHADERQUALITYSETTINGS_API UEnum* StaticEnum<EMobileShadowQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
