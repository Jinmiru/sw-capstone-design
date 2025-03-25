// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MovieSceneMarginSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_MovieSceneMarginSection_generated_h
#error "MovieSceneMarginSection.generated.h already included, missing '#pragma once' in MovieSceneMarginSection.h"
#endif
#define UMG_MovieSceneMarginSection_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneMarginSection(); \
	friend struct Z_Construct_UClass_UMovieSceneMarginSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneMarginSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UMovieSceneMarginSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneMarginSection*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UMovieSceneMarginSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMarginSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMovieSceneMarginSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMarginSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneMarginSection(UMovieSceneMarginSection&&); \
	UMovieSceneMarginSection(const UMovieSceneMarginSection&); \
public: \
	UMG_API virtual ~UMovieSceneMarginSection();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMovieSceneMarginSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
