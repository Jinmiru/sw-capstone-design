// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/IMovieSceneTransformOrigin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_IMovieSceneTransformOrigin_generated_h
#error "IMovieSceneTransformOrigin.generated.h already included, missing '#pragma once' in IMovieSceneTransformOrigin.h"
#endif
#define MOVIESCENETRACKS_IMovieSceneTransformOrigin_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneTransformOrigin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneTransformOrigin(UMovieSceneTransformOrigin&&); \
	UMovieSceneTransformOrigin(const UMovieSceneTransformOrigin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTransformOrigin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTransformOrigin); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTransformOrigin) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTransformOrigin();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneTransformOrigin(); \
	friend struct Z_Construct_UClass_UMovieSceneTransformOrigin_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTransformOrigin, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneTransformOrigin)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneTransformOrigin() {} \
public: \
	typedef UMovieSceneTransformOrigin UClassType; \
	typedef IMovieSceneTransformOrigin ThisClass; \
	MOVIESCENETRACKS_API static FTransform Execute_BP_GetTransformOrigin(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_11_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneTransformOrigin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
