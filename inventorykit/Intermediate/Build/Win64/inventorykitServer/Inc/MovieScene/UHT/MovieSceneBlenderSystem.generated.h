// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneBlenderSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBlenderSystem_generated_h
#error "MovieSceneBlenderSystem.generated.h already included, missing '#pragma once' in MovieSceneBlenderSystem.h"
#endif
#define MOVIESCENE_MovieSceneBlenderSystem_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBlenderSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneBlenderSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBlenderSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBlenderSystem)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBlenderSystem(UMovieSceneBlenderSystem&&); \
	UMovieSceneBlenderSystem(const UMovieSceneBlenderSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBlenderSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBlenderSystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBlenderSystem) \
	MOVIESCENE_API virtual ~UMovieSceneBlenderSystem();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_43_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBlenderSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBlenderSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
