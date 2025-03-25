// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/RuntimeHashSet/WorldPartitionRuntimeHashSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionRuntimeHashSet_generated_h
#error "WorldPartitionRuntimeHashSet.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeHashSet.h"
#endif
#define ENGINE_WorldPartitionRuntimeHashSet_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimePartitionHLODSetup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimePartitionHLODSetup>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimePartitionDesc_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimePartitionDesc>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimePartitionStreamingData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimePartitionStreamingData>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeHashSetExternalStreamingObject(); \
	friend struct Z_Construct_UClass_URuntimeHashSetExternalStreamingObject_Statics; \
public: \
	DECLARE_CLASS(URuntimeHashSetExternalStreamingObject, URuntimeHashExternalStreamingObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeHashSetExternalStreamingObject)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeHashSetExternalStreamingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeHashSetExternalStreamingObject(URuntimeHashSetExternalStreamingObject&&); \
	URuntimeHashSetExternalStreamingObject(const URuntimeHashSetExternalStreamingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeHashSetExternalStreamingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeHashSetExternalStreamingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeHashSetExternalStreamingObject) \
	NO_API virtual ~URuntimeHashSetExternalStreamingObject();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_101_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeHashSetExternalStreamingObject>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeHashSet(); \
	friend struct Z_Construct_UClass_UWorldPartitionRuntimeHashSet_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionRuntimeHashSet, UWorldPartitionRuntimeHash, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeHashSet)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeHashSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeHashSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeHashSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeHashSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeHashSet(UWorldPartitionRuntimeHashSet&&); \
	UWorldPartitionRuntimeHashSet(const UWorldPartitionRuntimeHashSet&); \
public: \
	ENGINE_API virtual ~UWorldPartitionRuntimeHashSet();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_118_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_121_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionRuntimeHashSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_WorldPartitionRuntimeHashSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
