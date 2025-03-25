// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Polymodeling/OffsetMeshSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffsetMeshSelectionTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UOffsetMeshSelectionToolBuilder
void UOffsetMeshSelectionToolBuilder::StaticRegisterNativesUOffsetMeshSelectionToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshSelectionToolBuilder);
UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_NoRegister()
{
	return UOffsetMeshSelectionToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshSelectionToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::ClassParams = {
	&UOffsetMeshSelectionToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder()
{
	if (!Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshSelectionToolBuilder>()
{
	return UOffsetMeshSelectionToolBuilder::StaticClass();
}
UOffsetMeshSelectionToolBuilder::UOffsetMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshSelectionToolBuilder);
UOffsetMeshSelectionToolBuilder::~UOffsetMeshSelectionToolBuilder() {}
// End Class UOffsetMeshSelectionToolBuilder

// Begin Enum EOffsetMeshSelectionInteractionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode;
static UEnum* EOffsetMeshSelectionInteractionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOffsetMeshSelectionInteractionMode"));
	}
	return Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOffsetMeshSelectionInteractionMode>()
{
	return EOffsetMeshSelectionInteractionMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Define the offset distance using a slider in the Settings */" },
		{ "Fixed.Name", "EOffsetMeshSelectionInteractionMode::Fixed" },
		{ "Fixed.ToolTip", "Define the offset distance using a slider in the Settings" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffsetMeshSelectionInteractionMode::Fixed", (int64)EOffsetMeshSelectionInteractionMode::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EOffsetMeshSelectionInteractionMode",
	"EOffsetMeshSelectionInteractionMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode()
{
	if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.InnerSingleton;
}
// End Enum EOffsetMeshSelectionInteractionMode

// Begin Enum EOffsetMeshSelectionDirectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode;
static UEnum* EOffsetMeshSelectionDirectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOffsetMeshSelectionDirectionMode"));
	}
	return Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOffsetMeshSelectionDirectionMode>()
{
	return EOffsetMeshSelectionDirectionMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConstantWidth.Comment", "/**  */" },
		{ "ConstantWidth.Name", "EOffsetMeshSelectionDirectionMode::ConstantWidth" },
		{ "FaceNormals.Comment", "/** */" },
		{ "FaceNormals.Name", "EOffsetMeshSelectionDirectionMode::FaceNormals" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "VertexNormals.Comment", "/** */" },
		{ "VertexNormals.Name", "EOffsetMeshSelectionDirectionMode::VertexNormals" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffsetMeshSelectionDirectionMode::VertexNormals", (int64)EOffsetMeshSelectionDirectionMode::VertexNormals },
		{ "EOffsetMeshSelectionDirectionMode::FaceNormals", (int64)EOffsetMeshSelectionDirectionMode::FaceNormals },
		{ "EOffsetMeshSelectionDirectionMode::ConstantWidth", (int64)EOffsetMeshSelectionDirectionMode::ConstantWidth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EOffsetMeshSelectionDirectionMode",
	"EOffsetMeshSelectionDirectionMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode()
{
	if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.InnerSingleton;
}
// End Enum EOffsetMeshSelectionDirectionMode

// Begin Class UOffsetMeshSelectionToolProperties
void UOffsetMeshSelectionToolProperties::StaticRegisterNativesUOffsetMeshSelectionToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshSelectionToolProperties);
UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties_NoRegister()
{
	return UOffsetMeshSelectionToolProperties::StaticClass();
}
struct Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetDistance_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** The Extrusion Distance used in Fixed Input Mode*/" },
		{ "DisplayName", "Distance" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "The Extrusion Distance used in Fixed Input Mode" },
		{ "UIMax", "250" },
		{ "UIMin", "-250" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Control how the Offset Area should be displaced */" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control how the Offset Area should be displaced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSubdivisions_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specify the number of subdivisions along the sides of the Extrusion */" },
		{ "DisplayName", "Subdivisions" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Specify the number of subdivisions along the sides of the Extrusion" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreaseAngle_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Specify the Crease Angle used to split the sides of the Extrusion into separate Groups */" },
		{ "Max", "180" },
		{ "Min", "0" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Specify the Crease Angle used to split the sides of the Extrusion into separate Groups" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShellsToSolids_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** If the Offset Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\" */" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "If the Offset Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInferGroupsFromNbrs_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Offset Area border */" },
		{ "DisplayName", "Propagate Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Offset Area border" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupPerSubdivision_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a new Group is generated for each Subdivision */" },
		{ "DisplayName", "Per Subdivision" },
		{ "EditCondition", "NumSubdivisions > 0" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a new Group is generated for each Subdivision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSelectionGroups_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether groups in the Offset Area are mapped to new Groups, or replaced with a single new Group */" },
		{ "DisplayName", "Replace Cap Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether groups in the Offset Area are mapped to new Groups, or replaced with a single new Group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "UVs" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The automatically-generated UVs on the sides of the Extrusion are scaled by this value */" },
		{ "DisplayName", "UV Scale" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "The automatically-generated UVs on the sides of the Extrusion are scaled by this value" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.001000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUVIslandPerGroup_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\" */" },
		{ "DisplayName", "Island Per Group" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInferMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Offset Area */" },
		{ "DisplayName", "Infer Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Offset Area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists */" },
		{ "DisplayName", "Material ID" },
		{ "EditCondition", "bInferMaterialID == false" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputMaterials_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Control whether the original Mesh Materials should be shown, or a visualization of the Offset Groups */" },
		{ "DisplayName", "Show Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether the original Mesh Materials should be shown, or a visualization of the Offset Groups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OffsetDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubdivisions;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CreaseAngle;
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
		TCppClassTypeTraits<UOffsetMeshSelectionToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, OffsetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetDistance_MetaData), NewProp_OffsetDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, Direction), Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 2584663462
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions = { "NumSubdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, NumSubdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSubdivisions_MetaData), NewProp_NumSubdivisions_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_CreaseAngle = { "CreaseAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, CreaseAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreaseAngle_MetaData), NewProp_CreaseAngle_MetaData) };
void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit(void* Obj)
{
	((UOffsetMeshSelectionToolProperties*)Obj)->bShellsToSolids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids = { "bShellsToSolids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShellsToSolids_MetaData), NewProp_bShellsToSolids_MetaData) };
void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit(void* Obj)
{
	((UOffsetMeshSelectionToolProperties*)Obj)->bInferGroupsFromNbrs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs = { "bInferGroupsFromNbrs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInferGroupsFromNbrs_MetaData), NewProp_bInferGroupsFromNbrs_MetaData) };
void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit(void* Obj)
{
	((UOffsetMeshSelectionToolProperties*)Obj)->bGroupPerSubdivision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision = { "bGroupPerSubdivision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupPerSubdivision_MetaData), NewProp_bGroupPerSubdivision_MetaData) };
void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit(void* Obj)
{
	((UOffsetMeshSelectionToolProperties*)Obj)->bReplaceSelectionGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups = { "bReplaceSelectionGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceSelectionGroups_MetaData), NewProp_bReplaceSelectionGroups_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit(void* Obj)
{
	((UOffsetMeshSelectionToolProperties*)Obj)->bUVIslandPerGroup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup = { "bUVIslandPerGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUVIslandPerGroup_MetaData), NewProp_bUVIslandPerGroup_MetaData) };
void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit(void* Obj)
{
	((UOffsetMeshSelectionToolProperties*)Obj)->bInferMaterialID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID = { "bInferMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInferMaterialID_MetaData), NewProp_bInferMaterialID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_SetMaterialID = { "SetMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, SetMaterialID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetMaterialID_MetaData), NewProp_SetMaterialID_MetaData) };
void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit(void* Obj)
{
	((UOffsetMeshSelectionToolProperties*)Obj)->bShowInputMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials = { "bShowInputMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInputMaterials_MetaData), NewProp_bShowInputMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_OffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_CreaseAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_SetMaterialID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::ClassParams = {
	&UOffsetMeshSelectionToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties()
{
	if (!Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties.OuterSingleton, Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshSelectionToolProperties>()
{
	return UOffsetMeshSelectionToolProperties::StaticClass();
}
UOffsetMeshSelectionToolProperties::UOffsetMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshSelectionToolProperties);
UOffsetMeshSelectionToolProperties::~UOffsetMeshSelectionToolProperties() {}
// End Class UOffsetMeshSelectionToolProperties

// Begin Class UOffsetMeshSelectionTool
void UOffsetMeshSelectionTool::StaticRegisterNativesUOffsetMeshSelectionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshSelectionTool);
UClass* Z_Construct_UClass_UOffsetMeshSelectionTool_NoRegister()
{
	return UOffsetMeshSelectionTool::StaticClass();
}
struct Z_Construct_UClass_UOffsetMeshSelectionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OffsetProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourcePreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditCompute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshSelectionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_OffsetProperties = { "OffsetProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionTool, OffsetProperties), Z_Construct_UClass_UOffsetMeshSelectionToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetProperties_MetaData), NewProp_OffsetProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_SourcePreview = { "SourcePreview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionTool, SourcePreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePreview_MetaData), NewProp_SourcePreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_EditCompute = { "EditCompute", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOffsetMeshSelectionTool, EditCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditCompute_MetaData), NewProp_EditCompute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_OffsetProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_SourcePreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_EditCompute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::ClassParams = {
	&UOffsetMeshSelectionTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOffsetMeshSelectionTool()
{
	if (!Z_Registration_Info_UClass_UOffsetMeshSelectionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshSelectionTool.OuterSingleton, Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOffsetMeshSelectionTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshSelectionTool>()
{
	return UOffsetMeshSelectionTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshSelectionTool);
UOffsetMeshSelectionTool::~UOffsetMeshSelectionTool() {}
// End Class UOffsetMeshSelectionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOffsetMeshSelectionInteractionMode_StaticEnum, TEXT("EOffsetMeshSelectionInteractionMode"), &Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1179778297U) },
		{ EOffsetMeshSelectionDirectionMode_StaticEnum, TEXT("EOffsetMeshSelectionDirectionMode"), &Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2584663462U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOffsetMeshSelectionToolBuilder, UOffsetMeshSelectionToolBuilder::StaticClass, TEXT("UOffsetMeshSelectionToolBuilder"), &Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshSelectionToolBuilder), 3185357888U) },
		{ Z_Construct_UClass_UOffsetMeshSelectionToolProperties, UOffsetMeshSelectionToolProperties::StaticClass, TEXT("UOffsetMeshSelectionToolProperties"), &Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshSelectionToolProperties), 751275753U) },
		{ Z_Construct_UClass_UOffsetMeshSelectionTool, UOffsetMeshSelectionTool::StaticClass, TEXT("UOffsetMeshSelectionTool"), &Z_Registration_Info_UClass_UOffsetMeshSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshSelectionTool), 3541207615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_4202581319(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
