// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioBusSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOMIXER_AudioBusSubsystem_generated_h
#error "AudioBusSubsystem.generated.h already included, missing '#pragma once' in AudioBusSubsystem.h"
#endif
#define AUDIOMIXER_AudioBusSubsystem_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioBusSubsystem(); \
	friend struct Z_Construct_UClass_UAudioBusSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioBusSubsystem, UAudioEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), AUDIOMIXER_API) \
	DECLARE_SERIALIZER(UAudioBusSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioBusSubsystem(UAudioBusSubsystem&&); \
	UAudioBusSubsystem(const UAudioBusSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, UAudioBusSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBusSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioBusSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_67_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UAudioBusSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
