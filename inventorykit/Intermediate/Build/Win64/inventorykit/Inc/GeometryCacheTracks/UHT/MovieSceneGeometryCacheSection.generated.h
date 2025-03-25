// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneGeometryCacheSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCACHETRACKS_MovieSceneGeometryCacheSection_generated_h
#error "MovieSceneGeometryCacheSection.generated.h already included, missing '#pragma once' in MovieSceneGeometryCacheSection.h"
#endif
#define GEOMETRYCACHETRACKS_MovieSceneGeometryCacheSection_generated_h

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYCACHETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneGeometryCacheParams>();

#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_61_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneGeometryCacheSection, GEOMETRYCACHETRACKS_API)


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneGeometryCacheSection(); \
	friend struct Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGeometryCacheSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCacheTracks"), GEOMETRYCACHETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneGeometryCacheSection) \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_61_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCACHETRACKS_API UMovieSceneGeometryCacheSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGeometryCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCACHETRACKS_API, UMovieSceneGeometryCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGeometryCacheSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneGeometryCacheSection(UMovieSceneGeometryCacheSection&&); \
	UMovieSceneGeometryCacheSection(const UMovieSceneGeometryCacheSection&); \
public: \
	GEOMETRYCACHETRACKS_API virtual ~UMovieSceneGeometryCacheSection();


#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_57_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_61_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCACHETRACKS_API UClass* StaticClass<class UMovieSceneGeometryCacheSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
