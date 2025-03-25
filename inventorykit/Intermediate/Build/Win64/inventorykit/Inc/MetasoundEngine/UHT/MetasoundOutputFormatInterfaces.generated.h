// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MetasoundOutputFormatInterfaces.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDENGINE_MetasoundOutputFormatInterfaces_generated_h
#error "MetasoundOutputFormatInterfaces.generated.h already included, missing '#pragma once' in MetasoundOutputFormatInterfaces.h"
#endif
#define METASOUNDENGINE_MetasoundOutputFormatInterfaces_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Interfaces_MetasoundOutputFormatInterfaces_h


#define FOREACH_ENUM_EMETASOUNDOUTPUTAUDIOFORMAT(op) \
	op(EMetaSoundOutputAudioFormat::Mono) \
	op(EMetaSoundOutputAudioFormat::Stereo) \
	op(EMetaSoundOutputAudioFormat::Quad) \
	op(EMetaSoundOutputAudioFormat::FiveDotOne) \
	op(EMetaSoundOutputAudioFormat::SevenDotOne) \
	op(EMetaSoundOutputAudioFormat::COUNT) 

enum class EMetaSoundOutputAudioFormat : uint8;
template<> struct TIsUEnumClass<EMetaSoundOutputAudioFormat> { enum { Value = true }; };
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundOutputAudioFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
