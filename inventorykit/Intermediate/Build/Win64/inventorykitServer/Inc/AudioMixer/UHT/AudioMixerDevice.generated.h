// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMixerDevice.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOMIXER_AudioMixerDevice_generated_h
#error "AudioMixerDevice.generated.h already included, missing '#pragma once' in AudioMixerDevice.h"
#endif
#define AUDIOMIXER_AudioMixerDevice_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerDevice_h


#define FOREACH_ENUM_EREQUIREDSUBMIXES(op) \
	op(ERequiredSubmixes::Main) \
	op(ERequiredSubmixes::BaseDefault) \
	op(ERequiredSubmixes::Reverb) \
	op(ERequiredSubmixes::EQ) \
	op(ERequiredSubmixes::Count) 

enum class ERequiredSubmixes : uint8;
template<> struct TIsUEnumClass<ERequiredSubmixes> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ERequiredSubmixes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
