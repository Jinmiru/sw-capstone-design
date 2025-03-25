// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneTrackTemplateProducer_generated_h
#error "IMovieSceneTrackTemplateProducer.generated.h already included, missing '#pragma once' in IMovieSceneTrackTemplateProducer.h"
#endif
#define MOVIESCENE_IMovieSceneTrackTemplateProducer_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneTrackTemplateProducer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneTrackTemplateProducer(UMovieSceneTrackTemplateProducer&&); \
	UMovieSceneTrackTemplateProducer(const UMovieSceneTrackTemplateProducer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneTrackTemplateProducer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTrackTemplateProducer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTrackTemplateProducer) \
	MOVIESCENE_API virtual ~UMovieSceneTrackTemplateProducer();


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_62_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneTrackTemplateProducer(); \
	friend struct Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTrackTemplateProducer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneTrackTemplateProducer)


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_62_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_62_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_62_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneTrackTemplateProducer() {} \
public: \
	typedef UMovieSceneTrackTemplateProducer UClassType; \
	typedef IMovieSceneTrackTemplateProducer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_58_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_62_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneTrackTemplateProducer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
