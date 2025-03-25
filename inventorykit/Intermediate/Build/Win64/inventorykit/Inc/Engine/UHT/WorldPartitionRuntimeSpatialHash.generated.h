// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeSpatialHash.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionRuntimeSpatialHash_generated_h
#error "WorldPartitionRuntimeSpatialHash.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeSpatialHash.h"
#endif
#define ENGINE_WorldPartitionRuntimeSpatialHash_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialHashSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpatialHashSettings>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLayerCell_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpatialHashStreamingGridLayerCell>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialHashStreamingGridLevel_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpatialHashStreamingGridLevel>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialHashStreamingGrid_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpatialHashStreamingGrid>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialHashRuntimeGrid_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpatialHashRuntimeGrid>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_280_INCLASS \
private: \
	static void StaticRegisterNativesASpatialHashRuntimeGridInfo(); \
	friend struct Z_Construct_UClass_ASpatialHashRuntimeGridInfo_Statics; \
public: \
	DECLARE_CLASS(ASpatialHashRuntimeGridInfo, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ASpatialHashRuntimeGridInfo)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_280_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialHashRuntimeGridInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialHashRuntimeGridInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialHashRuntimeGridInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialHashRuntimeGridInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpatialHashRuntimeGridInfo(ASpatialHashRuntimeGridInfo&&); \
	ASpatialHashRuntimeGridInfo(const ASpatialHashRuntimeGridInfo&); \
public: \
	NO_API virtual ~ASpatialHashRuntimeGridInfo();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_277_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_280_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_280_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_280_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASpatialHashRuntimeGridInfo>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_290_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject(); \
	friend struct Z_Construct_UClass_URuntimeSpatialHashExternalStreamingObject_Statics; \
public: \
	DECLARE_CLASS(URuntimeSpatialHashExternalStreamingObject, URuntimeHashExternalStreamingObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URuntimeSpatialHashExternalStreamingObject)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_290_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimeSpatialHashExternalStreamingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeSpatialHashExternalStreamingObject(URuntimeSpatialHashExternalStreamingObject&&); \
	URuntimeSpatialHashExternalStreamingObject(const URuntimeSpatialHashExternalStreamingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeSpatialHashExternalStreamingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeSpatialHashExternalStreamingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeSpatialHashExternalStreamingObject) \
	ENGINE_API virtual ~URuntimeSpatialHashExternalStreamingObject();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_287_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_290_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_290_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_290_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeSpatialHashExternalStreamingObject>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_304_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionRuntimeSpatialHash, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_304_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeSpatialHash(); \
	friend struct Z_Construct_UClass_UWorldPartitionRuntimeSpatialHash_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionRuntimeSpatialHash, UWorldPartitionRuntimeHash, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeSpatialHash) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_304_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_304_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeSpatialHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeSpatialHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeSpatialHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeSpatialHash); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeSpatialHash(UWorldPartitionRuntimeSpatialHash&&); \
	UWorldPartitionRuntimeSpatialHash(const UWorldPartitionRuntimeSpatialHash&); \
public: \
	ENGINE_API virtual ~UWorldPartitionRuntimeSpatialHash();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_301_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_304_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_304_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h_304_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionRuntimeSpatialHash>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHash_h


#define FOREACH_ENUM_EWORLDPARTITIONCVARPROJECTDEFAULTOVERRIDE(op) \
	op(EWorldPartitionCVarProjectDefaultOverride::ProjectDefault) \
	op(EWorldPartitionCVarProjectDefaultOverride::Disabled) \
	op(EWorldPartitionCVarProjectDefaultOverride::Enabled) 

enum class EWorldPartitionCVarProjectDefaultOverride : uint8;
template<> struct TIsUEnumClass<EWorldPartitionCVarProjectDefaultOverride> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionCVarProjectDefaultOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
