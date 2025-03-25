// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MovieSceneSlomoSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneSlomoSystem_generated_h
#error "MovieSceneSlomoSystem.generated.h already included, missing '#pragma once' in MovieSceneSlomoSystem.h"
#endif
#define MOVIESCENETRACKS_MovieSceneSlomoSystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneSlomoSystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSlomoSystem(); \
	friend struct Z_Construct_UClass_UMovieSceneSlomoSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSlomoSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSlomoSystem) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneSlomoSystem*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneSlomoSystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneSlomoSystem(UMovieSceneSlomoSystem&&); \
	UMovieSceneSlomoSystem(const UMovieSceneSlomoSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSlomoSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSlomoSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSlomoSystem) \
	NO_API virtual ~UMovieSceneSlomoSystem();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneSlomoSystem_h_19_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneSlomoSystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneSlomoSystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneSlomoSystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneSlomoSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneSlomoSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
