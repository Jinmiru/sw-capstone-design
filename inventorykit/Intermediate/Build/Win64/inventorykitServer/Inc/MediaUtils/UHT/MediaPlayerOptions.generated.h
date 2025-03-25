// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlayerOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAUTILS_MediaPlayerOptions_generated_h
#error "MediaPlayerOptions.generated.h already included, missing '#pragma once' in MediaPlayerOptions.h"
#endif
#define MEDIAUTILS_MediaPlayerOptions_generated_h

#define FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics; \
	MEDIAUTILS_API static class UScriptStruct* StaticStruct();


template<> MEDIAUTILS_API UScriptStruct* StaticStruct<struct FMediaPlayerTrackOptions>();

#define FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics; \
	MEDIAUTILS_API static class UScriptStruct* StaticStruct();


template<> MEDIAUTILS_API UScriptStruct* StaticStruct<struct FMediaPlayerOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaUtils_Public_MediaPlayerOptions_h


#define FOREACH_ENUM_EMEDIAPLAYEROPTIONBOOLEANOVERRIDE(op) \
	op(EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting) \
	op(EMediaPlayerOptionBooleanOverride::Enabled) \
	op(EMediaPlayerOptionBooleanOverride::Disabled) 

enum class EMediaPlayerOptionBooleanOverride : uint8;
template<> struct TIsUEnumClass<EMediaPlayerOptionBooleanOverride> { enum { Value = true }; };
template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionBooleanOverride>();

#define FOREACH_ENUM_EMEDIAPLAYEROPTIONSEEKTIMETYPE(op) \
	op(EMediaPlayerOptionSeekTimeType::Ignored) \
	op(EMediaPlayerOptionSeekTimeType::RelativeToStartTime) 

enum class EMediaPlayerOptionSeekTimeType : uint8;
template<> struct TIsUEnumClass<EMediaPlayerOptionSeekTimeType> { enum { Value = true }; };
template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionSeekTimeType>();

#define FOREACH_ENUM_EMEDIAPLAYEROPTIONTRACKSELECTMODE(op) \
	op(EMediaPlayerOptionTrackSelectMode::UseMediaPlayerDefaults) \
	op(EMediaPlayerOptionTrackSelectMode::UseTrackOptionIndices) 

enum class EMediaPlayerOptionTrackSelectMode : uint8;
template<> struct TIsUEnumClass<EMediaPlayerOptionTrackSelectMode> { enum { Value = true }; };
template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionTrackSelectMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
