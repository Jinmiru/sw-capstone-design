// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/StreamedAudioChunkSeekTable.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StreamedAudioChunkSeekTable_generated_h
#error "StreamedAudioChunkSeekTable.generated.h already included, missing '#pragma once' in StreamedAudioChunkSeekTable.h"
#endif
#define ENGINE_StreamedAudioChunkSeekTable_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h


#define FOREACH_ENUM_ECHUNKSEEKTABLEMODE(op) \
	op(EChunkSeekTableMode::ConstantSamplesPerEntry) \
	op(EChunkSeekTableMode::VariableSamplesPerEntry) 

enum class EChunkSeekTableMode : uint8;
template<> struct TIsUEnumClass<EChunkSeekTableMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EChunkSeekTableMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
