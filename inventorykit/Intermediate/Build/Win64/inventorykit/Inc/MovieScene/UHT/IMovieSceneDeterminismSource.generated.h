// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compilation/IMovieSceneDeterminismSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneDeterminismSource_generated_h
#error "IMovieSceneDeterminismSource.generated.h already included, missing '#pragma once' in IMovieSceneDeterminismSource.h"
#endif
#define MOVIESCENE_IMovieSceneDeterminismSource_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneDeterminismData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneDeterminismData>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneDeterminismSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovieSceneDeterminismSource(UMovieSceneDeterminismSource&&); \
	UMovieSceneDeterminismSource(const UMovieSceneDeterminismSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneDeterminismSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDeterminismSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDeterminismSource) \
	MOVIESCENE_API virtual ~UMovieSceneDeterminismSource();


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneDeterminismSource(); \
	friend struct Z_Construct_UClass_UMovieSceneDeterminismSource_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneDeterminismSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneDeterminismSource)


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_37_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_37_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneDeterminismSource() {} \
public: \
	typedef UMovieSceneDeterminismSource UClassType; \
	typedef IMovieSceneDeterminismSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_33_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneDeterminismSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneDeterminismSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
