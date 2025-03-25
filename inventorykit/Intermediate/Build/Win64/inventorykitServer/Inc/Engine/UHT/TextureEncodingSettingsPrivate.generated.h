// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureEncodingSettingsPrivate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureEncodingSettingsPrivate_generated_h
#error "TextureEncodingSettingsPrivate.generated.h already included, missing '#pragma once' in TextureEncodingSettingsPrivate.h"
#endif
#define ENGINE_TextureEncodingSettingsPrivate_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTextureEncodingProjectSettings(); \
	friend struct Z_Construct_UClass_UTextureEncodingProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureEncodingProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureEncodingProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureEncodingProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEncodingProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureEncodingProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEncodingProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureEncodingProjectSettings(UTextureEncodingProjectSettings&&); \
	UTextureEncodingProjectSettings(const UTextureEncodingProjectSettings&); \
public: \
	ENGINE_API virtual ~UTextureEncodingProjectSettings();


#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureEncodingProjectSettings>();

#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUTextureEncodingUserSettings(); \
	friend struct Z_Construct_UClass_UTextureEncodingUserSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureEncodingUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureEncodingUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureEncodingUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEncodingUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureEncodingUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEncodingUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTextureEncodingUserSettings(UTextureEncodingUserSettings&&); \
	UTextureEncodingUserSettings(const UTextureEncodingUserSettings&); \
public: \
	ENGINE_API virtual ~UTextureEncodingUserSettings();


#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_125_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureEncodingUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
