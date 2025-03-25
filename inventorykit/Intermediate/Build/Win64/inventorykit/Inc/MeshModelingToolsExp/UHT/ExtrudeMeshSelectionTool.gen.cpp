// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Polymodeling/ExtrudeMeshSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtrudeMeshSelectionTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UExtrudeMeshSelectionToolBuilder
void UExtrudeMeshSelectionToolBuilder::StaticRegisterNativesUExtrudeMeshSelectionToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtrudeMeshSelectionToolBuilder);
UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_NoRegister()
{
	return UExtrudeMeshSelectionToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtrudeMeshSelectionToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::ClassParams = {
	&UExtrudeMeshSelectionToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder()
{
	if (!Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtrudeMeshSelectionToolBuilder>()
{
	return UExtrudeMeshSelectionToolBuilder::StaticClass();
}
UExtrudeMeshSelectionToolBuilder::UExtrudeMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExtrudeMeshSelectionToolBuilder);
UExtrudeMeshSelectionToolBuilder::~UExtrudeMeshSelectionToolBuilder() {}
// End Class UExtrudeMeshSelectionToolBuilder

// Begin Enum EExtrudeMeshSelectionInteractionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode;
static UEnum* EExtrudeMeshSelectionInteractionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EExtrudeMeshSelectionInteractionMode"));
	}
	return Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EExtrudeMeshSelectionInteractionMode>()
{
	return EExtrudeMeshSelectionInteractionMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Define the extrusion distance using a slider in the Settings */" },
		{ "Fixed.Name", "EExtrudeMeshSelectionInteractionMode::Fixed" },
		{ "Fixed.ToolTip", "Define the extrusion distance using a slider in the Settings" },
		{ "Interactive.Comment", "/** Define the extrusion distance using a 3D gizmo */" },
		{ "Interactive.Name", "EExtrudeMeshSelectionInteractionMode::Interactive" },
		{ "Interactive.ToolTip", "Define the extrusion distance using a 3D gizmo" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EExtrudeMeshSelectionInteractionMode::Interactive", (int64)EExtrudeMeshSelectionInteractionMode::Interactive },
		{ "EExtrudeMeshSelectionInteractionMode::Fixed", (int64)EExtrudeMeshSelectionInteractionMode::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EExtrudeMeshSelectionInteractionMode",
	"EExtrudeMeshSelectionInteractionMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode()
{
	if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.InnerSingleton;
}
// End Enum EExtrudeMeshSelectionInteractionMode

// Begin Enum EExtrudeMeshSelectionRegionModifierMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode;
static UEnum* EExtrudeMeshSelectionRegionModifierMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EExtrudeMeshSelectionRegionModifierMode"));
	}
	return Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EExtrudeMeshSelectionRegionModifierMode>()
{
	return EExtrudeMeshSelectionRegionModifierMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FlattenToPlane.Comment", "/** Flatten the extrusion area to the X/Y plane of the extrusion frame */" },
		{ "FlattenToPlane.Name", "EExtrudeMeshSelectionRegionModifierMode::FlattenToPlane" },
		{ "FlattenToPlane.ToolTip", "Flatten the extrusion area to the X/Y plane of the extrusion frame" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "OriginalShape.Comment", "/** Transform the original selected area */" },
		{ "OriginalShape.Name", "EExtrudeMeshSelectionRegionModifierMode::OriginalShape" },
		{ "OriginalShape.ToolTip", "Transform the original selected area" },
		{ "RaycastToPlane.Comment", "/** Flatten the extrusion area by raycasting against the X/Y plane of the extrusion frame */" },
		{ "RaycastToPlane.Name", "EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane" },
		{ "RaycastToPlane.ToolTip", "Flatten the extrusion area by raycasting against the X/Y plane of the extrusion frame" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EExtrudeMeshSelectionRegionModifierMode::OriginalShape", (int64)EExtrudeMeshSelectionRegionModifierMode::OriginalShape },
		{ "EExtrudeMeshSelectionRegionModifierMode::FlattenToPlane", (int64)EExtrudeMeshSelectionRegionModifierMode::FlattenToPlane },
		{ "EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane", (int64)EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EExtrudeMeshSelectionRegionModifierMode",
	"EExtrudeMeshSelectionRegionModifierMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode()
{
	if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.InnerSingleton;
}
// End Enum EExtrudeMeshSelectionRegionModifierMode

// Begin Class UExtrudeMeshSelectionToolProperties
void UExtrudeMeshSelectionToolProperties::StaticRegisterNativesUExtrudeMeshSelectionToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtrudeMeshSelectionToolProperties);
UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_NoRegister()
{
	return UExtrudeMeshSelectionToolProperties::StaticClass();
}
struct Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Control how the Extruded Area should be Transformed */" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control how the Extruded Area should be Transformed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDistance_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** The Extrusion Distance used in Fixed Input Mode*/" },
		{ "DisplayName", "Fixed Distance" },
		{ "EditCondition", "InputMode == EExtrudeMeshSelectionInteractionMode::Fixed" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "The Extrusion Distance used in Fixed Input Mode" },
		{ "UIMax", "250" },
		{ "UIMin", "-250" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegionMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Control how the Extruded Area should be deformed as part of the Extrusion */" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control how the Extruded Area should be deformed as part of the Extrusion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSubdivisions_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specify the number of subdivisions along the sides of the Extrusion */" },
		{ "DisplayName", "Subdivisions" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Specify the number of subdivisions along the sides of the Extrusion" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreaseAngle_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Specify the Crease Angle used to split the sides of the Extrusion into separate Groups */" },
		{ "Max", "180" },
		{ "Min", "0" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Specify the Crease Angle used to split the sides of the Extrusion into separate Groups" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaycastMaxDistance_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Control the maximum distance each vertex may be moved in Raycast To Plane Mode */" },
		{ "DisplayName", "Max Distance" },
		{ "EditCondition", "RegionMode == EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control the maximum distance each vertex may be moved in Raycast To Plane Mode" },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShellsToSolids_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** If the Extruded Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\" */" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "If the Extruded Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInferGroupsFromNbrs_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Extruded Area border */" },
		{ "DisplayName", "Propagate Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Extruded Area border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupPerSubdivision_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a new Group is generated for each Subdivision */" },
		{ "DisplayName", "Per Subdivision" },
		{ "EditCondition", "NumSubdivisions > 0" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a new Group is generated for each Subdivision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSelectionGroups_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether groups in the Extruded Area are mapped to new Groups, or replaced with a single new Group */" },
		{ "DisplayName", "Replace Cap Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether groups in the Extruded Area are mapped to new Groups, or replaced with a single new Group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "UVs" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The automatically-generated UVs on the sides of the Extrusion are scaled by this value */" },
		{ "DisplayName", "UV Scale" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "The automatically-generated UVs on the sides of the Extrusion are scaled by this value" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.001000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUVIslandPerGroup_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\" */" },
		{ "DisplayName", "Island Per Group" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInferMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Extruded Area */" },
		{ "DisplayName", "Infer Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Extruded Area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists */" },
		{ "DisplayName", "Material ID" },
		{ "EditCondition", "bInferMaterialID == false" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputMaterials_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Control whether the original Mesh Materials should be shown, or a visualization of the extruded Groups */" },
		{ "DisplayName", "Show Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether the original Mesh Materials should be shown, or a visualization of the extruded Groups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtrudeDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RegionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RegionMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubdivisions;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CreaseAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RaycastMaxDistance;
	static void NewProp_bShellsToSolids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShellsToSolids;
	static void NewProp_bInferGroupsFromNbrs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferGroupsFromNbrs;
	static void NewProp_bGroupPerSubdivision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupPerSubdivision;
	static void NewProp_bReplaceSelectionGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceSelectionGroups;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_UVScale;
	static void NewProp_bUVIslandPerGroup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVIslandPerGroup;
	static void NewProp_bInferMaterialID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferMaterialID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SetMaterialID;
	static void NewProp_bShowInputMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtrudeMeshSelectionToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, InputMode), Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMode_MetaData), NewProp_InputMode_MetaData) }; // 3850292610
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_ExtrudeDistance = { "ExtrudeDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, ExtrudeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeDistance_MetaData), NewProp_ExtrudeDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode = { "RegionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, RegionMode), Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegionMode_MetaData), NewProp_RegionMode_MetaData) }; // 3267744841
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions = { "NumSubdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, NumSubdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSubdivisions_MetaData), NewProp_NumSubdivisions_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_CreaseAngle = { "CreaseAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, CreaseAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreaseAngle_MetaData), NewProp_CreaseAngle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RaycastMaxDistance = { "RaycastMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, RaycastMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaycastMaxDistance_MetaData), NewProp_RaycastMaxDistance_MetaData) };
void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit(void* Obj)
{
	((UExtrudeMeshSelectionToolProperties*)Obj)->bShellsToSolids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids = { "bShellsToSolids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShellsToSolids_MetaData), NewProp_bShellsToSolids_MetaData) };
void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit(void* Obj)
{
	((UExtrudeMeshSelectionToolProperties*)Obj)->bInferGroupsFromNbrs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs = { "bInferGroupsFromNbrs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInferGroupsFromNbrs_MetaData), NewProp_bInferGroupsFromNbrs_MetaData) };
void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit(void* Obj)
{
	((UExtrudeMeshSelectionToolProperties*)Obj)->bGroupPerSubdivision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision = { "bGroupPerSubdivision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupPerSubdivision_MetaData), NewProp_bGroupPerSubdivision_MetaData) };
void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit(void* Obj)
{
	((UExtrudeMeshSelectionToolProperties*)Obj)->bReplaceSelectionGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups = { "bReplaceSelectionGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceSelectionGroups_MetaData), NewProp_bReplaceSelectionGroups_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit(void* Obj)
{
	((UExtrudeMeshSelectionToolProperties*)Obj)->bUVIslandPerGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup = { "bUVIslandPerGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUVIslandPerGroup_MetaData), NewProp_bUVIslandPerGroup_MetaData) };
void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit(void* Obj)
{
	((UExtrudeMeshSelectionToolProperties*)Obj)->bInferMaterialID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID = { "bInferMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInferMaterialID_MetaData), NewProp_bInferMaterialID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_SetMaterialID = { "SetMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, SetMaterialID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetMaterialID_MetaData), NewProp_SetMaterialID_MetaData) };
void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit(void* Obj)
{
	((UExtrudeMeshSelectionToolProperties*)Obj)->bShowInputMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials = { "bShowInputMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInputMaterials_MetaData), NewProp_bShowInputMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_ExtrudeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_CreaseAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RaycastMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_SetMaterialID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::ClassParams = {
	&UExtrudeMeshSelectionToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties()
{
	if (!Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties.OuterSingleton, Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtrudeMeshSelectionToolProperties>()
{
	return UExtrudeMeshSelectionToolProperties::StaticClass();
}
UExtrudeMeshSelectionToolProperties::UExtrudeMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExtrudeMeshSelectionToolProperties);
UExtrudeMeshSelectionToolProperties::~UExtrudeMeshSelectionToolProperties() {}
// End Class UExtrudeMeshSelectionToolProperties

// Begin Class UExtrudeMeshSelectionTool
void UExtrudeMeshSelectionTool::StaticRegisterNativesUExtrudeMeshSelectionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtrudeMeshSelectionTool);
UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool_NoRegister()
{
	return UExtrudeMeshSelectionTool::StaticClass();
}
struct Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtrudeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditCompute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformGizmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformProxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtrudeMeshSelectionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_ExtrudeProperties = { "ExtrudeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionTool, ExtrudeProperties), Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeProperties_MetaData), NewProp_ExtrudeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_SourcePreview = { "SourcePreview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionTool, SourcePreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePreview_MetaData), NewProp_SourcePreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_EditCompute = { "EditCompute", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionTool, EditCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditCompute_MetaData), NewProp_EditCompute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformGizmo_MetaData), NewProp_TransformGizmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExtrudeMeshSelectionTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformProxy_MetaData), NewProp_TransformProxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_ExtrudeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_SourcePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_EditCompute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformProxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::ClassParams = {
	&UExtrudeMeshSelectionTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool()
{
	if (!Z_Registration_Info_UClass_UExtrudeMeshSelectionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtrudeMeshSelectionTool.OuterSingleton, Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExtrudeMeshSelectionTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtrudeMeshSelectionTool>()
{
	return UExtrudeMeshSelectionTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExtrudeMeshSelectionTool);
UExtrudeMeshSelectionTool::~UExtrudeMeshSelectionTool() {}
// End Class UExtrudeMeshSelectionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EExtrudeMeshSelectionInteractionMode_StaticEnum, TEXT("EExtrudeMeshSelectionInteractionMode"), &Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3850292610U) },
		{ EExtrudeMeshSelectionRegionModifierMode_StaticEnum, TEXT("EExtrudeMeshSelectionRegionModifierMode"), &Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3267744841U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder, UExtrudeMeshSelectionToolBuilder::StaticClass, TEXT("UExtrudeMeshSelectionToolBuilder"), &Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtrudeMeshSelectionToolBuilder), 513182891U) },
		{ Z_Construct_UClass_UExtrudeMeshSelectionToolProperties, UExtrudeMeshSelectionToolProperties::StaticClass, TEXT("UExtrudeMeshSelectionToolProperties"), &Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtrudeMeshSelectionToolProperties), 3073449542U) },
		{ Z_Construct_UClass_UExtrudeMeshSelectionTool, UExtrudeMeshSelectionTool::StaticClass, TEXT("UExtrudeMeshSelectionTool"), &Z_Registration_Info_UClass_UExtrudeMeshSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtrudeMeshSelectionTool), 201043459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_1300909771(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
