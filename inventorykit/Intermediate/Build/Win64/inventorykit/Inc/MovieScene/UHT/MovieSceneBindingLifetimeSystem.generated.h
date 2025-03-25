// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneBindingLifetimeSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBindingLifetimeSystem_generated_h
#error "MovieSceneBindingLifetimeSystem.generated.h already included, missing '#pragma once' in MovieSceneBindingLifetimeSystem.h"
#endif
#define MOVIESCENE_MovieSceneBindingLifetimeSystem_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingLifetimeSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingLifetimeSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingLifetimeSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingLifetimeSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBindingLifetimeSystem(UMovieSceneBindingLifetimeSystem&&); \
	UMovieSceneBindingLifetimeSystem(const UMovieSceneBindingLifetimeSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingLifetimeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingLifetimeSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingLifetimeSystem) \
	MOVIESCENE_API virtual ~UMovieSceneBindingLifetimeSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_16_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingLifetimeSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBindingLifetimeSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
