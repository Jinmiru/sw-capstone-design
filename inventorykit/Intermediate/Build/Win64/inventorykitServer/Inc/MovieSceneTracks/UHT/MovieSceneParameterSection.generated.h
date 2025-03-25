// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneParameterSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
struct FLinearColor;
#ifdef MOVIESCENETRACKS_MovieSceneParameterSection_generated_h
#error "MovieSceneParameterSection.generated.h already included, missing '#pragma once' in MovieSceneParameterSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParameterSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSectionExtender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneParameterSectionExtender(UMovieSceneParameterSectionExtender&&); \
	UMovieSceneParameterSectionExtender(const UMovieSceneParameterSectionExtender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParameterSectionExtender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSectionExtender); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSectionExtender) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneParameterSectionExtender();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSectionExtender(); \
	friend struct Z_Construct_UClass_UMovieSceneParameterSectionExtender_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParameterSectionExtender, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParameterSectionExtender)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneParameterSectionExtender() {} \
public: \
	typedef UMovieSceneParameterSectionExtender UClassType; \
	typedef IMovieSceneParameterSectionExtender ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneParameterSectionExtender>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FBoolParameterNameAndCurve>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FScalarParameterNameAndCurve>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FVector2DParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FVectorParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FColorParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_305_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FTransformParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetParameterNames); \
	DECLARE_FUNCTION(execRemoveTransformParameter); \
	DECLARE_FUNCTION(execRemoveColorParameter); \
	DECLARE_FUNCTION(execRemoveVectorParameter); \
	DECLARE_FUNCTION(execRemoveVector2DParameter); \
	DECLARE_FUNCTION(execRemoveBoolParameter); \
	DECLARE_FUNCTION(execRemoveScalarParameter); \
	DECLARE_FUNCTION(execAddTransformParameterKey); \
	DECLARE_FUNCTION(execAddColorParameterKey); \
	DECLARE_FUNCTION(execAddVectorParameterKey); \
	DECLARE_FUNCTION(execAddVector2DParameterKey); \
	DECLARE_FUNCTION(execAddBoolParameterKey); \
	DECLARE_FUNCTION(execAddScalarParameterKey);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneParameterSection, MOVIESCENETRACKS_API)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSection(); \
	friend struct Z_Construct_UClass_UMovieSceneParameterSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParameterSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneParameterSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParameterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneParameterSection(UMovieSceneParameterSection&&); \
	UMovieSceneParameterSection(const UMovieSceneParameterSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneParameterSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_332_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_337_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneParameterSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
