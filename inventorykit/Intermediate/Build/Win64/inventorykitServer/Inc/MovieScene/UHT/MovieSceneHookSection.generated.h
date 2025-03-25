// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneHookSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneHookSection_generated_h
#error "MovieSceneHookSection.generated.h already included, missing '#pragma once' in MovieSceneHookSection.h"
#endif
#define MOVIESCENE_MovieSceneHookSection_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneHookSection(); \
	friend struct Z_Construct_UClass_UMovieSceneHookSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneHookSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneHookSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneHookSection*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneHookSection(UMovieSceneHookSection&&); \
	UMovieSceneHookSection(const UMovieSceneHookSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneHookSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneHookSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneHookSection) \
	MOVIESCENE_API virtual ~UMovieSceneHookSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_26_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneHookSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneHookSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
