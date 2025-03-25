// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneControlRigParameterTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_MovieSceneControlRigParameterTrack_generated_h
#error "MovieSceneControlRigParameterTrack.generated.h already included, missing '#pragma once' in MovieSceneControlRigParameterTrack.h"
#endif
#define CONTROLRIG_MovieSceneControlRigParameterTrack_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRotationOrder_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRotationOrder>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneControlRigParameterTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneControlRigParameterTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), CONTROLRIG_API) \
	DECLARE_SERIALIZER(UMovieSceneControlRigParameterTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneControlRigParameterTrack*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UMovieSceneControlRigParameterTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneControlRigParameterTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UMovieSceneControlRigParameterTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneControlRigParameterTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneControlRigParameterTrack(UMovieSceneControlRigParameterTrack&&); \
	UMovieSceneControlRigParameterTrack(const UMovieSceneControlRigParameterTrack&); \
public: \
	CONTROLRIG_API virtual ~UMovieSceneControlRigParameterTrack();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_39_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_45_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UMovieSceneControlRigParameterTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
