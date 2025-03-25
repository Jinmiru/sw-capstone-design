// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneLevelVisibilitySection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELevelVisibility : uint8;
#ifdef MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h
#error "MovieSceneLevelVisibilitySection.generated.h already included, missing '#pragma once' in MovieSceneLevelVisibilitySection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLevelNames); \
	DECLARE_FUNCTION(execGetLevelNames); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilitySection(); \
	friend struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneLevelVisibilitySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilitySection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneLevelVisibilitySection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneLevelVisibilitySection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilitySection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneLevelVisibilitySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilitySection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneLevelVisibilitySection(UMovieSceneLevelVisibilitySection&&); \
	UMovieSceneLevelVisibilitySection(const UMovieSceneLevelVisibilitySection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneLevelVisibilitySection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_30_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneLevelVisibilitySection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h


#define FOREACH_ENUM_ELEVELVISIBILITY(op) \
	op(ELevelVisibility::Visible) \
	op(ELevelVisibility::Hidden) 

enum class ELevelVisibility : uint8;
template<> struct TIsUEnumClass<ELevelVisibility> { enum { Value = true }; };
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<ELevelVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
