// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/RevolveSplineTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolveSplineTool() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolActionPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolActionPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum ERevolveSplineSampleMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERevolveSplineSampleMode;
static UEnum* ERevolveSplineSampleMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERevolveSplineSampleMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERevolveSplineSampleMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ERevolveSplineSampleMode"));
	}
	return Z_Registration_Info_UEnum_ERevolveSplineSampleMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ERevolveSplineSampleMode>()
{
	return ERevolveSplineSampleMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//~ TODO: Might want to have some shared enum for sampling splines in a util folder,\n//~ but hesitant to prescribe it until other tools want it.\n" },
		{ "ControlPointsOnly.Comment", "//~ TODO: Might want to have some shared enum for sampling splines in a util folder,\n//~ but hesitant to prescribe it until other tools want it.\n// Place points only at the spline control points\n" },
		{ "ControlPointsOnly.Name", "ERevolveSplineSampleMode::ControlPointsOnly" },
		{ "ControlPointsOnly.ToolTip", "Place points only at the spline control points" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "PolyLineMaxError.Comment", "// Place points along the spline such that the resulting polyline has no more than \n// some maximum deviation from the curve.\n" },
		{ "PolyLineMaxError.Name", "ERevolveSplineSampleMode::PolyLineMaxError" },
		{ "PolyLineMaxError.ToolTip", "Place points along the spline such that the resulting polyline has no more than\nsome maximum deviation from the curve." },
		{ "UniformSpacingAlongCurve.Comment", "// Place points along spline that are an equal spacing apart, and so that the spacing\n// is as close as possible to some max spacing.\n" },
		{ "UniformSpacingAlongCurve.Name", "ERevolveSplineSampleMode::UniformSpacingAlongCurve" },
		{ "UniformSpacingAlongCurve.ToolTip", "Place points along spline that are an equal spacing apart, and so that the spacing\nis as close as possible to some max spacing." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERevolveSplineSampleMode::ControlPointsOnly", (int64)ERevolveSplineSampleMode::ControlPointsOnly },
		{ "ERevolveSplineSampleMode::PolyLineMaxError", (int64)ERevolveSplineSampleMode::PolyLineMaxError },
		{ "ERevolveSplineSampleMode::UniformSpacingAlongCurve", (int64)ERevolveSplineSampleMode::UniformSpacingAlongCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ERevolveSplineSampleMode",
	"ERevolveSplineSampleMode",
	Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode()
{
	if (!Z_Registration_Info_UEnum_ERevolveSplineSampleMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERevolveSplineSampleMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERevolveSplineSampleMode.InnerSingleton;
}
// End Enum ERevolveSplineSampleMode

// Begin Class URevolveSplineToolProperties
void URevolveSplineToolProperties::StaticRegisterNativesURevolveSplineToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveSplineToolProperties);
UClass* Z_Construct_UClass_URevolveSplineToolProperties_NoRegister()
{
	return URevolveSplineToolProperties::StaticClass();
}
struct Z_Construct_UClass_URevolveSplineToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RevolveSplineTool.h" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMode_MetaData[] = {
		{ "Category", "Spline" },
		{ "Comment", "/** Determines how points to revolve are actually picked from the spline. */" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "Determines how points to revolve are actually picked from the spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Spline" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** How far to allow the triangulation boundary can deviate from the spline curve before we add more vertices. */" },
		{ "EditCondition", "SampleMode == ERevolveSplineSampleMode::PolyLineMaxError" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "How far to allow the triangulation boundary can deviate from the spline curve before we add more vertices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSampleDistance_MetaData[] = {
		{ "Category", "Spline" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** The maximal distance that the spacing should be allowed to be. */" },
		{ "EditCondition", "SampleMode == ERevolveSplineSampleMode::UniformSpacingAlongCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "The maximal distance that the spacing should be allowed to be." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapFillMode_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed. */" },
		{ "DisplayAfter", "QuadSplitMode" },
		{ "EditCondition", "HeightOffsetPerDegree != 0 || RevolveDegrees != 360" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosePathToAxis_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result.\n\x09  * This is not relevant for paths that are already closed. */" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result.\nThis is not relevant for paths that are already closed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrigin_MetaData[] = {
		{ "Category", "RevolutionAxis" },
		{ "Comment", "/** Sets the revolution axis origin. */" },
		{ "Delta", "5" },
		{ "DisplayName", "Origin" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "Sets the revolution axis origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrientation_MetaData[] = {
		{ "Category", "RevolutionAxis" },
		{ "ClampMax", "180000" },
		{ "ClampMin", "-180000" },
		{ "Comment", "/** Sets the revolution axis pitch and yaw. */" },
		{ "DisplayName", "Orientation" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "Sets the revolution axis pitch and yaw." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetAxisOnStart_MetaData[] = {
		{ "Category", "RevolutionAxis" },
		{ "Comment", "/** \n\x09 * If true, the revolution axis is re-fit to the input spline on each tool start. If false, the previous\n\x09 * revolution axis is kept.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "If true, the revolution axis is re-fit to the input spline on each tool start. If false, the previous\nrevolution axis is kept." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSampleDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CapFillMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CapFillMode;
	static void NewProp_bClosePathToAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosePathToAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrientation;
	static void NewProp_bResetAxisOnStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAxisOnStart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveSplineToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_SampleMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_SampleMode = { "SampleMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineToolProperties, SampleMode), Z_Construct_UEnum_MeshModelingToolsExp_ERevolveSplineSampleMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMode_MetaData), NewProp_SampleMode_MetaData) }; // 377021897
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineToolProperties, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorTolerance_MetaData), NewProp_ErrorTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_MaxSampleDistance = { "MaxSampleDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineToolProperties, MaxSampleDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSampleDistance_MetaData), NewProp_MaxSampleDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_CapFillMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_CapFillMode = { "CapFillMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineToolProperties, CapFillMode), Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapFillMode_MetaData), NewProp_CapFillMode_MetaData) }; // 649546140
void Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bClosePathToAxis_SetBit(void* Obj)
{
	((URevolveSplineToolProperties*)Obj)->bClosePathToAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bClosePathToAxis = { "bClosePathToAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URevolveSplineToolProperties), &Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bClosePathToAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosePathToAxis_MetaData), NewProp_bClosePathToAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_AxisOrigin = { "AxisOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineToolProperties, AxisOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrigin_MetaData), NewProp_AxisOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_AxisOrientation = { "AxisOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineToolProperties, AxisOrientation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrientation_MetaData), NewProp_AxisOrientation_MetaData) };
void Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bResetAxisOnStart_SetBit(void* Obj)
{
	((URevolveSplineToolProperties*)Obj)->bResetAxisOnStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bResetAxisOnStart = { "bResetAxisOnStart", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URevolveSplineToolProperties), &Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bResetAxisOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetAxisOnStart_MetaData), NewProp_bResetAxisOnStart_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveSplineToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_SampleMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_SampleMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_ErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_MaxSampleDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_CapFillMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_CapFillMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bClosePathToAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_AxisOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_AxisOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineToolProperties_Statics::NewProp_bResetAxisOnStart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URevolveSplineToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URevolveProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveSplineToolProperties_Statics::ClassParams = {
	&URevolveSplineToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URevolveSplineToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveSplineToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveSplineToolProperties()
{
	if (!Z_Registration_Info_UClass_URevolveSplineToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveSplineToolProperties.OuterSingleton, Z_Construct_UClass_URevolveSplineToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveSplineToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveSplineToolProperties>()
{
	return URevolveSplineToolProperties::StaticClass();
}
URevolveSplineToolProperties::URevolveSplineToolProperties() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveSplineToolProperties);
URevolveSplineToolProperties::~URevolveSplineToolProperties() {}
// End Class URevolveSplineToolProperties

// Begin Class URevolveSplineToolActionPropertySet Function ResetAxis
struct Z_Construct_UFunction_URevolveSplineToolActionPropertySet_ResetAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Fit the axis to the current curve(by aligning it to the startand end points) */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "Fit the axis to the current curve(by aligning it to the startand end points)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URevolveSplineToolActionPropertySet_ResetAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URevolveSplineToolActionPropertySet, nullptr, "ResetAxis", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URevolveSplineToolActionPropertySet_ResetAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_URevolveSplineToolActionPropertySet_ResetAxis_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URevolveSplineToolActionPropertySet_ResetAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URevolveSplineToolActionPropertySet_ResetAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URevolveSplineToolActionPropertySet::execResetAxis)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAxis();
	P_NATIVE_END;
}
// End Class URevolveSplineToolActionPropertySet Function ResetAxis

// Begin Class URevolveSplineToolActionPropertySet
void URevolveSplineToolActionPropertySet::StaticRegisterNativesURevolveSplineToolActionPropertySet()
{
	UClass* Class = URevolveSplineToolActionPropertySet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetAxis", &URevolveSplineToolActionPropertySet::execResetAxis },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveSplineToolActionPropertySet);
UClass* Z_Construct_UClass_URevolveSplineToolActionPropertySet_NoRegister()
{
	return URevolveSplineToolActionPropertySet::StaticClass();
}
struct Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RevolveSplineTool.h" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URevolveSplineToolActionPropertySet_ResetAxis, "ResetAxis" }, // 1205273901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveSplineToolActionPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics::ClassParams = {
	&URevolveSplineToolActionPropertySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveSplineToolActionPropertySet()
{
	if (!Z_Registration_Info_UClass_URevolveSplineToolActionPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveSplineToolActionPropertySet.OuterSingleton, Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveSplineToolActionPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveSplineToolActionPropertySet>()
{
	return URevolveSplineToolActionPropertySet::StaticClass();
}
URevolveSplineToolActionPropertySet::URevolveSplineToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveSplineToolActionPropertySet);
URevolveSplineToolActionPropertySet::~URevolveSplineToolActionPropertySet() {}
// End Class URevolveSplineToolActionPropertySet

// Begin Class URevolveSplineTool
void URevolveSplineTool::StaticRegisterNativesURevolveSplineTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveSplineTool);
UClass* Z_Construct_UClass_URevolveSplineTool_NoRegister()
{
	return URevolveSplineTool::StaticClass();
}
struct Z_Construct_UClass_URevolveSplineTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Revolves a selected spline to create a new mesh.\n */" },
		{ "IncludePath", "RevolveSplineTool.h" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
		{ "ToolTip", "Revolves a selected spline to create a new mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveSplineTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineTool, Settings), Z_Construct_UClass_URevolveSplineToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialProperties_MetaData), NewProp_MaterialProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineTool, ToolActions), Z_Construct_UClass_URevolveSplineToolActionPropertySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolActions_MetaData), NewProp_ToolActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URevolveSplineTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMechanic_MetaData), NewProp_PlaneMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveSplineTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_MaterialProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_ToolActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveSplineTool_Statics::NewProp_PlaneMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URevolveSplineTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URevolveSplineTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolEditorGizmoAPI_NoRegister, (int32)VTABLE_OFFSET(URevolveSplineTool, IInteractiveToolEditorGizmoAPI), false },  // 146736287
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveSplineTool_Statics::ClassParams = {
	&URevolveSplineTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URevolveSplineTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveSplineTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveSplineTool()
{
	if (!Z_Registration_Info_UClass_URevolveSplineTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveSplineTool.OuterSingleton, Z_Construct_UClass_URevolveSplineTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveSplineTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveSplineTool>()
{
	return URevolveSplineTool::StaticClass();
}
URevolveSplineTool::URevolveSplineTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveSplineTool);
URevolveSplineTool::~URevolveSplineTool() {}
// End Class URevolveSplineTool

// Begin Class URevolveSplineToolBuilder
void URevolveSplineToolBuilder::StaticRegisterNativesURevolveSplineToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveSplineToolBuilder);
UClass* Z_Construct_UClass_URevolveSplineToolBuilder_NoRegister()
{
	return URevolveSplineToolBuilder::StaticClass();
}
struct Z_Construct_UClass_URevolveSplineToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RevolveSplineTool.h" },
		{ "ModuleRelativePath", "Public/RevolveSplineTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveSplineToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URevolveSplineToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveSplineToolBuilder_Statics::ClassParams = {
	&URevolveSplineToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URevolveSplineToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URevolveSplineToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URevolveSplineToolBuilder()
{
	if (!Z_Registration_Info_UClass_URevolveSplineToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveSplineToolBuilder.OuterSingleton, Z_Construct_UClass_URevolveSplineToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URevolveSplineToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveSplineToolBuilder>()
{
	return URevolveSplineToolBuilder::StaticClass();
}
URevolveSplineToolBuilder::URevolveSplineToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveSplineToolBuilder);
URevolveSplineToolBuilder::~URevolveSplineToolBuilder() {}
// End Class URevolveSplineToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERevolveSplineSampleMode_StaticEnum, TEXT("ERevolveSplineSampleMode"), &Z_Registration_Info_UEnum_ERevolveSplineSampleMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 377021897U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URevolveSplineToolProperties, URevolveSplineToolProperties::StaticClass, TEXT("URevolveSplineToolProperties"), &Z_Registration_Info_UClass_URevolveSplineToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveSplineToolProperties), 2814515205U) },
		{ Z_Construct_UClass_URevolveSplineToolActionPropertySet, URevolveSplineToolActionPropertySet::StaticClass, TEXT("URevolveSplineToolActionPropertySet"), &Z_Registration_Info_UClass_URevolveSplineToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveSplineToolActionPropertySet), 290737659U) },
		{ Z_Construct_UClass_URevolveSplineTool, URevolveSplineTool::StaticClass, TEXT("URevolveSplineTool"), &Z_Registration_Info_UClass_URevolveSplineTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveSplineTool), 4107012363U) },
		{ Z_Construct_UClass_URevolveSplineToolBuilder, URevolveSplineToolBuilder::StaticClass, TEXT("URevolveSplineToolBuilder"), &Z_Registration_Info_UClass_URevolveSplineToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveSplineToolBuilder), 2967098170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_2922938741(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
