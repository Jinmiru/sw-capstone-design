// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigSpline/Public/ControlRigSplineUnits.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h"
#include "ControlRigSpline/Public/ControlRigSplineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSplineUnits() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
CONTROLRIGSPLINE_API UEnum* Z_Construct_UEnum_ControlRigSpline_ESplineType();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SplineConstraint();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline();
CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
UPackage* Z_Construct_UPackage__Script_ControlRigSpline();
// End Cross Module References

// Begin ScriptStruct FRigUnit_ControlRigSplineBase
static_assert(std::is_polymorphic<FRigUnit_ControlRigSplineBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ControlRigSplineBase cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase;
class UScriptStruct* FRigUnit_ControlRigSplineBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ControlRigSplineBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ControlRigSplineBase>()
{
	return FRigUnit_ControlRigSplineBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.3 0.1 0.1" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ControlRigSplineBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_ControlRigSplineBase",
	nullptr,
	0,
	sizeof(FRigUnit_ControlRigSplineBase),
	alignof(FRigUnit_ControlRigSplineBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase.InnerSingleton;
}
// End ScriptStruct FRigUnit_ControlRigSplineBase

// Begin ScriptStruct FRigUnit_ControlRigSplineFromPoints
static_assert(std::is_polymorphic<FRigUnit_ControlRigSplineFromPoints>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_ControlRigSplineFromPoints cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints;
class UScriptStruct* FRigUnit_ControlRigSplineFromPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ControlRigSplineFromPoints"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ControlRigSplineFromPoints_Execute;
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Points"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("SplineMode"), TEXT("ESplineType"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("bClosed"), TEXT("bool"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("SamplesPerSegment"), TEXT("int32"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Compression"), TEXT("float"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Stretch"), TEXT("float"));
		Arguments_FRigUnit_ControlRigSplineFromPoints_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ControlRigSplineFromPoints::Execute"), &FRigUnit_ControlRigSplineFromPoints::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton, Arguments_FRigUnit_ControlRigSplineFromPoints_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ControlRigSplineFromPoints>()
{
	return FRigUnit_ControlRigSplineFromPoints::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Creates a Spline curve from an array of positions\n */" },
		{ "DisplayName", "Spline From Points" },
		{ "Keywords", "Spline From Positions" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Creates a Spline curve from an array of positions" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerSegment_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "1" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMode;
	static void NewProp_bClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerSegment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Compression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stretch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ControlRigSplineFromPoints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode = { "SplineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, SplineMode), Z_Construct_UEnum_ControlRigSpline_ESplineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMode_MetaData), NewProp_SplineMode_MetaData) }; // 1972097248
void Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed_SetBit(void* Obj)
{
	((FRigUnit_ControlRigSplineFromPoints*)Obj)->bClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ControlRigSplineFromPoints), &Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosed_MetaData), NewProp_bClosed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SamplesPerSegment = { "SamplesPerSegment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, SamplesPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerSegment_MetaData), NewProp_SamplesPerSegment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Compression = { "Compression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Compression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compression_MetaData), NewProp_Compression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Stretch = { "Stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Stretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stretch_MetaData), NewProp_Stretch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromPoints, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SplineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_bClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_SamplesPerSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Compression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_ControlRigSplineFromPoints",
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::PropPointers),
	sizeof(FRigUnit_ControlRigSplineFromPoints),
	alignof(FRigUnit_ControlRigSplineFromPoints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints.InnerSingleton;
}
void FRigUnit_ControlRigSplineFromPoints::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ControlRigSplineFromPoints::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FVector> Points_0_Array(Points);
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		SplineMode,
		bClosed,
		SamplesPerSegment,
		Compression,
		Stretch,
		Spline
	);
}
// End ScriptStruct FRigUnit_ControlRigSplineFromPoints

// Begin ScriptStruct FRigUnit_ControlRigSplineFromTransforms
static_assert(std::is_polymorphic<FRigUnit_ControlRigSplineFromTransforms>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_ControlRigSplineFromTransforms cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms;
class UScriptStruct* FRigUnit_ControlRigSplineFromTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ControlRigSplineFromTransforms"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute;
		Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute.Emplace(TEXT("SplineMode"), TEXT("ESplineType"));
		Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute.Emplace(TEXT("bClosed"), TEXT("bool"));
		Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute.Emplace(TEXT("SamplesPerSegment"), TEXT("int32"));
		Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute.Emplace(TEXT("Compression"), TEXT("float"));
		Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute.Emplace(TEXT("Stretch"), TEXT("float"));
		Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ControlRigSplineFromTransforms::Execute"), &FRigUnit_ControlRigSplineFromTransforms::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms.OuterSingleton, Arguments_FRigUnit_ControlRigSplineFromTransforms_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ControlRigSplineFromTransforms>()
{
	return FRigUnit_ControlRigSplineFromTransforms::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Creates a Spline curve from an array of positions\n */" },
		{ "DisplayName", "Spline From Transforms" },
		{ "Keywords", "Spline From Transforms" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Creates a Spline curve from an array of positions" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMode_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerSegment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplineMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineMode;
	static void NewProp_bClosed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerSegment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Compression;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stretch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ControlRigSplineFromTransforms>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromTransforms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_SplineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_SplineMode = { "SplineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromTransforms, SplineMode), Z_Construct_UEnum_ControlRigSpline_ESplineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMode_MetaData), NewProp_SplineMode_MetaData) }; // 1972097248
void Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_bClosed_SetBit(void* Obj)
{
	((FRigUnit_ControlRigSplineFromTransforms*)Obj)->bClosed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ControlRigSplineFromTransforms), &Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosed_MetaData), NewProp_bClosed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_SamplesPerSegment = { "SamplesPerSegment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromTransforms, SamplesPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerSegment_MetaData), NewProp_SamplesPerSegment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Compression = { "Compression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromTransforms, Compression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Compression_MetaData), NewProp_Compression_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Stretch = { "Stretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromTransforms, Stretch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stretch_MetaData), NewProp_Stretch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ControlRigSplineFromTransforms, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_SplineMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_SplineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_bClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_SamplesPerSegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Compression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Stretch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_ControlRigSplineFromTransforms",
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::PropPointers),
	sizeof(FRigUnit_ControlRigSplineFromTransforms),
	alignof(FRigUnit_ControlRigSplineFromTransforms),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms.InnerSingleton;
}
void FRigUnit_ControlRigSplineFromTransforms::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ControlRigSplineFromTransforms::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FTransform> Transforms_0_Array(Transforms);
	StaticExecute(
		InExecuteContext,
		Transforms_0_Array,
		SplineMode,
		bClosed,
		SamplesPerSegment,
		Compression,
		Stretch,
		Spline
	);
}
// End ScriptStruct FRigUnit_ControlRigSplineFromTransforms

// Begin ScriptStruct FRigUnit_SetSplinePoints
static_assert(std::is_polymorphic<FRigUnit_SetSplinePoints>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetSplinePoints cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints;
class UScriptStruct* FRigUnit_SetSplinePoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_SetSplinePoints"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetSplinePoints_Execute;
		Arguments_FRigUnit_SetSplinePoints_Execute.Emplace(TEXT("Points"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_SetSplinePoints_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetSplinePoints::Execute"), &FRigUnit_SetSplinePoints::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton, Arguments_FRigUnit_SetSplinePoints_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_SetSplinePoints>()
{
	return FRigUnit_SetSplinePoints::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Set the points of a spline, given a spline and an array of positions\n */" },
		{ "DisplayName", "Set Spline Points" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "ToolTip", "* Set the points of a spline, given a spline and an array of positions" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetSplinePoints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSplinePoints, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSplinePoints, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetSplinePoints",
	Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::PropPointers),
	sizeof(FRigUnit_SetSplinePoints),
	alignof(FRigUnit_SetSplinePoints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints.InnerSingleton;
}
void FRigUnit_SetSplinePoints::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetSplinePoints::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FVector> Points_0_Array(Points);
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		Spline
	);
}
// End ScriptStruct FRigUnit_SetSplinePoints

// Begin ScriptStruct FRigUnit_SetSplineTransforms
static_assert(std::is_polymorphic<FRigUnit_SetSplineTransforms>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetSplineTransforms cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms;
class UScriptStruct* FRigUnit_SetSplineTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_SetSplineTransforms"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetSplineTransforms_Execute;
		Arguments_FRigUnit_SetSplineTransforms_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_SetSplineTransforms_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetSplineTransforms::Execute"), &FRigUnit_SetSplineTransforms::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms.OuterSingleton, Arguments_FRigUnit_SetSplineTransforms_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_SetSplineTransforms>()
{
	return FRigUnit_SetSplineTransforms::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Set the points of a spline, given a spline and an array of positions\n */" },
		{ "DisplayName", "Set Spline Transforms" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "ToolTip", "* Set the points of a spline, given a spline and an array of positions" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetSplineTransforms>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSplineTransforms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SetSplineTransforms, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_SetSplineTransforms",
	Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::PropPointers),
	sizeof(FRigUnit_SetSplineTransforms),
	alignof(FRigUnit_SetSplineTransforms),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms.InnerSingleton;
}
void FRigUnit_SetSplineTransforms::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SetSplineTransforms::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FTransform> Transforms_0_Array(Transforms);
	StaticExecute(
		InExecuteContext,
		Transforms_0_Array,
		Spline
	);
}
// End ScriptStruct FRigUnit_SetSplineTransforms

// Begin ScriptStruct FRigUnit_PositionFromControlRigSpline
static_assert(std::is_polymorphic<FRigUnit_PositionFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_PositionFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline;
class UScriptStruct* FRigUnit_PositionFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_PositionFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PositionFromControlRigSpline_Execute;
		Arguments_FRigUnit_PositionFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_PositionFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_PositionFromControlRigSpline_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PositionFromControlRigSpline::Execute"), &FRigUnit_PositionFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_PositionFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_PositionFromControlRigSpline>()
{
	return FRigUnit_PositionFromControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the position from a given Spline and U value\n */" },
		{ "DisplayName", "Position From Spline" },
		{ "Keywords", "Point From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the position from a given Spline and U value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PositionFromControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionFromControlRigSpline, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PositionFromControlRigSpline, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_PositionFromControlRigSpline",
	Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::PropPointers),
	sizeof(FRigUnit_PositionFromControlRigSpline),
	alignof(FRigUnit_PositionFromControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline.InnerSingleton;
}
void FRigUnit_PositionFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PositionFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		U,
		Position
	);
}
// End ScriptStruct FRigUnit_PositionFromControlRigSpline

// Begin ScriptStruct FRigUnit_TransformFromControlRigSpline
static_assert(std::is_polymorphic<FRigUnit_TransformFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_TransformFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline;
class UScriptStruct* FRigUnit_TransformFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_TransformFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TransformFromControlRigSpline_Execute;
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("UpVector"), TEXT("FVector"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("Roll"), TEXT("float"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_TransformFromControlRigSpline_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TransformFromControlRigSpline::Execute"), &FRigUnit_TransformFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_TransformFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_TransformFromControlRigSpline>()
{
	return FRigUnit_TransformFromControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the transform from a given Spline and U value based on the given Up Vector and Roll\n */" },
		{ "DisplayName", "Transform From Spline (with UpVector)" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the transform from a given Spline and U value based on the given Up Vector and Roll" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformFromControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpVector_MetaData), NewProp_UpVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, Roll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roll_MetaData), NewProp_Roll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_UpVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Roll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_TransformFromControlRigSpline",
	Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::PropPointers),
	sizeof(FRigUnit_TransformFromControlRigSpline),
	alignof(FRigUnit_TransformFromControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline.InnerSingleton;
}
void FRigUnit_TransformFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_TransformFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		UpVector,
		Roll,
		U,
		Transform
	);
}
// End ScriptStruct FRigUnit_TransformFromControlRigSpline

// Begin ScriptStruct FRigUnit_TransformFromControlRigSpline2
static_assert(std::is_polymorphic<FRigUnit_TransformFromControlRigSpline2>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_TransformFromControlRigSpline2 cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2;
class UScriptStruct* FRigUnit_TransformFromControlRigSpline2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_TransformFromControlRigSpline2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TransformFromControlRigSpline2_Execute;
		Arguments_FRigUnit_TransformFromControlRigSpline2_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_TransformFromControlRigSpline2_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_TransformFromControlRigSpline2_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TransformFromControlRigSpline2_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TransformFromControlRigSpline2_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TransformFromControlRigSpline2::Execute"), &FRigUnit_TransformFromControlRigSpline2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2.OuterSingleton, Arguments_FRigUnit_TransformFromControlRigSpline2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_TransformFromControlRigSpline2>()
{
	return FRigUnit_TransformFromControlRigSpline2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the transform from a given Spline and U value based on the given Up Vector and Roll\n */" },
		{ "DisplayName", "Transform From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the transform from a given Spline and U value based on the given Up Vector and Roll" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TransformFromControlRigSpline2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline2, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline2, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline2, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline2, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TransformFromControlRigSpline2, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_TransformFromControlRigSpline2",
	Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::PropPointers),
	sizeof(FRigUnit_TransformFromControlRigSpline2),
	alignof(FRigUnit_TransformFromControlRigSpline2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2.InnerSingleton;
}
void FRigUnit_TransformFromControlRigSpline2::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_TransformFromControlRigSpline2::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		U,
		PrimaryAxis,
		SecondaryAxis,
		Transform
	);
}
// End ScriptStruct FRigUnit_TransformFromControlRigSpline2

// Begin ScriptStruct FRigUnit_TangentFromControlRigSpline
static_assert(std::is_polymorphic<FRigUnit_TangentFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_TangentFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline;
class UScriptStruct* FRigUnit_TangentFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_TangentFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TangentFromControlRigSpline_Execute;
		Arguments_FRigUnit_TangentFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_TangentFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_TangentFromControlRigSpline_Execute.Emplace(TEXT("Tangent"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TangentFromControlRigSpline::Execute"), &FRigUnit_TangentFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_TangentFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_TangentFromControlRigSpline>()
{
	return FRigUnit_TangentFromControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the tangent from a given Spline and U value\n */" },
		{ "DisplayName", "Tangent From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the tangent from a given Spline and U value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TangentFromControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TangentFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TangentFromControlRigSpline, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_TangentFromControlRigSpline, Tangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewProp_Tangent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_TangentFromControlRigSpline",
	Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::PropPointers),
	sizeof(FRigUnit_TangentFromControlRigSpline),
	alignof(FRigUnit_TangentFromControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline.InnerSingleton;
}
void FRigUnit_TangentFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_TangentFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		U,
		Tangent
	);
}
// End ScriptStruct FRigUnit_TangentFromControlRigSpline

// Begin ScriptStruct FRigUnit_DrawControlRigSpline
static_assert(std::is_polymorphic<FRigUnit_DrawControlRigSpline>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DrawControlRigSpline cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline;
class UScriptStruct* FRigUnit_DrawControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_DrawControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DrawControlRigSpline_Execute;
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DrawControlRigSpline_Execute.Emplace(TEXT("Detail"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DrawControlRigSpline::Execute"), &FRigUnit_DrawControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton, Arguments_FRigUnit_DrawControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_DrawControlRigSpline>()
{
	return FRigUnit_DrawControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Draws the given spline in the viewport\n */" },
		{ "DisplayName", "Draw Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
		{ "ToolTip", "* Draws the given spline in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Detail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DrawControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_DrawControlRigSpline, Detail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detail_MetaData), NewProp_Detail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewProp_Detail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_DrawControlRigSpline",
	Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::PropPointers),
	sizeof(FRigUnit_DrawControlRigSpline),
	alignof(FRigUnit_DrawControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline.InnerSingleton;
}
void FRigUnit_DrawControlRigSpline::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_DrawControlRigSpline::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Color,
		Thickness,
		Detail
	);
}
// End ScriptStruct FRigUnit_DrawControlRigSpline

// Begin ScriptStruct FRigUnit_GetLengthControlRigSpline
static_assert(std::is_polymorphic<FRigUnit_GetLengthControlRigSpline>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetLengthControlRigSpline cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline;
class UScriptStruct* FRigUnit_GetLengthControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_GetLengthControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetLengthControlRigSpline_Execute;
		Arguments_FRigUnit_GetLengthControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_GetLengthControlRigSpline_Execute.Emplace(TEXT("Length"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetLengthControlRigSpline::Execute"), &FRigUnit_GetLengthControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton, Arguments_FRigUnit_GetLengthControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_GetLengthControlRigSpline>()
{
	return FRigUnit_GetLengthControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the length from a given Splin\n */" },
		{ "DisplayName", "Get Length Of Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the length from a given Splin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetLengthControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetLengthControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetLengthControlRigSpline, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetLengthControlRigSpline",
	Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::PropPointers),
	sizeof(FRigUnit_GetLengthControlRigSpline),
	alignof(FRigUnit_GetLengthControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline.InnerSingleton;
}
void FRigUnit_GetLengthControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetLengthControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Length
	);
}
// End ScriptStruct FRigUnit_GetLengthControlRigSpline

// Begin ScriptStruct FRigUnit_GetLengthAtParamControlRigSpline
static_assert(std::is_polymorphic<FRigUnit_GetLengthAtParamControlRigSpline>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetLengthAtParamControlRigSpline cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline;
class UScriptStruct* FRigUnit_GetLengthAtParamControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_GetLengthAtParamControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetLengthAtParamControlRigSpline_Execute;
		Arguments_FRigUnit_GetLengthAtParamControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_GetLengthAtParamControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		Arguments_FRigUnit_GetLengthAtParamControlRigSpline_Execute.Emplace(TEXT("Length"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetLengthAtParamControlRigSpline::Execute"), &FRigUnit_GetLengthAtParamControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline.OuterSingleton, Arguments_FRigUnit_GetLengthAtParamControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_GetLengthAtParamControlRigSpline>()
{
	return FRigUnit_GetLengthAtParamControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the length from a given Splin\n */" },
		{ "DisplayName", "Get Length At Param Of Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the length from a given Splin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetLengthAtParamControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetLengthAtParamControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetLengthAtParamControlRigSpline, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetLengthAtParamControlRigSpline, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_GetLengthAtParamControlRigSpline",
	Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::PropPointers),
	sizeof(FRigUnit_GetLengthAtParamControlRigSpline),
	alignof(FRigUnit_GetLengthAtParamControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline.InnerSingleton;
}
void FRigUnit_GetLengthAtParamControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetLengthAtParamControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		U,
		Length
	);
}
// End ScriptStruct FRigUnit_GetLengthAtParamControlRigSpline

// Begin ScriptStruct FRigUnit_FitChainToSplineCurve
static_assert(std::is_polymorphic<FRigUnit_FitChainToSplineCurve>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitChainToSplineCurve cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve;
class UScriptStruct* FRigUnit_FitChainToSplineCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitChainToSplineCurve"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitChainToSplineCurve_Execute;
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("SamplingPrecision"), TEXT("int32"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("PoleVectorPosition"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_FitChainToCurve_Rotation>"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_FitChainToCurve_DebugSettings"));
		Arguments_FRigUnit_FitChainToSplineCurve_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FitChainToCurve_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitChainToSplineCurve::Execute"), &FRigUnit_FitChainToSplineCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton, Arguments_FRigUnit_FitChainToSplineCurve_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitChainToSplineCurve>()
{
	return FRigUnit_FitChainToSplineCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Fits a given chain to a spline curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fit Chain on Spline Curve" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given chain to a spline curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The curve to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPrecision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The number of samples to use on the curve. Clamped at 64.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The number of samples to use on the curve. Clamped at 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector.\n\x09 * You can use (0.0, 0.0, 0.0) to disable it.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector.\nYou can use (0.0, 0.0, 0.0) to disable it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The the position of the pole vector used for aligning the secondary axis.\n\x09 * Only has an effect if the secondary axis is set.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The the position of the pole vector used for aligning the secondary axis.\nOnly has an effect if the secondary axis is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied along the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The list of rotations to be applied along the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingPrecision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToSplineCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 252698936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SamplingPrecision = { "SamplingPrecision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, SamplingPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingPrecision_MetaData), NewProp_SamplingPrecision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PoleVectorPosition = { "PoleVectorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, PoleVectorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorPosition_MetaData), NewProp_PoleVectorPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, METADATA_PARAMS(0, nullptr) }; // 1223358926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 1223358926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_FitChainToSplineCurve*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FitChainToSplineCurve), &Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 2968576509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurve, WorkData), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 883419156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SamplingPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_PoleVectorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FitChainToSplineCurve",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToSplineCurve),
	alignof(FRigUnit_FitChainToSplineCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve.InnerSingleton;
}
void FRigUnit_FitChainToSplineCurve::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FitChainToSplineCurve::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_FitChainToCurve_Rotation> Rotations_9_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		Items,
		Spline,
		Alignment,
		Minimum,
		Maximum,
		SamplingPrecision,
		PrimaryAxis,
		SecondaryAxis,
		PoleVectorPosition,
		Rotations_9_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}
// End ScriptStruct FRigUnit_FitChainToSplineCurve

// Begin ScriptStruct FRigUnit_FitChainToSplineCurveItemArray
static_assert(std::is_polymorphic<FRigUnit_FitChainToSplineCurveItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitChainToSplineCurveItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray;
class UScriptStruct* FRigUnit_FitChainToSplineCurveItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitChainToSplineCurveItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute;
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("SamplingPrecision"), TEXT("int32"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("PoleVectorPosition"), TEXT("FVector"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FRigUnit_FitChainToCurve_Rotation>"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("RotationEaseType"), TEXT("ERigVMAnimEasingType"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_FitChainToCurve_DebugSettings"));
		Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FitChainToCurve_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitChainToSplineCurveItemArray::Execute"), &FRigUnit_FitChainToSplineCurveItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton, Arguments_FRigUnit_FitChainToSplineCurveItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitChainToSplineCurveItemArray>()
{
	return FRigUnit_FitChainToSplineCurveItemArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/**\n * Fits a given chain to a spline curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "DisplayName", "Fit Chain on Spline Curve" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given chain to a spline curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The curve to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingPrecision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The number of samples to use on the curve. Clamped at 64.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The number of samples to use on the curve. Clamped at 64." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector.\n\x09 * You can use (0.0, 0.0, 0.0) to disable it.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector.\nYou can use (0.0, 0.0, 0.0) to disable it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The the position of the pole vector used for aligning the secondary axis.\n\x09 * Only has an effect if the secondary axis is set.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The the position of the pole vector used for aligning the secondary axis.\nOnly has an effect if the secondary axis is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The list of rotations to be applied along the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The list of rotations to be applied along the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationEaseType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The easing to use between to rotations.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The easing to use between to rotations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the rotation should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The weight of the solver - how much the rotation should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplingPrecision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationEaseType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationEaseType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitChainToSplineCurveItemArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 252698936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SamplingPrecision = { "SamplingPrecision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, SamplingPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingPrecision_MetaData), NewProp_SamplingPrecision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PoleVectorPosition = { "PoleVectorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, PoleVectorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorPosition_MetaData), NewProp_PoleVectorPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation, METADATA_PARAMS(0, nullptr) }; // 1223358926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotations_MetaData), NewProp_Rotations_MetaData) }; // 1223358926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType = { "RotationEaseType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, RotationEaseType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationEaseType_MetaData), NewProp_RotationEaseType_MetaData) }; // 3483435321
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_FitChainToSplineCurveItemArray*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_FitChainToSplineCurveItemArray), &Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSettings_MetaData), NewProp_DebugSettings_MetaData) }; // 2968576509
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitChainToSplineCurveItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 883419156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SamplingPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_PoleVectorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Rotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_RotationEaseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_DebugSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FitChainToSplineCurveItemArray",
	Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::PropPointers),
	sizeof(FRigUnit_FitChainToSplineCurveItemArray),
	alignof(FRigUnit_FitChainToSplineCurveItemArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray.InnerSingleton;
}
void FRigUnit_FitChainToSplineCurveItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FitChainToSplineCurveItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FRigUnit_FitChainToCurve_Rotation> Rotations_9_Array(Rotations);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Spline,
		Alignment,
		Minimum,
		Maximum,
		SamplingPrecision,
		PrimaryAxis,
		SecondaryAxis,
		PoleVectorPosition,
		Rotations_9_Array,
		RotationEaseType,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}
// End ScriptStruct FRigUnit_FitChainToSplineCurveItemArray

// Begin ScriptStruct FRigUnit_SplineConstraint_WorkData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData;
class UScriptStruct* FRigUnit_SplineConstraint_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_SplineConstraint_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_SplineConstraint_WorkData>()
{
	return FRigUnit_SplineConstraint_WorkData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemTransforms;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SplineConstraint_WorkData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint_WorkData, ChainLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainLength_MetaData), NewProp_ChainLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemTransforms_Inner = { "ItemTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemTransforms = { "ItemTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint_WorkData, ItemTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTransforms_MetaData), NewProp_ItemTransforms_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemSegments_Inner = { "ItemSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemSegments = { "ItemSegments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint_WorkData, ItemSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSegments_MetaData), NewProp_ItemSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 2782416853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItems_MetaData), NewProp_CachedItems_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ChainLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_ItemSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_CachedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewProp_CachedItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	nullptr,
	&NewStructOps,
	"RigUnit_SplineConstraint_WorkData",
	Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::PropPointers),
	sizeof(FRigUnit_SplineConstraint_WorkData),
	alignof(FRigUnit_SplineConstraint_WorkData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData.InnerSingleton;
}
// End ScriptStruct FRigUnit_SplineConstraint_WorkData

// Begin ScriptStruct FRigUnit_SplineConstraint
static_assert(std::is_polymorphic<FRigUnit_SplineConstraint>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SplineConstraint cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint;
class UScriptStruct* FRigUnit_SplineConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_SplineConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SplineConstraint_Execute;
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("Alignment"), TEXT("EControlRigCurveAlignment"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SplineConstraint_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SplineConstraint_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SplineConstraint::Execute"), &FRigUnit_SplineConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint.OuterSingleton, Arguments_FRigUnit_SplineConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_SplineConstraint>()
{
	return FRigUnit_SplineConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/**\n * Fits a given chain to a spline curve.\n * Additionally provides rotational control matching the features of the Distribute Rotation node.\n */" },
		{ "DisplayName", "Spline Constraint" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given chain to a spline curve.\nAdditionally provides rotational control matching the features of the Distribute Rotation node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The curve to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * Specifies how to align the chain on the curve\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Specifies how to align the chain on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The minimum U value to use on the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The minimum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * The maximum U value to use on the curve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The maximum U value to use on the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
	static void NewProp_bPropagateToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SplineConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, Alignment), Z_Construct_UEnum_ControlRig_EControlRigCurveAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 252698936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAxis_MetaData), NewProp_PrimaryAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryAxis_MetaData), NewProp_SecondaryAxis_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
{
	((FRigUnit_SplineConstraint*)Obj)->bPropagateToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SplineConstraint), &Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateToChildren_MetaData), NewProp_bPropagateToChildren_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SplineConstraint, WorkData), Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkData_MetaData), NewProp_WorkData_MetaData) }; // 1363968922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_Maximum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_PrimaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_SecondaryAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_bPropagateToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewProp_WorkData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_SplineConstraint",
	Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::PropPointers),
	sizeof(FRigUnit_SplineConstraint),
	alignof(FRigUnit_SplineConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SplineConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint.InnerSingleton;
}
void FRigUnit_SplineConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SplineConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Spline,
		Alignment,
		Minimum,
		Maximum,
		PrimaryAxis,
		SecondaryAxis,
		bPropagateToChildren,
		WorkData
	);
}
// End ScriptStruct FRigUnit_SplineConstraint

// Begin ScriptStruct FRigUnit_FitSplineCurveToChain
static_assert(std::is_polymorphic<FRigUnit_FitSplineCurveToChain>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitSplineCurveToChain cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain;
class UScriptStruct* FRigUnit_FitSplineCurveToChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitSplineCurveToChain"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitSplineCurveToChain_Execute;
		Arguments_FRigUnit_FitSplineCurveToChain_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_FitSplineCurveToChain_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitSplineCurveToChain::Execute"), &FRigUnit_FitSplineCurveToChain::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton, Arguments_FRigUnit_FitSplineCurveToChain_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitSplineCurveToChain>()
{
	return FRigUnit_FitSplineCurveToChain::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Fits a given spline curve to a chain.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fit Spline Curve on Chain" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given spline curve to a chain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
		{ "ToolTip", "The curve to align" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitSplineCurveToChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChain, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1637116294
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChain, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FitSplineCurveToChain",
	Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::PropPointers),
	sizeof(FRigUnit_FitSplineCurveToChain),
	alignof(FRigUnit_FitSplineCurveToChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain.InnerSingleton;
}
void FRigUnit_FitSplineCurveToChain::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FitSplineCurveToChain::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		Spline
	);
}
// End ScriptStruct FRigUnit_FitSplineCurveToChain

// Begin ScriptStruct FRigUnit_FitSplineCurveToChainItemArray
static_assert(std::is_polymorphic<FRigUnit_FitSplineCurveToChainItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FitSplineCurveToChainItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray;
class UScriptStruct* FRigUnit_FitSplineCurveToChainItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_FitSplineCurveToChainItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute;
		Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FitSplineCurveToChainItemArray::Execute"), &FRigUnit_FitSplineCurveToChainItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton, Arguments_FRigUnit_FitSplineCurveToChainItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_FitSplineCurveToChainItemArray>()
{
	return FRigUnit_FitSplineCurveToChainItemArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/**\n * Fits a given spline curve to a chain.\n */" },
		{ "DisplayName", "Fit Spline Curve on Chain" },
		{ "Keywords", "Fit,Resample,Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "Fits a given spline curve to a chain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to align to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "The items to align to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The curve to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
		{ "ToolTip", "The curve to align" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FitSplineCurveToChainItemArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChainItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_FitSplineCurveToChainItemArray, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_FitSplineCurveToChainItemArray",
	Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::PropPointers),
	sizeof(FRigUnit_FitSplineCurveToChainItemArray),
	alignof(FRigUnit_FitSplineCurveToChainItemArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray.InnerSingleton;
}
void FRigUnit_FitSplineCurveToChainItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_FitSplineCurveToChainItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Spline
	);
}
// End ScriptStruct FRigUnit_FitSplineCurveToChainItemArray

// Begin ScriptStruct FRigUnit_ClosestParameterFromControlRigSpline
static_assert(std::is_polymorphic<FRigUnit_ClosestParameterFromControlRigSpline>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_ClosestParameterFromControlRigSpline cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline;
class UScriptStruct* FRigUnit_ClosestParameterFromControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ClosestParameterFromControlRigSpline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute;
		Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute.Emplace(TEXT("U"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ClosestParameterFromControlRigSpline::Execute"), &FRigUnit_ClosestParameterFromControlRigSpline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton, Arguments_FRigUnit_ClosestParameterFromControlRigSpline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ClosestParameterFromControlRigSpline>()
{
	return FRigUnit_ClosestParameterFromControlRigSpline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Retrieves the closest U value from a given Spline and a position\n */" },
		{ "DisplayName", "Closest Parameter From Spline" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "NodeColor", "0.737911 0.099899 0.099899" },
		{ "ToolTip", "* Retrieves the closest U value from a given Spline and a position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ClosestParameterFromControlRigSpline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ClosestParameterFromControlRigSpline, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ClosestParameterFromControlRigSpline, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ClosestParameterFromControlRigSpline, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewProp_U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_ClosestParameterFromControlRigSpline",
	Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::PropPointers),
	sizeof(FRigUnit_ClosestParameterFromControlRigSpline),
	alignof(FRigUnit_ClosestParameterFromControlRigSpline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline.InnerSingleton;
}
void FRigUnit_ClosestParameterFromControlRigSpline::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ClosestParameterFromControlRigSpline::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Position,
		U
	);
}
// End ScriptStruct FRigUnit_ClosestParameterFromControlRigSpline

// Begin ScriptStruct FRigUnit_ParameterAtPercentage
static_assert(std::is_polymorphic<FRigUnit_ParameterAtPercentage>() == std::is_polymorphic<FRigUnit_ControlRigSplineBase>(), "USTRUCT FRigUnit_ParameterAtPercentage cannot be polymorphic unless super FRigUnit_ControlRigSplineBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage;
class UScriptStruct* FRigUnit_ParameterAtPercentage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("RigUnit_ParameterAtPercentage"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParameterAtPercentage_Execute;
		Arguments_FRigUnit_ParameterAtPercentage_Execute.Emplace(TEXT("Spline"), TEXT("FControlRigSpline"));
		Arguments_FRigUnit_ParameterAtPercentage_Execute.Emplace(TEXT("Percentage"), TEXT("float"));
		Arguments_FRigUnit_ParameterAtPercentage_Execute.Emplace(TEXT("U"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParameterAtPercentage::Execute"), &FRigUnit_ParameterAtPercentage::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton, Arguments_FRigUnit_ParameterAtPercentage_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FRigUnit_ParameterAtPercentage>()
{
	return FRigUnit_ParameterAtPercentage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Splines" },
		{ "Comment", "/*\n * Returns the U parameter of a spline given a length percentage (0.0 - 1.0)\n */" },
		{ "DisplayName", "Parameter At Length Percentage" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "ToolTip", "* Returns the U parameter of a spline given a length percentage (0.0 - 1.0)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/ControlRigSplineUnits.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParameterAtPercentage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParameterAtPercentage, Spline), Z_Construct_UScriptStruct_FControlRigSpline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) }; // 4039582013
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParameterAtPercentage, Percentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Percentage_MetaData), NewProp_Percentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ParameterAtPercentage, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_Percentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewProp_U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
	Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase,
	&NewStructOps,
	"RigUnit_ParameterAtPercentage",
	Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::PropPointers),
	sizeof(FRigUnit_ParameterAtPercentage),
	alignof(FRigUnit_ParameterAtPercentage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage.InnerSingleton;
}
void FRigUnit_ParameterAtPercentage::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ParameterAtPercentage::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Spline,
		Percentage,
		U
	);
}
// End ScriptStruct FRigUnit_ParameterAtPercentage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_ControlRigSplineBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics::NewStructOps, TEXT("RigUnit_ControlRigSplineBase"), &Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ControlRigSplineBase), 1117900843U) },
		{ FRigUnit_ControlRigSplineFromPoints::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics::NewStructOps, TEXT("RigUnit_ControlRigSplineFromPoints"), &Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ControlRigSplineFromPoints), 1209962998U) },
		{ FRigUnit_ControlRigSplineFromTransforms::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics::NewStructOps, TEXT("RigUnit_ControlRigSplineFromTransforms"), &Z_Registration_Info_UScriptStruct_RigUnit_ControlRigSplineFromTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ControlRigSplineFromTransforms), 1828697241U) },
		{ FRigUnit_SetSplinePoints::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics::NewStructOps, TEXT("RigUnit_SetSplinePoints"), &Z_Registration_Info_UScriptStruct_RigUnit_SetSplinePoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetSplinePoints), 1030856655U) },
		{ FRigUnit_SetSplineTransforms::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics::NewStructOps, TEXT("RigUnit_SetSplineTransforms"), &Z_Registration_Info_UScriptStruct_RigUnit_SetSplineTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetSplineTransforms), 3107176307U) },
		{ FRigUnit_PositionFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_PositionFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_PositionFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PositionFromControlRigSpline), 4207807622U) },
		{ FRigUnit_TransformFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_TransformFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformFromControlRigSpline), 2257260774U) },
		{ FRigUnit_TransformFromControlRigSpline2::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics::NewStructOps, TEXT("RigUnit_TransformFromControlRigSpline2"), &Z_Registration_Info_UScriptStruct_RigUnit_TransformFromControlRigSpline2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TransformFromControlRigSpline2), 4250019157U) },
		{ FRigUnit_TangentFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_TangentFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_TangentFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TangentFromControlRigSpline), 1199566861U) },
		{ FRigUnit_DrawControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_DrawControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_DrawControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DrawControlRigSpline), 981773133U) },
		{ FRigUnit_GetLengthControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_GetLengthControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_GetLengthControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetLengthControlRigSpline), 3059606734U) },
		{ FRigUnit_GetLengthAtParamControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_GetLengthAtParamControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_GetLengthAtParamControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetLengthAtParamControlRigSpline), 1812639658U) },
		{ FRigUnit_FitChainToSplineCurve::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics::NewStructOps, TEXT("RigUnit_FitChainToSplineCurve"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToSplineCurve), 2268675303U) },
		{ FRigUnit_FitChainToSplineCurveItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics::NewStructOps, TEXT("RigUnit_FitChainToSplineCurveItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_FitChainToSplineCurveItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitChainToSplineCurveItemArray), 68606611U) },
		{ FRigUnit_SplineConstraint_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics::NewStructOps, TEXT("RigUnit_SplineConstraint_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SplineConstraint_WorkData), 1363968922U) },
		{ FRigUnit_SplineConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics::NewStructOps, TEXT("RigUnit_SplineConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_SplineConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SplineConstraint), 2542073524U) },
		{ FRigUnit_FitSplineCurveToChain::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics::NewStructOps, TEXT("RigUnit_FitSplineCurveToChain"), &Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitSplineCurveToChain), 2488435912U) },
		{ FRigUnit_FitSplineCurveToChainItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics::NewStructOps, TEXT("RigUnit_FitSplineCurveToChainItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_FitSplineCurveToChainItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FitSplineCurveToChainItemArray), 3462780515U) },
		{ FRigUnit_ClosestParameterFromControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics::NewStructOps, TEXT("RigUnit_ClosestParameterFromControlRigSpline"), &Z_Registration_Info_UScriptStruct_RigUnit_ClosestParameterFromControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ClosestParameterFromControlRigSpline), 1679331260U) },
		{ FRigUnit_ParameterAtPercentage::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics::NewStructOps, TEXT("RigUnit_ParameterAtPercentage"), &Z_Registration_Info_UScriptStruct_RigUnit_ParameterAtPercentage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParameterAtPercentage), 433494309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_1483935024(TEXT("/Script/ControlRigSpline"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
