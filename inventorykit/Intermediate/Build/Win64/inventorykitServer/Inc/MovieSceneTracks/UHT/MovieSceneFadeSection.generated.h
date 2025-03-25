// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneFadeSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneFadeSection_generated_h
#error "MovieSceneFadeSection.generated.h already included, missing '#pragma once' in MovieSceneFadeSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFadeSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFadeSection(); \
	friend struct Z_Construct_UClass_UMovieSceneFadeSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFadeSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneFadeSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneFadeSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneFadeSection(UMovieSceneFadeSection&&); \
	UMovieSceneFadeSection(const UMovieSceneFadeSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFadeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFadeSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneFadeSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneFadeSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_22_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneFadeSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
