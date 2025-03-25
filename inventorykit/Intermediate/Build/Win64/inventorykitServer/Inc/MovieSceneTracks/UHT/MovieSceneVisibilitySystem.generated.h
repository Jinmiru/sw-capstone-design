// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneVisibilitySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneVisibilitySystem_generated_h
#error "MovieSceneVisibilitySystem.generated.h already included, missing '#pragma once' in MovieSceneVisibilitySystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneVisibilitySystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneVisibilitySystem(); \
	friend struct Z_Construct_UClass_UMovieSceneVisibilitySystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneVisibilitySystem, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneVisibilitySystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneVisibilitySystem(UMovieSceneVisibilitySystem&&); \
	UMovieSceneVisibilitySystem(const UMovieSceneVisibilitySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneVisibilitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneVisibilitySystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneVisibilitySystem) \
	NO_API virtual ~UMovieSceneVisibilitySystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneVisibilitySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneVisibilitySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
