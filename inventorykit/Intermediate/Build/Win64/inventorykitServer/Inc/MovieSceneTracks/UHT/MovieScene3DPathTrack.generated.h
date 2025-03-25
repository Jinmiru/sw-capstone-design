// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieScene3DPathTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScene3DPathTrack_generated_h
#error "MovieScene3DPathTrack.generated.h already included, missing '#pragma once' in MovieScene3DPathTrack.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DPathTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DPathTrack(); \
	friend struct Z_Construct_UClass_UMovieScene3DPathTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DPathTrack, UMovieScene3DConstraintTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DPathTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene3DPathTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DPathTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DPathTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DPathTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DPathTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScene3DPathTrack(UMovieScene3DPathTrack&&); \
	UMovieScene3DPathTrack(const UMovieScene3DPathTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DPathTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_26_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_31_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScene3DPathTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
