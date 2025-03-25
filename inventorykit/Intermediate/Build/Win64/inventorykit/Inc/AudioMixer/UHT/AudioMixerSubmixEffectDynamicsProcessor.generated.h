// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class USoundSubmix;
struct FSubmixEffectDynamicsProcessorSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectDynamicsProcessor_generated_h
#error "AudioMixerSubmixEffectDynamicsProcessor.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectDynamicsProcessor.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectDynamicsProcessor_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectDynamicProcessorFilterSettings>();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectDynamicsProcessorSettings>();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetExternalSubmix); \
	DECLARE_FUNCTION(execSetAudioBus); \
	DECLARE_FUNCTION(execResetKey);


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USubmixEffectDynamicsProcessorPreset, AUDIOMIXER_API)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectDynamicsProcessorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), AUDIOMIXER_API) \
	DECLARE_SERIALIZER(USubmixEffectDynamicsProcessorPreset) \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMIXER_API USubmixEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubmixEffectDynamicsProcessorPreset(USubmixEffectDynamicsProcessorPreset&&); \
	USubmixEffectDynamicsProcessorPreset(const USubmixEffectDynamicsProcessorPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, USubmixEffectDynamicsProcessorPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectDynamicsProcessorPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectDynamicsProcessorPreset) \
	AUDIOMIXER_API virtual ~USubmixEffectDynamicsProcessorPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_315_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_318_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USubmixEffectDynamicsProcessorPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h


#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSPROCESSORTYPE(op) \
	op(ESubmixEffectDynamicsProcessorType::Compressor) \
	op(ESubmixEffectDynamicsProcessorType::Limiter) \
	op(ESubmixEffectDynamicsProcessorType::Expander) \
	op(ESubmixEffectDynamicsProcessorType::Gate) \
	op(ESubmixEffectDynamicsProcessorType::UpwardsCompressor) \
	op(ESubmixEffectDynamicsProcessorType::Count) 

enum class ESubmixEffectDynamicsProcessorType : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsProcessorType> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsProcessorType>();

#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSPEAKMODE(op) \
	op(ESubmixEffectDynamicsPeakMode::MeanSquared) \
	op(ESubmixEffectDynamicsPeakMode::RootMeanSquared) \
	op(ESubmixEffectDynamicsPeakMode::Peak) \
	op(ESubmixEffectDynamicsPeakMode::Count) 

enum class ESubmixEffectDynamicsPeakMode : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsPeakMode> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsPeakMode>();

#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSCHANNELLINKMODE(op) \
	op(ESubmixEffectDynamicsChannelLinkMode::Disabled) \
	op(ESubmixEffectDynamicsChannelLinkMode::Average) \
	op(ESubmixEffectDynamicsChannelLinkMode::Peak) \
	op(ESubmixEffectDynamicsChannelLinkMode::Count) 

enum class ESubmixEffectDynamicsChannelLinkMode : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsChannelLinkMode> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsChannelLinkMode>();

#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSKEYSOURCE(op) \
	op(ESubmixEffectDynamicsKeySource::Default) \
	op(ESubmixEffectDynamicsKeySource::AudioBus) \
	op(ESubmixEffectDynamicsKeySource::Submix) \
	op(ESubmixEffectDynamicsKeySource::Count) 

enum class ESubmixEffectDynamicsKeySource : uint8;
template<> struct TIsUEnumClass<ESubmixEffectDynamicsKeySource> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsKeySource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
