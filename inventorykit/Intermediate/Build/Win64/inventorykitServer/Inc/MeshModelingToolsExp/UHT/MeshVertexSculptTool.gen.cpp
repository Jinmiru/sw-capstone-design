// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/MeshVertexSculptTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexSculptTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptToolBase();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSymmetryProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSymmetryProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushAlphaProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushAlphaProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushSculptProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushSculptProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMeshVertexSculptToolBuilder
void UMeshVertexSculptToolBuilder::StaticRegisterNativesUMeshVertexSculptToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexSculptToolBuilder);
UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder_NoRegister()
{
	return UMeshVertexSculptToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexSculptToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::ClassParams = {
	&UMeshVertexSculptToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexSculptToolBuilder>()
{
	return UMeshVertexSculptToolBuilder::StaticClass();
}
UMeshVertexSculptToolBuilder::UMeshVertexSculptToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexSculptToolBuilder);
UMeshVertexSculptToolBuilder::~UMeshVertexSculptToolBuilder() {}
// End Class UMeshVertexSculptToolBuilder

// Begin Enum EMeshVertexSculptBrushType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexSculptBrushType;
static UEnum* EMeshVertexSculptBrushType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexSculptBrushType"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexSculptBrushType>()
{
	return EMeshVertexSculptBrushType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Sculpting Brush Types */" },
		{ "FixedPlane.Comment", "/** Move vertices towards a fixed plane in world space, positioned with a 3D gizmo */" },
		{ "FixedPlane.DisplayName", "FixedPlane" },
		{ "FixedPlane.Name", "EMeshVertexSculptBrushType::FixedPlane" },
		{ "FixedPlane.ToolTip", "Move vertices towards a fixed plane in world space, positioned with a 3D gizmo" },
		{ "Flatten.Comment", "/** Move vertices towards the average plane of the brush stamp region */" },
		{ "Flatten.DisplayName", "Flatten" },
		{ "Flatten.Name", "EMeshVertexSculptBrushType::Flatten" },
		{ "Flatten.ToolTip", "Move vertices towards the average plane of the brush stamp region" },
		{ "Inflate.Comment", "/** Displace vertices along their vertex normals */" },
		{ "Inflate.DisplayName", "Inflate" },
		{ "Inflate.Name", "EMeshVertexSculptBrushType::Inflate" },
		{ "Inflate.ToolTip", "Displace vertices along their vertex normals" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EMeshVertexSculptBrushType::LastValue" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "Move.Comment", "/** Move vertices parallel to the view plane  */" },
		{ "Move.DisplayName", "Move" },
		{ "Move.Name", "EMeshVertexSculptBrushType::Move" },
		{ "Move.ToolTip", "Move vertices parallel to the view plane" },
		{ "Offset.Comment", "/** Displace vertices along the average surface normal (Ctrl to invert) */" },
		{ "Offset.DisplayName", "Sculpt (Normal)" },
		{ "Offset.Name", "EMeshVertexSculptBrushType::Offset" },
		{ "Offset.ToolTip", "Displace vertices along the average surface normal (Ctrl to invert)" },
		{ "Pinch.Comment", "/** Move vertices towards the center of the brush (Ctrl to push away)*/" },
		{ "Pinch.DisplayName", "Pinch" },
		{ "Pinch.Name", "EMeshVertexSculptBrushType::Pinch" },
		{ "Pinch.ToolTip", "Move vertices towards the center of the brush (Ctrl to push away)" },
		{ "Plane.Comment", "/** Move vertices towards a plane defined by the initial brush position  */" },
		{ "Plane.DisplayName", "Plane (Normal)" },
		{ "Plane.Name", "EMeshVertexSculptBrushType::Plane" },
		{ "Plane.ToolTip", "Move vertices towards a plane defined by the initial brush position" },
		{ "PlaneViewAligned.Comment", "/** Move vertices towards a view-facing plane defined at the initial brush position */" },
		{ "PlaneViewAligned.DisplayName", "Plane (Viewpoint)" },
		{ "PlaneViewAligned.Name", "EMeshVertexSculptBrushType::PlaneViewAligned" },
		{ "PlaneViewAligned.ToolTip", "Move vertices towards a view-facing plane defined at the initial brush position" },
		{ "PullKelvin.Comment", "/** Grab Brush, fall-off alters the influence of the grab */" },
		{ "PullKelvin.DisplayName", "Kelvin Grab" },
		{ "PullKelvin.Name", "EMeshVertexSculptBrushType::PullKelvin" },
		{ "PullKelvin.ToolTip", "Grab Brush, fall-off alters the influence of the grab" },
		{ "PullSharpKelvin.Comment", "/** Grab Brush that may generate cusps, fall-off alters the influence of the grab */" },
		{ "PullSharpKelvin.DisplayName", "Sharp Kelvin Grab" },
		{ "PullSharpKelvin.Name", "EMeshVertexSculptBrushType::PullSharpKelvin" },
		{ "PullSharpKelvin.ToolTip", "Grab Brush that may generate cusps, fall-off alters the influence of the grab" },
		{ "ScaleKelvin.Comment", "/** Scale Brush will inflate or pinch radially from the center of the brush */" },
		{ "ScaleKelvin.DisplayName", "Kelvin Scale" },
		{ "ScaleKelvin.Name", "EMeshVertexSculptBrushType::ScaleKelvin" },
		{ "ScaleKelvin.ToolTip", "Scale Brush will inflate or pinch radially from the center of the brush" },
		{ "SculptMax.Comment", "/** Displaces vertices along the average surface normal to a maximum height based on the brush size (Ctrl to invert) */" },
		{ "SculptMax.DisplayName", "Sculpt Max" },
		{ "SculptMax.Name", "EMeshVertexSculptBrushType::SculptMax" },
		{ "SculptMax.ToolTip", "Displaces vertices along the average surface normal to a maximum height based on the brush size (Ctrl to invert)" },
		{ "SculptView.Comment", "/** Displace vertices towards the camera viewpoint (Ctrl to invert) */" },
		{ "SculptView.DisplayName", "Sculpt (Viewpoint)" },
		{ "SculptView.Name", "EMeshVertexSculptBrushType::SculptView" },
		{ "SculptView.ToolTip", "Displace vertices towards the camera viewpoint (Ctrl to invert)" },
		{ "Smooth.Comment", "/** Smooth mesh vertices  */" },
		{ "Smooth.DisplayName", "Smooth" },
		{ "Smooth.Name", "EMeshVertexSculptBrushType::Smooth" },
		{ "Smooth.ToolTip", "Smooth mesh vertices" },
		{ "SmoothFill.Comment", "/** Smooth mesh vertices but only in direction of normal (Ctrl to invert) */" },
		{ "SmoothFill.DisplayName", "SmoothFill" },
		{ "SmoothFill.Name", "EMeshVertexSculptBrushType::SmoothFill" },
		{ "SmoothFill.ToolTip", "Smooth mesh vertices but only in direction of normal (Ctrl to invert)" },
		{ "ToolTip", "Mesh Sculpting Brush Types" },
		{ "TwistKelvin.Comment", "/** Twist Brush moves vertices in the plane perpendicular to the local mesh normal */" },
		{ "TwistKelvin.DisplayName", "Kelvin Twist" },
		{ "TwistKelvin.Name", "EMeshVertexSculptBrushType::TwistKelvin" },
		{ "TwistKelvin.ToolTip", "Twist Brush moves vertices in the plane perpendicular to the local mesh normal" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexSculptBrushType::Move", (int64)EMeshVertexSculptBrushType::Move },
		{ "EMeshVertexSculptBrushType::PullKelvin", (int64)EMeshVertexSculptBrushType::PullKelvin },
		{ "EMeshVertexSculptBrushType::PullSharpKelvin", (int64)EMeshVertexSculptBrushType::PullSharpKelvin },
		{ "EMeshVertexSculptBrushType::Smooth", (int64)EMeshVertexSculptBrushType::Smooth },
		{ "EMeshVertexSculptBrushType::SmoothFill", (int64)EMeshVertexSculptBrushType::SmoothFill },
		{ "EMeshVertexSculptBrushType::Offset", (int64)EMeshVertexSculptBrushType::Offset },
		{ "EMeshVertexSculptBrushType::SculptView", (int64)EMeshVertexSculptBrushType::SculptView },
		{ "EMeshVertexSculptBrushType::SculptMax", (int64)EMeshVertexSculptBrushType::SculptMax },
		{ "EMeshVertexSculptBrushType::Inflate", (int64)EMeshVertexSculptBrushType::Inflate },
		{ "EMeshVertexSculptBrushType::ScaleKelvin", (int64)EMeshVertexSculptBrushType::ScaleKelvin },
		{ "EMeshVertexSculptBrushType::Pinch", (int64)EMeshVertexSculptBrushType::Pinch },
		{ "EMeshVertexSculptBrushType::TwistKelvin", (int64)EMeshVertexSculptBrushType::TwistKelvin },
		{ "EMeshVertexSculptBrushType::Flatten", (int64)EMeshVertexSculptBrushType::Flatten },
		{ "EMeshVertexSculptBrushType::Plane", (int64)EMeshVertexSculptBrushType::Plane },
		{ "EMeshVertexSculptBrushType::PlaneViewAligned", (int64)EMeshVertexSculptBrushType::PlaneViewAligned },
		{ "EMeshVertexSculptBrushType::FixedPlane", (int64)EMeshVertexSculptBrushType::FixedPlane },
		{ "EMeshVertexSculptBrushType::LastValue", (int64)EMeshVertexSculptBrushType::LastValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexSculptBrushType",
	"EMeshVertexSculptBrushType",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.InnerSingleton;
}
// End Enum EMeshVertexSculptBrushType

// Begin Enum EMeshVertexSculptBrushFilterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType;
static UEnum* EMeshVertexSculptBrushFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexSculptBrushFilterType"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexSculptBrushFilterType>()
{
	return EMeshVertexSculptBrushFilterType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Brush Triangle Filter Type */" },
		{ "Component.Comment", "/** Only apply brush to triangles in the same connected mesh component/island */" },
		{ "Component.Name", "EMeshVertexSculptBrushFilterType::Component" },
		{ "Component.ToolTip", "Only apply brush to triangles in the same connected mesh component/island" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "None.Comment", "/** Do not filter brush area */" },
		{ "None.Name", "EMeshVertexSculptBrushFilterType::None" },
		{ "None.ToolTip", "Do not filter brush area" },
		{ "PolyGroup.Comment", "/** Only apply brush to triangles with the same PolyGroup */" },
		{ "PolyGroup.Name", "EMeshVertexSculptBrushFilterType::PolyGroup" },
		{ "PolyGroup.ToolTip", "Only apply brush to triangles with the same PolyGroup" },
		{ "ToolTip", "Brush Triangle Filter Type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexSculptBrushFilterType::None", (int64)EMeshVertexSculptBrushFilterType::None },
		{ "EMeshVertexSculptBrushFilterType::Component", (int64)EMeshVertexSculptBrushFilterType::Component },
		{ "EMeshVertexSculptBrushFilterType::PolyGroup", (int64)EMeshVertexSculptBrushFilterType::PolyGroup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexSculptBrushFilterType",
	"EMeshVertexSculptBrushFilterType",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.InnerSingleton;
}
// End Enum EMeshVertexSculptBrushFilterType

// Begin Class UVertexBrushSculptProperties
void UVertexBrushSculptProperties::StaticRegisterNativesUVertexBrushSculptProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexBrushSculptProperties);
UClass* Z_Construct_UClass_UVertexBrushSculptProperties_NoRegister()
{
	return UVertexBrushSculptProperties::StaticClass();
}
struct Z_Construct_UClass_UVertexBrushSculptProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBrushType_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** Primary Brush Mode */" },
		{ "DisplayName", "Brush" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Primary Brush Mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryFalloffType_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** Primary Brush Falloff Type, multiplied by Alpha Mask where applicable */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Primary Brush Falloff Type, multiplied by Alpha Mask where applicable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushFilter_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** Filter applied to Stamp Region Triangles, based on first Stroke Stamp */" },
		{ "DisplayName", "Region" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Filter applied to Stamp Region Triangles, based on first Stroke Stamp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeTarget_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes */" },
		{ "EditCondition", "PrimaryBrushType == EMeshVertexSculptBrushType::Offset || PrimaryBrushType == EMeshVertexSculptBrushType::SculptMax || PrimaryBrushType == EMeshVertexSculptBrushType::SculptView || PrimaryBrushType == EMeshVertexSculptBrushType::Pinch || PrimaryBrushType == EMeshVertexSculptBrushType::Resample" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[] = {
		{ "Comment", "// parent ref required for details customization\n" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "parent ref required for details customization" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryBrushType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryBrushType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryFalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryFalloffType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BrushFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BrushFilter;
	static void NewProp_bFreezeTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeTarget;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexBrushSculptProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType = { "PrimaryBrushType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushSculptProperties, PrimaryBrushType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryBrushType_MetaData), NewProp_PrimaryBrushType_MetaData) }; // 1906453731
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType = { "PrimaryFalloffType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushSculptProperties, PrimaryFalloffType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryFalloffType_MetaData), NewProp_PrimaryFalloffType_MetaData) }; // 414534485
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter = { "BrushFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushSculptProperties, BrushFilter), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushFilter_MetaData), NewProp_BrushFilter_MetaData) }; // 2674423048
void Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget_SetBit(void* Obj)
{
	((UVertexBrushSculptProperties*)Obj)->bFreezeTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget = { "bFreezeTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexBrushSculptProperties), &Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFreezeTarget_MetaData), NewProp_bFreezeTarget_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushSculptProperties, Tool), Z_Construct_UClass_UMeshVertexSculptTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tool_MetaData), NewProp_Tool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexBrushSculptProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_Tool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVertexBrushSculptProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::ClassParams = {
	&UVertexBrushSculptProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVertexBrushSculptProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexBrushSculptProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexBrushSculptProperties()
{
	if (!Z_Registration_Info_UClass_UVertexBrushSculptProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexBrushSculptProperties.OuterSingleton, Z_Construct_UClass_UVertexBrushSculptProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexBrushSculptProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexBrushSculptProperties>()
{
	return UVertexBrushSculptProperties::StaticClass();
}
UVertexBrushSculptProperties::UVertexBrushSculptProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexBrushSculptProperties);
UVertexBrushSculptProperties::~UVertexBrushSculptProperties() {}
// End Class UVertexBrushSculptProperties

// Begin Class UVertexBrushAlphaProperties
void UVertexBrushAlphaProperties::StaticRegisterNativesUVertexBrushAlphaProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexBrushAlphaProperties);
UClass* Z_Construct_UClass_UVertexBrushAlphaProperties_NoRegister()
{
	return UVertexBrushAlphaProperties::StaticClass();
}
struct Z_Construct_UClass_UVertexBrushAlphaProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Properties for a brush alpha mask\n */" },
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Tool Properties for a brush alpha mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** Alpha mask applied to brush stamp. Red channel is used. */" },
		{ "DisplayName", "Alpha Mask" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Alpha mask applied to brush stamp. Red channel is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "-360.0" },
		{ "Comment", "/** Alpha is rotated by this angle, inside the brush stamp frame (vertically aligned) */" },
		{ "DisplayName", "Angle" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Alpha is rotated by this angle, inside the brush stamp frame (vertically aligned)" },
		{ "UIMax", "180.0" },
		{ "UIMin", "-180.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomize_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** If true, a random angle in +/- RandomRange is added to Rotation angle for each stamp */" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "If true, a random angle in +/- RandomRange is added to Rotation angle for each stamp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRange_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** Bounds of random generation (positive and negative) for randomized stamps */" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Bounds of random generation (positive and negative) for randomized stamps" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[] = {
		{ "Comment", "// parent ref required for details customization\n" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "parent ref required for details customization" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAngle;
	static void NewProp_bRandomize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRange;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexBrushAlphaProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushAlphaProperties, Alpha), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushAlphaProperties, RotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAngle_MetaData), NewProp_RotationAngle_MetaData) };
void Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize_SetBit(void* Obj)
{
	((UVertexBrushAlphaProperties*)Obj)->bRandomize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize = { "bRandomize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexBrushAlphaProperties), &Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomize_MetaData), NewProp_bRandomize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RandomRange = { "RandomRange", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushAlphaProperties, RandomRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRange_MetaData), NewProp_RandomRange_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexBrushAlphaProperties, Tool), Z_Construct_UClass_UMeshVertexSculptTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tool_MetaData), NewProp_Tool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RotationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RandomRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Tool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::ClassParams = {
	&UVertexBrushAlphaProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexBrushAlphaProperties()
{
	if (!Z_Registration_Info_UClass_UVertexBrushAlphaProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexBrushAlphaProperties.OuterSingleton, Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexBrushAlphaProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexBrushAlphaProperties>()
{
	return UVertexBrushAlphaProperties::StaticClass();
}
UVertexBrushAlphaProperties::UVertexBrushAlphaProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexBrushAlphaProperties);
UVertexBrushAlphaProperties::~UVertexBrushAlphaProperties() {}
// End Class UVertexBrushAlphaProperties

// Begin Class UMeshSymmetryProperties
void UMeshSymmetryProperties::StaticRegisterNativesUMeshSymmetryProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSymmetryProperties);
UClass* Z_Construct_UClass_UMeshSymmetryProperties_NoRegister()
{
	return UMeshSymmetryProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshSymmetryProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSymmetry_MetaData[] = {
		{ "Category", "Symmetry" },
		{ "Comment", "/** Enable/Disable symmetric sculpting. This option will not be available if symmetry cannot be detected, or a non-symmetric edit has been made */" },
		{ "EditCondition", "bSymmetryCanBeEnabled" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Enable/Disable symmetric sculpting. This option will not be available if symmetry cannot be detected, or a non-symmetric edit has been made" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSymmetryCanBeEnabled_MetaData[] = {
		{ "Comment", "// this flag is set/updated by the Tool to enable/disable the bEnableSymmetry toggle\n" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "this flag is set/updated by the Tool to enable/disable the bEnableSymmetry toggle" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSymmetry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSymmetry;
	static void NewProp_bSymmetryCanBeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSymmetryCanBeEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSymmetryProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry_SetBit(void* Obj)
{
	((UMeshSymmetryProperties*)Obj)->bEnableSymmetry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry = { "bEnableSymmetry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSymmetryProperties), &Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSymmetry_MetaData), NewProp_bEnableSymmetry_MetaData) };
void Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled_SetBit(void* Obj)
{
	((UMeshSymmetryProperties*)Obj)->bSymmetryCanBeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled = { "bSymmetryCanBeEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshSymmetryProperties), &Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSymmetryCanBeEnabled_MetaData), NewProp_bSymmetryCanBeEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSymmetryProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshSymmetryProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSymmetryProperties_Statics::ClassParams = {
	&UMeshSymmetryProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshSymmetryProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshSymmetryProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshSymmetryProperties()
{
	if (!Z_Registration_Info_UClass_UMeshSymmetryProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSymmetryProperties.OuterSingleton, Z_Construct_UClass_UMeshSymmetryProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshSymmetryProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSymmetryProperties>()
{
	return UMeshSymmetryProperties::StaticClass();
}
UMeshSymmetryProperties::UMeshSymmetryProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSymmetryProperties);
UMeshSymmetryProperties::~UMeshSymmetryProperties() {}
// End Class UMeshSymmetryProperties

// Begin Class UMeshVertexSculptTool
void UMeshVertexSculptTool::StaticRegisterNativesUMeshVertexSculptTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexSculptTool);
UClass* Z_Construct_UClass_UMeshVertexSculptTool_NoRegister()
{
	return UMeshVertexSculptTool::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexSculptTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Vertex Sculpt Tool Class\n */" },
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Mesh Vertex Sculpt Tool Class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SculptProperties_MetaData[] = {
		{ "Comment", "/** Properties that control sculpting*/" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Properties that control sculpting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SymmetryProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SculptProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlphaProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushAlpha;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SymmetryProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexSculptTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SculptProperties = { "SculptProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexSculptTool, SculptProperties), Z_Construct_UClass_UVertexBrushSculptProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SculptProperties_MetaData), NewProp_SculptProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_AlphaProperties = { "AlphaProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexSculptTool, AlphaProperties), Z_Construct_UClass_UVertexBrushAlphaProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaProperties_MetaData), NewProp_AlphaProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_BrushAlpha = { "BrushAlpha", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexSculptTool, BrushAlpha), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushAlpha_MetaData), NewProp_BrushAlpha_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SymmetryProperties = { "SymmetryProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexSculptTool, SymmetryProperties), Z_Construct_UClass_UMeshSymmetryProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SymmetryProperties_MetaData), NewProp_SymmetryProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexSculptTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshActor_MetaData), NewProp_PreviewMeshActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexSculptTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshVertexSculptTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SculptProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_AlphaProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_BrushAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SymmetryProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_PreviewMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_DynamicMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshVertexSculptTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UMeshVertexSculptTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::ClassParams = {
	&UMeshVertexSculptTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshVertexSculptTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexSculptTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexSculptTool()
{
	if (!Z_Registration_Info_UClass_UMeshVertexSculptTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexSculptTool.OuterSingleton, Z_Construct_UClass_UMeshVertexSculptTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexSculptTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexSculptTool>()
{
	return UMeshVertexSculptTool::StaticClass();
}
UMeshVertexSculptTool::UMeshVertexSculptTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexSculptTool);
UMeshVertexSculptTool::~UMeshVertexSculptTool() {}
// End Class UMeshVertexSculptTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshVertexSculptBrushType_StaticEnum, TEXT("EMeshVertexSculptBrushType"), &Z_Registration_Info_UEnum_EMeshVertexSculptBrushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1906453731U) },
		{ EMeshVertexSculptBrushFilterType_StaticEnum, TEXT("EMeshVertexSculptBrushFilterType"), &Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2674423048U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshVertexSculptToolBuilder, UMeshVertexSculptToolBuilder::StaticClass, TEXT("UMeshVertexSculptToolBuilder"), &Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexSculptToolBuilder), 2229642709U) },
		{ Z_Construct_UClass_UVertexBrushSculptProperties, UVertexBrushSculptProperties::StaticClass, TEXT("UVertexBrushSculptProperties"), &Z_Registration_Info_UClass_UVertexBrushSculptProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexBrushSculptProperties), 3939823430U) },
		{ Z_Construct_UClass_UVertexBrushAlphaProperties, UVertexBrushAlphaProperties::StaticClass, TEXT("UVertexBrushAlphaProperties"), &Z_Registration_Info_UClass_UVertexBrushAlphaProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexBrushAlphaProperties), 3213606207U) },
		{ Z_Construct_UClass_UMeshSymmetryProperties, UMeshSymmetryProperties::StaticClass, TEXT("UMeshSymmetryProperties"), &Z_Registration_Info_UClass_UMeshSymmetryProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSymmetryProperties), 3492898966U) },
		{ Z_Construct_UClass_UMeshVertexSculptTool, UMeshVertexSculptTool::StaticClass, TEXT("UMeshVertexSculptTool"), &Z_Registration_Info_UClass_UMeshVertexSculptTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexSculptTool), 3951449768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_1538564876(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
