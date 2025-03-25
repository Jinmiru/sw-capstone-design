// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/MovieSceneBoundObjectInstantiator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBoundObjectInstantiator_generated_h
#error "MovieSceneBoundObjectInstantiator.generated.h already included, missing '#pragma once' in MovieSceneBoundObjectInstantiator.h"
#endif
#define MOVIESCENE_MovieSceneBoundObjectInstantiator_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneGenericBoundObjectInstantiator(); \
	friend struct Z_Construct_UClass_UMovieSceneGenericBoundObjectInstantiator_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneGenericBoundObjectInstantiator, UMovieSceneEntityInstantiatorSystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneGenericBoundObjectInstantiator)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneGenericBoundObjectInstantiator(UMovieSceneGenericBoundObjectInstantiator&&); \
	UMovieSceneGenericBoundObjectInstantiator(const UMovieSceneGenericBoundObjectInstantiator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneGenericBoundObjectInstantiator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneGenericBoundObjectInstantiator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneGenericBoundObjectInstantiator) \
	MOVIESCENE_API virtual ~UMovieSceneGenericBoundObjectInstantiator();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneGenericBoundObjectInstantiator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundObjectInstantiator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
