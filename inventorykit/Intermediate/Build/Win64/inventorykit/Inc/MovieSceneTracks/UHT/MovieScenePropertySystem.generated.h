// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieScenePropertySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScenePropertySystem_generated_h
#error "MovieScenePropertySystem.generated.h already included, missing '#pragma once' in MovieScenePropertySystem.h"
#endif
#define MOVIESCENETRACKS_MovieScenePropertySystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePropertySystem(); \
	friend struct Z_Construct_UClass_UMovieScenePropertySystem_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePropertySystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScenePropertySystem) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScenePropertySystem*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScenePropertySystem(UMovieScenePropertySystem&&); \
	UMovieScenePropertySystem(const UMovieScenePropertySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePropertySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertySystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertySystem) \
	MOVIESCENETRACKS_API virtual ~UMovieScenePropertySystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScenePropertySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePropertySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
