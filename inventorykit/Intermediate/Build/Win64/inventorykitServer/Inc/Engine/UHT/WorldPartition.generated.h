// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartition_generated_h
#error "WorldPartition.generated.h already included, missing '#pragma once' in WorldPartition.h"
#endif
#define ENGINE_WorldPartition_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_119_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartition, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartition(); \
	friend struct Z_Construct_UClass_UWorldPartition_Statics; \
public: \
	DECLARE_CLASS(UWorldPartition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldPartition) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_119_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UWorldPartition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldPartition(UWorldPartition&&); \
	UWorldPartition(const UWorldPartition&); \
public: \
	ENGINE_API virtual ~UWorldPartition();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_116_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_119_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h


#define FOREACH_ENUM_EWORLDPARTITIONSERVERSTREAMINGMODE(op) \
	op(EWorldPartitionServerStreamingMode::ProjectDefault) \
	op(EWorldPartitionServerStreamingMode::Disabled) \
	op(EWorldPartitionServerStreamingMode::Enabled) \
	op(EWorldPartitionServerStreamingMode::EnabledInPIE) 

enum class EWorldPartitionServerStreamingMode : uint8;
template<> struct TIsUEnumClass<EWorldPartitionServerStreamingMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionServerStreamingMode>();

#define FOREACH_ENUM_EWORLDPARTITIONSERVERSTREAMINGOUTMODE(op) \
	op(EWorldPartitionServerStreamingOutMode::ProjectDefault) \
	op(EWorldPartitionServerStreamingOutMode::Disabled) \
	op(EWorldPartitionServerStreamingOutMode::Enabled) 

enum class EWorldPartitionServerStreamingOutMode : uint8;
template<> struct TIsUEnumClass<EWorldPartitionServerStreamingOutMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionServerStreamingOutMode>();

#define FOREACH_ENUM_EWORLDPARTITIONDATALAYERSLOGICOPERATOR(op) \
	op(EWorldPartitionDataLayersLogicOperator::Or) \
	op(EWorldPartitionDataLayersLogicOperator::And) 

enum class EWorldPartitionDataLayersLogicOperator : uint8;
template<> struct TIsUEnumClass<EWorldPartitionDataLayersLogicOperator> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionDataLayersLogicOperator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
