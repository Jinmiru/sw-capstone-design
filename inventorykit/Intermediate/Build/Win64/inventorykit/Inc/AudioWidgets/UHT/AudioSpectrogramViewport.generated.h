// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSpectrogramViewport.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioSpectrogramViewport_generated_h
#error "AudioSpectrogramViewport.generated.h already included, missing '#pragma once' in AudioSpectrogramViewport.h"
#endif
#define AUDIOWIDGETS_AudioSpectrogramViewport_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioSpectrogramViewport_h


#define FOREACH_ENUM_EAUDIOSPECTROGRAMFREQUENCYAXISSCALE(op) \
	op(EAudioSpectrogramFrequencyAxisScale::Linear) \
	op(EAudioSpectrogramFrequencyAxisScale::Logarithmic) 

enum class EAudioSpectrogramFrequencyAxisScale : uint8;
template<> struct TIsUEnumClass<EAudioSpectrogramFrequencyAxisScale> { enum { Value = true }; };
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrogramFrequencyAxisScale>();

#define FOREACH_ENUM_EAUDIOSPECTROGRAMFREQUENCYAXISPIXELBUCKETMODE(op) \
	op(EAudioSpectrogramFrequencyAxisPixelBucketMode::Sample) \
	op(EAudioSpectrogramFrequencyAxisPixelBucketMode::Peak) \
	op(EAudioSpectrogramFrequencyAxisPixelBucketMode::Average) 

enum class EAudioSpectrogramFrequencyAxisPixelBucketMode : uint8;
template<> struct TIsUEnumClass<EAudioSpectrogramFrequencyAxisPixelBucketMode> { enum { Value = true }; };
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioSpectrogramFrequencyAxisPixelBucketMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
