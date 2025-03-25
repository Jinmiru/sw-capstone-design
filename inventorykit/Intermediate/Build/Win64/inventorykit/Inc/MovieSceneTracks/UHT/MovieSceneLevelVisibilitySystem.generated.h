// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneLevelVisibilitySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneLevelVisibilitySystem_generated_h
#error "MovieSceneLevelVisibilitySystem.generated.h already included, missing '#pragma once' in MovieSceneLevelVisibilitySystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneLevelVisibilitySystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilitySystem(); \
	friend struct Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneLevelVisibilitySystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilitySystem) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneLevelVisibilitySystem*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneLevelVisibilitySystem(UMovieSceneLevelVisibilitySystem&&); \
	UMovieSceneLevelVisibilitySystem(const UMovieSceneLevelVisibilitySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneLevelVisibilitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilitySystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilitySystem) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneLevelVisibilitySystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_72_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_79_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneLevelVisibilitySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
