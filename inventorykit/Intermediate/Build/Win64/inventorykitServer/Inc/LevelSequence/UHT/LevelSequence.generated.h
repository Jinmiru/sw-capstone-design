// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef LEVELSEQUENCE_LevelSequence_generated_h
#error "LevelSequence.generated.h already included, missing '#pragma once' in LevelSequence.h"
#endif
#define LEVELSEQUENCE_LevelSequence_generated_h

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRemoveMetaDataByClass); \
	DECLARE_FUNCTION(execCopyMetaData); \
	DECLARE_FUNCTION(execFindOrAddMetaDataByClass); \
	DECLARE_FUNCTION(execFindMetaDataByClass);


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequence(); \
	friend struct Z_Construct_UClass_ULevelSequence_Statics; \
public: \
	DECLARE_CLASS(ULevelSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), LEVELSEQUENCE_API) \
	DECLARE_SERIALIZER(ULevelSequence) \
	virtual UObject* _getUObject() const override { return const_cast<ULevelSequence*>(this); }


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API ULevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelSequence(ULevelSequence&&); \
	ULevelSequence(const ULevelSequence&); \
public: \
	LEVELSEQUENCE_API virtual ~ULevelSequence();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_23_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_INCLASS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
