// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SynthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class USoundModulatorBase;
class USoundSourceBus;
class USoundSubmixBase;
enum class EAudioFaderCurve : uint8;
enum class EModulationDestination : uint8;
enum class EModulationRouting : uint8;
#ifdef AUDIOMIXER_SynthComponent_generated_h
#error "SynthComponent.generated.h already included, missing '#pragma once' in SynthComponent.h"
#endif
#define AUDIOMIXER_SynthComponent_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_38_DELEGATE \
AUDIOMIXER_API void FOnSynthEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnSynthEnvelopeValue, const float EnvelopeValue);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUSynthSound(); \
	friend struct Z_Construct_UClass_USynthSound_Statics; \
public: \
	DECLARE_CLASS(USynthSound, USoundWaveProcedural, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMixer"), AUDIOMIXER_API) \
	DECLARE_SERIALIZER(USynthSound)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMIXER_API USynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, USynthSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USynthSound(USynthSound&&); \
	USynthSound(const USynthSound&); \
public: \
	AUDIOMIXER_API virtual ~USynthSound();


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_44_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_47_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USynthSound>();

#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAudioBusSendPostEffect); \
	DECLARE_FUNCTION(execSetAudioBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStart);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USynthComponent, AUDIOMIXER_API)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponent(); \
	friend struct Z_Construct_UClass_USynthComponent_Statics; \
public: \
	DECLARE_CLASS(USynthComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMixer"), AUDIOMIXER_API) \
	DECLARE_SERIALIZER(USynthComponent) \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USynthComponent(USynthComponent&&); \
	USynthComponent(const USynthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, USynthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponent) \
	AUDIOMIXER_API virtual ~USynthComponent();


#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_78_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USynthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
