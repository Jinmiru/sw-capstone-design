// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneVisibilitySection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneVisibilitySection_generated_h
#error "MovieSceneVisibilitySection.generated.h already included, missing '#pragma once' in MovieSceneVisibilitySection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneVisibilitySection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneVisibilitySection(); \
	friend struct Z_Construct_UClass_UMovieSceneVisibilitySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneVisibilitySection, UMovieSceneBoolSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneVisibilitySection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneVisibilitySection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneVisibilitySection(UMovieSceneVisibilitySection&&); \
	UMovieSceneVisibilitySection(const UMovieSceneVisibilitySection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneVisibilitySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneVisibilitySection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneVisibilitySection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneVisibilitySection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_16_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneVisibilitySection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVisibilitySection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
