// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureImportSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEXTUREUTILITIESCOMMON_TextureImportSettings_generated_h
#error "TextureImportSettings.generated.h already included, missing '#pragma once' in TextureImportSettings.h"
#endif
#define TEXTUREUTILITIESCOMMON_TextureImportSettings_generated_h

#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUTextureImportSettings(); \
	friend struct Z_Construct_UClass_UTextureImportSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureImportSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureUtilitiesCommon"), TEXTUREUTILITIESCOMMON_API) \
	DECLARE_SERIALIZER(UTextureImportSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREUTILITIESCOMMON_API UTextureImportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureImportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREUTILITIESCOMMON_API, UTextureImportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureImportSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureImportSettings(UTextureImportSettings&&); \
	UTextureImportSettings(const UTextureImportSettings&); \
public: \
	TEXTUREUTILITIESCOMMON_API virtual ~UTextureImportSettings();


#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_50_PROLOG
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_INCLASS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEXTUREUTILITIESCOMMON_API UClass* StaticClass<class UTextureImportSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h


#define FOREACH_ENUM_ETEXTUREIMPORTFLOATINGPOINTFORMAT(op) \
	op(ETextureImportFloatingPointFormat::HDR_F16) \
	op(ETextureImportFloatingPointFormat::HDRCompressed_BC6) \
	op(ETextureImportFloatingPointFormat::HDR_F32_or_F16) \
	op(ETextureImportFloatingPointFormat::PreviousDefault) 

enum class ETextureImportFloatingPointFormat : uint8;
template<> struct TIsUEnumClass<ETextureImportFloatingPointFormat> { enum { Value = true }; };
template<> TEXTUREUTILITIESCOMMON_API UEnum* StaticEnum<ETextureImportFloatingPointFormat>();

#define FOREACH_ENUM_ETEXTUREIMPORTPNGINFILL(op) \
	op(ETextureImportPNGInfill::Default) \
	op(ETextureImportPNGInfill::Never) \
	op(ETextureImportPNGInfill::OnlyOnBinaryTransparency) \
	op(ETextureImportPNGInfill::Always) 

enum class ETextureImportPNGInfill : uint8;
template<> struct TIsUEnumClass<ETextureImportPNGInfill> { enum { Value = true }; };
template<> TEXTUREUTILITIESCOMMON_API UEnum* StaticEnum<ETextureImportPNGInfill>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
