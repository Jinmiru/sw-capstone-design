// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneActorReferenceSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneActorReferenceSection_generated_h
#error "MovieSceneActorReferenceSection.generated.h already included, missing '#pragma once' in MovieSceneActorReferenceSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneActorReferenceSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneActorReferenceKey>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneChannel Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneActorReferenceData>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_189_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneActorReferenceSection(); \
	friend struct Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneActorReferenceSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneActorReferenceSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_189_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneActorReferenceSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneActorReferenceSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneActorReferenceSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneActorReferenceSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneActorReferenceSection(UMovieSceneActorReferenceSection&&); \
	UMovieSceneActorReferenceSection(const UMovieSceneActorReferenceSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneActorReferenceSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_185_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_189_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_189_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_189_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneActorReferenceSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
