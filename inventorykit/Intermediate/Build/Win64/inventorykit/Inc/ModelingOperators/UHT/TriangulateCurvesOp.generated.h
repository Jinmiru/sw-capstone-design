// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurveOps/TriangulateCurvesOp.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORS_TriangulateCurvesOp_generated_h
#error "TriangulateCurvesOp.generated.h already included, missing '#pragma once' in TriangulateCurvesOp.h"
#endif
#define MODELINGOPERATORS_TriangulateCurvesOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h


#define FOREACH_ENUM_EFLATTENCURVEMETHOD(op) \
	op(EFlattenCurveMethod::DoNotFlatten) \
	op(EFlattenCurveMethod::ToBestFitPlane) \
	op(EFlattenCurveMethod::AlongX) \
	op(EFlattenCurveMethod::AlongY) \
	op(EFlattenCurveMethod::AlongZ) 

enum class EFlattenCurveMethod : uint8;
template<> struct TIsUEnumClass<EFlattenCurveMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EFlattenCurveMethod>();

#define FOREACH_ENUM_ECOMBINECURVESMETHOD(op) \
	op(ECombineCurvesMethod::LeaveSeparate) \
	op(ECombineCurvesMethod::Union) \
	op(ECombineCurvesMethod::Intersect) \
	op(ECombineCurvesMethod::Difference) \
	op(ECombineCurvesMethod::ExclusiveOr) 

enum class ECombineCurvesMethod : uint8;
template<> struct TIsUEnumClass<ECombineCurvesMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ECombineCurvesMethod>();

#define FOREACH_ENUM_EOFFSETCLOSEDCURVESMETHOD(op) \
	op(EOffsetClosedCurvesMethod::DoNotOffset) \
	op(EOffsetClosedCurvesMethod::OffsetOuterSide) \
	op(EOffsetClosedCurvesMethod::OffsetBothSides) 

enum class EOffsetClosedCurvesMethod : uint8;
template<> struct TIsUEnumClass<EOffsetClosedCurvesMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetClosedCurvesMethod>();

#define FOREACH_ENUM_EOFFSETOPENCURVESMETHOD(op) \
	op(EOffsetOpenCurvesMethod::TreatAsClosed) \
	op(EOffsetOpenCurvesMethod::Offset) 

enum class EOffsetOpenCurvesMethod : uint8;
template<> struct TIsUEnumClass<EOffsetOpenCurvesMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetOpenCurvesMethod>();

#define FOREACH_ENUM_EOFFSETJOINMETHOD(op) \
	op(EOffsetJoinMethod::Square) \
	op(EOffsetJoinMethod::Miter) \
	op(EOffsetJoinMethod::Round) 

enum class EOffsetJoinMethod : uint8;
template<> struct TIsUEnumClass<EOffsetJoinMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetJoinMethod>();

#define FOREACH_ENUM_EOPENCURVEENDSHAPES(op) \
	op(EOpenCurveEndShapes::Square) \
	op(EOpenCurveEndShapes::Round) \
	op(EOpenCurveEndShapes::Butt) 

enum class EOpenCurveEndShapes : uint8;
template<> struct TIsUEnumClass<EOpenCurveEndShapes> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOpenCurveEndShapes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
