// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionStreamingPolicy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionStreamingPolicy_generated_h
#error "WorldPartitionStreamingPolicy.generated.h already included, missing '#pragma once' in WorldPartitionStreamingPolicy.h"
#endif
#define ENGINE_WorldPartitionStreamingPolicy_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActivatedCells_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActivatedCells>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionStreamingPolicy(); \
	friend struct Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionStreamingPolicy, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionStreamingPolicy) \
	DECLARE_WITHIN(UWorldPartition)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionStreamingPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionStreamingPolicy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionStreamingPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionStreamingPolicy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionStreamingPolicy(UWorldPartitionStreamingPolicy&&); \
	UWorldPartitionStreamingPolicy(const UWorldPartitionStreamingPolicy&); \
public: \
	NO_API virtual ~UWorldPartitionStreamingPolicy();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_45_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_48_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionStreamingPolicy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
