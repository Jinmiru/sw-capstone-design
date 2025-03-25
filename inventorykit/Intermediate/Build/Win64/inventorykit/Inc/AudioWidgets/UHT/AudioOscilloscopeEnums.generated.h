// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioOscilloscopeEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioOscilloscopeEnums_generated_h
#error "AudioOscilloscopeEnums.generated.h already included, missing '#pragma once' in AudioOscilloscopeEnums.h"
#endif
#define AUDIOWIDGETS_AudioOscilloscopeEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h


#define FOREACH_ENUM_EAUDIOOSCILLOSCOPETRIGGERMODE(op) \
	op(EAudioOscilloscopeTriggerMode::None) \
	op(EAudioOscilloscopeTriggerMode::Rising) \
	op(EAudioOscilloscopeTriggerMode::Falling) 

enum class EAudioOscilloscopeTriggerMode : uint8;
template<> struct TIsUEnumClass<EAudioOscilloscopeTriggerMode> { enum { Value = true }; };
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioOscilloscopeTriggerMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
