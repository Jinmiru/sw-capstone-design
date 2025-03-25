// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneObjectPropertySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneObjectPropertySystem_generated_h
#error "MovieSceneObjectPropertySystem.generated.h already included, missing '#pragma once' in MovieSceneObjectPropertySystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneObjectPropertySystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneObjectPropertySystem_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneObjectPropertySystem(); \
	friend struct Z_Construct_UClass_UMovieSceneObjectPropertySystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneObjectPropertySystem, UMovieScenePropertySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneObjectPropertySystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneObjectPropertySystem_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneObjectPropertySystem(UMovieSceneObjectPropertySystem&&); \
	UMovieSceneObjectPropertySystem(const UMovieSceneObjectPropertySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneObjectPropertySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneObjectPropertySystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneObjectPropertySystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneObjectPropertySystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneObjectPropertySystem_h_8_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneObjectPropertySystem_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneObjectPropertySystem_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneObjectPropertySystem_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneObjectPropertySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneObjectPropertySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
