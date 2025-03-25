// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataWrappers/ChaosVDJointDataWrappers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVDRUNTIME_ChaosVDJointDataWrappers_generated_h
#error "ChaosVDJointDataWrappers.generated.h already included, missing '#pragma once' in ChaosVDJointDataWrappers.h"
#endif
#define CHAOSVDRUNTIME_ChaosVDJointDataWrappers_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDJointStateDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDJointStateDataWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDJointSolverSettingsDataWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDJointSettingsDataWrapper_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDJointSettingsDataWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h_383_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDJointConstraint_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FChaosVDWrapperDataBase Super;


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDJointConstraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDJointDataWrappers_h


#define FOREACH_ENUM_ECHAOSVDJOINTRESIMTYPE(op) \
	op(EChaosVDJointReSimType::FullResim) \
	op(EChaosVDJointReSimType::ResimAsFollower) 

enum class EChaosVDJointReSimType;
template<> struct TIsUEnumClass<EChaosVDJointReSimType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointReSimType>();

#define FOREACH_ENUM_ECHAOSVDJOINTSYNCTYPE(op) \
	op(EChaosVDJointSyncType::InSync) \
	op(EChaosVDJointSyncType::HardDesync) 

enum class EChaosVDJointSyncType;
template<> struct TIsUEnumClass<EChaosVDJointSyncType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointSyncType>();

#define FOREACH_ENUM_ECHAOSVDJOINTSTATEFLAGS(op) \
	op(EChaosVDJointStateFlags::None) \
	op(EChaosVDJointStateFlags::Disabled) \
	op(EChaosVDJointStateFlags::Broken) \
	op(EChaosVDJointStateFlags::Breaking) \
	op(EChaosVDJointStateFlags::DriveTargetChanged) \
	op(EChaosVDJointStateFlags::EnabledDuringResim) 

enum class EChaosVDJointStateFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDJointStateFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointStateFlags>();

#define FOREACH_ENUM_ECHAOSVDJOINTSOLVERSETTINGSFLAGS(op) \
	op(EChaosVDJointSolverSettingsFlags::None) \
	op(EChaosVDJointSolverSettingsFlags::UseLinearSolver) \
	op(EChaosVDJointSolverSettingsFlags::SortEnabled) \
	op(EChaosVDJointSolverSettingsFlags::SolvePositionLast) \
	op(EChaosVDJointSolverSettingsFlags::UsePositionBasedDrives) \
	op(EChaosVDJointSolverSettingsFlags::EnableTwistLimits) \
	op(EChaosVDJointSolverSettingsFlags::EnableSwingLimits) \
	op(EChaosVDJointSolverSettingsFlags::EnableDrives) 

enum class EChaosVDJointSolverSettingsFlags : uint16;
template<> struct TIsUEnumClass<EChaosVDJointSolverSettingsFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointSolverSettingsFlags>();

#define FOREACH_ENUM_ECHAOSVDJOINTMOTIONTYPE(op) \
	op(EChaosVDJointMotionType::Free) \
	op(EChaosVDJointMotionType::Limited) \
	op(EChaosVDJointMotionType::Locked) 

enum class EChaosVDJointMotionType : int32;
template<> struct TIsUEnumClass<EChaosVDJointMotionType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointMotionType>();

#define FOREACH_ENUM_ECHAOSVDJOINTFORCEMODE(op) \
	op(EChaosVDJointForceMode::Acceleration) \
	op(EChaosVDJointForceMode::Force) 

enum class EChaosVDJointForceMode : int32;
template<> struct TIsUEnumClass<EChaosVDJointForceMode> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointForceMode>();

#define FOREACH_ENUM_ECHAOSVDPLASTICITYTYPE(op) \
	op(EChaosVDPlasticityType::Free) \
	op(EChaosVDPlasticityType::Shrink) \
	op(EChaosVDPlasticityType::Grow) 

enum class EChaosVDPlasticityType : int32;
template<> struct TIsUEnumClass<EChaosVDPlasticityType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDPlasticityType>();

#define FOREACH_ENUM_ECHAOSVDJOINTSETTINGSFLAGS(op) \
	op(EChaosVDJointSettingsFlags::None) \
	op(EChaosVDJointSettingsFlags::CollisionEnabled) \
	op(EChaosVDJointSettingsFlags::MassConditioningEnabled) \
	op(EChaosVDJointSettingsFlags::AngularSLerpPositionDriveEnabled) \
	op(EChaosVDJointSettingsFlags::AngularSLerpVelocityDriveEnabled) \
	op(EChaosVDJointSettingsFlags::AngularTwistPositionDriveEnabled) \
	op(EChaosVDJointSettingsFlags::AngularTwistVelocityDriveEnabled) \
	op(EChaosVDJointSettingsFlags::AngularSwingPositionDriveEnabled) \
	op(EChaosVDJointSettingsFlags::AngularSwingVelocityDriveEnabled) \
	op(EChaosVDJointSettingsFlags::SoftLinearLimitsEnabled) \
	op(EChaosVDJointSettingsFlags::SoftTwistLimitsEnabled) \
	op(EChaosVDJointSettingsFlags::SoftSwingLimitsEnabled) \
	op(EChaosVDJointSettingsFlags::LinearPositionDriveEnabled0) \
	op(EChaosVDJointSettingsFlags::LinearPositionDriveEnable1) \
	op(EChaosVDJointSettingsFlags::LinearPositionDriveEnable2) \
	op(EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled0) \
	op(EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled1) \
	op(EChaosVDJointSettingsFlags::LinearVelocityDriveEnabled2) 

enum class EChaosVDJointSettingsFlags : uint32;
template<> struct TIsUEnumClass<EChaosVDJointSettingsFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDJointSettingsFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
