// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrackInstances/MovieSceneCameraCutTrackInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneCameraCutTrackInstance_generated_h
#error "MovieSceneCameraCutTrackInstance.generated.h already included, missing '#pragma once' in MovieSceneCameraCutTrackInstance.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCameraCutTrackInstance_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCameraCutTrackInstance(); \
	friend struct Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCameraCutTrackInstance, UMovieSceneTrackInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCameraCutTrackInstance)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCameraCutTrackInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneCameraCutTrackInstance(UMovieSceneCameraCutTrackInstance&&); \
	UMovieSceneCameraCutTrackInstance(const UMovieSceneCameraCutTrackInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCameraCutTrackInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCameraCutTrackInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCameraCutTrackInstance) \
	NO_API virtual ~UMovieSceneCameraCutTrackInstance();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_42_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneCameraCutTrackInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_TrackInstances_MovieSceneCameraCutTrackInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
