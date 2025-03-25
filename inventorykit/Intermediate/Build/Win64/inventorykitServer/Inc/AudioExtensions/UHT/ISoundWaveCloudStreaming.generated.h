// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISoundWaveCloudStreaming.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_ISoundWaveCloudStreaming_generated_h
#error "ISoundWaveCloudStreaming.generated.h already included, missing '#pragma once' in ISoundWaveCloudStreaming.h"
#endif
#define AUDIOEXTENSIONS_ISoundWaveCloudStreaming_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics; \
	AUDIOEXTENSIONS_API static class UScriptStruct* StaticStruct();


template<> AUDIOEXTENSIONS_API UScriptStruct* StaticStruct<struct FSoundWaveCloudStreamingPlatformProjectSettings>();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics; \
	AUDIOEXTENSIONS_API static class UScriptStruct* StaticStruct();


template<> AUDIOEXTENSIONS_API UScriptStruct* StaticStruct<struct FSoundWaveCloudStreamingPlatformSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h


#define FOREACH_ENUM_ESOUNDWAVECLOUDSTREAMINGPLATFORMPROJECTENABLETYPE(op) \
	op(ESoundWaveCloudStreamingPlatformProjectEnableType::Enabled) \
	op(ESoundWaveCloudStreamingPlatformProjectEnableType::Disabled) 

enum class ESoundWaveCloudStreamingPlatformProjectEnableType : uint8;
template<> struct TIsUEnumClass<ESoundWaveCloudStreamingPlatformProjectEnableType> { enum { Value = true }; };
template<> AUDIOEXTENSIONS_API UEnum* StaticEnum<ESoundWaveCloudStreamingPlatformProjectEnableType>();

#define FOREACH_ENUM_ESOUNDWAVECLOUDSTREAMINGPLATFORMENABLETYPE(op) \
	op(ESoundWaveCloudStreamingPlatformEnableType::Inherited) \
	op(ESoundWaveCloudStreamingPlatformEnableType::Disabled) \
	op(ESoundWaveCloudStreamingPlatformEnableType::SWC_MultipleValues) 

enum class ESoundWaveCloudStreamingPlatformEnableType : uint8;
template<> struct TIsUEnumClass<ESoundWaveCloudStreamingPlatformEnableType> { enum { Value = true }; };
template<> AUDIOEXTENSIONS_API UEnum* StaticEnum<ESoundWaveCloudStreamingPlatformEnableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
