// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneStringSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneStringSection_generated_h
#error "MovieSceneStringSection.generated.h already included, missing '#pragma once' in MovieSceneStringSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneStringSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneStringSection(); \
	friend struct Z_Construct_UClass_UMovieSceneStringSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneStringSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneStringSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneStringSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneStringSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneStringSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneStringSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneStringSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneStringSection(UMovieSceneStringSection&&); \
	UMovieSceneStringSection(const UMovieSceneStringSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneStringSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_19_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_24_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneStringSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
