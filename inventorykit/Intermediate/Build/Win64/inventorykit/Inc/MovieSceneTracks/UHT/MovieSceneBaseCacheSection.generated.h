// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneBaseCacheSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneBaseCacheSection_generated_h
#error "MovieSceneBaseCacheSection.generated.h already included, missing '#pragma once' in MovieSceneBaseCacheSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneBaseCacheSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneBaseCacheParams>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneBaseCacheSection(); \
	friend struct Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBaseCacheSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneBaseCacheSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneBaseCacheSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBaseCacheSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneBaseCacheSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBaseCacheSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBaseCacheSection(UMovieSceneBaseCacheSection&&); \
	UMovieSceneBaseCacheSection(const UMovieSceneBaseCacheSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneBaseCacheSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_47_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_51_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneBaseCacheSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
