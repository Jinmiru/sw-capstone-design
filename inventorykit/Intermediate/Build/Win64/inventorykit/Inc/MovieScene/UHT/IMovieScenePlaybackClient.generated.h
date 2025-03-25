// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMovieScenePlaybackClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieScenePlaybackClient_generated_h
#error "IMovieScenePlaybackClient.generated.h already included, missing '#pragma once' in IMovieScenePlaybackClient.h"
#endif
#define MOVIESCENE_IMovieScenePlaybackClient_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieScenePlaybackClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieScenePlaybackClient(UMovieScenePlaybackClient&&); \
	UMovieScenePlaybackClient(const UMovieScenePlaybackClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieScenePlaybackClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePlaybackClient); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePlaybackClient) \
	MOVIESCENE_API virtual ~UMovieScenePlaybackClient();


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieScenePlaybackClient(); \
	friend struct Z_Construct_UClass_UMovieScenePlaybackClient_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePlaybackClient, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieScenePlaybackClient)


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_20_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieScenePlaybackClient() {} \
public: \
	typedef UMovieScenePlaybackClient UClassType; \
	typedef IMovieScenePlaybackClient ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieScenePlaybackClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
