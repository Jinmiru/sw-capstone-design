// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/TriangulateSplinesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangulateSplinesTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTriangulateSplinesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTriangulateSplinesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTriangulateSplinesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTriangulateSplinesToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTriangulateSplinesToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UTriangulateSplinesToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UTriangulateSplinesToolProperties
void UTriangulateSplinesToolProperties::StaticRegisterNativesUTriangulateSplinesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangulateSplinesToolProperties);
UClass* Z_Construct_UClass_UTriangulateSplinesToolProperties_NoRegister()
{
	return UTriangulateSplinesToolProperties::StaticClass();
}
struct Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Parameters for controlling the spline triangulation\n */" },
		{ "IncludePath", "TriangulateSplinesTool.h" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Parameters for controlling the spline triangulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Spline" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "// How far to allow the triangulation boundary can deviate from the spline curve before we add more vertices\n" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "How far to allow the triangulation boundary can deviate from the spline curve before we add more vertices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlattenMethod_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "// Whether and how to flatten the curves. If curves are flattened, they can also be offset and combined\n" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Whether and how to flatten the curves. If curves are flattened, they can also be offset and combined" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombineMethod_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "// Whether or how to combine the curves\n" },
		{ "EditCondition", "FlattenMethod != EFlattenCurveMethod::DoNotFlatten" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Whether or how to combine the curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If > 0, Extrude the triangulation by this amount\n" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "If > 0, Extrude the triangulation by this amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipResult_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// Whether to flip the facing direction of the generated mesh\n" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Whether to flip the facing direction of the generated mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenCurves_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "// How to handle open curves: Either offset them, or treat them as closed curves\n" },
		{ "EditCondition", "FlattenMethod != EFlattenCurveMethod::DoNotFlatten" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "How to handle open curves: Either offset them, or treat them as closed curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveOffset_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "// How much offset to apply to curves\n" },
		{ "EditCondition", "FlattenMethod != EFlattenCurveMethod::DoNotFlatten" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "How much offset to apply to curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetClosedCurves_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "// Whether and how to apply offset to closed curves\n" },
		{ "EditCondition", "FlattenMethod != EFlattenCurveMethod::DoNotFlatten && CurveOffset != 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Whether and how to apply offset to closed curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndShapes_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "// The shape of the ends of offset curves\n" },
		{ "EditCondition", "FlattenMethod != EFlattenCurveMethod::DoNotFlatten && OpenCurves != EOffsetOpenCurvesMethod::TreatAsClosed && CurveOffset != 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "The shape of the ends of offset curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinMethod_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "// The shape of joins between segments of an offset curve\n" },
		{ "EditCondition", "FlattenMethod != EFlattenCurveMethod::DoNotFlatten && CurveOffset != 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "The shape of joins between segments of an offset curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiterLimit_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// How far a miter join can extend before it is replaced by a square join\n" },
		{ "EditCondition", "FlattenMethod != EFlattenCurveMethod::DoNotFlatten && CurveOffset != 0 && JoinMethod == EOffsetJoinMethod::Miter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "How far a miter join can extend before it is replaced by a square join" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlattenMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FlattenMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombineMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CombineMethod;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Thickness;
	static void NewProp_bFlipResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipResult;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OpenCurves_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OpenCurves;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurveOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetClosedCurves_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetClosedCurves;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndShapes_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EndShapes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_JoinMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_JoinMethod;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MiterLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangulateSplinesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_MetaData), NewProp_ErrorTolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_FlattenMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_FlattenMethod = { "FlattenMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, FlattenMethod), Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlattenMethod_MetaData), NewProp_FlattenMethod_MetaData) }; // 4278031770
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_CombineMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_CombineMethod = { "CombineMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, CombineMethod), Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombineMethod_MetaData), NewProp_CombineMethod_MetaData) }; // 161132618
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
void Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_bFlipResult_SetBit(void* Obj)
{
	((UTriangulateSplinesToolProperties*)Obj)->bFlipResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_bFlipResult = { "bFlipResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTriangulateSplinesToolProperties), &Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_bFlipResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipResult_MetaData), NewProp_bFlipResult_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OpenCurves_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OpenCurves = { "OpenCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, OpenCurves), Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenCurves_MetaData), NewProp_OpenCurves_MetaData) }; // 3478252333
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_CurveOffset = { "CurveOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, CurveOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveOffset_MetaData), NewProp_CurveOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OffsetClosedCurves_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OffsetClosedCurves = { "OffsetClosedCurves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, OffsetClosedCurves), Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetClosedCurves_MetaData), NewProp_OffsetClosedCurves_MetaData) }; // 1769422414
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_EndShapes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_EndShapes = { "EndShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, EndShapes), Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndShapes_MetaData), NewProp_EndShapes_MetaData) }; // 2585430849
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_JoinMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_JoinMethod = { "JoinMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, JoinMethod), Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinMethod_MetaData), NewProp_JoinMethod_MetaData) }; // 3895074759
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_MiterLimit = { "MiterLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesToolProperties, MiterLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiterLimit_MetaData), NewProp_MiterLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_ErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_FlattenMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_FlattenMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_CombineMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_CombineMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_bFlipResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OpenCurves_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OpenCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_CurveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OffsetClosedCurves_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_OffsetClosedCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_EndShapes_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_EndShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_JoinMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_JoinMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::NewProp_MiterLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::ClassParams = {
	&UTriangulateSplinesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriangulateSplinesToolProperties()
{
	if (!Z_Registration_Info_UClass_UTriangulateSplinesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangulateSplinesToolProperties.OuterSingleton, Z_Construct_UClass_UTriangulateSplinesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriangulateSplinesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTriangulateSplinesToolProperties>()
{
	return UTriangulateSplinesToolProperties::StaticClass();
}
UTriangulateSplinesToolProperties::UTriangulateSplinesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangulateSplinesToolProperties);
UTriangulateSplinesToolProperties::~UTriangulateSplinesToolProperties() {}
// End Class UTriangulateSplinesToolProperties

// Begin Class UTriangulateSplinesTool
void UTriangulateSplinesTool::StaticRegisterNativesUTriangulateSplinesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangulateSplinesTool);
UClass* Z_Construct_UClass_UTriangulateSplinesTool_NoRegister()
{
	return UTriangulateSplinesTool::StaticClass();
}
struct Z_Construct_UClass_UTriangulateSplinesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool to create a mesh from a set of selected Spline Components\n */" },
		{ "IncludePath", "TriangulateSplinesTool.h" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Tool to create a mesh from a set of selected Spline Components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriangulateProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsWithSplines_MetaData[] = {
		{ "Comment", "// Note: We track actors instead of the USplineComponents here because the USplineComponents objects are often deleted / swapped for identical but new objects\n" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Note: We track actors instead of the USplineComponents here because the USplineComponents objects are often deleted / swapped for identical but new objects" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriangulateProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorsWithSplines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsWithSplines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangulateSplinesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_TriangulateProperties = { "TriangulateProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesTool, TriangulateProperties), Z_Construct_UClass_UTriangulateSplinesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriangulateProperties_MetaData), NewProp_TriangulateProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_ActorsWithSplines_Inner = { "ActorsWithSplines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_ActorsWithSplines = { "ActorsWithSplines", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTriangulateSplinesTool, ActorsWithSplines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsWithSplines_MetaData), NewProp_ActorsWithSplines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriangulateSplinesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_TriangulateProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_ActorsWithSplines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangulateSplinesTool_Statics::NewProp_ActorsWithSplines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTriangulateSplinesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister, (int32)VTABLE_OFFSET(UTriangulateSplinesTool, IInteractiveToolEditorGizmoAPI), false },  // 146736287
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangulateSplinesTool_Statics::ClassParams = {
	&UTriangulateSplinesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTriangulateSplinesTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriangulateSplinesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriangulateSplinesTool()
{
	if (!Z_Registration_Info_UClass_UTriangulateSplinesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangulateSplinesTool.OuterSingleton, Z_Construct_UClass_UTriangulateSplinesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriangulateSplinesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTriangulateSplinesTool>()
{
	return UTriangulateSplinesTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangulateSplinesTool);
UTriangulateSplinesTool::~UTriangulateSplinesTool() {}
// End Class UTriangulateSplinesTool

// Begin Class UTriangulateSplinesToolBuilder
void UTriangulateSplinesToolBuilder::StaticRegisterNativesUTriangulateSplinesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangulateSplinesToolBuilder);
UClass* Z_Construct_UClass_UTriangulateSplinesToolBuilder_NoRegister()
{
	return UTriangulateSplinesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UTriangulateSplinesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Tool Builder for tools that operate on a selection of Spline Components\n */" },
		{ "IncludePath", "TriangulateSplinesTool.h" },
		{ "ModuleRelativePath", "Public/TriangulateSplinesTool.h" },
		{ "ToolTip", "Base Tool Builder for tools that operate on a selection of Spline Components" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangulateSplinesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTriangulateSplinesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangulateSplinesToolBuilder_Statics::ClassParams = {
	&UTriangulateSplinesToolBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTriangulateSplinesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UTriangulateSplinesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTriangulateSplinesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UTriangulateSplinesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangulateSplinesToolBuilder.OuterSingleton, Z_Construct_UClass_UTriangulateSplinesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTriangulateSplinesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UTriangulateSplinesToolBuilder>()
{
	return UTriangulateSplinesToolBuilder::StaticClass();
}
UTriangulateSplinesToolBuilder::UTriangulateSplinesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangulateSplinesToolBuilder);
UTriangulateSplinesToolBuilder::~UTriangulateSplinesToolBuilder() {}
// End Class UTriangulateSplinesToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TriangulateSplinesTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTriangulateSplinesToolProperties, UTriangulateSplinesToolProperties::StaticClass, TEXT("UTriangulateSplinesToolProperties"), &Z_Registration_Info_UClass_UTriangulateSplinesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangulateSplinesToolProperties), 3457507833U) },
		{ Z_Construct_UClass_UTriangulateSplinesTool, UTriangulateSplinesTool::StaticClass, TEXT("UTriangulateSplinesTool"), &Z_Registration_Info_UClass_UTriangulateSplinesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangulateSplinesTool), 157829012U) },
		{ Z_Construct_UClass_UTriangulateSplinesToolBuilder, UTriangulateSplinesToolBuilder::StaticClass, TEXT("UTriangulateSplinesToolBuilder"), &Z_Registration_Info_UClass_UTriangulateSplinesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangulateSplinesToolBuilder), 4142572822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TriangulateSplinesTool_h_53606262(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TriangulateSplinesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_TriangulateSplinesTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
