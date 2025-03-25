// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneIntegerSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneIntegerSection_generated_h
#error "MovieSceneIntegerSection.generated.h already included, missing '#pragma once' in MovieSceneIntegerSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneIntegerSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneIntegerSection(); \
	friend struct Z_Construct_UClass_UMovieSceneIntegerSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneIntegerSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneIntegerSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneIntegerSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneIntegerSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneIntegerSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneIntegerSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneIntegerSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneIntegerSection(UMovieSceneIntegerSection&&); \
	UMovieSceneIntegerSection(const UMovieSceneIntegerSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneIntegerSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_18_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_23_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneIntegerSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
