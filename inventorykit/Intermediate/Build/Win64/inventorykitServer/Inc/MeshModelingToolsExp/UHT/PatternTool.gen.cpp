// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/PatternTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternTool() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_GridSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_GridSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_LinearSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_LinearSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_OutputSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_OutputSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RadialSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RadialSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RotationSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RotationSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_ScaleSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_ScaleSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_TranslationSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_TranslationSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolSettings();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolSettings_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UPatternToolBuilder
void UPatternToolBuilder::StaticRegisterNativesUPatternToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternToolBuilder);
UClass* Z_Construct_UClass_UPatternToolBuilder_NoRegister()
{
	return UPatternToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UPatternToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPatternToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternToolBuilder_Statics::ClassParams = {
	&UPatternToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternToolBuilder()
{
	if (!Z_Registration_Info_UClass_UPatternToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternToolBuilder.OuterSingleton, Z_Construct_UClass_UPatternToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternToolBuilder>()
{
	return UPatternToolBuilder::StaticClass();
}
UPatternToolBuilder::UPatternToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternToolBuilder);
UPatternToolBuilder::~UPatternToolBuilder() {}
// End Class UPatternToolBuilder

// Begin Enum EPatternToolShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolShape;
static UEnum* EPatternToolShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPatternToolShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPatternToolShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolShape"));
	}
	return Z_Registration_Info_UEnum_EPatternToolShape.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolShape>()
{
	return EPatternToolShape_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Circle.Comment", "/** Arrange pattern elements in a Circle */" },
		{ "Circle.Name", "EPatternToolShape::Circle" },
		{ "Circle.ToolTip", "Arrange pattern elements in a Circle" },
		{ "Grid.Comment", "/** Arrange pattern elements in a 2D Grid */" },
		{ "Grid.Name", "EPatternToolShape::Grid" },
		{ "Grid.ToolTip", "Arrange pattern elements in a 2D Grid" },
		{ "Line.Comment", "/** Arrange pattern elements along a Line */" },
		{ "Line.Name", "EPatternToolShape::Line" },
		{ "Line.ToolTip", "Arrange pattern elements along a Line" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPatternToolShape::Line", (int64)EPatternToolShape::Line },
		{ "EPatternToolShape::Grid", (int64)EPatternToolShape::Grid },
		{ "EPatternToolShape::Circle", (int64)EPatternToolShape::Circle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EPatternToolShape",
	"EPatternToolShape",
	Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape()
{
	if (!Z_Registration_Info_UEnum_EPatternToolShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolShape.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPatternToolShape.InnerSingleton;
}
// End Enum EPatternToolShape

// Begin Enum EPatternToolSingleAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolSingleAxis;
static UEnum* EPatternToolSingleAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPatternToolSingleAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPatternToolSingleAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolSingleAxis"));
	}
	return Z_Registration_Info_UEnum_EPatternToolSingleAxis.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolSingleAxis>()
{
	return EPatternToolSingleAxis_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "XAxis.Name", "EPatternToolSingleAxis::XAxis" },
		{ "YAxis.Name", "EPatternToolSingleAxis::YAxis" },
		{ "ZAxis.Name", "EPatternToolSingleAxis::ZAxis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPatternToolSingleAxis::XAxis", (int64)EPatternToolSingleAxis::XAxis },
		{ "EPatternToolSingleAxis::YAxis", (int64)EPatternToolSingleAxis::YAxis },
		{ "EPatternToolSingleAxis::ZAxis", (int64)EPatternToolSingleAxis::ZAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EPatternToolSingleAxis",
	"EPatternToolSingleAxis",
	Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis()
{
	if (!Z_Registration_Info_UEnum_EPatternToolSingleAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolSingleAxis.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPatternToolSingleAxis.InnerSingleton;
}
// End Enum EPatternToolSingleAxis

// Begin Enum EPatternToolSinglePlane
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolSinglePlane;
static UEnum* EPatternToolSinglePlane_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPatternToolSinglePlane.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPatternToolSinglePlane.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolSinglePlane"));
	}
	return Z_Registration_Info_UEnum_EPatternToolSinglePlane.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolSinglePlane>()
{
	return EPatternToolSinglePlane_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "XYPlane.Name", "EPatternToolSinglePlane::XYPlane" },
		{ "XZPlane.Name", "EPatternToolSinglePlane::XZPlane" },
		{ "YZPlane.Name", "EPatternToolSinglePlane::YZPlane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPatternToolSinglePlane::XYPlane", (int64)EPatternToolSinglePlane::XYPlane },
		{ "EPatternToolSinglePlane::XZPlane", (int64)EPatternToolSinglePlane::XZPlane },
		{ "EPatternToolSinglePlane::YZPlane", (int64)EPatternToolSinglePlane::YZPlane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EPatternToolSinglePlane",
	"EPatternToolSinglePlane",
	Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane()
{
	if (!Z_Registration_Info_UEnum_EPatternToolSinglePlane.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolSinglePlane.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPatternToolSinglePlane.InnerSingleton;
}
// End Enum EPatternToolSinglePlane

// Begin Enum EPatternToolAxisSpacingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode;
static UEnum* EPatternToolAxisSpacingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolAxisSpacingMode"));
	}
	return Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolAxisSpacingMode>()
{
	return EPatternToolAxisSpacingMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ByCount.Comment", "/** Place a specific number of Pattern Elements along the pattern geometry */" },
		{ "ByCount.Name", "EPatternToolAxisSpacingMode::ByCount" },
		{ "ByCount.ToolTip", "Place a specific number of Pattern Elements along the pattern geometry" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "Packed.Comment", "/** Pack in as many Pattern Elements as fits in the available space */" },
		{ "Packed.Name", "EPatternToolAxisSpacingMode::Packed" },
		{ "Packed.ToolTip", "Pack in as many Pattern Elements as fits in the available space" },
		{ "StepSize.Comment", "/** Place Pattern Elements at regular increments along the Pattern Geometry (on-center) */" },
		{ "StepSize.Name", "EPatternToolAxisSpacingMode::StepSize" },
		{ "StepSize.ToolTip", "Place Pattern Elements at regular increments along the Pattern Geometry (on-center)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPatternToolAxisSpacingMode::ByCount", (int64)EPatternToolAxisSpacingMode::ByCount },
		{ "EPatternToolAxisSpacingMode::StepSize", (int64)EPatternToolAxisSpacingMode::StepSize },
		{ "EPatternToolAxisSpacingMode::Packed", (int64)EPatternToolAxisSpacingMode::Packed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EPatternToolAxisSpacingMode",
	"EPatternToolAxisSpacingMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode()
{
	if (!Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.InnerSingleton;
}
// End Enum EPatternToolAxisSpacingMode

// Begin Class UPatternToolSettings
void UPatternToolSettings::StaticRegisterNativesUPatternToolSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternToolSettings);
UClass* Z_Construct_UClass_UPatternToolSettings_NoRegister()
{
	return UPatternToolSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternToolSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The seed used to introduce random transform variations when enabled */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The seed used to introduce random transform variations when enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProjectElementsDown_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not the pattern items should be projected along the negative Z axis of the plane mechanic */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Whether or not the pattern items should be projected along the negative Z axis of the plane mechanic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionOffset_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** How much each pattern item should be moved along the negative Z axis of the plane mechanic if Project Elements Down is enabled */" },
		{ "Delta", "0.100000" },
		{ "EditCondition", "bProjectElementsDown == true" },
		{ "EditConditionHides", "" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "How much each pattern item should be moved along the negative Z axis of the plane mechanic if Project Elements Down is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideSources_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Hide the source meshes when enabled */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Hide the source meshes when enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeTransforms_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If false, all pattern elements will be positioned at the origin of the first pattern element */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If false, all pattern elements will be positioned at the origin of the first pattern element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomlyPickElements_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to randomly pick which source mesh is scattered at each location, or to always use all source meshes */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Whether to randomly pick which source mesh is scattered at each location, or to always use all source meshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Shape of the underlying Pattern */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Shape of the underlying Pattern" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleAxis_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Axis direction used for the Pattern geometry */" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "Shape == EPatternToolShape::Line" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Axis direction used for the Pattern geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SinglePlane_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Plane used for the Pattern geometry */" },
		{ "DisplayName", "Plane" },
		{ "EditCondition", "Shape != EPatternToolShape::Line" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Plane used for the Pattern geometry" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_bProjectElementsDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectElementsDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionOffset;
	static void NewProp_bHideSources_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSources;
	static void NewProp_bUseRelativeTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeTransforms;
	static void NewProp_bRandomlyPickElements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomlyPickElements;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SingleAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SingleAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SinglePlane_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SinglePlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternToolSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternToolSettings, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown_SetBit(void* Obj)
{
	((UPatternToolSettings*)Obj)->bProjectElementsDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown = { "bProjectElementsDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternToolSettings), &Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProjectElementsDown_MetaData), NewProp_bProjectElementsDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_ProjectionOffset = { "ProjectionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternToolSettings, ProjectionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionOffset_MetaData), NewProp_ProjectionOffset_MetaData) };
void Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources_SetBit(void* Obj)
{
	((UPatternToolSettings*)Obj)->bHideSources = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources = { "bHideSources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternToolSettings), &Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideSources_MetaData), NewProp_bHideSources_MetaData) };
void Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms_SetBit(void* Obj)
{
	((UPatternToolSettings*)Obj)->bUseRelativeTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms = { "bUseRelativeTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternToolSettings), &Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRelativeTransforms_MetaData), NewProp_bUseRelativeTransforms_MetaData) };
void Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bRandomlyPickElements_SetBit(void* Obj)
{
	((UPatternToolSettings*)Obj)->bRandomlyPickElements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bRandomlyPickElements = { "bRandomlyPickElements", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternToolSettings), &Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bRandomlyPickElements_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomlyPickElements_MetaData), NewProp_bRandomlyPickElements_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternToolSettings, Shape), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 3328210625
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis = { "SingleAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternToolSettings, SingleAxis), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleAxis_MetaData), NewProp_SingleAxis_MetaData) }; // 4010898517
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane = { "SinglePlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternToolSettings, SinglePlane), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SinglePlane_MetaData), NewProp_SinglePlane_MetaData) }; // 4138962080
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternToolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_ProjectionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bRandomlyPickElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternToolSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternToolSettings_Statics::ClassParams = {
	&UPatternToolSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternToolSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternToolSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternToolSettings()
{
	if (!Z_Registration_Info_UClass_UPatternToolSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternToolSettings.OuterSingleton, Z_Construct_UClass_UPatternToolSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternToolSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternToolSettings>()
{
	return UPatternToolSettings::StaticClass();
}
UPatternToolSettings::UPatternToolSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternToolSettings);
UPatternToolSettings::~UPatternToolSettings() {}
// End Class UPatternToolSettings

// Begin Class UPatternTool_BoundingBoxSettings
void UPatternTool_BoundingBoxSettings::StaticRegisterNativesUPatternTool_BoundingBoxSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_BoundingBoxSettings);
UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings_NoRegister()
{
	return UPatternTool_BoundingBoxSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Bounding Box adjustments in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Bounding Box adjustments in the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTransforms_MetaData[] = {
		{ "Category", "BoundingBox" },
		{ "Comment", "/** If true, pattern element bounding boxes are not changed to account for StartScale or StartRotation */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, pattern element bounding boxes are not changed to account for StartScale or StartRotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Adjustment_MetaData[] = {
		{ "Category", "BoundingBox" },
		{ "Comment", "/** Value added to the all pattern elements' bounding boxes for adjusting the behavior of packed spacing mode manually */" },
		{ "Delta", "0.100000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Value added to the all pattern elements' bounding boxes for adjusting the behavior of packed spacing mode manually" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisualize_MetaData[] = {
		{ "Category", "BoundingBox" },
		{ "Comment", "/** If true, the bounding boxes of each element are rendered in green and the combined bounding box of all source elements is rendered in red */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, the bounding boxes of each element are rendered in green and the combined bounding box of all source elements is rendered in red" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTransforms;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Adjustment;
	static void NewProp_bVisualize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_BoundingBoxSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms_SetBit(void* Obj)
{
	((UPatternTool_BoundingBoxSettings*)Obj)->bIgnoreTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms = { "bIgnoreTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_BoundingBoxSettings), &Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTransforms_MetaData), NewProp_bIgnoreTransforms_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_Adjustment = { "Adjustment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_BoundingBoxSettings, Adjustment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Adjustment_MetaData), NewProp_Adjustment_MetaData) };
void Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize_SetBit(void* Obj)
{
	((UPatternTool_BoundingBoxSettings*)Obj)->bVisualize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize = { "bVisualize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_BoundingBoxSettings), &Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisualize_MetaData), NewProp_bVisualize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_Adjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::ClassParams = {
	&UPatternTool_BoundingBoxSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_BoundingBoxSettings>()
{
	return UPatternTool_BoundingBoxSettings::StaticClass();
}
UPatternTool_BoundingBoxSettings::UPatternTool_BoundingBoxSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_BoundingBoxSettings);
UPatternTool_BoundingBoxSettings::~UPatternTool_BoundingBoxSettings() {}
// End Class UPatternTool_BoundingBoxSettings

// Begin Class UPatternTool_LinearSettings
void UPatternTool_LinearSettings::StaticRegisterNativesUPatternTool_LinearSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_LinearSettings);
UClass* Z_Construct_UClass_UPatternTool_LinearSettings_NoRegister()
{
	return UPatternTool_LinearSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_LinearSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Linear Patterns in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Linear Patterns in the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingMode_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of Pattern Elements to place */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of Pattern Elements to place" },
		{ "UIMax", "25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment used to place Pattern Elements */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment used to place Pattern Elements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length of Pattern along the Axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Length of Pattern along the Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCentered_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "Comment", "/** If true, Pattern is centered at the Origin, otherwise Pattern starts at the Origin */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern is centered at the Origin, otherwise Pattern starts at the Origin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Extent;
	static void NewProp_bCentered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCentered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_LinearSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode = { "SpacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_LinearSettings, SpacingMode), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingMode_MetaData), NewProp_SpacingMode_MetaData) }; // 3453340958
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_LinearSettings, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_LinearSettings, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_LinearSettings, Extent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
void Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered_SetBit(void* Obj)
{
	((UPatternTool_LinearSettings*)Obj)->bCentered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered = { "bCentered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_LinearSettings), &Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCentered_MetaData), NewProp_bCentered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_LinearSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_LinearSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::ClassParams = {
	&UPatternTool_LinearSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_LinearSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_LinearSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_LinearSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_LinearSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_LinearSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_LinearSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_LinearSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_LinearSettings>()
{
	return UPatternTool_LinearSettings::StaticClass();
}
UPatternTool_LinearSettings::UPatternTool_LinearSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_LinearSettings);
UPatternTool_LinearSettings::~UPatternTool_LinearSettings() {}
// End Class UPatternTool_LinearSettings

// Begin Class UPatternTool_GridSettings
void UPatternTool_GridSettings::StaticRegisterNativesUPatternTool_GridSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_GridSettings);
UClass* Z_Construct_UClass_UPatternTool_GridSettings_NoRegister()
{
	return UPatternTool_GridSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_GridSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Grid Patterns in the Pattern Tool\n * TODO: maybe we can just re-use UPatternTool_LinearSettings for this??\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Grid Patterns in the Pattern Tool\nTODO: maybe we can just re-use UPatternTool_LinearSettings for this??" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements along the Main axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements along the Main axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of Pattern Elements to place along the Main axis */" },
		{ "EditCondition", "SpacingX == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of Pattern Elements to place along the Main axis" },
		{ "UIMax", "25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSizeX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment used to place Pattern Elements along the Main axis */" },
		{ "EditCondition", "SpacingX == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment used to place Pattern Elements along the Main axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length/Extent of Pattern falong the Main Axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Length/Extent of Pattern falong the Main Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenteredX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "Comment", "/** If true, Pattern is centered at the Origin along the Main axis, otherwise Pattern starts at the Origin */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern is centered at the Origin along the Main axis, otherwise Pattern starts at the Origin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements along the Secondary axis*/" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements along the Secondary axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of  Pattern Elements to place along the Secondary axis */" },
		{ "EditCondition", "SpacingY == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of  Pattern Elements to place along the Secondary axis" },
		{ "UIMax", "25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSizeY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment used to place Pattern Elements along the Secondary axis */" },
		{ "EditCondition", "SpacingY == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment used to place Pattern Elements along the Secondary axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length/Extent of Pattern falong the Secondary Axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Length/Extent of Pattern falong the Secondary Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenteredY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "Comment", "/** If true, Pattern is centered at the Origin along the Secondary axis, otherwise Pattern starts at the Origin */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern is centered at the Origin along the Secondary axis, otherwise Pattern starts at the Origin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingX_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountX;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSizeX;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtentX;
	static void NewProp_bCenteredX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenteredX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingY_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountY;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSizeY;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtentY;
	static void NewProp_bCenteredY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenteredY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_GridSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX = { "SpacingX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, SpacingX), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingX_MetaData), NewProp_SpacingX_MetaData) }; // 3453340958
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountX = { "CountX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, CountX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountX_MetaData), NewProp_CountX_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeX = { "StepSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, StepSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSizeX_MetaData), NewProp_StepSizeX_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentX = { "ExtentX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, ExtentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentX_MetaData), NewProp_ExtentX_MetaData) };
void Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX_SetBit(void* Obj)
{
	((UPatternTool_GridSettings*)Obj)->bCenteredX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX = { "bCenteredX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_GridSettings), &Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenteredX_MetaData), NewProp_bCenteredX_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY = { "SpacingY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, SpacingY), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingY_MetaData), NewProp_SpacingY_MetaData) }; // 3453340958
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountY = { "CountY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, CountY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountY_MetaData), NewProp_CountY_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeY = { "StepSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, StepSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSizeY_MetaData), NewProp_StepSizeY_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentY = { "ExtentY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_GridSettings, ExtentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentY_MetaData), NewProp_ExtentY_MetaData) };
void Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY_SetBit(void* Obj)
{
	((UPatternTool_GridSettings*)Obj)->bCenteredY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY = { "bCenteredY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_GridSettings), &Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenteredY_MetaData), NewProp_bCenteredY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_GridSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_GridSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::ClassParams = {
	&UPatternTool_GridSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_GridSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_GridSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_GridSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_GridSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_GridSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_GridSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_GridSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_GridSettings>()
{
	return UPatternTool_GridSettings::StaticClass();
}
UPatternTool_GridSettings::UPatternTool_GridSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_GridSettings);
UPatternTool_GridSettings::~UPatternTool_GridSettings() {}
// End Class UPatternTool_GridSettings

// Begin Class UPatternTool_RadialSettings
void UPatternTool_RadialSettings::StaticRegisterNativesUPatternTool_RadialSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_RadialSettings);
UClass* Z_Construct_UClass_UPatternTool_RadialSettings_NoRegister()
{
	return UPatternTool_RadialSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_RadialSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Radial Patterns in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Radial Patterns in the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingMode_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements around the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements around the Circle/Arc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of  Pattern Elements to place */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of  Pattern Elements to place" },
		{ "UIMax", "25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment (in Degrees) used to position Pattern Elements around the Circle/Arc */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment (in Degrees) used to position Pattern Elements around the Circle/Arc" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius of the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Radius of the Circle/Arc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartAngle_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** Start angle of the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Start angle of the Circle/Arc" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndAngle_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** End angle of the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "End angle of the Circle/Arc" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleShift_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "/** Fixed offset added to Start/End Angles */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed offset added to Start/End Angles" },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOriented_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** If true, Pattern elements are rotated to align with the Circle tangent */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern elements are rotated to align with the Circle tangent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngleShift;
	static void NewProp_bOriented_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriented;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_RadialSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode = { "SpacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RadialSettings, SpacingMode), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingMode_MetaData), NewProp_SpacingMode_MetaData) }; // 3453340958
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RadialSettings, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RadialSettings, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RadialSettings, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RadialSettings, StartAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartAngle_MetaData), NewProp_StartAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RadialSettings, EndAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndAngle_MetaData), NewProp_EndAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_AngleShift = { "AngleShift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RadialSettings, AngleShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleShift_MetaData), NewProp_AngleShift_MetaData) };
void Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented_SetBit(void* Obj)
{
	((UPatternTool_RadialSettings*)Obj)->bOriented = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented = { "bOriented", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_RadialSettings), &Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOriented_MetaData), NewProp_bOriented_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_RadialSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StartAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_EndAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_AngleShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_RadialSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::ClassParams = {
	&UPatternTool_RadialSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_RadialSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_RadialSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_RadialSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_RadialSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_RadialSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_RadialSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_RadialSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_RadialSettings>()
{
	return UPatternTool_RadialSettings::StaticClass();
}
UPatternTool_RadialSettings::UPatternTool_RadialSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_RadialSettings);
UPatternTool_RadialSettings::~UPatternTool_RadialSettings() {}
// End Class UPatternTool_RadialSettings

// Begin Class UPatternTool_RotationSettings
void UPatternTool_RotationSettings::StaticRegisterNativesUPatternTool_RotationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_RotationSettings);
UClass* Z_Construct_UClass_UPatternTool_RotationSettings_NoRegister()
{
	return UPatternTool_RotationSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_RotationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Per Element Rotation in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Per Element Rotation in the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** If true, Rotation is linearly interpolated between StartRotation and Rotation values */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Rotation is linearly interpolated between StartRotation and Rotation values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJitter_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** If true, Rotation at each Pattern Element is offset by a uniformly chosen random value in the range of [-RotationJitterRange, RotationJitterRange] */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Rotation at each Pattern Element is offset by a uniformly chosen random value in the range of [-RotationJitterRange, RotationJitterRange]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Rotation applied to all Pattern Elements, or to first Pattern Element for Interpolated rotation */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Rotation applied to all Pattern Elements, or to first Pattern Element for Interpolated rotation" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Rotation applied to last Pattern Elements for Interpolated rotation */" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Rotation applied to last Pattern Elements for Interpolated rotation" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Upper bound of the range which is sampled to randomly rotate each Pattern Element if Jitter is true */" },
		{ "EditCondition", "bJitter" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Upper bound of the range which is sampled to randomly rotate each Pattern Element if Jitter is true" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
	static void NewProp_bJitter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJitter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Jitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_RotationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
{
	((UPatternTool_RotationSettings*)Obj)->bInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_RotationSettings), &Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolate_MetaData), NewProp_bInterpolate_MetaData) };
void Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter_SetBit(void* Obj)
{
	((UPatternTool_RotationSettings*)Obj)->bJitter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter = { "bJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_RotationSettings), &Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJitter_MetaData), NewProp_bJitter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RotationSettings, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_EndRotation = { "EndRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RotationSettings, EndRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndRotation_MetaData), NewProp_EndRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_RotationSettings, Jitter), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jitter_MetaData), NewProp_Jitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_RotationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_StartRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_EndRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_Jitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_RotationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::ClassParams = {
	&UPatternTool_RotationSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_RotationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_RotationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_RotationSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_RotationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_RotationSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_RotationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_RotationSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_RotationSettings>()
{
	return UPatternTool_RotationSettings::StaticClass();
}
UPatternTool_RotationSettings::UPatternTool_RotationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_RotationSettings);
UPatternTool_RotationSettings::~UPatternTool_RotationSettings() {}
// End Class UPatternTool_RotationSettings

// Begin Class UPatternTool_TranslationSettings
void UPatternTool_TranslationSettings::StaticRegisterNativesUPatternTool_TranslationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_TranslationSettings);
UClass* Z_Construct_UClass_UPatternTool_TranslationSettings_NoRegister()
{
	return UPatternTool_TranslationSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_TranslationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Per Element Translation in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Per Element Translation in the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** If true, Translation is linearly interpolated between StartTranslation and Translation values */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Translation is linearly interpolated between StartTranslation and Translation values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJitter_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** If true, Translation at each Pattern Element is offset by a uniformly chosen random value in the range of [-TranslationJitterRange, TranslationJitterRange] */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Translation at each Pattern Element is offset by a uniformly chosen random value in the range of [-TranslationJitterRange, TranslationJitterRange]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTranslation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Translation applied to all Pattern Elements, or to first Pattern Element for Interpolated translation */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Translation applied to all Pattern Elements, or to first Pattern Element for Interpolated translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTranslation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Translation applied to last Pattern Element for Interpolated translation */" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Translation applied to last Pattern Element for Interpolated translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[] = {
		{ "Category", "Translation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Upper bound of the range which is sampled to randomly translate each Pattern Element if Jitter is true */" },
		{ "EditCondition", "bJitter" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Upper bound of the range which is sampled to randomly translate each Pattern Element if Jitter is true" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
	static void NewProp_bJitter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJitter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Jitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_TranslationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
{
	((UPatternTool_TranslationSettings*)Obj)->bInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_TranslationSettings), &Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolate_MetaData), NewProp_bInterpolate_MetaData) };
void Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter_SetBit(void* Obj)
{
	((UPatternTool_TranslationSettings*)Obj)->bJitter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter = { "bJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_TranslationSettings), &Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJitter_MetaData), NewProp_bJitter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_StartTranslation = { "StartTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_TranslationSettings, StartTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTranslation_MetaData), NewProp_StartTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_EndTranslation = { "EndTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_TranslationSettings, EndTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTranslation_MetaData), NewProp_EndTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_TranslationSettings, Jitter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jitter_MetaData), NewProp_Jitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_StartTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_EndTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_Jitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::ClassParams = {
	&UPatternTool_TranslationSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_TranslationSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_TranslationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_TranslationSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_TranslationSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_TranslationSettings>()
{
	return UPatternTool_TranslationSettings::StaticClass();
}
UPatternTool_TranslationSettings::UPatternTool_TranslationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_TranslationSettings);
UPatternTool_TranslationSettings::~UPatternTool_TranslationSettings() {}
// End Class UPatternTool_TranslationSettings

// Begin Class UPatternTool_ScaleSettings
void UPatternTool_ScaleSettings::StaticRegisterNativesUPatternTool_ScaleSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_ScaleSettings);
UClass* Z_Construct_UClass_UPatternTool_ScaleSettings_NoRegister()
{
	return UPatternTool_ScaleSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_ScaleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Per Element Scale in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Per Element Scale in the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProportional_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** If true, changes to Start Scale, End Scale, and Jitter are proportional along all the axes */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, changes to Start Scale, End Scale, and Jitter are proportional along all the axes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** If true, Scale is linearly interpolated between StartScale and Scale values */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Scale is linearly interpolated between StartScale and Scale values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJitter_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** If true, Scale at each Pattern Element is offset by a uniformly chosen random value in the range of [-ScaleJitterRange, ScaleJitterRange] */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Scale at each Pattern Element is offset by a uniformly chosen random value in the range of [-ScaleJitterRange, ScaleJitterRange]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartScale_MetaData[] = {
		{ "Category", "Scale" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Scale applied to all Pattern Elements, or to first Pattern Element for Interpolated scale */" },
		{ "Delta", "0.010000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Scale applied to all Pattern Elements, or to first Pattern Element for Interpolated scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndScale_MetaData[] = {
		{ "Category", "Scale" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Scale applied to last Pattern Element for Interpolated scale */" },
		{ "Delta", "0.010000" },
		{ "EditCondition", "bInterpolate" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Scale applied to last Pattern Element for Interpolated scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[] = {
		{ "Category", "Scale" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Upper bound of the range which is sampled to randomly scale each Pattern Element if Jitter is true */" },
		{ "Delta", "0.010000" },
		{ "EditCondition", "bJitter" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Upper bound of the range which is sampled to randomly scale each Pattern Element if Jitter is true" },
	};
#endif // WITH_METADATA
	static void NewProp_bProportional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProportional;
	static void NewProp_bInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
	static void NewProp_bJitter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJitter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Jitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_ScaleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional_SetBit(void* Obj)
{
	((UPatternTool_ScaleSettings*)Obj)->bProportional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional = { "bProportional", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_ScaleSettings), &Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProportional_MetaData), NewProp_bProportional_MetaData) };
void Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
{
	((UPatternTool_ScaleSettings*)Obj)->bInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_ScaleSettings), &Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolate_MetaData), NewProp_bInterpolate_MetaData) };
void Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter_SetBit(void* Obj)
{
	((UPatternTool_ScaleSettings*)Obj)->bJitter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter = { "bJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_ScaleSettings), &Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJitter_MetaData), NewProp_bJitter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_StartScale = { "StartScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_ScaleSettings, StartScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartScale_MetaData), NewProp_StartScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_EndScale = { "EndScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_ScaleSettings, EndScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndScale_MetaData), NewProp_EndScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool_ScaleSettings, Jitter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jitter_MetaData), NewProp_Jitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_StartScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_EndScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_Jitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::ClassParams = {
	&UPatternTool_ScaleSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_ScaleSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_ScaleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_ScaleSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_ScaleSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_ScaleSettings>()
{
	return UPatternTool_ScaleSettings::StaticClass();
}
UPatternTool_ScaleSettings::UPatternTool_ScaleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_ScaleSettings);
UPatternTool_ScaleSettings::~UPatternTool_ScaleSettings() {}
// End Class UPatternTool_ScaleSettings

// Begin Class UPatternTool_OutputSettings
void UPatternTool_OutputSettings::StaticRegisterNativesUPatternTool_OutputSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_OutputSettings);
UClass* Z_Construct_UClass_UPatternTool_OutputSettings_NoRegister()
{
	return UPatternTool_OutputSettings::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_OutputSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Output Settings for the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Output Settings for the Pattern Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateActors_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Emit a separate Actor for each pattern element */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Emit a separate Actor for each pattern element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConvertToDynamic_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Emit StaticMesh pattern elements as DynamicMeshes */" },
		{ "EditCondition", "bHaveStaticMeshes == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Emit StaticMesh pattern elements as DynamicMeshes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateISMCs_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Create InstancedStaticMeshComponents instead multiple StaticMeshComponents, for StaticMesh pattern elements */" },
		{ "EditCondition", "bHaveStaticMeshes == true && bSeparateActors == false && bConvertToDynamic == false && bEnableCreateISMCs == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Create InstancedStaticMeshComponents instead multiple StaticMeshComponents, for StaticMesh pattern elements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHaveStaticMeshes_MetaData[] = {
		{ "Comment", "/** internal, used to control state of Instance settings */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "internal, used to control state of Instance settings" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCreateISMCs_MetaData[] = {
		{ "Comment", "// internal, used to disable the creation of ISMCs\n" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "internal, used to disable the creation of ISMCs" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSeparateActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateActors;
	static void NewProp_bConvertToDynamic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToDynamic;
	static void NewProp_bCreateISMCs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateISMCs;
	static void NewProp_bHaveStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveStaticMeshes;
	static void NewProp_bEnableCreateISMCs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCreateISMCs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_OutputSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors_SetBit(void* Obj)
{
	((UPatternTool_OutputSettings*)Obj)->bSeparateActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors = { "bSeparateActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeparateActors_MetaData), NewProp_bSeparateActors_MetaData) };
void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic_SetBit(void* Obj)
{
	((UPatternTool_OutputSettings*)Obj)->bConvertToDynamic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic = { "bConvertToDynamic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConvertToDynamic_MetaData), NewProp_bConvertToDynamic_MetaData) };
void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs_SetBit(void* Obj)
{
	((UPatternTool_OutputSettings*)Obj)->bCreateISMCs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs = { "bCreateISMCs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateISMCs_MetaData), NewProp_bCreateISMCs_MetaData) };
void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes_SetBit(void* Obj)
{
	((UPatternTool_OutputSettings*)Obj)->bHaveStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes = { "bHaveStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHaveStaticMeshes_MetaData), NewProp_bHaveStaticMeshes_MetaData) };
void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bEnableCreateISMCs_SetBit(void* Obj)
{
	((UPatternTool_OutputSettings*)Obj)->bEnableCreateISMCs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bEnableCreateISMCs = { "bEnableCreateISMCs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bEnableCreateISMCs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCreateISMCs_MetaData), NewProp_bEnableCreateISMCs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_OutputSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bEnableCreateISMCs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_OutputSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::ClassParams = {
	&UPatternTool_OutputSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_OutputSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_OutputSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool_OutputSettings()
{
	if (!Z_Registration_Info_UClass_UPatternTool_OutputSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_OutputSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_OutputSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool_OutputSettings.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_OutputSettings>()
{
	return UPatternTool_OutputSettings::StaticClass();
}
UPatternTool_OutputSettings::UPatternTool_OutputSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_OutputSettings);
UPatternTool_OutputSettings::~UPatternTool_OutputSettings() {}
// End Class UPatternTool_OutputSettings

// Begin Class UPatternTool
void UPatternTool::StaticRegisterNativesUPatternTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool);
UClass* Z_Construct_UClass_UPatternTool_NoRegister()
{
	return UPatternTool::StaticClass();
}
struct Z_Construct_UClass_UPatternTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPatternTool takes input meshes and generates 3D Patterns of those meshes, by\n * placing repeated copies along geometric paths like lines, grids, circles, etc.\n * The output can be a single Actor per pattern Element, or combined into single\n * Actors in various ways depending on the input mesh type. \n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "UPatternTool takes input meshes and generates 3D Patterns of those meshes, by\nplacing repeated copies along geometric paths like lines, grids, circles, etc.\nThe output can be a single Actor per pattern Element, or combined into single\nActors in various ways depending on the input mesh type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternGizmoProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundingBoxSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinearSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScaleSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatternGizmoProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatternGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragAlignmentMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, Settings), Z_Construct_UClass_UPatternToolSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_BoundingBoxSettings = { "BoundingBoxSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, BoundingBoxSettings), Z_Construct_UClass_UPatternTool_BoundingBoxSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxSettings_MetaData), NewProp_BoundingBoxSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_LinearSettings = { "LinearSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, LinearSettings), Z_Construct_UClass_UPatternTool_LinearSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearSettings_MetaData), NewProp_LinearSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_GridSettings = { "GridSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, GridSettings), Z_Construct_UClass_UPatternTool_GridSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSettings_MetaData), NewProp_GridSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_RadialSettings = { "RadialSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, RadialSettings), Z_Construct_UClass_UPatternTool_RadialSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialSettings_MetaData), NewProp_RadialSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_RotationSettings = { "RotationSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, RotationSettings), Z_Construct_UClass_UPatternTool_RotationSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSettings_MetaData), NewProp_RotationSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_TranslationSettings = { "TranslationSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, TranslationSettings), Z_Construct_UClass_UPatternTool_TranslationSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationSettings_MetaData), NewProp_TranslationSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_ScaleSettings = { "ScaleSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, ScaleSettings), Z_Construct_UClass_UPatternTool_ScaleSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleSettings_MetaData), NewProp_ScaleSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_OutputSettings = { "OutputSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, OutputSettings), Z_Construct_UClass_UPatternTool_OutputSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputSettings_MetaData), NewProp_OutputSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmoProxy = { "PatternGizmoProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, PatternGizmoProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternGizmoProxy_MetaData), NewProp_PatternGizmoProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmo = { "PatternGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, PatternGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternGizmo_MetaData), NewProp_PatternGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragAlignmentMechanic_MetaData), NewProp_DragAlignmentMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMechanic_MetaData), NewProp_PlaneMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents_ElementProp = { "AllComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents = { "AllComponents", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, AllComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllComponents_MetaData), NewProp_AllComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPatternTool, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeometry_MetaData), NewProp_PreviewGeometry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_BoundingBoxSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_LinearSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_GridSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_RadialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_RotationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_TranslationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_ScaleSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_OutputSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmoProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_DragAlignmentMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PlaneMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PreviewGeometry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPatternTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_Statics::ClassParams = {
	&UPatternTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPatternTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UPatternTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPatternTool()
{
	if (!Z_Registration_Info_UClass_UPatternTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool.OuterSingleton, Z_Construct_UClass_UPatternTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPatternTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool>()
{
	return UPatternTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool);
UPatternTool::~UPatternTool() {}
// End Class UPatternTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPatternToolShape_StaticEnum, TEXT("EPatternToolShape"), &Z_Registration_Info_UEnum_EPatternToolShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3328210625U) },
		{ EPatternToolSingleAxis_StaticEnum, TEXT("EPatternToolSingleAxis"), &Z_Registration_Info_UEnum_EPatternToolSingleAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4010898517U) },
		{ EPatternToolSinglePlane_StaticEnum, TEXT("EPatternToolSinglePlane"), &Z_Registration_Info_UEnum_EPatternToolSinglePlane, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4138962080U) },
		{ EPatternToolAxisSpacingMode_StaticEnum, TEXT("EPatternToolAxisSpacingMode"), &Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3453340958U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPatternToolBuilder, UPatternToolBuilder::StaticClass, TEXT("UPatternToolBuilder"), &Z_Registration_Info_UClass_UPatternToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternToolBuilder), 1335400783U) },
		{ Z_Construct_UClass_UPatternToolSettings, UPatternToolSettings::StaticClass, TEXT("UPatternToolSettings"), &Z_Registration_Info_UClass_UPatternToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternToolSettings), 620377844U) },
		{ Z_Construct_UClass_UPatternTool_BoundingBoxSettings, UPatternTool_BoundingBoxSettings::StaticClass, TEXT("UPatternTool_BoundingBoxSettings"), &Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_BoundingBoxSettings), 1753676184U) },
		{ Z_Construct_UClass_UPatternTool_LinearSettings, UPatternTool_LinearSettings::StaticClass, TEXT("UPatternTool_LinearSettings"), &Z_Registration_Info_UClass_UPatternTool_LinearSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_LinearSettings), 331626966U) },
		{ Z_Construct_UClass_UPatternTool_GridSettings, UPatternTool_GridSettings::StaticClass, TEXT("UPatternTool_GridSettings"), &Z_Registration_Info_UClass_UPatternTool_GridSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_GridSettings), 826891251U) },
		{ Z_Construct_UClass_UPatternTool_RadialSettings, UPatternTool_RadialSettings::StaticClass, TEXT("UPatternTool_RadialSettings"), &Z_Registration_Info_UClass_UPatternTool_RadialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_RadialSettings), 136405337U) },
		{ Z_Construct_UClass_UPatternTool_RotationSettings, UPatternTool_RotationSettings::StaticClass, TEXT("UPatternTool_RotationSettings"), &Z_Registration_Info_UClass_UPatternTool_RotationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_RotationSettings), 1936394784U) },
		{ Z_Construct_UClass_UPatternTool_TranslationSettings, UPatternTool_TranslationSettings::StaticClass, TEXT("UPatternTool_TranslationSettings"), &Z_Registration_Info_UClass_UPatternTool_TranslationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_TranslationSettings), 1769466461U) },
		{ Z_Construct_UClass_UPatternTool_ScaleSettings, UPatternTool_ScaleSettings::StaticClass, TEXT("UPatternTool_ScaleSettings"), &Z_Registration_Info_UClass_UPatternTool_ScaleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_ScaleSettings), 453601734U) },
		{ Z_Construct_UClass_UPatternTool_OutputSettings, UPatternTool_OutputSettings::StaticClass, TEXT("UPatternTool_OutputSettings"), &Z_Registration_Info_UClass_UPatternTool_OutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_OutputSettings), 2608250559U) },
		{ Z_Construct_UClass_UPatternTool, UPatternTool::StaticClass, TEXT("UPatternTool"), &Z_Registration_Info_UClass_UPatternTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool), 3288298483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_559563197(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
