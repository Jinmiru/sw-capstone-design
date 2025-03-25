// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioOscilloscopeUMG.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioOscilloscopeUMG_generated_h
#error "AudioOscilloscopeUMG.generated.h already included, missing '#pragma once' in AudioOscilloscopeUMG.h"
#endif
#define AUDIOWIDGETS_AudioOscilloscopeUMG_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_31_DELEGATE \
static TArray<float> FGetOscilloscopeAudioSamples_DelegateWrapper(const FScriptDelegate& GetOscilloscopeAudioSamples);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execStopProcessing); \
	DECLARE_FUNCTION(execStartProcessing);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAudioOscilloscope(); \
	friend struct Z_Construct_UClass_UAudioOscilloscope_Statics; \
public: \
	DECLARE_CLASS(UAudioOscilloscope, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioOscilloscope)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioOscilloscope(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioOscilloscope) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioOscilloscope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioOscilloscope); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioOscilloscope(UAudioOscilloscope&&); \
	UAudioOscilloscope(const UAudioOscilloscope&); \
public: \
	NO_API virtual ~UAudioOscilloscope();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioOscilloscope>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeUMG_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
