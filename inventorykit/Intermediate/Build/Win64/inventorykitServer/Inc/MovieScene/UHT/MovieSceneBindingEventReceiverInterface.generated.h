// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneBindingEventReceiverInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSequencePlayer;
struct FMovieSceneObjectBindingID;
#ifdef MOVIESCENE_MovieSceneBindingEventReceiverInterface_generated_h
#error "MovieSceneBindingEventReceiverInterface.generated.h already included, missing '#pragma once' in MovieSceneBindingEventReceiverInterface.h"
#endif
#define MOVIESCENE_MovieSceneBindingEventReceiverInterface_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnObjectUnboundBySequencer); \
	DECLARE_FUNCTION(execOnObjectBoundBySequencer);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneBindingEventReceiverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneBindingEventReceiverInterface(UMovieSceneBindingEventReceiverInterface&&); \
	UMovieSceneBindingEventReceiverInterface(const UMovieSceneBindingEventReceiverInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBindingEventReceiverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingEventReceiverInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingEventReceiverInterface) \
	MOVIESCENE_API virtual ~UMovieSceneBindingEventReceiverInterface();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneBindingEventReceiverInterface(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingEventReceiverInterface_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingEventReceiverInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingEventReceiverInterface)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneBindingEventReceiverInterface() {} \
public: \
	typedef UMovieSceneBindingEventReceiverInterface UClassType; \
	typedef IMovieSceneBindingEventReceiverInterface ThisClass; \
	static void Execute_OnObjectBoundBySequencer(UObject* O, UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID); \
	static void Execute_OnObjectUnboundBySequencer(UObject* O, UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_19_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingEventReceiverInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingEventReceiverInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
