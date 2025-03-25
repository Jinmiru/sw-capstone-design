// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigSplineUnits.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIGSPLINE_ControlRigSplineUnits_generated_h
#error "ControlRigSplineUnits.generated.h already included, missing '#pragma once' in ControlRigSplineUnits.h"
#endif
#define CONTROLRIGSPLINE_ControlRigSplineUnits_generated_h

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ControlRigSplineBase>();


#define FRigUnit_ControlRigSplineFromPoints_Execute() \
	void FRigUnit_ControlRigSplineFromPoints::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		const ESplineType SplineMode = *(ESplineType*)RigVMMemoryHandles[1].GetData(false); \
		const bool bClosed = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const int32 SamplesPerSegment = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		const float Compression = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Stretch = *(float*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Points, \
			SplineMode, \
			bClosed, \
			SamplesPerSegment, \
			Compression, \
			Stretch, \
			Spline \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ControlRigSplineFromPoints>();


#define FRigUnit_ControlRigSplineFromTransforms_Execute() \
	void FRigUnit_ControlRigSplineFromTransforms::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		const ESplineType SplineMode = *(ESplineType*)RigVMMemoryHandles[1].GetData(false); \
		const bool bClosed = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const int32 SamplesPerSegment = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		const float Compression = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Stretch = *(float*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transforms, \
			SplineMode, \
			bClosed, \
			SamplesPerSegment, \
			Compression, \
			Stretch, \
			Spline \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ControlRigSplineFromTransforms>();


#define FRigUnit_SetSplinePoints_Execute() \
	void FRigUnit_SetSplinePoints::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Points, \
			Spline \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_SetSplinePoints>();


#define FRigUnit_SetSplineTransforms_Execute() \
	void FRigUnit_SetSplineTransforms::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transforms, \
			Spline \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_SetSplineTransforms>();


#define FRigUnit_PositionFromControlRigSpline_Execute() \
	void FRigUnit_PositionFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Position \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Position \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			Position \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_PositionFromControlRigSpline>();


#define FRigUnit_TransformFromControlRigSpline_Execute() \
	void FRigUnit_TransformFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& UpVector, \
		const float Roll, \
		const float U, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& UpVector, \
		const float Roll, \
		const float U, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& UpVector = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Roll = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			UpVector, \
			Roll, \
			U, \
			Transform \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_TransformFromControlRigSpline>();


#define FRigUnit_TransformFromControlRigSpline2_Execute() \
	void FRigUnit_TransformFromControlRigSpline2::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			PrimaryAxis, \
			SecondaryAxis, \
			Transform \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_TransformFromControlRigSpline2>();


#define FRigUnit_TangentFromControlRigSpline_Execute() \
	void FRigUnit_TangentFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Tangent \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Tangent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Tangent = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			Tangent \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_TangentFromControlRigSpline>();


#define FRigUnit_DrawControlRigSpline_Execute() \
	void FRigUnit_DrawControlRigSpline::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_284_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Color, \
			Thickness, \
			Detail \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_DrawControlRigSpline>();


#define FRigUnit_GetLengthControlRigSpline_Execute() \
	void FRigUnit_GetLengthControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		float& Length \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_316_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		float& Length \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		float& Length = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Length \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_GetLengthControlRigSpline>();


#define FRigUnit_GetLengthAtParamControlRigSpline_Execute() \
	void FRigUnit_GetLengthAtParamControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		float& Length \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_340_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		float& Length \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Length = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			Length \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_GetLengthAtParamControlRigSpline>();


#define FRigUnit_FitChainToSplineCurve_Execute() \
	void FRigUnit_FitChainToSplineCurve::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_369_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[10].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetData(false); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetData(false); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToSplineCurve>();


#define FRigUnit_FitChainToSplineCurveItemArray_Execute() \
	void FRigUnit_FitChainToSplineCurveItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_488_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetData(false); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[10].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetData(false); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetData(false); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToSplineCurveItemArray>();

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_600_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_SplineConstraint_WorkData>();


#define FRigUnit_SplineConstraint_Execute() \
	void FRigUnit_SplineConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bPropagateToChildren, \
		FRigUnit_SplineConstraint_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_628_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bPropagateToChildren, \
		FRigUnit_SplineConstraint_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_SplineConstraint_WorkData& WorkData = *(FRigUnit_SplineConstraint_WorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			PrimaryAxis, \
			SecondaryAxis, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_SplineConstraint>();


#define FRigUnit_FitSplineCurveToChain_Execute() \
	void FRigUnit_FitSplineCurveToChain::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_698_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitSplineCurveToChain>();


#define FRigUnit_FitSplineCurveToChainItemArray_Execute() \
	void FRigUnit_FitSplineCurveToChainItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_730_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitSplineCurveToChainItemArray>();


#define FRigUnit_ClosestParameterFromControlRigSpline_Execute() \
	void FRigUnit_ClosestParameterFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& Position, \
		float& U \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_759_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& Position, \
		float& U \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& U = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Position, \
			U \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ClosestParameterFromControlRigSpline>();


#define FRigUnit_ParameterAtPercentage_Execute() \
	void FRigUnit_ParameterAtPercentage::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float Percentage, \
		float& U \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_788_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float Percentage, \
		float& U \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float Percentage = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& U = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Percentage, \
			U \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ParameterAtPercentage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
