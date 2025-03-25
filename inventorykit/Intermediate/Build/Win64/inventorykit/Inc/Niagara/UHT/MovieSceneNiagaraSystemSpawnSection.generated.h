// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/MovieSceneNiagaraSystemSpawnSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_MovieSceneNiagaraSystemSpawnSection_generated_h
#error "MovieSceneNiagaraSystemSpawnSection.generated.h already included, missing '#pragma once' in MovieSceneNiagaraSystemSpawnSection.h"
#endif
#define NIAGARA_MovieSceneNiagaraSystemSpawnSection_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneNiagaraSystemSpawnSection(); \
	friend struct Z_Construct_UClass_UMovieSceneNiagaraSystemSpawnSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneNiagaraSystemSpawnSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UMovieSceneNiagaraSystemSpawnSection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneNiagaraSystemSpawnSection(UMovieSceneNiagaraSystemSpawnSection&&); \
	UMovieSceneNiagaraSystemSpawnSection(const UMovieSceneNiagaraSystemSpawnSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UMovieSceneNiagaraSystemSpawnSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneNiagaraSystemSpawnSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneNiagaraSystemSpawnSection) \
	NIAGARA_API virtual ~UMovieSceneNiagaraSystemSpawnSection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_40_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UMovieSceneNiagaraSystemSpawnSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemSpawnSection_h


#define FOREACH_ENUM_ENIAGARASYSTEMSPAWNSECTIONSTARTBEHAVIOR(op) \
	op(ENiagaraSystemSpawnSectionStartBehavior::Activate) 

enum class ENiagaraSystemSpawnSectionStartBehavior;
template<> struct TIsUEnumClass<ENiagaraSystemSpawnSectionStartBehavior> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionStartBehavior>();

#define FOREACH_ENUM_ENIAGARASYSTEMSPAWNSECTIONEVALUATEBEHAVIOR(op) \
	op(ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive) \
	op(ENiagaraSystemSpawnSectionEvaluateBehavior::None) 

enum class ENiagaraSystemSpawnSectionEvaluateBehavior;
template<> struct TIsUEnumClass<ENiagaraSystemSpawnSectionEvaluateBehavior> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEvaluateBehavior>();

#define FOREACH_ENUM_ENIAGARASYSTEMSPAWNSECTIONENDBEHAVIOR(op) \
	op(ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive) \
	op(ENiagaraSystemSpawnSectionEndBehavior::Deactivate) \
	op(ENiagaraSystemSpawnSectionEndBehavior::None) 

enum class ENiagaraSystemSpawnSectionEndBehavior;
template<> struct TIsUEnumClass<ENiagaraSystemSpawnSectionEndBehavior> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemSpawnSectionEndBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
