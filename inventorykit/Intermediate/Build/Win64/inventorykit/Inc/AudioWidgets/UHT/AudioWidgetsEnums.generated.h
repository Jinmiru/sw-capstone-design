// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioWidgetsEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioWidgetsEnums_generated_h
#error "AudioWidgetsEnums.generated.h already included, missing '#pragma once' in AudioWidgetsEnums.h"
#endif
#define AUDIOWIDGETS_AudioWidgetsEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h


#define FOREACH_ENUM_EAUDIOPANELLAYOUTTYPE(op) \
	op(EAudioPanelLayoutType::Basic) \
	op(EAudioPanelLayoutType::Advanced) 

enum class EAudioPanelLayoutType : uint8;
template<> struct TIsUEnumClass<EAudioPanelLayoutType> { enum { Value = true }; };
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioPanelLayoutType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
