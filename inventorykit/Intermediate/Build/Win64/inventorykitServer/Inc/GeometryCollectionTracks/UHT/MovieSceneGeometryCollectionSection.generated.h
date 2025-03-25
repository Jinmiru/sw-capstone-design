// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGeometryCollectionSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONTRACKS_MovieSceneGeometryCollectionSection_generated_h
#error "MovieSceneGeometryCollectionSection.generated.h already included, missing '#pragma once' in MovieSceneGeometryCollectionSection.h"
#endif
#define GEOMETRYCOLLECTIONTRACKS_MovieSceneGeometryCollectionSection_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics; \
	GEOMETRYCOLLECTIONTRACKS_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneGeometryCollectionParams>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGeometryCollectionSection(); \
	friend struct Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGeometryCollectionSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionTracks"), GEOMETRYCOLLECTIONTRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneGeometryCollectionSection)


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONTRACKS_API UMovieSceneGeometryCollectionSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGeometryCollectionSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONTRACKS_API, UMovieSceneGeometryCollectionSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGeometryCollectionSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneGeometryCollectionSection(UMovieSceneGeometryCollectionSection&&); \
	UMovieSceneGeometryCollectionSection(const UMovieSceneGeometryCollectionSection&); \
public: \
	GEOMETRYCOLLECTIONTRACKS_API virtual ~UMovieSceneGeometryCollectionSection();


#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_70_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_74_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONTRACKS_API UClass* StaticClass<class UMovieSceneGeometryCollectionSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
