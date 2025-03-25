// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceAnimSequenceLink.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSEQUENCE_LevelSequenceAnimSequenceLink_generated_h
#error "LevelSequenceAnimSequenceLink.generated.h already included, missing '#pragma once' in LevelSequenceAnimSequenceLink.h"
#endif
#define LEVELSEQUENCE_LevelSequenceAnimSequenceLink_generated_h

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FLevelSequenceAnimSequenceLinkItem>();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_58_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceAnimSequenceLink(); \
	friend struct Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceAnimSequenceLink, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), LEVELSEQUENCE_API) \
	DECLARE_SERIALIZER(ULevelSequenceAnimSequenceLink)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API ULevelSequenceAnimSequenceLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceAnimSequenceLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceAnimSequenceLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceAnimSequenceLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelSequenceAnimSequenceLink(ULevelSequenceAnimSequenceLink&&); \
	ULevelSequenceAnimSequenceLink(const ULevelSequenceAnimSequenceLink&); \
public: \
	LEVELSEQUENCE_API virtual ~ULevelSequenceAnimSequenceLink();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_55_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_58_INCLASS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequenceAnimSequenceLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
