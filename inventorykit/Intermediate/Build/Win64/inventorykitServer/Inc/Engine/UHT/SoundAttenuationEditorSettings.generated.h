// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundAttenuationEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundAttenuationEditorSettings_generated_h
#error "SoundAttenuationEditorSettings.generated.h already included, missing '#pragma once' in SoundAttenuationEditorSettings.h"
#endif
#define ENGINE_SoundAttenuationEditorSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAttenuationEditorSettings(); \
	friend struct Z_Construct_UClass_USoundAttenuationEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USoundAttenuationEditorSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuationEditorSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuationEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundAttenuationEditorSettings(USoundAttenuationEditorSettings&&); \
	USoundAttenuationEditorSettings(const USoundAttenuationEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuationEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuationEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuationEditorSettings) \
	ENGINE_API virtual ~USoundAttenuationEditorSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundAttenuationEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
