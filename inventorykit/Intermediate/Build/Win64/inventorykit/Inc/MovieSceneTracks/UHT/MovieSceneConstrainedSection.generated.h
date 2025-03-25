// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneConstrainedSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneConstrainedSection_generated_h
#error "MovieSceneConstrainedSection.generated.h already included, missing '#pragma once' in MovieSceneConstrainedSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneConstrainedSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneConstrainedSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneConstrainedSection(UMovieSceneConstrainedSection&&); \
	UMovieSceneConstrainedSection(const UMovieSceneConstrainedSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneConstrainedSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneConstrainedSection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneConstrainedSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneConstrainedSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneConstrainedSection(); \
	friend struct Z_Construct_UClass_UMovieSceneConstrainedSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneConstrainedSection, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneConstrainedSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneConstrainedSection() {} \
public: \
	typedef UMovieSceneConstrainedSection UClassType; \
	typedef IMovieSceneConstrainedSection ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneConstrainedSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneConstrainedSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
