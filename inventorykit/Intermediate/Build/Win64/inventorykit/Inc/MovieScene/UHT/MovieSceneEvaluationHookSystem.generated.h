// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneEvaluationHookSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEvaluationHookSystem_generated_h
#error "MovieSceneEvaluationHookSystem.generated.h already included, missing '#pragma once' in MovieSceneEvaluationHookSystem.h"
#endif
#define MOVIESCENE_MovieSceneEvaluationHookSystem_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEvent_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvaluationHookEvent>();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvaluationHookEventContainer_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvaluationHookEventContainer>();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvaluationInstanceKey_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvaluationInstanceKey>();

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEvaluationHookSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneEvaluationHookSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEvaluationHookSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneEvaluationHookSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEvaluationHookSystem(UMovieSceneEvaluationHookSystem&&); \
	UMovieSceneEvaluationHookSystem(const UMovieSceneEvaluationHookSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEvaluationHookSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEvaluationHookSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEvaluationHookSystem) \
	MOVIESCENE_API virtual ~UMovieSceneEvaluationHookSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_80_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h_84_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEvaluationHookSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvaluationHookSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
