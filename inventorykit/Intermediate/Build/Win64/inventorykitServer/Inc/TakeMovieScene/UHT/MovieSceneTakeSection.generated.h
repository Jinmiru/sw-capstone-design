// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneTakeSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TAKEMOVIESCENE_MovieSceneTakeSection_generated_h
#error "MovieSceneTakeSection.generated.h already included, missing '#pragma once' in MovieSceneTakeSection.h"
#endif
#define TAKEMOVIESCENE_MovieSceneTakeSection_generated_h

#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTakeSection, TAKEMOVIESCENE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneTakeSection(); \
	friend struct Z_Construct_UClass_UMovieSceneTakeSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTakeSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeMovieScene"), TAKEMOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTakeSection) \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TAKEMOVIESCENE_API UMovieSceneTakeSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTakeSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TAKEMOVIESCENE_API, UMovieSceneTakeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTakeSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneTakeSection(UMovieSceneTakeSection&&); \
	UMovieSceneTakeSection(const UMovieSceneTakeSection&); \
public: \
	TAKEMOVIESCENE_API virtual ~UMovieSceneTakeSection();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKEMOVIESCENE_API UClass* StaticClass<class UMovieSceneTakeSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
