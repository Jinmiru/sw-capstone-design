// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/IMovieSceneChannelOverrideProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneChannelOverrideProvider_generated_h
#error "IMovieSceneChannelOverrideProvider.generated.h already included, missing '#pragma once' in IMovieSceneChannelOverrideProvider.h"
#endif
#define MOVIESCENE_IMovieSceneChannelOverrideProvider_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneChannelOverrideProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneChannelOverrideProvider(UMovieSceneChannelOverrideProvider&&); \
	UMovieSceneChannelOverrideProvider(const UMovieSceneChannelOverrideProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneChannelOverrideProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneChannelOverrideProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneChannelOverrideProvider) \
	MOVIESCENE_API virtual ~UMovieSceneChannelOverrideProvider();


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_143_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneChannelOverrideProvider(); \
	friend struct Z_Construct_UClass_UMovieSceneChannelOverrideProvider_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneChannelOverrideProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneChannelOverrideProvider)


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_143_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_143_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_143_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_143_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneChannelOverrideProvider() {} \
public: \
	typedef UMovieSceneChannelOverrideProvider UClassType; \
	typedef IMovieSceneChannelOverrideProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_138_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h_143_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneChannelOverrideProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Channels_IMovieSceneChannelOverrideProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
