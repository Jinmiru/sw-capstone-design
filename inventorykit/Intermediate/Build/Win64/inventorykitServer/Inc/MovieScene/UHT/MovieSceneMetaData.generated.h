// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneMetaData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef MOVIESCENE_MovieSceneMetaData_generated_h
#error "MovieSceneMetaData.generated.h already included, missing '#pragma once' in MovieSceneMetaData.h"
#endif
#define MOVIESCENE_MovieSceneMetaData_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNotes); \
	DECLARE_FUNCTION(execSetCreated); \
	DECLARE_FUNCTION(execSetAuthor); \
	DECLARE_FUNCTION(execGetNotes); \
	DECLARE_FUNCTION(execGetCreated); \
	DECLARE_FUNCTION(execGetAuthor);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMetaData(); \
	friend struct Z_Construct_UClass_UMovieSceneMetaData_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneMetaData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneMetaData) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneMetaData*>(this); }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneMetaData(UMovieSceneMetaData&&); \
	UMovieSceneMetaData(const UMovieSceneMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMetaData) \
	MOVIESCENE_API virtual ~UMovieSceneMetaData();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneMetaData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
