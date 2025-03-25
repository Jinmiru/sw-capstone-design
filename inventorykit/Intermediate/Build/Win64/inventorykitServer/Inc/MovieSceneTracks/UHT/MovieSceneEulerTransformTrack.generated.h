// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneEulerTransformTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEulerTransformTrack_generated_h
#error "MovieSceneEulerTransformTrack.generated.h already included, missing '#pragma once' in MovieSceneEulerTransformTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEulerTransformTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneEulerTransformTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEulerTransformTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEulerTransformTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEulerTransformTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEulerTransformTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEulerTransformTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEulerTransformTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEulerTransformTrack(UMovieSceneEulerTransformTrack&&); \
	UMovieSceneEulerTransformTrack(const UMovieSceneEulerTransformTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEulerTransformTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_18_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneEulerTransformTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
