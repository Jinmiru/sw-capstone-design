// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneDynamicBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMovieSceneDynamicBindingResolveResult;
#ifdef MOVIESCENE_MovieSceneDynamicBinding_generated_h
#error "MovieSceneDynamicBinding.generated.h already included, missing '#pragma once' in MovieSceneDynamicBinding.h"
#endif
#define MOVIESCENE_MovieSceneDynamicBinding_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingPayloadVariable_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneDynamicBindingPayloadVariable>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneDynamicBinding_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneDynamicBinding>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveParams_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneDynamicBindingResolveParams>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneDynamicBindingResolveResult>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneDynamicBindingContainer_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneDynamicBindingContainer>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveToPlayerPawn);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary(); \
	friend struct Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics; \
public: \
	DECLARE_CLASS(UBuiltInDynamicBindingResolverLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UBuiltInDynamicBindingResolverLibrary)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UBuiltInDynamicBindingResolverLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuiltInDynamicBindingResolverLibrary(UBuiltInDynamicBindingResolverLibrary&&); \
	UBuiltInDynamicBindingResolverLibrary(const UBuiltInDynamicBindingResolverLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UBuiltInDynamicBindingResolverLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuiltInDynamicBindingResolverLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuiltInDynamicBindingResolverLibrary) \
	MOVIESCENE_API virtual ~UBuiltInDynamicBindingResolverLibrary();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_126_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UBuiltInDynamicBindingResolverLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneDynamicBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
