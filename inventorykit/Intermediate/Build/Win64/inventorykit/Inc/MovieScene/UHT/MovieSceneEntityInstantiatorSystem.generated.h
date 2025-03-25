// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneEntityInstantiatorSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEntityInstantiatorSystem_generated_h
#error "MovieSceneEntityInstantiatorSystem.generated.h already included, missing '#pragma once' in MovieSceneEntityInstantiatorSystem.h"
#endif
#define MOVIESCENE_MovieSceneEntityInstantiatorSystem_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEntityInstantiatorSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEntityInstantiatorSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneEntityInstantiatorSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEntityInstantiatorSystem(UMovieSceneEntityInstantiatorSystem&&); \
	UMovieSceneEntityInstantiatorSystem(const UMovieSceneEntityInstantiatorSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneEntityInstantiatorSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityInstantiatorSystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityInstantiatorSystem) \
	MOVIESCENE_API virtual ~UMovieSceneEntityInstantiatorSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEntityInstantiatorSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
