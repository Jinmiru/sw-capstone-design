// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneComponentMaterialParameterSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
struct FLinearColor;
struct FMaterialParameterInfo;
#ifdef MOVIESCENETRACKS_MovieSceneComponentMaterialParameterSection_generated_h
#error "MovieSceneComponentMaterialParameterSection.generated.h already included, missing '#pragma once' in MovieSceneComponentMaterialParameterSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneComponentMaterialParameterSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FScalarMaterialParameterInfoAndCurve>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FColorMaterialParameterInfoAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_101_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveColorParameter); \
	DECLARE_FUNCTION(execRemoveScalarParameter); \
	DECLARE_FUNCTION(execAddColorParameterKey); \
	DECLARE_FUNCTION(execAddScalarParameterKey);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneComponentMaterialParameterSection(); \
	friend struct Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneComponentMaterialParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneComponentMaterialParameterSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneComponentMaterialParameterSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneComponentMaterialParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComponentMaterialParameterSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneComponentMaterialParameterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComponentMaterialParameterSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneComponentMaterialParameterSection(UMovieSceneComponentMaterialParameterSection&&); \
	UMovieSceneComponentMaterialParameterSection(const UMovieSceneComponentMaterialParameterSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneComponentMaterialParameterSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_96_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_101_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_101_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneComponentMaterialParameterSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
