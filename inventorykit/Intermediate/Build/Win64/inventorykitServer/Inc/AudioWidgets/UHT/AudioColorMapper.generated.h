// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioColorMapper.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioColorMapper_generated_h
#error "AudioColorMapper.generated.h already included, missing '#pragma once' in AudioColorMapper.h"
#endif
#define AUDIOWIDGETS_AudioColorMapper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioColorMapper_h


#define FOREACH_ENUM_EAUDIOCOLORGRADIENT(op) \
	op(EAudioColorGradient::BlackToWhite) \
	op(EAudioColorGradient::WhiteToBlack) 

enum class EAudioColorGradient : uint8;
template<> struct TIsUEnumClass<EAudioColorGradient> { enum { Value = true }; };
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioColorGradient>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
