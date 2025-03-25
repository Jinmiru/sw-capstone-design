// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/IMovieSceneEvaluationHook.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneEvaluationHook_generated_h
#error "IMovieSceneEvaluationHook.generated.h already included, missing '#pragma once' in IMovieSceneEvaluationHook.h"
#endif
#define MOVIESCENE_IMovieSceneEvaluationHook_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneEvaluationHook(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEvaluationHook(UMovieSceneEvaluationHook&&); \
	UMovieSceneEvaluationHook(const UMovieSceneEvaluationHook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEvaluationHook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEvaluationHook); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEvaluationHook) \
	MOVIESCENE_API virtual ~UMovieSceneEvaluationHook();


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_52_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEvaluationHook(); \
	friend struct Z_Construct_UClass_UMovieSceneEvaluationHook_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEvaluationHook, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneEvaluationHook)


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_52_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_52_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_52_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_52_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEvaluationHook() {} \
public: \
	typedef UMovieSceneEvaluationHook UClassType; \
	typedef IMovieSceneEvaluationHook ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_48_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_52_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEvaluationHook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
