// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataWrappers/ChaosVDQueryDataWrappers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVDRUNTIME_ChaosVDQueryDataWrappers_generated_h
#error "ChaosVDQueryDataWrappers.generated.h already included, missing '#pragma once' in ChaosVDQueryDataWrappers.h"
#endif
#define CHAOSVDRUNTIME_ChaosVDQueryDataWrappers_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDCollisionResponseParams_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDCollisionResponseParams>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDCollisionObjectQueryParams_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDCollisionObjectQueryParams>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDCollisionQueryParams_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDCollisionQueryParams>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_235_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDQueryFastData_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDQueryFastData>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDQueryHitData_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDQueryHitData>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_337_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDQueryVisitStep_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDQueryVisitStep>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h_389_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDQueryDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDQueryDataWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDQueryDataWrappers_h


#define FOREACH_ENUM_ECHAOSVDSCENEQUERYTYPE(op) \
	op(EChaosVDSceneQueryType::Invalid) \
	op(EChaosVDSceneQueryType::Sweep) \
	op(EChaosVDSceneQueryType::Overlap) \
	op(EChaosVDSceneQueryType::RayCast) 

enum class EChaosVDSceneQueryType;
template<> struct TIsUEnumClass<EChaosVDSceneQueryType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSceneQueryType>();

#define FOREACH_ENUM_ECHAOSVDSCENEQUERYMODE(op) \
	op(EChaosVDSceneQueryMode::Invalid) \
	op(EChaosVDSceneQueryMode::Single) \
	op(EChaosVDSceneQueryMode::Multi) \
	op(EChaosVDSceneQueryMode::Test) 

enum class EChaosVDSceneQueryMode;
template<> struct TIsUEnumClass<EChaosVDSceneQueryMode> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSceneQueryMode>();

#define FOREACH_ENUM_ECHAOSVDCOLLISIONQUERYPARAMSFLAGS(op) \
	op(EChaosVDCollisionQueryParamsFlags::None) \
	op(EChaosVDCollisionQueryParamsFlags::TraceComplex) \
	op(EChaosVDCollisionQueryParamsFlags::FindInitialOverlaps) \
	op(EChaosVDCollisionQueryParamsFlags::ReturnFaceIndex) \
	op(EChaosVDCollisionQueryParamsFlags::ReturnPhysicalMaterial) \
	op(EChaosVDCollisionQueryParamsFlags::IgnoreBlocks) \
	op(EChaosVDCollisionQueryParamsFlags::IgnoreTouches) \
	op(EChaosVDCollisionQueryParamsFlags::SkipNarrowPhase) \
	op(EChaosVDCollisionQueryParamsFlags::TraceIntoSubComponents) \
	op(EChaosVDCollisionQueryParamsFlags::ReplaceHitWithSubComponents) 

enum class EChaosVDCollisionQueryParamsFlags : uint16;
template<> struct TIsUEnumClass<EChaosVDCollisionQueryParamsFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionQueryParamsFlags>();

#define FOREACH_ENUM_ECHAOSVDQUERYFASTDATAPARALLELFLAGS(op) \
	op(EChaosVDQueryFastDataParallelFlags::None) \
	op(EChaosVDQueryFastDataParallelFlags::Parallel0) \
	op(EChaosVDQueryFastDataParallelFlags::Parallel1) \
	op(EChaosVDQueryFastDataParallelFlags::Parallel2) 

enum class EChaosVDQueryFastDataParallelFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDQueryFastDataParallelFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDQueryFastDataParallelFlags>();

#define FOREACH_ENUM_ECHAOSVDCOLLISIONQUERYHITTYPE(op) \
	op(EChaosVDCollisionQueryHitType::None) \
	op(EChaosVDCollisionQueryHitType::Touch) \
	op(EChaosVDCollisionQueryHitType::Block) 

enum class EChaosVDCollisionQueryHitType;
template<> struct TIsUEnumClass<EChaosVDCollisionQueryHitType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionQueryHitType>();

#define FOREACH_ENUM_ECHAOSVDSCENEQUERYVISITORTYPE(op) \
	op(EChaosVDSceneQueryVisitorType::Invalid) \
	op(EChaosVDSceneQueryVisitorType::BroadPhase) \
	op(EChaosVDSceneQueryVisitorType::NarrowPhase) 

enum class EChaosVDSceneQueryVisitorType;
template<> struct TIsUEnumClass<EChaosVDSceneQueryVisitorType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSceneQueryVisitorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
