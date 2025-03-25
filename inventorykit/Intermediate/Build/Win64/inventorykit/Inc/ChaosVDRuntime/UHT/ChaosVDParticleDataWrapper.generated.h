// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataWrappers/ChaosVDParticleDataWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVDRUNTIME_ChaosVDParticleDataWrapper_generated_h
#error "ChaosVDParticleDataWrapper.generated.h already included, missing '#pragma once' in ChaosVDParticleDataWrapper.h"
#endif
#define CHAOSVDRUNTIME_ChaosVDParticleDataWrapper_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDWrapperDataBase_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDWrapperDataBase>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDFRigidParticleControlFlags_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDFRigidParticleControlFlags>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticlePositionRotation_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticlePositionRotation>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticleVelocities_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticleVelocities>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticleDynamics_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticleDynamics>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticleMassProps_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticleMassProps>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticleDynamicMisc>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_411_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDConnectivityEdge_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDConnectivityEdge>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_449_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticleCluster_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticleCluster>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h_553_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticleDataWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDParticleDataWrapper_h


#define FOREACH_ENUM_ECHAOSVDPARTICLETYPE(op) \
	op(EChaosVDParticleType::Static) \
	op(EChaosVDParticleType::Kinematic) \
	op(EChaosVDParticleType::Rigid) \
	op(EChaosVDParticleType::Clustered) \
	op(EChaosVDParticleType::StaticMesh) \
	op(EChaosVDParticleType::SkeletalMesh) \
	op(EChaosVDParticleType::GeometryCollection) \
	op(EChaosVDParticleType::Unknown) 

enum class EChaosVDParticleType : uint8;
template<> struct TIsUEnumClass<EChaosVDParticleType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDParticleType>();

#define FOREACH_ENUM_ECHAOSVDSLEEPTYPE(op) \
	op(EChaosVDSleepType::MaterialSleep) \
	op(EChaosVDSleepType::NeverSleep) 

enum class EChaosVDSleepType : uint8;
template<> struct TIsUEnumClass<EChaosVDSleepType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDSleepType>();

#define FOREACH_ENUM_ECHAOSVDOBJECTSTATETYPE(op) \
	op(EChaosVDObjectStateType::Uninitialized) \
	op(EChaosVDObjectStateType::Sleeping) \
	op(EChaosVDObjectStateType::Kinematic) \
	op(EChaosVDObjectStateType::Static) \
	op(EChaosVDObjectStateType::Dynamic) \
	op(EChaosVDObjectStateType::Count) 

enum class EChaosVDObjectStateType : int8;
template<> struct TIsUEnumClass<EChaosVDObjectStateType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDObjectStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
