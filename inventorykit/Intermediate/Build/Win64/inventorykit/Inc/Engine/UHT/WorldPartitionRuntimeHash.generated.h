// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeHash.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionRuntimeHash_generated_h
#error "WorldPartitionRuntimeHash.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeHash.h"
#endif
#define ENGINE_WorldPartitionRuntimeHash_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellStreamingData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionRuntimeCellStreamingData>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeHashExternalStreamingObjectBase(); \
	friend struct Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics; \
public: \
	DECLARE_CLASS(URuntimeHashExternalStreamingObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URuntimeHashExternalStreamingObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeHashExternalStreamingObjectBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimeHashExternalStreamingObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeHashExternalStreamingObjectBase(URuntimeHashExternalStreamingObjectBase&&); \
	URuntimeHashExternalStreamingObjectBase(const URuntimeHashExternalStreamingObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeHashExternalStreamingObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeHashExternalStreamingObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeHashExternalStreamingObjectBase) \
	ENGINE_API virtual ~URuntimeHashExternalStreamingObjectBase();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_52_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeHashExternalStreamingObjectBase>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeHash(); \
	friend struct Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionRuntimeHash, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeHash) \
	DECLARE_WITHIN(UWorldPartition) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeHash); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeHash(UWorldPartitionRuntimeHash&&); \
	UWorldPartitionRuntimeHash(const UWorldPartitionRuntimeHash&); \
public: \
	ENGINE_API virtual ~UWorldPartitionRuntimeHash();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_148_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_151_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionRuntimeHash>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h


#define FOREACH_ENUM_EWORLDPARTITIONSTREAMINGPERFORMANCE(op) \
	op(EWorldPartitionStreamingPerformance::Good) \
	op(EWorldPartitionStreamingPerformance::Slow) \
	op(EWorldPartitionStreamingPerformance::Critical) 

enum class EWorldPartitionStreamingPerformance : uint8;
template<> struct TIsUEnumClass<EWorldPartitionStreamingPerformance> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionStreamingPerformance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
