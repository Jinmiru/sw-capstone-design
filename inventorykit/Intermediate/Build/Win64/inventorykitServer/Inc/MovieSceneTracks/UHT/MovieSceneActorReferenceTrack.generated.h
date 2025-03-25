// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneActorReferenceTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneActorReferenceTrack_generated_h
#error "MovieSceneActorReferenceTrack.generated.h already included, missing '#pragma once' in MovieSceneActorReferenceTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneActorReferenceTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneActorReferenceTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneActorReferenceTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneActorReferenceTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneActorReferenceTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneActorReferenceTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneActorReferenceTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneActorReferenceTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneActorReferenceTrack(UMovieSceneActorReferenceTrack&&); \
	UMovieSceneActorReferenceTrack(const UMovieSceneActorReferenceTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneActorReferenceTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_17_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneActorReferenceTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
