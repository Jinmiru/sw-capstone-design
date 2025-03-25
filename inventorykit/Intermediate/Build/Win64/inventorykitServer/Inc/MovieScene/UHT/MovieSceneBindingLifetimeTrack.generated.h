// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneBindingLifetimeTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBindingLifetimeTrack_generated_h
#error "MovieSceneBindingLifetimeTrack.generated.h already included, missing '#pragma once' in MovieSceneBindingLifetimeTrack.h"
#endif
#define MOVIESCENE_MovieSceneBindingLifetimeTrack_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingLifetimeTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingLifetimeTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingLifetimeTrack, UMovieSceneTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingLifetimeTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneBindingLifetimeTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBindingLifetimeTrack(UMovieSceneBindingLifetimeTrack&&); \
	UMovieSceneBindingLifetimeTrack(const UMovieSceneBindingLifetimeTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingLifetimeTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingLifetimeTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingLifetimeTrack) \
	MOVIESCENE_API virtual ~UMovieSceneBindingLifetimeTrack();


#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_25_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h_33_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingLifetimeTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneBindingLifetimeTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
