// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AudioComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class UObject;
class UQuartzClockHandle;
class USoundAttenuation;
class USoundBase;
class USoundModulatorBase;
class USoundSourceBus;
class USoundSubmixBase;
class USoundWave;
enum class EAudioComponentPlayState : uint8;
enum class EAudioFaderCurve : uint8;
enum class EModulationDestination : uint8;
enum class EModulationRouting : uint8;
struct FQuartzQuantizationBoundary;
struct FSoundAttenuationSettings;
struct FSoundWaveEnvelopeDataPerSound;
struct FSoundWaveSpectralData;
struct FSoundWaveSpectralDataPerSound;
struct FSubtitleCue;
#ifdef ENGINE_AudioComponent_generated_h
#error "AudioComponent.generated.h already included, missing '#pragma once' in AudioComponent.h"
#endif
#define ENGINE_AudioComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_64_DELEGATE \
ENGINE_API void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_70_DELEGATE \
ENGINE_API void FOnQueueSubtitles_DelegateWrapper(const FScriptDelegate& OnQueueSubtitles, TArray<FSubtitleCue> const& Subtitles, float CueDuration);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_73_DELEGATE \
ENGINE_API void FOnAudioPlayStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlayStateChanged, EAudioComponentPlayState PlayState);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_79_DELEGATE \
ENGINE_API void FOnAudioVirtualizationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVirtualizationChanged, bool bIsVirtualized);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_88_DELEGATE \
ENGINE_API void FOnAudioPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackPercent, const USoundWave* PlayingSoundWave, const float PlaybackPercent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_97_DELEGATE \
ENGINE_API void FOnAudioSingleEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSingleEnvelopeValue, const USoundWave* PlayingSoundWave, const float EnvelopeValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_106_DELEGATE \
ENGINE_API void FOnAudioMultiEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMultiEnvelopeValue, const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAudioParameter Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioComponentParam>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUInitialActiveSoundParams(); \
	friend struct Z_Construct_UClass_UInitialActiveSoundParams_Statics; \
public: \
	DECLARE_CLASS(UInitialActiveSoundParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInitialActiveSoundParams)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInitialActiveSoundParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitialActiveSoundParams) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInitialActiveSoundParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitialActiveSoundParams); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInitialActiveSoundParams(UInitialActiveSoundParams&&); \
	UInitialActiveSoundParams(const UInitialActiveSoundParams&); \
public: \
	ENGINE_API virtual ~UInitialActiveSoundParams();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_166_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInitialActiveSoundParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAudioBusSendPostEffect); \
	DECLARE_FUNCTION(execSetAudioBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execPlayQuantized); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound); \
	DECLARE_FUNCTION(execSetAttenuationOverrides); \
	DECLARE_FUNCTION(execSetAttenuationSettings); \
	DECLARE_FUNCTION(execSetOverrideAttenuation);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct Z_Construct_UClass_UAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioComponent(UAudioComponent&&); \
	UAudioComponent(const UAudioComponent&); \
public: \
	ENGINE_API virtual ~UAudioComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_187_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h


#define FOREACH_ENUM_EAUDIOCOMPONENTPLAYSTATE(op) \
	op(EAudioComponentPlayState::Playing) \
	op(EAudioComponentPlayState::Stopped) \
	op(EAudioComponentPlayState::Paused) \
	op(EAudioComponentPlayState::FadingIn) \
	op(EAudioComponentPlayState::FadingOut) \
	op(EAudioComponentPlayState::Count) 

enum class EAudioComponentPlayState : uint8;
template<> struct TIsUEnumClass<EAudioComponentPlayState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioComponentPlayState>();

#define FOREACH_ENUM_EAUDIOFADERCURVE(op) \
	op(EAudioFaderCurve::Linear) \
	op(EAudioFaderCurve::Logarithmic) \
	op(EAudioFaderCurve::SCurve) \
	op(EAudioFaderCurve::Sin) \
	op(EAudioFaderCurve::Count) 

enum class EAudioFaderCurve : uint8;
template<> struct TIsUEnumClass<EAudioFaderCurve> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioFaderCurve>();

#define FOREACH_ENUM_EMODULATIONDESTINATION(op) \
	op(EModulationDestination::Volume) \
	op(EModulationDestination::Pitch) \
	op(EModulationDestination::Lowpass) \
	op(EModulationDestination::Highpass) \
	op(EModulationDestination::Count) 

enum class EModulationDestination : uint8;
template<> struct TIsUEnumClass<EModulationDestination> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EModulationDestination>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
