// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_MovieSceneNiagaraParameterTrack_generated_h
#error "MovieSceneNiagaraParameterTrack.generated.h already included, missing '#pragma once' in MovieSceneNiagaraParameterTrack.h"
#endif
#define NIAGARA_MovieSceneNiagaraParameterTrack_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraParameterTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNiagaraParameterTrack, UMovieSceneNiagaraTrack, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraParameterTrack)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UMovieSceneNiagaraParameterTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraParameterTrack(UMovieSceneNiagaraParameterTrack&&); \
	UMovieSceneNiagaraParameterTrack(const UMovieSceneNiagaraParameterTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UMovieSceneNiagaraParameterTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraParameterTrack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneNiagaraParameterTrack) \
	NIAGARA_API virtual ~UMovieSceneNiagaraParameterTrack();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_11_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UMovieSceneNiagaraParameterTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
