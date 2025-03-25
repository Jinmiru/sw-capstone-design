// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneEventSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEventSection_generated_h
#error "MovieSceneEventSection.generated.h already included, missing '#pragma once' in MovieSceneEventSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneEventParameters>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventPayload_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FEventPayload>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneChannel Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneEventSectionData>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventSection(); \
	friend struct Z_Construct_UClass_UMovieSceneEventSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_238_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneEventSection(UMovieSceneEventSection&&); \
	UMovieSceneEventSection(const UMovieSceneEventSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneEventSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEventSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_234_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_238_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneEventSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
