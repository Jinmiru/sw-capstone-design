// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneEvalTimeSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEvalTimeSystem_generated_h
#error "MovieSceneEvalTimeSystem.generated.h already included, missing '#pragma once' in MovieSceneEvalTimeSystem.h"
#endif
#define MOVIESCENE_MovieSceneEvalTimeSystem_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEvalTimeSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEvalTimeSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneEvalTimeSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEvalTimeSystem(UMovieSceneEvalTimeSystem&&); \
	UMovieSceneEvalTimeSystem(const UMovieSceneEvalTimeSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEvalTimeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEvalTimeSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEvalTimeSystem) \
	MOVIESCENE_API virtual ~UMovieSceneEvalTimeSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_27_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEvalTimeSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
