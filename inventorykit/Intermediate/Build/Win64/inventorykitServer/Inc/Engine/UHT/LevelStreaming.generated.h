// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelStreaming.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelScriptActor;
class ULevel;
class ULevelStreaming;
#ifdef ENGINE_LevelStreaming_generated_h
#error "LevelStreaming.generated.h already included, missing '#pragma once' in LevelStreaming.h"
#endif
#define ENGINE_LevelStreaming_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_105_DELEGATE \
ENGINE_API void FLevelStreamingLoadedStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingLoadedStatus);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_106_DELEGATE \
ENGINE_API void FLevelStreamingVisibilityStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingVisibilityStatus);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLevelScriptActor); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execIsStreamingStatePending); \
	DECLARE_FUNCTION(execIsLevelLoaded); \
	DECLARE_FUNCTION(execIsLevelVisible); \
	DECLARE_FUNCTION(execGetLoadedLevel); \
	DECLARE_FUNCTION(execShouldBeLoaded); \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName); \
	DECLARE_FUNCTION(execSetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execGetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetLevelLODIndex); \
	DECLARE_FUNCTION(execSetShouldBeLoaded); \
	DECLARE_FUNCTION(execSetShouldBeVisible);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelStreaming, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend struct Z_Construct_UClass_ULevelStreaming_Statics; \
public: \
	DECLARE_CLASS(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorld)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreaming); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelStreaming(ULevelStreaming&&); \
	ULevelStreaming(const ULevelStreaming&); \
public: \
	ENGINE_API virtual ~ULevelStreaming();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_135_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelStreaming>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
