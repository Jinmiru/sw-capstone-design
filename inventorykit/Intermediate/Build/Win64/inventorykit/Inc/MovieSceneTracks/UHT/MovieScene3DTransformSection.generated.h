// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieScene3DTransformSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h
#error "MovieScene3DTransformSection.generated.h already included, missing '#pragma once' in MovieScene3DTransformSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DTransformSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DLocationKeyStruct>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DRotationKeyStruct>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DScaleKeyStruct>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieScene3DTransformKeyStruct>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneTransformMask>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSectionConstraints(); \
	friend struct Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DTransformSectionConstraints, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSectionConstraints)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSectionConstraints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScene3DTransformSectionConstraints(UMovieScene3DTransformSectionConstraints&&); \
	UMovieScene3DTransformSectionConstraints(const UMovieScene3DTransformSectionConstraints&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSectionConstraints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSectionConstraints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSectionConstraints) \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DTransformSectionConstraints();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_194_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_197_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScene3DTransformSectionConstraints>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DTransformSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DTransformSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DTransformSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DTransformSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieScene3DTransformSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DTransformSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DTransformSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DTransformSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DTransformSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScene3DTransformSection(UMovieScene3DTransformSection&&); \
	UMovieScene3DTransformSection(const UMovieScene3DTransformSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DTransformSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_214_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_221_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScene3DTransformSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h


#define FOREACH_ENUM_ESHOW3DTRAJECTORY(op) \
	op(EShow3DTrajectory::EST_OnlyWhenSelected) \
	op(EShow3DTrajectory::EST_Always) \
	op(EShow3DTrajectory::EST_Never) 

enum class EShow3DTrajectory : uint8;
template<> struct TIsUEnumClass<EShow3DTrajectory> { enum { Value = true }; };
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EShow3DTrajectory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
