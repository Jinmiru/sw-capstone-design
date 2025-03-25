// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWorldPartitionRuntimeCellState : uint8;
struct FWorldPartitionStreamingQuerySource;
#ifdef ENGINE_WorldPartitionSubsystem_generated_h
#error "WorldPartitionSubsystem.generated.h already included, missing '#pragma once' in WorldPartitionSubsystem.h"
#endif
#define ENGINE_WorldPartitionSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAllStreamingCompleted); \
	DECLARE_FUNCTION(execIsStreamingCompleted);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionSubsystem(); \
	friend struct Z_Construct_UClass_UWorldPartitionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionSubsystem(UWorldPartitionSubsystem&&); \
	UWorldPartitionSubsystem(const UWorldPartitionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPartitionSubsystem) \
	ENGINE_API virtual ~UWorldPartitionSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_49_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
