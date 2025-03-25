// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGeometryCollectionTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONTRACKS_MovieSceneGeometryCollectionTrack_generated_h
#error "MovieSceneGeometryCollectionTrack.generated.h already included, missing '#pragma once' in MovieSceneGeometryCollectionTrack.h"
#endif
#define GEOMETRYCOLLECTIONTRACKS_MovieSceneGeometryCollectionTrack_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGeometryCollectionTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGeometryCollectionTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionTracks"), GEOMETRYCOLLECTIONTRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneGeometryCollectionTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneGeometryCollectionTrack*>(this); }


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONTRACKS_API UMovieSceneGeometryCollectionTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGeometryCollectionTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONTRACKS_API, UMovieSceneGeometryCollectionTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGeometryCollectionTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneGeometryCollectionTrack(UMovieSceneGeometryCollectionTrack&&); \
	UMovieSceneGeometryCollectionTrack(const UMovieSceneGeometryCollectionTrack&); \
public: \
	GEOMETRYCOLLECTIONTRACKS_API virtual ~UMovieSceneGeometryCollectionTrack();


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONTRACKS_API UClass* StaticClass<class UMovieSceneGeometryCollectionTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
