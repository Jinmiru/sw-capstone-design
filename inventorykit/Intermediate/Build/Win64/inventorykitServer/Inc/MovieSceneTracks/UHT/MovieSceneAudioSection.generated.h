// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneAudioSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAttenuation;
class USoundBase;
struct FFrameNumber;
#ifdef MOVIESCENETRACKS_MovieSceneAudioSection_generated_h
#error "MovieSceneAudioSection.generated.h already included, missing '#pragma once' in MovieSceneAudioSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneAudioSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetAttenuationSettings); \
	DECLARE_FUNCTION(execGetAttenuationSettings); \
	DECLARE_FUNCTION(execSetOverrideAttenuation); \
	DECLARE_FUNCTION(execGetOverrideAttenuation); \
	DECLARE_FUNCTION(execSetSuppressSubtitles); \
	DECLARE_FUNCTION(execGetSuppressSubtitles); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetLooping); \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execSetStartOffset); \
	DECLARE_FUNCTION(execGetSound); \
	DECLARE_FUNCTION(execSetSound);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAudioSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneAudioSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneAudioSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneAudioSection(UMovieSceneAudioSection&&); \
	UMovieSceneAudioSection(const UMovieSceneAudioSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneAudioSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_25_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_30_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneAudioSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
