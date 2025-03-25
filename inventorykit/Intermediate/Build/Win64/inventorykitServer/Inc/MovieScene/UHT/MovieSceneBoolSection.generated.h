// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneBoolSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBoolSection_generated_h
#error "MovieSceneBoolSection.generated.h already included, missing '#pragma once' in MovieSceneBoolSection.h"
#endif
#define MOVIESCENE_MovieSceneBoolSection_generated_h

#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneBoolSection, NO_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneBoolSection(); \
	friend struct Z_Construct_UClass_UMovieSceneBoolSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBoolSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneBoolSection) \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneBoolSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoolSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBoolSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoolSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBoolSection(UMovieSceneBoolSection&&); \
	UMovieSceneBoolSection(const UMovieSceneBoolSection&); \
public: \
	NO_API virtual ~UMovieSceneBoolSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBoolSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
