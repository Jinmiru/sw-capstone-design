// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequenceLevelSequenceLink.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_AnimSequenceLevelSequenceLink_generated_h
#error "AnimSequenceLevelSequenceLink.generated.h already included, missing '#pragma once' in AnimSequenceLevelSequenceLink.h"
#endif
#define LEVELSEQUENCE_AnimSequenceLevelSequenceLink_generated_h

#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceLevelSequenceLink(); \
	friend struct Z_Construct_UClass_UAnimSequenceLevelSequenceLink_Statics; \
public: \
	DECLARE_CLASS(UAnimSequenceLevelSequenceLink, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), LEVELSEQUENCE_API) \
	DECLARE_SERIALIZER(UAnimSequenceLevelSequenceLink)


#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API UAnimSequenceLevelSequenceLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceLevelSequenceLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, UAnimSequenceLevelSequenceLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceLevelSequenceLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimSequenceLevelSequenceLink(UAnimSequenceLevelSequenceLink&&); \
	UAnimSequenceLevelSequenceLink(const UAnimSequenceLevelSequenceLink&); \
public: \
	LEVELSEQUENCE_API virtual ~UAnimSequenceLevelSequenceLink();


#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_10_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_INCLASS \
	FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class UAnimSequenceLevelSequenceLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_AnimSequenceLevelSequenceLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
