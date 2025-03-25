// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneBindingOverrides.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBindingOverrides_generated_h
#error "MovieSceneBindingOverrides.generated.h already included, missing '#pragma once' in MovieSceneBindingOverrides.h"
#endif
#define MOVIESCENE_MovieSceneBindingOverrides_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneBindingOverrideData>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingOverrides(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingOverrides_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingOverrides, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingOverrides)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBindingOverrides(UMovieSceneBindingOverrides&&); \
	UMovieSceneBindingOverrides(const UMovieSceneBindingOverrides&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingOverrides); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingOverrides); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingOverrides) \
	MOVIESCENE_API virtual ~UMovieSceneBindingOverrides();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_52_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_58_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingOverrides>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
