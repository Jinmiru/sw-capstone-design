// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneTrack_generated_h
#error "MovieSceneTrack.generated.h already included, missing '#pragma once' in MovieSceneTrack.h"
#endif
#define MOVIESCENE_MovieSceneTrack_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackEvalOptions>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTrackDisplayOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTrackDisplayOptions>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_177_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrack, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_177_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneTrack(UMovieSceneTrack&&); \
	UMovieSceneTrack(const UMovieSceneTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrack)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_173_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_177_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_177_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h_177_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
