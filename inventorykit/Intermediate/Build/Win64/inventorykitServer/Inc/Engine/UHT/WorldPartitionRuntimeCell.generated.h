// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionRuntimeCell.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionRuntimeCell_generated_h
#error "WorldPartitionRuntimeCell.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeCell.h"
#endif
#define ENGINE_WorldPartitionRuntimeCell_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionRuntimeCellObjectMapping>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellDebugInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldPartitionRuntimeCellDebugInfo>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_197_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeCell(); \
	friend struct Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionRuntimeCell, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeCell) \
	virtual UObject* _getUObject() const override { return const_cast<UWorldPartitionRuntimeCell*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_197_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartitionRuntimeCell(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeCell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionRuntimeCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeCell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartitionRuntimeCell(UWorldPartitionRuntimeCell&&); \
	UWorldPartitionRuntimeCell(const UWorldPartitionRuntimeCell&); \
public: \
	ENGINE_API virtual ~UWorldPartitionRuntimeCell();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_194_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_197_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_197_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_197_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionRuntimeCell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h


#define FOREACH_ENUM_EWORLDPARTITIONRUNTIMECELLSTATE(op) \
	op(EWorldPartitionRuntimeCellState::Unloaded) \
	op(EWorldPartitionRuntimeCellState::Loaded) \
	op(EWorldPartitionRuntimeCellState::Activated) 

enum class EWorldPartitionRuntimeCellState : uint8;
template<> struct TIsUEnumClass<EWorldPartitionRuntimeCellState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionRuntimeCellState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
