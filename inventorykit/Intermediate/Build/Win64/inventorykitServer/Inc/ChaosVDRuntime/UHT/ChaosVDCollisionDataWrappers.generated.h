// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataWrappers/ChaosVDCollisionDataWrappers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVDRUNTIME_ChaosVDCollisionDataWrappers_generated_h
#error "ChaosVDCollisionDataWrappers.generated.h already included, missing '#pragma once' in ChaosVDCollisionDataWrappers.h"
#endif
#define CHAOSVDRUNTIME_ChaosVDCollisionDataWrappers_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDContactPoint>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDManifoldPoint>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics; \
	CHAOSVDRUNTIME_API static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDCollisionMaterial>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_249_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDConstraint>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_377_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDParticlePairMidPhase>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_443_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDCollisionFilterData>();

#define FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_483_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<struct FChaosVDShapeCollisionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h


#define FOREACH_ENUM_ECHAOSVDCONTACTSHAPESTYPE(op) \
	op(EChaosVDContactShapesType::Unknown) \
	op(EChaosVDContactShapesType::SphereSphere) \
	op(EChaosVDContactShapesType::SphereCapsule) \
	op(EChaosVDContactShapesType::SphereBox) \
	op(EChaosVDContactShapesType::SphereConvex) \
	op(EChaosVDContactShapesType::SphereTriMesh) \
	op(EChaosVDContactShapesType::SphereHeightField) \
	op(EChaosVDContactShapesType::SpherePlane) \
	op(EChaosVDContactShapesType::CapsuleCapsule) \
	op(EChaosVDContactShapesType::CapsuleBox) \
	op(EChaosVDContactShapesType::CapsuleConvex) \
	op(EChaosVDContactShapesType::CapsuleTriMesh) \
	op(EChaosVDContactShapesType::CapsuleHeightField) \
	op(EChaosVDContactShapesType::BoxBox) \
	op(EChaosVDContactShapesType::BoxConvex) \
	op(EChaosVDContactShapesType::BoxTriMesh) \
	op(EChaosVDContactShapesType::BoxHeightField) \
	op(EChaosVDContactShapesType::BoxPlane) \
	op(EChaosVDContactShapesType::ConvexConvex) \
	op(EChaosVDContactShapesType::ConvexTriMesh) \
	op(EChaosVDContactShapesType::ConvexHeightField) \
	op(EChaosVDContactShapesType::GenericConvexConvex) \
	op(EChaosVDContactShapesType::LevelSetLevelSet) \
	op(EChaosVDContactShapesType::NumShapesTypes) 

enum class EChaosVDContactShapesType;
template<> struct TIsUEnumClass<EChaosVDContactShapesType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDContactShapesType>();

#define FOREACH_ENUM_ECHAOSVDCONTACTPOINTTYPE(op) \
	op(EChaosVDContactPointType::Unknown) \
	op(EChaosVDContactPointType::VertexPlane) \
	op(EChaosVDContactPointType::EdgeEdge) \
	op(EChaosVDContactPointType::PlaneVertex) \
	op(EChaosVDContactPointType::VertexVertex) 

enum class EChaosVDContactPointType : int8;
template<> struct TIsUEnumClass<EChaosVDContactPointType> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDContactPointType>();

#define FOREACH_ENUM_ECHAOSVDMANIFOLDPOINTFLAGS(op) \
	op(EChaosVDManifoldPointFlags::None) \
	op(EChaosVDManifoldPointFlags::Disabled) \
	op(EChaosVDManifoldPointFlags::WasRestored) \
	op(EChaosVDManifoldPointFlags::WasReplaced) \
	op(EChaosVDManifoldPointFlags::HasStaticFrictionAnchor) \
	op(EChaosVDManifoldPointFlags::IsValid) \
	op(EChaosVDManifoldPointFlags::InsideStaticFrictionCone) 

enum class EChaosVDManifoldPointFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDManifoldPointFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDManifoldPointFlags>();

#define FOREACH_ENUM_ECHAOSVDCONSTRAINTFLAGS(op) \
	op(EChaosVDConstraintFlags::None) \
	op(EChaosVDConstraintFlags::IsCurrent) \
	op(EChaosVDConstraintFlags::Disabled) \
	op(EChaosVDConstraintFlags::UseManifold) \
	op(EChaosVDConstraintFlags::UseIncrementalManifold) \
	op(EChaosVDConstraintFlags::CanRestoreManifold) \
	op(EChaosVDConstraintFlags::WasManifoldRestored) \
	op(EChaosVDConstraintFlags::IsQuadratic0) \
	op(EChaosVDConstraintFlags::IsQuadratic1) \
	op(EChaosVDConstraintFlags::IsProbe) \
	op(EChaosVDConstraintFlags::CCDEnabled) \
	op(EChaosVDConstraintFlags::CCDSweepEnabled) \
	op(EChaosVDConstraintFlags::ModifierApplied) \
	op(EChaosVDConstraintFlags::MaterialSet) 

enum class EChaosVDConstraintFlags : uint16;
template<> struct TIsUEnumClass<EChaosVDConstraintFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDConstraintFlags>();

#define FOREACH_ENUM_ECHAOSVDMIDPHASEFLAGS(op) \
	op(EChaosVDMidPhaseFlags::None) \
	op(EChaosVDMidPhaseFlags::IsActive) \
	op(EChaosVDMidPhaseFlags::IsCCD) \
	op(EChaosVDMidPhaseFlags::IsCCDActive) \
	op(EChaosVDMidPhaseFlags::IsSleeping) \
	op(EChaosVDMidPhaseFlags::IsModified) 

enum class EChaosVDMidPhaseFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDMidPhaseFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDMidPhaseFlags>();

#define FOREACH_ENUM_ECHAOSVDCOLLISIONTRACEFLAG(op) \
	op(EChaosVDCollisionTraceFlag::UseDefault) \
	op(EChaosVDCollisionTraceFlag::UseSimpleAndComplex) \
	op(EChaosVDCollisionTraceFlag::UseSimpleAsComplex) \
	op(EChaosVDCollisionTraceFlag::UseComplexAsSimple) 

enum class EChaosVDCollisionTraceFlag;
template<> struct TIsUEnumClass<EChaosVDCollisionTraceFlag> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionTraceFlag>();

#define FOREACH_ENUM_ECHAOSVDCOLLISIONSHAPEDATAFLAGS(op) \
	op(EChaosVDCollisionShapeDataFlags::None) \
	op(EChaosVDCollisionShapeDataFlags::SimCollision) \
	op(EChaosVDCollisionShapeDataFlags::QueryCollision) \
	op(EChaosVDCollisionShapeDataFlags::IsProbe) 

enum class EChaosVDCollisionShapeDataFlags : uint8;
template<> struct TIsUEnumClass<EChaosVDCollisionShapeDataFlags> { enum { Value = true }; };
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionShapeDataFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
