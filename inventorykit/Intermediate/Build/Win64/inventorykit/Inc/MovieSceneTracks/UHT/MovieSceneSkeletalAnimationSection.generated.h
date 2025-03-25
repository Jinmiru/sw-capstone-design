// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneSkeletalAnimationSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneSkeletalAnimationSection_generated_h
#error "MovieSceneSkeletalAnimationSection.generated.h already included, missing '#pragma once' in MovieSceneSkeletalAnimationSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSkeletalAnimationSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneSkeletalAnimationParams>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_105_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSkeletalAnimationSection, MOVIESCENETRACKS_API)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSkeletalAnimationSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSkeletalAnimationSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneSkeletalAnimationSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_105_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSkeletalAnimationSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneSkeletalAnimationSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSkeletalAnimationSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneSkeletalAnimationSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSkeletalAnimationSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneSkeletalAnimationSection(UMovieSceneSkeletalAnimationSection&&); \
	UMovieSceneSkeletalAnimationSection(const UMovieSceneSkeletalAnimationSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneSkeletalAnimationSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_100_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_105_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneSkeletalAnimationSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
