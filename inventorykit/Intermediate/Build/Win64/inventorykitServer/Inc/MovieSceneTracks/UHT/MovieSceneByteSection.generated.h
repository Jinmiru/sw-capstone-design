// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneByteSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneByteSection_generated_h
#error "MovieSceneByteSection.generated.h already included, missing '#pragma once' in MovieSceneByteSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneByteSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneByteSection(); \
	friend struct Z_Construct_UClass_UMovieSceneByteSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneByteSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneByteSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneByteSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneByteSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneByteSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneByteSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneByteSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneByteSection(UMovieSceneByteSection&&); \
	UMovieSceneByteSection(const UMovieSceneByteSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneByteSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneByteSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
