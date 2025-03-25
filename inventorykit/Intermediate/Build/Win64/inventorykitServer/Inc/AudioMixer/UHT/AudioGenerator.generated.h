// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/AudioGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOMIXER_AudioGenerator_generated_h
#error "AudioGenerator.generated.h already included, missing '#pragma once' in AudioGenerator.h"
#endif
#define AUDIOMIXER_AudioGenerator_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioGenerator(); \
	friend struct Z_Construct_UClass_UAudioGenerator_Statics; \
public: \
	DECLARE_CLASS(UAudioGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), AUDIOMIXER_API) \
	DECLARE_SERIALIZER(UAudioGenerator)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioGenerator(UAudioGenerator&&); \
	UAudioGenerator(const UAudioGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, UAudioGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioGenerator)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_22_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UAudioGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
