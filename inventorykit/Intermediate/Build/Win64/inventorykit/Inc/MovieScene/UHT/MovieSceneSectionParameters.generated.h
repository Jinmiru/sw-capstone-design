// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneSectionParameters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSectionParameters_generated_h
#error "MovieSceneSectionParameters.generated.h already included, missing '#pragma once' in MovieSceneSectionParameters.h"
#endif
#define MOVIESCENE_MovieSceneSectionParameters_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSectionParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSectionParameters_h


#define FOREACH_ENUM_EMOVIESCENESUBSECTIONFLAGS(op) \
	op(EMovieSceneSubSectionFlags::None) \
	op(EMovieSceneSubSectionFlags::OverrideKeepState) \
	op(EMovieSceneSubSectionFlags::OverrideRestoreState) \
	op(EMovieSceneSubSectionFlags::IgnoreHierarchicalBias) \
	op(EMovieSceneSubSectionFlags::BlendHierarchicalBias) \
	op(EMovieSceneSubSectionFlags::AnyRestoreStateOverride) 

enum class EMovieSceneSubSectionFlags : uint8;
template<> struct TIsUEnumClass<EMovieSceneSubSectionFlags> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneSubSectionFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
