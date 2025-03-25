// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneBindingLifetimeSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBindingLifetimeSection_generated_h
#error "MovieSceneBindingLifetimeSection.generated.h already included, missing '#pragma once' in MovieSceneBindingLifetimeSection.h"
#endif
#define MOVIESCENE_MovieSceneBindingLifetimeSection_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingLifetimeSection(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingLifetimeSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingLifetimeSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingLifetimeSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneBindingLifetimeSection*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBindingLifetimeSection(UMovieSceneBindingLifetimeSection&&); \
	UMovieSceneBindingLifetimeSection(const UMovieSceneBindingLifetimeSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingLifetimeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingLifetimeSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingLifetimeSection) \
	MOVIESCENE_API virtual ~UMovieSceneBindingLifetimeSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingLifetimeSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBindingLifetimeSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
