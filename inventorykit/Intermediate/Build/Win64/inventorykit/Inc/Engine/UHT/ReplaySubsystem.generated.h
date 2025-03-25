// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplaySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplaySubsystem_generated_h
#error "ReplaySubsystem.generated.h already included, missing '#pragma once' in ReplaySubsystem.h"
#endif
#define ENGINE_ReplaySubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestCheckpoint); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execGetReplayCurrentTime); \
	DECLARE_FUNCTION(execGetActiveReplayName);


#define FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplaySubsystem(); \
	friend struct Z_Construct_UClass_UReplaySubsystem_Statics; \
public: \
	DECLARE_CLASS(UReplaySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReplaySubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReplaySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReplaySubsystem(UReplaySubsystem&&); \
	UReplaySubsystem(const UReplaySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReplaySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplaySubsystem) \
	ENGINE_API virtual ~UReplaySubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplaySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
