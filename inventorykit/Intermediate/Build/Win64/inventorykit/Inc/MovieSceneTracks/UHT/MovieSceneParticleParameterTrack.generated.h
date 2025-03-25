// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneParticleParameterTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneParticleParameterTrack_generated_h
#error "MovieSceneParticleParameterTrack.generated.h already included, missing '#pragma once' in MovieSceneParticleParameterTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParticleParameterTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleParameterTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneParticleParameterTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParticleParameterTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleParameterTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneParticleParameterTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleParameterTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleParameterTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleParameterTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleParameterTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneParticleParameterTrack(UMovieSceneParticleParameterTrack&&); \
	UMovieSceneParticleParameterTrack(const UMovieSceneParticleParameterTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneParticleParameterTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h_29_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h_34_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneParticleParameterTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneParticleParameterTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
