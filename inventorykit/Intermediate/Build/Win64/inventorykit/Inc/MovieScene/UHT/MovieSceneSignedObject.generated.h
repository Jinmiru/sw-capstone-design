// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSignedObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSignedObject_generated_h
#error "MovieSceneSignedObject.generated.h already included, missing '#pragma once' in MovieSceneSignedObject.h"
#endif
#define MOVIESCENE_MovieSceneSignedObject_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSignedObject(); \
	friend struct Z_Construct_UClass_UMovieSceneSignedObject_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSignedObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSignedObject)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneSignedObject(UMovieSceneSignedObject&&); \
	UMovieSceneSignedObject(const UMovieSceneSignedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSignedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSignedObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSignedObject) \
	MOVIESCENE_API virtual ~UMovieSceneSignedObject();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_62_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_66_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSignedObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
