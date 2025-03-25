// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Physics/SetCollisionGeometryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetCollisionGeometryTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class USetCollisionGeometryToolBuilder
void USetCollisionGeometryToolBuilder::StaticRegisterNativesUSetCollisionGeometryToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetCollisionGeometryToolBuilder);
UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder_NoRegister()
{
	return USetCollisionGeometryToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/SetCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetCollisionGeometryToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::ClassParams = {
	&USetCollisionGeometryToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder()
{
	if (!Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder.OuterSingleton, Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USetCollisionGeometryToolBuilder>()
{
	return USetCollisionGeometryToolBuilder::StaticClass();
}
USetCollisionGeometryToolBuilder::USetCollisionGeometryToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USetCollisionGeometryToolBuilder);
USetCollisionGeometryToolBuilder::~USetCollisionGeometryToolBuilder() {}
// End Class USetCollisionGeometryToolBuilder

// Begin Enum ESetCollisionGeometryInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode;
static UEnum* ESetCollisionGeometryInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ESetCollisionGeometryInputMode"));
	}
	return Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ESetCollisionGeometryInputMode>()
{
	return ESetCollisionGeometryInputMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CombineAll.Comment", "// Compute collision geometry using a combined mesh of all input objects\n" },
		{ "CombineAll.Name", "ESetCollisionGeometryInputMode::CombineAll" },
		{ "CombineAll.ToolTip", "Compute collision geometry using a combined mesh of all input objects" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "PerInputObject.Comment", "// Compute collision geometry for each input object\n// Note: A Geometry Selection always counts as one input object\n" },
		{ "PerInputObject.Name", "ESetCollisionGeometryInputMode::PerInputObject" },
		{ "PerInputObject.ToolTip", "Compute collision geometry for each input object\nNote: A Geometry Selection always counts as one input object" },
		{ "PerMeshComponent.Comment", "// Compute collision geometry for each connected component of each input object\n" },
		{ "PerMeshComponent.Name", "ESetCollisionGeometryInputMode::PerMeshComponent" },
		{ "PerMeshComponent.ToolTip", "Compute collision geometry for each connected component of each input object" },
		{ "PerMeshGroup.Comment", "// Compute collision geometry for each PolyGroup of each input object\n" },
		{ "PerMeshGroup.Name", "ESetCollisionGeometryInputMode::PerMeshGroup" },
		{ "PerMeshGroup.ToolTip", "Compute collision geometry for each PolyGroup of each input object" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESetCollisionGeometryInputMode::CombineAll", (int64)ESetCollisionGeometryInputMode::CombineAll },
		{ "ESetCollisionGeometryInputMode::PerInputObject", (int64)ESetCollisionGeometryInputMode::PerInputObject },
		{ "ESetCollisionGeometryInputMode::PerMeshComponent", (int64)ESetCollisionGeometryInputMode::PerMeshComponent },
		{ "ESetCollisionGeometryInputMode::PerMeshGroup", (int64)ESetCollisionGeometryInputMode::PerMeshGroup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ESetCollisionGeometryInputMode",
	"ESetCollisionGeometryInputMode",
	Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode()
{
	if (!Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.InnerSingleton;
}
// End Enum ESetCollisionGeometryInputMode

// Begin Enum ECollisionGeometryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionGeometryType;
static UEnum* ECollisionGeometryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECollisionGeometryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECollisionGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ECollisionGeometryType"));
	}
	return Z_Registration_Info_UEnum_ECollisionGeometryType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECollisionGeometryType>()
{
	return ECollisionGeometryType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlignedBoxes.Comment", "// Fit axis-aligned bounding boxes to the inputs\n" },
		{ "AlignedBoxes.Name", "ECollisionGeometryType::AlignedBoxes" },
		{ "AlignedBoxes.ToolTip", "Fit axis-aligned bounding boxes to the inputs" },
		{ "Capsules.Comment", "// Fit capsules to the inputs\n" },
		{ "Capsules.Name", "ECollisionGeometryType::Capsules" },
		{ "Capsules.ToolTip", "Fit capsules to the inputs" },
		{ "ConvexHulls.Comment", "// Fit convex hulls to the inputs\n" },
		{ "ConvexHulls.Name", "ECollisionGeometryType::ConvexHulls" },
		{ "ConvexHulls.ToolTip", "Fit convex hulls to the inputs" },
		{ "CopyFromInputs.Comment", "//~ TODO: We should add a way to remove this option in single-input mode\n// Copy the existing collision geometry shapes from the inputs to the target. With a single-selection,\n// always does the same thing as Empty with Append To Existing set to true.\n" },
		{ "CopyFromInputs.Name", "ECollisionGeometryType::CopyFromInputs" },
		{ "CopyFromInputs.ToolTip", "Copy the existing collision geometry shapes from the inputs to the target. With a single-selection,\nalways does the same thing as Empty with Append To Existing set to true." },
		{ "Empty.Comment", "// Do not produce new collision for inputs. If Append To Existing is false, this gives a way\n// to empty the simple collision on the target. If Append To Existing is true, the existing collision\n// is kept and can be passed through the optional filters in the tool, like removing enclosed shapes.\n" },
		{ "Empty.Name", "ECollisionGeometryType::Empty" },
		{ "Empty.ToolTip", "Do not produce new collision for inputs. If Append To Existing is false, this gives a way\nto empty the simple collision on the target. If Append To Existing is true, the existing collision\nis kept and can be passed through the optional filters in the tool, like removing enclosed shapes." },
		{ "LevelSets.Comment", "// Fit level sets to the inputs\n" },
		{ "LevelSets.Name", "ECollisionGeometryType::LevelSets" },
		{ "LevelSets.ToolTip", "Fit level sets to the inputs" },
		{ "MinimalSpheres.Comment", "// Fit spheres to the inputs\n" },
		{ "MinimalSpheres.Name", "ECollisionGeometryType::MinimalSpheres" },
		{ "MinimalSpheres.ToolTip", "Fit spheres to the inputs" },
		{ "MinVolume.Comment", "// Fit the boxes, spheres, and capsules to the inputs, and keep the best fitting of these shapes based on volume\n" },
		{ "MinVolume.Name", "ECollisionGeometryType::MinVolume" },
		{ "MinVolume.ToolTip", "Fit the boxes, spheres, and capsules to the inputs, and keep the best fitting of these shapes based on volume" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "OrientedBoxes.Comment", "// Fit oriented bounding boxes to the inputs\n" },
		{ "OrientedBoxes.Name", "ECollisionGeometryType::OrientedBoxes" },
		{ "OrientedBoxes.ToolTip", "Fit oriented bounding boxes to the inputs" },
		{ "SweptHulls.Comment", "// Fit convex hulls to 2D projections of the inputs, and sweep these 2D hulls along the projection dimension\n" },
		{ "SweptHulls.Name", "ECollisionGeometryType::SweptHulls" },
		{ "SweptHulls.ToolTip", "Fit convex hulls to 2D projections of the inputs, and sweep these 2D hulls along the projection dimension" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECollisionGeometryType::CopyFromInputs", (int64)ECollisionGeometryType::CopyFromInputs },
		{ "ECollisionGeometryType::AlignedBoxes", (int64)ECollisionGeometryType::AlignedBoxes },
		{ "ECollisionGeometryType::OrientedBoxes", (int64)ECollisionGeometryType::OrientedBoxes },
		{ "ECollisionGeometryType::MinimalSpheres", (int64)ECollisionGeometryType::MinimalSpheres },
		{ "ECollisionGeometryType::Capsules", (int64)ECollisionGeometryType::Capsules },
		{ "ECollisionGeometryType::ConvexHulls", (int64)ECollisionGeometryType::ConvexHulls },
		{ "ECollisionGeometryType::SweptHulls", (int64)ECollisionGeometryType::SweptHulls },
		{ "ECollisionGeometryType::LevelSets", (int64)ECollisionGeometryType::LevelSets },
		{ "ECollisionGeometryType::MinVolume", (int64)ECollisionGeometryType::MinVolume },
		{ "ECollisionGeometryType::Empty", (int64)ECollisionGeometryType::Empty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"ECollisionGeometryType",
	"ECollisionGeometryType",
	Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType()
{
	if (!Z_Registration_Info_UEnum_ECollisionGeometryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionGeometryType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECollisionGeometryType.InnerSingleton;
}
// End Enum ECollisionGeometryType

// Begin Enum EProjectedHullAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectedHullAxis;
static UEnum* EProjectedHullAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectedHullAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectedHullAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EProjectedHullAxis"));
	}
	return Z_Registration_Info_UEnum_EProjectedHullAxis.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EProjectedHullAxis>()
{
	return EProjectedHullAxis_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "SmallestBoxDimension.Comment", "// Project along the bounding box's shortest axis\n" },
		{ "SmallestBoxDimension.Name", "EProjectedHullAxis::SmallestBoxDimension" },
		{ "SmallestBoxDimension.ToolTip", "Project along the bounding box's shortest axis" },
		{ "SmallestVolume.Comment", "// Project along each major axis, and take the result with the smallest volume\n" },
		{ "SmallestVolume.Name", "EProjectedHullAxis::SmallestVolume" },
		{ "SmallestVolume.ToolTip", "Project along each major axis, and take the result with the smallest volume" },
		{ "X.Comment", "// Project along the X axis\n" },
		{ "X.Name", "EProjectedHullAxis::X" },
		{ "X.ToolTip", "Project along the X axis" },
		{ "Y.Comment", "// Project along the Y axis\n" },
		{ "Y.Name", "EProjectedHullAxis::Y" },
		{ "Y.ToolTip", "Project along the Y axis" },
		{ "Z.Comment", "// Project along the Z axis\n" },
		{ "Z.Name", "EProjectedHullAxis::Z" },
		{ "Z.ToolTip", "Project along the Z axis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectedHullAxis::X", (int64)EProjectedHullAxis::X },
		{ "EProjectedHullAxis::Y", (int64)EProjectedHullAxis::Y },
		{ "EProjectedHullAxis::Z", (int64)EProjectedHullAxis::Z },
		{ "EProjectedHullAxis::SmallestBoxDimension", (int64)EProjectedHullAxis::SmallestBoxDimension },
		{ "EProjectedHullAxis::SmallestVolume", (int64)EProjectedHullAxis::SmallestVolume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EProjectedHullAxis",
	"EProjectedHullAxis",
	Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis()
{
	if (!Z_Registration_Info_UEnum_EProjectedHullAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectedHullAxis.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectedHullAxis.InnerSingleton;
}
// End Enum EProjectedHullAxis

// Begin Class USetCollisionGeometryToolProperties
void USetCollisionGeometryToolProperties::StaticRegisterNativesUSetCollisionGeometryToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetCollisionGeometryToolProperties);
UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties_NoRegister()
{
	return USetCollisionGeometryToolProperties::StaticClass();
}
struct Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/SetCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** What kind of shapes to fit to the input. Note: Will be overridden by any enabled 'Auto Detect' settings, if close-fitting 'Auto Detect' shapes are found. */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "What kind of shapes to fit to the input. Note: Will be overridden by any enabled 'Auto Detect' settings, if close-fitting 'Auto Detect' shapes are found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAppendToExisting_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to keep the existing collision shapes, and append new shapes to that set. Otherwise, existing collision will be cleared. */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to keep the existing collision shapes, and append new shapes to that set. Otherwise, existing collision will be cleared." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When using multiple inputs to generate our collision, whether to use the world-space position of those input. If false, inputs will be considered as if they were all centered at the same location. */" },
		{ "EditCondition", "bUsingMultipleInputs" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "When using multiple inputs to generate our collision, whether to use the world-space position of those input. If false, inputs will be considered as if they were all centered at the same location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** What parts of the input should be separately fit with collision shapes */" },
		{ "EditCondition", "GeometryType != ECollisionGeometryType::Empty && GeometryType != ECollisionGeometryType::CopyFromInputs" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "What parts of the input should be separately fit with collision shapes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveContained_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to attempt to detect and remove collision shapes that are fully contained inside other collision shapes */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to attempt to detect and remove collision shapes that are fully contained inside other collision shapes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMaxCount_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to discard all but MaxCount collision geometries with the largest volume */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to discard all but MaxCount collision geometries with the largest volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "9999999" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The maximum number of collision shapes to generate. If necessary, the shapes with smallest volume will be discarded to meet this count. */" },
		{ "EditCondition", "bEnableMaxCount" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "The maximum number of collision shapes to generate. If necessary, the shapes with smallest volume will be discarded to meet this count." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinThickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Generated collision shapes will be expanded if they are smaller than this in any dimension. Not supported for Level Sets or Convex Decompositions (Convex Hulls with more than one hull per mesh). */" },
		{ "EditCondition", "GeometryType != ECollisionGeometryType::LevelSets && (GeometryType != ECollisionGeometryType::ConvexHulls || MaxHullsPerMesh == 1)" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Generated collision shapes will be expanded if they are smaller than this in any dimension. Not supported for Level Sets or Convex Decompositions (Convex Hulls with more than one hull per mesh)." },
		{ "UIMax", "10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectBoxes_MetaData[] = {
		{ "Category", "AutoDetectGeometryOverrides" },
		{ "Comment", "/** Whether to override the requested Geometry Type with a box whenever a box closely fits the input shape */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to override the requested Geometry Type with a box whenever a box closely fits the input shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectSpheres_MetaData[] = {
		{ "Category", "AutoDetectGeometryOverrides" },
		{ "Comment", "/** Whether to override the requested Geometry Type with a sphere whenever a sphere closely fits the input shape */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to override the requested Geometry Type with a sphere whenever a sphere closely fits the input shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectCapsules_MetaData[] = {
		{ "Category", "AutoDetectGeometryOverrides" },
		{ "Comment", "/** Whether to override the requested Geometry Type with a capsule whenever a capsule closely fits the input shape */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to override the requested Geometry Type with a capsule whenever a capsule closely fits the input shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeCollisionShapes_MetaData[] = {
		{ "Category", "MergeCollisionShapes" },
		{ "Comment", "/** Whether to attempt to merge the generated collision shapes, when there are more than MergeAboveCount */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to attempt to merge the generated collision shapes, when there are more than MergeAboveCount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeAboveCount_MetaData[] = {
		{ "Category", "MergeCollisionShapes" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Attempt to merge generated collision shapes until there are at most this many */" },
		{ "EditCondition", "bMergeCollisionShapes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Attempt to merge generated collision shapes until there are at most this many" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNegativeSpaceInMerge_MetaData[] = {
		{ "Category", "MergeCollisionShapes" },
		{ "Comment", "/** Whether to protect negative space while merging the generated collision shapes, using the negative space settings */" },
		{ "EditCondition", "bMergeCollisionShapes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to protect negative space while merging the generated collision shapes, using the negative space settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyHulls_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "Comment", "/** Whether to simplify the convex hull */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to simplify the convex hull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HullTargetFaceCount_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMax", "9999999" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Target number of faces in the simplified hull */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && bSimplifyHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Target number of faces in the simplified hull" },
		{ "UIMax", "100" },
		{ "UIMin", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHullsPerMesh_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many convex hulls can be used to approximate each mesh */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "How many convex hulls can be used to approximate each mesh" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexDecompositionSearchFactor_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to search the space of possible decompositions beyond MaxHullsPerMesh; for larger values, will do additional work to try to better approximate mesh features (but resulting hulls may overlap more) */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "How much to search the space of possible decompositions beyond MaxHullsPerMesh; for larger values, will do additional work to try to better approximate mesh features (but resulting hulls may overlap more)" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddHullsErrorTolerance_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Error tolerance for adding more convex hulls, in cm.  For volumetric errors, the value will be cubed (so a value of 10 indicates a 10x10x10 volume worth of error is acceptable). */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Error tolerance for adding more convex hulls, in cm.  For volumetric errors, the value will be cubed (so a value of 10 indicates a 10x10x10 volume worth of error is acceptable)." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPartThickness_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum part thickness for convex decomposition, in cm; hulls thinner than this will be merged into adjacent hulls, if possible. */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Minimum part thickness for convex decomposition, in cm; hulls thinner than this will be merged into adjacent hulls, if possible." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNegativeSpaceInDecomposition_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "Comment", "/** Whether to guide the convex decomposition to prioritize not filling negative space of the input shape */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to guide the convex decomposition to prioritize not filling negative space of the input shape" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceTolerance_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Negative space closer to the input than this tolerance distance can be filled in */" },
		{ "EditCondition", "(GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1 && bUseNegativeSpaceInDecomposition) || (bMergeCollisionShapes && bUseNegativeSpaceInMerge)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Negative space closer to the input than this tolerance distance can be filled in" },
		{ "UIMax", "100" },
		{ "UIMin", ".001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceMinRadius_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum radius of negative space to protect; tunnels with radius smaller than this could be filled in */" },
		{ "EditCondition", "(GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1 && bUseNegativeSpaceInDecomposition) || (bMergeCollisionShapes && bUseNegativeSpaceInMerge)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Minimum radius of negative space to protect; tunnels with radius smaller than this could be filled in" },
		{ "UIMax", "100" },
		{ "UIMin", ".001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInternalNegativeSpace_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to ignore negative space that is not accessible by traversing from the convex hull (via paths w/ radius of at least Negative Space Tolerance) */" },
		{ "EditCondition", "(GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1 && bUseNegativeSpaceInDecomposition) || (bMergeCollisionShapes && bUseNegativeSpaceInMerge)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Whether to ignore negative space that is not accessible by traversing from the convex hull (via paths w/ radius of at least Negative Space Tolerance)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HullTolerance_MetaData[] = {
		{ "Category", "SweptHulls" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If > 0, the polygon used to generate the swept hull will be simplified up to this distance tolerance, in cm */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "If > 0, the polygon used to generate the swept hull will be simplified up to this distance tolerance, in cm" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepAxis_MetaData[] = {
		{ "Category", "SweptHulls" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How to choose which direction to sweep when creating a swept hull */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "How to choose which direction to sweep when creating a swept hull" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSetResolution_MetaData[] = {
		{ "Category", "LevelSets" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "3" },
		{ "Comment", "/** Level set grid resolution along longest grid axis */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::LevelSets" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Level set grid resolution along longest grid axis" },
		{ "UIMax", "100" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetCollisionType_MetaData[] = {
		{ "Category", "OutputOptions" },
		{ "Comment", "/** Set how the physics system should interpret collision shapes on the output mesh. Does not affect what collision shapes are generated by this tool. */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Set how the physics system should interpret collision shapes on the output mesh. Does not affect what collision shapes are generated by this tool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowTargetMesh_MetaData[] = {
		{ "Category", "TargetVisualization" },
		{ "Comment", "/** Show/Hide target mesh */" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Show/Hide target mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingMultipleInputs_MetaData[] = {
		{ "Comment", "// Set by the tool to tell the settings object whether the tool is using multiple inputs.\n" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Set by the tool to tell the settings object whether the tool is using multiple inputs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeometryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometryType;
	static void NewProp_bAppendToExisting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendToExisting;
	static void NewProp_bUseWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpace;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static void NewProp_bRemoveContained_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveContained;
	static void NewProp_bEnableMaxCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMaxCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThickness;
	static void NewProp_bDetectBoxes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectBoxes;
	static void NewProp_bDetectSpheres_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectSpheres;
	static void NewProp_bDetectCapsules_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectCapsules;
	static void NewProp_bMergeCollisionShapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeCollisionShapes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MergeAboveCount;
	static void NewProp_bUseNegativeSpaceInMerge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNegativeSpaceInMerge;
	static void NewProp_bSimplifyHulls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyHulls;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HullTargetFaceCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullsPerMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexDecompositionSearchFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddHullsErrorTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPartThickness;
	static void NewProp_bUseNegativeSpaceInDecomposition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNegativeSpaceInDecomposition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceMinRadius;
	static void NewProp_bIgnoreInternalNegativeSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInternalNegativeSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HullTolerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SweepAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SweepAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelSetResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SetCollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SetCollisionType;
	static void NewProp_bShowTargetMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTargetMesh;
	static void NewProp_bUsingMultipleInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingMultipleInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetCollisionGeometryToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, GeometryType), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryType_MetaData), NewProp_GeometryType_MetaData) }; // 2233475770
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bAppendToExisting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting = { "bAppendToExisting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAppendToExisting_MetaData), NewProp_bAppendToExisting_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bUseWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace = { "bUseWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldSpace_MetaData), NewProp_bUseWorldSpace_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, InputMode), Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMode_MetaData), NewProp_InputMode_MetaData) }; // 950795619
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bRemoveContained = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained = { "bRemoveContained", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveContained_MetaData), NewProp_bRemoveContained_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bEnableMaxCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount = { "bEnableMaxCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMaxCount_MetaData), NewProp_bEnableMaxCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCount_MetaData), NewProp_MaxCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinThickness = { "MinThickness", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MinThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinThickness_MetaData), NewProp_MinThickness_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bDetectBoxes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes = { "bDetectBoxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectBoxes_MetaData), NewProp_bDetectBoxes_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bDetectSpheres = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres = { "bDetectSpheres", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectSpheres_MetaData), NewProp_bDetectSpheres_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bDetectCapsules = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules = { "bDetectCapsules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectCapsules_MetaData), NewProp_bDetectCapsules_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bMergeCollisionShapes_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bMergeCollisionShapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bMergeCollisionShapes = { "bMergeCollisionShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bMergeCollisionShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeCollisionShapes_MetaData), NewProp_bMergeCollisionShapes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MergeAboveCount = { "MergeAboveCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MergeAboveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeAboveCount_MetaData), NewProp_MergeAboveCount_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInMerge_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bUseNegativeSpaceInMerge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInMerge = { "bUseNegativeSpaceInMerge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNegativeSpaceInMerge_MetaData), NewProp_bUseNegativeSpaceInMerge_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bSimplifyHulls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls = { "bSimplifyHulls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimplifyHulls_MetaData), NewProp_bSimplifyHulls_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTargetFaceCount = { "HullTargetFaceCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, HullTargetFaceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HullTargetFaceCount_MetaData), NewProp_HullTargetFaceCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxHullsPerMesh = { "MaxHullsPerMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MaxHullsPerMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHullsPerMesh_MetaData), NewProp_MaxHullsPerMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_ConvexDecompositionSearchFactor = { "ConvexDecompositionSearchFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, ConvexDecompositionSearchFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexDecompositionSearchFactor_MetaData), NewProp_ConvexDecompositionSearchFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_AddHullsErrorTolerance = { "AddHullsErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, AddHullsErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddHullsErrorTolerance_MetaData), NewProp_AddHullsErrorTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinPartThickness = { "MinPartThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MinPartThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPartThickness_MetaData), NewProp_MinPartThickness_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInDecomposition_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bUseNegativeSpaceInDecomposition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInDecomposition = { "bUseNegativeSpaceInDecomposition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInDecomposition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNegativeSpaceInDecomposition_MetaData), NewProp_bUseNegativeSpaceInDecomposition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_NegativeSpaceTolerance = { "NegativeSpaceTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, NegativeSpaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeSpaceTolerance_MetaData), NewProp_NegativeSpaceTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_NegativeSpaceMinRadius = { "NegativeSpaceMinRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, NegativeSpaceMinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeSpaceMinRadius_MetaData), NewProp_NegativeSpaceMinRadius_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bIgnoreInternalNegativeSpace_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bIgnoreInternalNegativeSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bIgnoreInternalNegativeSpace = { "bIgnoreInternalNegativeSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bIgnoreInternalNegativeSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreInternalNegativeSpace_MetaData), NewProp_bIgnoreInternalNegativeSpace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTolerance = { "HullTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, HullTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HullTolerance_MetaData), NewProp_HullTolerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis = { "SweepAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, SweepAxis), Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepAxis_MetaData), NewProp_SweepAxis_MetaData) }; // 3438680371
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_LevelSetResolution = { "LevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, LevelSetResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSetResolution_MetaData), NewProp_LevelSetResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType = { "SetCollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryToolProperties, SetCollisionType), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetCollisionType_MetaData), NewProp_SetCollisionType_MetaData) }; // 3394822269
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bShowTargetMesh_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bShowTargetMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bShowTargetMesh = { "bShowTargetMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bShowTargetMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowTargetMesh_MetaData), NewProp_bShowTargetMesh_MetaData) };
void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUsingMultipleInputs_SetBit(void* Obj)
{
	((USetCollisionGeometryToolProperties*)Obj)->bUsingMultipleInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUsingMultipleInputs = { "bUsingMultipleInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUsingMultipleInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingMultipleInputs_MetaData), NewProp_bUsingMultipleInputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bMergeCollisionShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MergeAboveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTargetFaceCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxHullsPerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_ConvexDecompositionSearchFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_AddHullsErrorTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinPartThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseNegativeSpaceInDecomposition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_NegativeSpaceTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_NegativeSpaceMinRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bIgnoreInternalNegativeSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_LevelSetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bShowTargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUsingMultipleInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::ClassParams = {
	&USetCollisionGeometryToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties()
{
	if (!Z_Registration_Info_UClass_USetCollisionGeometryToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetCollisionGeometryToolProperties.OuterSingleton, Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USetCollisionGeometryToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USetCollisionGeometryToolProperties>()
{
	return USetCollisionGeometryToolProperties::StaticClass();
}
USetCollisionGeometryToolProperties::USetCollisionGeometryToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USetCollisionGeometryToolProperties);
USetCollisionGeometryToolProperties::~USetCollisionGeometryToolProperties() {}
// End Class USetCollisionGeometryToolProperties

// Begin Class USetCollisionGeometryTool
void USetCollisionGeometryTool::StaticRegisterNativesUSetCollisionGeometryTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetCollisionGeometryTool);
UClass* Z_Construct_UClass_USetCollisionGeometryTool_NoRegister()
{
	return USetCollisionGeometryTool::StaticClass();
}
struct Z_Construct_UClass_USetCollisionGeometryTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Inspector Tool for visualizing mesh information\n */" },
		{ "IncludePath", "Physics/SetCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Mesh Inspector Tool for visualizing mesh information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VizSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeom_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySelectionVizProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySelectionViz_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolygroupLayerProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VizSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionProps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGeom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometrySelectionVizProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometrySelectionViz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetCollisionGeometryTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryTool, Settings), Z_Construct_UClass_USetCollisionGeometryToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygroupLayerProperties_MetaData), NewProp_PolygroupLayerProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_VizSettings = { "VizSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryTool, VizSettings), Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VizSettings_MetaData), NewProp_VizSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_CollisionProps = { "CollisionProps", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryTool, CollisionProps), Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProps_MetaData), NewProp_CollisionProps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PreviewGeom = { "PreviewGeom", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryTool, PreviewGeom), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewGeom_MetaData), NewProp_PreviewGeom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_GeometrySelectionVizProperties = { "GeometrySelectionVizProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryTool, GeometrySelectionVizProperties), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySelectionVizProperties_MetaData), NewProp_GeometrySelectionVizProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_GeometrySelectionViz = { "GeometrySelectionViz", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USetCollisionGeometryTool, GeometrySelectionViz), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySelectionViz_MetaData), NewProp_GeometrySelectionViz_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetCollisionGeometryTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PolygroupLayerProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_VizSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_CollisionProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PreviewGeom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_GeometrySelectionVizProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_GeometrySelectionViz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USetCollisionGeometryTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(USetCollisionGeometryTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::ClassParams = {
	&USetCollisionGeometryTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USetCollisionGeometryTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USetCollisionGeometryTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USetCollisionGeometryTool()
{
	if (!Z_Registration_Info_UClass_USetCollisionGeometryTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetCollisionGeometryTool.OuterSingleton, Z_Construct_UClass_USetCollisionGeometryTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USetCollisionGeometryTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USetCollisionGeometryTool>()
{
	return USetCollisionGeometryTool::StaticClass();
}
USetCollisionGeometryTool::USetCollisionGeometryTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USetCollisionGeometryTool);
USetCollisionGeometryTool::~USetCollisionGeometryTool() {}
// End Class USetCollisionGeometryTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESetCollisionGeometryInputMode_StaticEnum, TEXT("ESetCollisionGeometryInputMode"), &Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 950795619U) },
		{ ECollisionGeometryType_StaticEnum, TEXT("ECollisionGeometryType"), &Z_Registration_Info_UEnum_ECollisionGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2233475770U) },
		{ EProjectedHullAxis_StaticEnum, TEXT("EProjectedHullAxis"), &Z_Registration_Info_UEnum_EProjectedHullAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3438680371U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USetCollisionGeometryToolBuilder, USetCollisionGeometryToolBuilder::StaticClass, TEXT("USetCollisionGeometryToolBuilder"), &Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetCollisionGeometryToolBuilder), 896372808U) },
		{ Z_Construct_UClass_USetCollisionGeometryToolProperties, USetCollisionGeometryToolProperties::StaticClass, TEXT("USetCollisionGeometryToolProperties"), &Z_Registration_Info_UClass_USetCollisionGeometryToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetCollisionGeometryToolProperties), 1608888756U) },
		{ Z_Construct_UClass_USetCollisionGeometryTool, USetCollisionGeometryTool::StaticClass, TEXT("USetCollisionGeometryTool"), &Z_Registration_Info_UClass_USetCollisionGeometryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetCollisionGeometryTool), 1406791065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_1034233975(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
