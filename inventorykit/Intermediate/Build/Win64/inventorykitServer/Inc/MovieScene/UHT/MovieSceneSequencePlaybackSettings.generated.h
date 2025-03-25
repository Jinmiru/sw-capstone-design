// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSequencePlaybackSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSequencePlaybackSettings_generated_h
#error "MovieSceneSequencePlaybackSettings.generated.h already included, missing '#pragma once' in MovieSceneSequencePlaybackSettings.h"
#endif
#define MOVIESCENE_MovieSceneSequencePlaybackSettings_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequenceLoopCount>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSequencePlaybackSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h


#define FOREACH_ENUM_EMOVIESCENECOMPLETIONMODEOVERRIDE(op) \
	op(EMovieSceneCompletionModeOverride::None) \
	op(EMovieSceneCompletionModeOverride::ForceKeepState) \
	op(EMovieSceneCompletionModeOverride::ForceRestoreState) 

enum class EMovieSceneCompletionModeOverride : uint8;
template<> struct TIsUEnumClass<EMovieSceneCompletionModeOverride> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneCompletionModeOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
