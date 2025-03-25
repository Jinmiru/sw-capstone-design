// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioAmbisonicsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RESONANCEAUDIO_ResonanceAudioAmbisonicsSettings_generated_h
#error "ResonanceAudioAmbisonicsSettings.generated.h already included, missing '#pragma once' in ResonanceAudioAmbisonicsSettings.h"
#endif
#define RESONANCEAUDIO_ResonanceAudioAmbisonicsSettings_generated_h

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResonanceAudioSoundfieldSettings(); \
	friend struct Z_Construct_UClass_UResonanceAudioSoundfieldSettings_Statics; \
public: \
	DECLARE_CLASS(UResonanceAudioSoundfieldSettings, USoundfieldEncodingSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResonanceAudio"), NO_API) \
	DECLARE_SERIALIZER(UResonanceAudioSoundfieldSettings)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResonanceAudioSoundfieldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UResonanceAudioSoundfieldSettings(UResonanceAudioSoundfieldSettings&&); \
	UResonanceAudioSoundfieldSettings(const UResonanceAudioSoundfieldSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResonanceAudioSoundfieldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioSoundfieldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResonanceAudioSoundfieldSettings) \
	NO_API virtual ~UResonanceAudioSoundfieldSettings();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RESONANCEAUDIO_API UClass* StaticClass<class UResonanceAudioSoundfieldSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioAmbisonicsSettings_h


#define FOREACH_ENUM_ERESONANCERENDERMODE(op) \
	op(EResonanceRenderMode::StereoPanning) \
	op(EResonanceRenderMode::BinauralLowQuality) \
	op(EResonanceRenderMode::BinauralMediumQuality) \
	op(EResonanceRenderMode::BinauralHighQuality) \
	op(EResonanceRenderMode::RoomEffectsOnly) 

enum class EResonanceRenderMode : uint8;
template<> struct TIsUEnumClass<EResonanceRenderMode> { enum { Value = true }; };
template<> RESONANCEAUDIO_API UEnum* StaticEnum<EResonanceRenderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
