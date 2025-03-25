// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/MeshVertexPaintTool.h"
#include "ModelingComponents/Public/PropertySets/ColorChannelFilterPropertyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexPaintTool() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptToolBase();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolQuickActions();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolQuickActions_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolUtilityActions();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexPaintBasicProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexPaintBasicProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexPaintBrushFilterProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexPaintBrushFilterProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyLassoMarqueeMechanic_NoRegister();
MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMeshVertexPaintToolBuilder
void UMeshVertexPaintToolBuilder::StaticRegisterNativesUMeshVertexPaintToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPaintToolBuilder);
UClass* Z_Construct_UClass_UMeshVertexPaintToolBuilder_NoRegister()
{
	return UMeshVertexPaintToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexPaintToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "MeshVertexPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPaintToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshVertexPaintToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPaintToolBuilder_Statics::ClassParams = {
	&UMeshVertexPaintToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexPaintToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexPaintToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshVertexPaintToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexPaintToolBuilder>()
{
	return UMeshVertexPaintToolBuilder::StaticClass();
}
UMeshVertexPaintToolBuilder::UMeshVertexPaintToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPaintToolBuilder);
UMeshVertexPaintToolBuilder::~UMeshVertexPaintToolBuilder() {}
// End Class UMeshVertexPaintToolBuilder

// Begin Enum EMeshVertexPaintInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType;
static UEnum* EMeshVertexPaintInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintInteractionType"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintInteractionType>()
{
	return EMeshVertexPaintInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Brush.Comment", "/** Paint Vertices of hit triangles with a smooth falloff */" },
		{ "Brush.DisplayName", "Paint Vertices" },
		{ "Brush.Name", "EMeshVertexPaintInteractionType::Brush" },
		{ "Brush.ToolTip", "Paint Vertices of hit triangles with a smooth falloff" },
		{ "Comment", "/** Mesh Vertex Paint Primary Interactions */" },
		{ "Fill.Comment", "/** Fill any triangles connected to the brushed triangles */" },
		{ "Fill.DisplayName", "Flood Fill Connected" },
		{ "Fill.Name", "EMeshVertexPaintInteractionType::Fill" },
		{ "Fill.ToolTip", "Fill any triangles connected to the brushed triangles" },
		{ "GroupFill.Comment", "/** Fill any polygroups connected to the brushed triangles */" },
		{ "GroupFill.DisplayName", "Flood Fill Groups" },
		{ "GroupFill.Name", "EMeshVertexPaintInteractionType::GroupFill" },
		{ "GroupFill.ToolTip", "Fill any polygroups connected to the brushed triangles" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EMeshVertexPaintInteractionType::LastValue" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "PolyLasso.Comment", "/** Paint any triangles inside polygonal or freehand Lassos drawn in the viewport */" },
		{ "PolyLasso.Name", "EMeshVertexPaintInteractionType::PolyLasso" },
		{ "PolyLasso.ToolTip", "Paint any triangles inside polygonal or freehand Lassos drawn in the viewport" },
		{ "ToolTip", "Mesh Vertex Paint Primary Interactions" },
		{ "TriFill.Comment", "/** Fill any painted triangles, by setting all 3 vertices to the same color */" },
		{ "TriFill.DisplayName", "Paint Triangles" },
		{ "TriFill.Name", "EMeshVertexPaintInteractionType::TriFill" },
		{ "TriFill.ToolTip", "Fill any painted triangles, by setting all 3 vertices to the same color" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintInteractionType::Brush", (int64)EMeshVertexPaintInteractionType::Brush },
		{ "EMeshVertexPaintInteractionType::TriFill", (int64)EMeshVertexPaintInteractionType::TriFill },
		{ "EMeshVertexPaintInteractionType::Fill", (int64)EMeshVertexPaintInteractionType::Fill },
		{ "EMeshVertexPaintInteractionType::GroupFill", (int64)EMeshVertexPaintInteractionType::GroupFill },
		{ "EMeshVertexPaintInteractionType::PolyLasso", (int64)EMeshVertexPaintInteractionType::PolyLasso },
		{ "EMeshVertexPaintInteractionType::LastValue", (int64)EMeshVertexPaintInteractionType::LastValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintInteractionType",
	"EMeshVertexPaintInteractionType",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType.InnerSingleton;
}
// End Enum EMeshVertexPaintInteractionType

// Begin Enum EMeshVertexPaintColorChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel;
static UEnum* EMeshVertexPaintColorChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintColorChannel"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintColorChannel>()
{
	return EMeshVertexPaintColorChannel_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EMeshVertexPaintColorChannel::Alpha" },
		{ "Blue.Name", "EMeshVertexPaintColorChannel::Blue" },
		{ "Green.Name", "EMeshVertexPaintColorChannel::Green" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "Red.Name", "EMeshVertexPaintColorChannel::Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintColorChannel::Red", (int64)EMeshVertexPaintColorChannel::Red },
		{ "EMeshVertexPaintColorChannel::Green", (int64)EMeshVertexPaintColorChannel::Green },
		{ "EMeshVertexPaintColorChannel::Blue", (int64)EMeshVertexPaintColorChannel::Blue },
		{ "EMeshVertexPaintColorChannel::Alpha", (int64)EMeshVertexPaintColorChannel::Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintColorChannel",
	"EMeshVertexPaintColorChannel",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel.InnerSingleton;
}
// End Enum EMeshVertexPaintColorChannel

// Begin Enum EMeshVertexPaintColorBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode;
static UEnum* EMeshVertexPaintColorBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintColorBlendMode"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintColorBlendMode>()
{
	return EMeshVertexPaintColorBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// currently in-sync with EVertexColorPaintBrushOpBlendMode\n" },
		{ "Lerp.Comment", "/** Interpolate between Paint color and existing Color */" },
		{ "Lerp.Name", "EMeshVertexPaintColorBlendMode::Lerp" },
		{ "Lerp.ToolTip", "Interpolate between Paint color and existing Color" },
		{ "Mix.Comment", "/** Alpha-Blend the Paint accumulated during each stroke with the existing Colors */" },
		{ "Mix.Name", "EMeshVertexPaintColorBlendMode::Mix" },
		{ "Mix.ToolTip", "Alpha-Blend the Paint accumulated during each stroke with the existing Colors" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "Multiply.Comment", "/** Multiply the Paint color with the existing Color */" },
		{ "Multiply.Name", "EMeshVertexPaintColorBlendMode::Multiply" },
		{ "Multiply.ToolTip", "Multiply the Paint color with the existing Color" },
		{ "ToolTip", "currently in-sync with EVertexColorPaintBrushOpBlendMode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintColorBlendMode::Lerp", (int64)EMeshVertexPaintColorBlendMode::Lerp },
		{ "EMeshVertexPaintColorBlendMode::Mix", (int64)EMeshVertexPaintColorBlendMode::Mix },
		{ "EMeshVertexPaintColorBlendMode::Multiply", (int64)EMeshVertexPaintColorBlendMode::Multiply },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintColorBlendMode",
	"EMeshVertexPaintColorBlendMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode.InnerSingleton;
}
// End Enum EMeshVertexPaintColorBlendMode

// Begin Enum EMeshVertexPaintBrushType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintBrushType;
static UEnum* EMeshVertexPaintBrushType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintBrushType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintBrushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintBrushType"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintBrushType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintBrushType>()
{
	return EMeshVertexPaintBrushType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Vertex Painting Brush Types */" },
		{ "Erase.Comment", "/** Paint the Erase/Secondary Color */" },
		{ "Erase.DisplayName", "Erase" },
		{ "Erase.Name", "EMeshVertexPaintBrushType::Erase" },
		{ "Erase.ToolTip", "Paint the Erase/Secondary Color" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EMeshVertexPaintBrushType::LastValue" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "Paint.Comment", "/** Paint the Primary Color */" },
		{ "Paint.DisplayName", "Paint" },
		{ "Paint.Name", "EMeshVertexPaintBrushType::Paint" },
		{ "Paint.ToolTip", "Paint the Primary Color" },
		{ "Smooth.Comment", "/** Smooth the colors */" },
		{ "Smooth.DisplayName", "Smooth" },
		{ "Smooth.Name", "EMeshVertexPaintBrushType::Smooth" },
		{ "Smooth.ToolTip", "Smooth the colors" },
		{ "Soften.Comment", "/** Average any seam colors at a vertex */" },
		{ "Soften.DisplayName", "Soften" },
		{ "Soften.Name", "EMeshVertexPaintBrushType::Soften" },
		{ "Soften.ToolTip", "Average any seam colors at a vertex" },
		{ "ToolTip", "Mesh Vertex Painting Brush Types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintBrushType::Paint", (int64)EMeshVertexPaintBrushType::Paint },
		{ "EMeshVertexPaintBrushType::Erase", (int64)EMeshVertexPaintBrushType::Erase },
		{ "EMeshVertexPaintBrushType::Soften", (int64)EMeshVertexPaintBrushType::Soften },
		{ "EMeshVertexPaintBrushType::Smooth", (int64)EMeshVertexPaintBrushType::Smooth },
		{ "EMeshVertexPaintBrushType::LastValue", (int64)EMeshVertexPaintBrushType::LastValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintBrushType",
	"EMeshVertexPaintBrushType",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintBrushType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintBrushType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintBrushType.InnerSingleton;
}
// End Enum EMeshVertexPaintBrushType

// Begin Enum EMeshVertexPaintSecondaryActionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType;
static UEnum* EMeshVertexPaintSecondaryActionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintSecondaryActionType"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintSecondaryActionType>()
{
	return EMeshVertexPaintSecondaryActionType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Secondary/Erase Vertex Color Painting Types */" },
		{ "Erase.Comment", "/** Paint the Erase/Secondary Color */" },
		{ "Erase.Name", "EMeshVertexPaintSecondaryActionType::Erase" },
		{ "Erase.ToolTip", "Paint the Erase/Secondary Color" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "Smooth.Comment", "/** Blend vertex colors with nearby vertex colors (ie blur) */" },
		{ "Smooth.Name", "EMeshVertexPaintSecondaryActionType::Smooth" },
		{ "Smooth.ToolTip", "Blend vertex colors with nearby vertex colors (ie blur)" },
		{ "Soften.Comment", "/** Blend any split color values at painted vertices  */" },
		{ "Soften.Name", "EMeshVertexPaintSecondaryActionType::Soften" },
		{ "Soften.ToolTip", "Blend any split color values at painted vertices" },
		{ "ToolTip", "Secondary/Erase Vertex Color Painting Types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintSecondaryActionType::Erase", (int64)EMeshVertexPaintSecondaryActionType::Erase },
		{ "EMeshVertexPaintSecondaryActionType::Soften", (int64)EMeshVertexPaintSecondaryActionType::Soften },
		{ "EMeshVertexPaintSecondaryActionType::Smooth", (int64)EMeshVertexPaintSecondaryActionType::Smooth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintSecondaryActionType",
	"EMeshVertexPaintSecondaryActionType",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType.InnerSingleton;
}
// End Enum EMeshVertexPaintSecondaryActionType

// Begin Enum EMeshVertexPaintBrushAreaType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType;
static UEnum* EMeshVertexPaintBrushAreaType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintBrushAreaType"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintBrushAreaType>()
{
	return EMeshVertexPaintBrushAreaType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Brush Area Types */" },
		{ "Connected.Comment", "/** Brush affects any triangles inside a sphere around the cursor */" },
		{ "Connected.Name", "EMeshVertexPaintBrushAreaType::Connected" },
		{ "Connected.ToolTip", "Brush affects any triangles inside a sphere around the cursor" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Brush Area Types" },
		{ "Volumetric.Comment", "/** Brush affects any triangles geometrically connected to the triangle under the cursor */" },
		{ "Volumetric.Name", "EMeshVertexPaintBrushAreaType::Volumetric" },
		{ "Volumetric.ToolTip", "Brush affects any triangles geometrically connected to the triangle under the cursor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintBrushAreaType::Connected", (int64)EMeshVertexPaintBrushAreaType::Connected },
		{ "EMeshVertexPaintBrushAreaType::Volumetric", (int64)EMeshVertexPaintBrushAreaType::Volumetric },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintBrushAreaType",
	"EMeshVertexPaintBrushAreaType",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType.InnerSingleton;
}
// End Enum EMeshVertexPaintBrushAreaType

// Begin Enum EMeshVertexPaintVisibilityType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType;
static UEnum* EMeshVertexPaintVisibilityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintVisibilityType"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintVisibilityType>()
{
	return EMeshVertexPaintVisibilityType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Visibility Types */" },
		{ "FrontFacing.Comment", "/** Only paint vertices that are front-facing relative to the current camera direction */" },
		{ "FrontFacing.Name", "EMeshVertexPaintVisibilityType::FrontFacing" },
		{ "FrontFacing.ToolTip", "Only paint vertices that are front-facing relative to the current camera direction" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "None.Name", "EMeshVertexPaintVisibilityType::None" },
		{ "ToolTip", "Visibility Types" },
		{ "Unoccluded.Comment", "/** Only paint triangles that are visible. Only considers active mesh, visibility test is based on triangle centers */" },
		{ "Unoccluded.Name", "EMeshVertexPaintVisibilityType::Unoccluded" },
		{ "Unoccluded.ToolTip", "Only paint triangles that are visible. Only considers active mesh, visibility test is based on triangle centers" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintVisibilityType::None", (int64)EMeshVertexPaintVisibilityType::None },
		{ "EMeshVertexPaintVisibilityType::FrontFacing", (int64)EMeshVertexPaintVisibilityType::FrontFacing },
		{ "EMeshVertexPaintVisibilityType::Unoccluded", (int64)EMeshVertexPaintVisibilityType::Unoccluded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintVisibilityType",
	"EMeshVertexPaintVisibilityType",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType.InnerSingleton;
}
// End Enum EMeshVertexPaintVisibilityType

// Begin Enum EMeshVertexPaintMaterialMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode;
static UEnum* EMeshVertexPaintMaterialMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintMaterialMode"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintMaterialMode>()
{
	return EMeshVertexPaintMaterialMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Visualization Materials */" },
		{ "LitVertexColor.Comment", "/** Display Vertex Colors using a Lit flat-shaded material */" },
		{ "LitVertexColor.Name", "EMeshVertexPaintMaterialMode::LitVertexColor" },
		{ "LitVertexColor.ToolTip", "Display Vertex Colors using a Lit flat-shaded material" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "OriginalMaterial.Comment", "/** Display Materials assigned to target Mesh */" },
		{ "OriginalMaterial.Name", "EMeshVertexPaintMaterialMode::OriginalMaterial" },
		{ "OriginalMaterial.ToolTip", "Display Materials assigned to target Mesh" },
		{ "ToolTip", "Visualization Materials" },
		{ "UnlitVertexColor.Comment", "/** Display Vertex Colors using an Unlit smooth-shaded material */" },
		{ "UnlitVertexColor.Name", "EMeshVertexPaintMaterialMode::UnlitVertexColor" },
		{ "UnlitVertexColor.ToolTip", "Display Vertex Colors using an Unlit smooth-shaded material" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintMaterialMode::LitVertexColor", (int64)EMeshVertexPaintMaterialMode::LitVertexColor },
		{ "EMeshVertexPaintMaterialMode::UnlitVertexColor", (int64)EMeshVertexPaintMaterialMode::UnlitVertexColor },
		{ "EMeshVertexPaintMaterialMode::OriginalMaterial", (int64)EMeshVertexPaintMaterialMode::OriginalMaterial },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintMaterialMode",
	"EMeshVertexPaintMaterialMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode.InnerSingleton;
}
// End Enum EMeshVertexPaintMaterialMode

// Begin Class UVertexPaintBasicProperties
void UVertexPaintBasicProperties::StaticRegisterNativesUVertexPaintBasicProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintBasicProperties);
UClass* Z_Construct_UClass_UVertexPaintBasicProperties_NoRegister()
{
	return UVertexPaintBasicProperties::StaticClass();
}
struct Z_Construct_UClass_UVertexPaintBasicProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBrushType_MetaData[] = {
		{ "Comment", "/** Primary Brush Mode *///UPROPERTY(EditAnywhere, Category = Brush2, meta = (DisplayName = \"Brush Type\"))\n" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Primary Brush Mode //UPROPERTY(EditAnywhere, Category = Brush2, meta = (DisplayName = \"Brush Type\"))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubToolType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Painting Operation to apply when left-clicking and dragging */" },
		{ "DisplayName", "Action" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Painting Operation to apply when left-clicking and dragging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The Color that will be assigned to painted triangle vertices */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "The Color that will be assigned to painted triangle vertices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls how painted Colors will be combined with the existing Colors */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Controls how painted Colors will be combined with the existing Colors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryActionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The Brush Operation that will be applied when holding the Shift key when in Painting */" },
		{ "DisplayName", "Secondary Brush" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "The Brush Operation that will be applied when holding the Shift key when in Painting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EraseColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Color to set when using Erase brush */" },
		{ "EditCondition", "SecondaryActionType != EMeshVertexPaintSecondaryActionType::Smooth" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Color to set when using Erase brush" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothStrength_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Strength of Smooth Brush */" },
		{ "EditCondition", "SecondaryActionType == EMeshVertexPaintSecondaryActionType::Smooth" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Strength of Smooth Brush" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls which Color Channels will be affected by Operations. Only enabled Channels are rendered. */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Controls which Color Channels will be affected by Operations. Only enabled Channels are rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHardEdges_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Create Split Colors / Hard Color Edges at the borders of the painted area. Use Soften operations to un-split. */" },
		{ "DisplayName", "Hard Edges" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Create Split Colors / Hard Color Edges at the borders of the painted area. Use Soften operations to un-split." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryBrushType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryBrushType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubToolType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubToolType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondaryActionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondaryActionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EraseColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothStrength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelFilter;
	static void NewProp_bHardEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHardEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintBasicProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_PrimaryBrushType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_PrimaryBrushType = { "PrimaryBrushType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, PrimaryBrushType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryBrushType_MetaData), NewProp_PrimaryBrushType_MetaData) }; // 2319943573
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SubToolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SubToolType = { "SubToolType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, SubToolType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubToolType_MetaData), NewProp_SubToolType_MetaData) }; // 2330960753
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_PaintColor = { "PaintColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, PaintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintColor_MetaData), NewProp_PaintColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, BlendMode), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 370567730
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SecondaryActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SecondaryActionType = { "SecondaryActionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, SecondaryActionType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintSecondaryActionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryActionType_MetaData), NewProp_SecondaryActionType_MetaData) }; // 2743138549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_EraseColor = { "EraseColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, EraseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EraseColor_MetaData), NewProp_EraseColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SmoothStrength = { "SmoothStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, SmoothStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothStrength_MetaData), NewProp_SmoothStrength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_ChannelFilter = { "ChannelFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBasicProperties, ChannelFilter), Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelFilter_MetaData), NewProp_ChannelFilter_MetaData) }; // 1132658321
void Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_bHardEdges_SetBit(void* Obj)
{
	((UVertexPaintBasicProperties*)Obj)->bHardEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_bHardEdges = { "bHardEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintBasicProperties), &Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_bHardEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHardEdges_MetaData), NewProp_bHardEdges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintBasicProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_PrimaryBrushType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_PrimaryBrushType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SubToolType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SubToolType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_PaintColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SecondaryActionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SecondaryActionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_EraseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_SmoothStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_ChannelFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBasicProperties_Statics::NewProp_bHardEdges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBasicProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVertexPaintBasicProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBasicProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintBasicProperties_Statics::ClassParams = {
	&UVertexPaintBasicProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVertexPaintBasicProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBasicProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBasicProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintBasicProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexPaintBasicProperties()
{
	if (!Z_Registration_Info_UClass_UVertexPaintBasicProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintBasicProperties.OuterSingleton, Z_Construct_UClass_UVertexPaintBasicProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexPaintBasicProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexPaintBasicProperties>()
{
	return UVertexPaintBasicProperties::StaticClass();
}
UVertexPaintBasicProperties::UVertexPaintBasicProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintBasicProperties);
UVertexPaintBasicProperties::~UVertexPaintBasicProperties() {}
// End Class UVertexPaintBasicProperties

// Begin Class UVertexPaintBrushFilterProperties
void UVertexPaintBrushFilterProperties::StaticRegisterNativesUVertexPaintBrushFilterProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintBrushFilterProperties);
UClass* Z_Construct_UClass_UVertexPaintBrushFilterProperties_NoRegister()
{
	return UVertexPaintBrushFilterProperties::StaticClass();
}
struct Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushAreaMode_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Area Mode specifies the shape of the brush and which triangles will be included relative to the cursor */" },
		{ "DisplayName", "Brush Area Mode" },
		{ "EditCondition", "CurrentSubToolType != EMeshVertexPaintInteractionType::PolyLasso" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Area Mode specifies the shape of the brush and which triangles will be included relative to the cursor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The Region affected by the current operation will be bounded by edge angles larger than this threshold */" },
		{ "EditCondition", "CurrentSubToolType != EMeshVertexPaintInteractionType::PolyLasso && BrushAreaMode == EMeshVertexPaintBrushAreaType::Connected" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "The Region affected by the current operation will be bounded by edge angles larger than this threshold" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUVSeams_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The Region affected by the current operation will be bounded by UV borders/seams */" },
		{ "DisplayName", "UV Seams" },
		{ "EditCondition", "CurrentSubToolType != EMeshVertexPaintInteractionType::PolyLasso && BrushAreaMode == EMeshVertexPaintBrushAreaType::Connected" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "The Region affected by the current operation will be bounded by UV borders/seams" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalSeams_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The Region affected by the current operation will be bounded by Hard Normal edges/seams */" },
		{ "DisplayName", "Hard Normals" },
		{ "EditCondition", "CurrentSubToolType != EMeshVertexPaintInteractionType::PolyLasso && BrushAreaMode == EMeshVertexPaintBrushAreaType::Connected" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "The Region affected by the current operation will be bounded by Hard Normal edges/seams" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityFilter_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Control which triangles can be affected by the current operation based on visibility. Applied after all other filters. */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Control which triangles can be affected by the current operation based on visibility. Applied after all other filters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTriVertCount_MetaData[] = {
		{ "Comment", "/** Number of vertices in a triangle the Lasso must hit to be counted as \"inside\" *///UPROPERTY(EditAnywhere, Category = Filters, AdvancedDisplay, meta = (UIMin = 1, UIMax = 3, EditCondition = \"CurrentSubToolType == EMeshVertexPaintInteractionType::PolyLasso\"))\n" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Number of vertices in a triangle the Lasso must hit to be counted as \"inside\" //UPROPERTY(EditAnywhere, Category = Filters, AdvancedDisplay, meta = (UIMin = 1, UIMax = 3, EditCondition = \"CurrentSubToolType == EMeshVertexPaintInteractionType::PolyLasso\"))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMode_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Specify which Materials should be used to render the Mesh */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Specify which Materials should be used to render the Mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHitColor_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Display the Color under the cursor */" },
		{ "DisplayName", "Show Color Under Cursor" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Display the Color under the cursor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSubToolType_MetaData[] = {
		{ "Comment", "// values below are for edit conditions and track the current BasicProperties setting\n" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "values below are for edit conditions and track the current BasicProperties setting" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BrushAreaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BrushAreaMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
	static void NewProp_bUVSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVSeams;
	static void NewProp_bNormalSeams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalSeams;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibilityFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinTriVertCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialMode;
	static void NewProp_bShowHitColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHitColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentSubToolType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentSubToolType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintBrushFilterProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode = { "BrushAreaMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBrushFilterProperties, BrushAreaMode), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintBrushAreaType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushAreaMode_MetaData), NewProp_BrushAreaMode_MetaData) }; // 4187263104
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBrushFilterProperties, AngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleThreshold_MetaData), NewProp_AngleThreshold_MetaData) };
void Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bUVSeams_SetBit(void* Obj)
{
	((UVertexPaintBrushFilterProperties*)Obj)->bUVSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bUVSeams = { "bUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintBrushFilterProperties), &Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bUVSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUVSeams_MetaData), NewProp_bUVSeams_MetaData) };
void Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bNormalSeams_SetBit(void* Obj)
{
	((UVertexPaintBrushFilterProperties*)Obj)->bNormalSeams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bNormalSeams = { "bNormalSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintBrushFilterProperties), &Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bNormalSeams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalSeams_MetaData), NewProp_bNormalSeams_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter = { "VisibilityFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBrushFilterProperties, VisibilityFilter), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintVisibilityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityFilter_MetaData), NewProp_VisibilityFilter_MetaData) }; // 3147407771
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_MinTriVertCount = { "MinTriVertCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBrushFilterProperties, MinTriVertCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTriVertCount_MetaData), NewProp_MinTriVertCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_MaterialMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_MaterialMode = { "MaterialMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBrushFilterProperties, MaterialMode), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintMaterialMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialMode_MetaData), NewProp_MaterialMode_MetaData) }; // 2279639965
void Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bShowHitColor_SetBit(void* Obj)
{
	((UVertexPaintBrushFilterProperties*)Obj)->bShowHitColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bShowHitColor = { "bShowHitColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVertexPaintBrushFilterProperties), &Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bShowHitColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHitColor_MetaData), NewProp_bShowHitColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_CurrentSubToolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_CurrentSubToolType = { "CurrentSubToolType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexPaintBrushFilterProperties, CurrentSubToolType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintInteractionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSubToolType_MetaData), NewProp_CurrentSubToolType_MetaData) }; // 2330960753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_AngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bUVSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bNormalSeams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_MinTriVertCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_MaterialMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_MaterialMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_bShowHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_CurrentSubToolType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::NewProp_CurrentSubToolType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::ClassParams = {
	&UVertexPaintBrushFilterProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVertexPaintBrushFilterProperties()
{
	if (!Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.OuterSingleton, Z_Construct_UClass_UVertexPaintBrushFilterProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexPaintBrushFilterProperties>()
{
	return UVertexPaintBrushFilterProperties::StaticClass();
}
UVertexPaintBrushFilterProperties::UVertexPaintBrushFilterProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintBrushFilterProperties);
UVertexPaintBrushFilterProperties::~UVertexPaintBrushFilterProperties() {}
// End Class UVertexPaintBrushFilterProperties

// Begin Enum EMeshVertexPaintToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintToolActions;
static UEnum* EMeshVertexPaintToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintToolActions"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintToolActions>()
{
	return EMeshVertexPaintToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyCurrentUtility.Name", "EMeshVertexPaintToolActions::ApplyCurrentUtility" },
		{ "EraseAll.Comment", "/** Fill all Vertex Colors with the current Erase Color */" },
		{ "EraseAll.Name", "EMeshVertexPaintToolActions::EraseAll" },
		{ "EraseAll.ToolTip", "Fill all Vertex Colors with the current Erase Color" },
		{ "FillBlack.Comment", "/** Fill all Vertex Colors with Black (0,0,0,1) */" },
		{ "FillBlack.Name", "EMeshVertexPaintToolActions::FillBlack" },
		{ "FillBlack.ToolTip", "Fill all Vertex Colors with Black (0,0,0,1)" },
		{ "FillWhite.Comment", "/** Fill all Vertex Colors with White (1,1,1,1) */" },
		{ "FillWhite.Name", "EMeshVertexPaintToolActions::FillWhite" },
		{ "FillWhite.ToolTip", "Fill all Vertex Colors with White (1,1,1,1)" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "NoAction.Name", "EMeshVertexPaintToolActions::NoAction" },
		{ "PaintAll.Comment", "/** Fill all Vertex Colors with the current Paint Color */" },
		{ "PaintAll.Name", "EMeshVertexPaintToolActions::PaintAll" },
		{ "PaintAll.ToolTip", "Fill all Vertex Colors with the current Paint Color" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintToolActions::NoAction", (int64)EMeshVertexPaintToolActions::NoAction },
		{ "EMeshVertexPaintToolActions::PaintAll", (int64)EMeshVertexPaintToolActions::PaintAll },
		{ "EMeshVertexPaintToolActions::EraseAll", (int64)EMeshVertexPaintToolActions::EraseAll },
		{ "EMeshVertexPaintToolActions::FillBlack", (int64)EMeshVertexPaintToolActions::FillBlack },
		{ "EMeshVertexPaintToolActions::FillWhite", (int64)EMeshVertexPaintToolActions::FillWhite },
		{ "EMeshVertexPaintToolActions::ApplyCurrentUtility", (int64)EMeshVertexPaintToolActions::ApplyCurrentUtility },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintToolActions",
	"EMeshVertexPaintToolActions",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintToolActions.InnerSingleton;
}
// End Enum EMeshVertexPaintToolActions

// Begin Class UMeshVertexPaintToolActionPropertySet
void UMeshVertexPaintToolActionPropertySet::StaticRegisterNativesUMeshVertexPaintToolActionPropertySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPaintToolActionPropertySet);
UClass* Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_NoRegister()
{
	return UMeshVertexPaintToolActionPropertySet::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPaintToolActionPropertySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_Statics::ClassParams = {
	&UMeshVertexPaintToolActionPropertySet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet()
{
	if (!Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexPaintToolActionPropertySet>()
{
	return UMeshVertexPaintToolActionPropertySet::StaticClass();
}
UMeshVertexPaintToolActionPropertySet::UMeshVertexPaintToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPaintToolActionPropertySet);
UMeshVertexPaintToolActionPropertySet::~UMeshVertexPaintToolActionPropertySet() {}
// End Class UMeshVertexPaintToolActionPropertySet

// Begin Class UMeshVertexPaintToolQuickActions Function EraseAll
struct Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_EraseAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "QuickActions" },
		{ "Comment", "/**\n\x09 * Fill all Vertex Colors with the current Erase color. Current Channel Filter still applies.\n\x09 */" },
		{ "DisplayPriority", "13" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Fill all Vertex Colors with the current Erase color. Current Channel Filter still applies." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_EraseAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPaintToolQuickActions, nullptr, "EraseAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_EraseAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_EraseAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_EraseAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_EraseAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPaintToolQuickActions::execEraseAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EraseAll();
	P_NATIVE_END;
}
// End Class UMeshVertexPaintToolQuickActions Function EraseAll

// Begin Class UMeshVertexPaintToolQuickActions Function FillBlack
struct Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillBlack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "QuickActions" },
		{ "Comment", "/**\n\x09 * Fill all Vertex Colors with the Color (0,0,0,1). Current Channel Filter still applies.\n\x09 */" },
		{ "DisplayPriority", "14" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Fill all Vertex Colors with the Color (0,0,0,1). Current Channel Filter still applies." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillBlack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPaintToolQuickActions, nullptr, "FillBlack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillBlack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillBlack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillBlack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillBlack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPaintToolQuickActions::execFillBlack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FillBlack();
	P_NATIVE_END;
}
// End Class UMeshVertexPaintToolQuickActions Function FillBlack

// Begin Class UMeshVertexPaintToolQuickActions Function FillWhite
struct Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillWhite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "QuickActions" },
		{ "Comment", "/**\n\x09 * Fill all Vertex Colors with the Color (1,1,1,1). Current Channel Filter still applies.\n\x09 */" },
		{ "DisplayPriority", "14" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Fill all Vertex Colors with the Color (1,1,1,1). Current Channel Filter still applies." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillWhite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPaintToolQuickActions, nullptr, "FillWhite", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillWhite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillWhite_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillWhite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillWhite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPaintToolQuickActions::execFillWhite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FillWhite();
	P_NATIVE_END;
}
// End Class UMeshVertexPaintToolQuickActions Function FillWhite

// Begin Class UMeshVertexPaintToolQuickActions Function PaintAll
struct Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_PaintAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "QuickActions" },
		{ "Comment", "/**\n\x09 * Fill all Vertex Colors with the current Paint color. Current Channel Filter still applies.\n\x09 */" },
		{ "DisplayPriority", "12" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Fill all Vertex Colors with the current Paint color. Current Channel Filter still applies." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_PaintAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPaintToolQuickActions, nullptr, "PaintAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_PaintAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_PaintAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_PaintAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_PaintAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPaintToolQuickActions::execPaintAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PaintAll();
	P_NATIVE_END;
}
// End Class UMeshVertexPaintToolQuickActions Function PaintAll

// Begin Class UMeshVertexPaintToolQuickActions
void UMeshVertexPaintToolQuickActions::StaticRegisterNativesUMeshVertexPaintToolQuickActions()
{
	UClass* Class = UMeshVertexPaintToolQuickActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EraseAll", &UMeshVertexPaintToolQuickActions::execEraseAll },
		{ "FillBlack", &UMeshVertexPaintToolQuickActions::execFillBlack },
		{ "FillWhite", &UMeshVertexPaintToolQuickActions::execFillWhite },
		{ "PaintAll", &UMeshVertexPaintToolQuickActions::execPaintAll },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPaintToolQuickActions);
UClass* Z_Construct_UClass_UMeshVertexPaintToolQuickActions_NoRegister()
{
	return UMeshVertexPaintToolQuickActions::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_EraseAll, "EraseAll" }, // 1768460466
		{ &Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillBlack, "FillBlack" }, // 3221594819
		{ &Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_FillWhite, "FillWhite" }, // 3884343356
		{ &Z_Construct_UFunction_UMeshVertexPaintToolQuickActions_PaintAll, "PaintAll" }, // 1936475213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPaintToolQuickActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics::ClassParams = {
	&UMeshVertexPaintToolQuickActions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexPaintToolQuickActions()
{
	if (!Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.OuterSingleton, Z_Construct_UClass_UMeshVertexPaintToolQuickActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexPaintToolQuickActions>()
{
	return UMeshVertexPaintToolQuickActions::StaticClass();
}
UMeshVertexPaintToolQuickActions::UMeshVertexPaintToolQuickActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPaintToolQuickActions);
UMeshVertexPaintToolQuickActions::~UMeshVertexPaintToolQuickActions() {}
// End Class UMeshVertexPaintToolQuickActions

// Begin Enum EMeshVertexPaintToolUtilityOperations
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations;
static UEnum* EMeshVertexPaintToolUtilityOperations_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexPaintToolUtilityOperations"));
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexPaintToolUtilityOperations>()
{
	return EMeshVertexPaintToolUtilityOperations_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlendAllSeams.Comment", "/**\n\x09 * Average the current color values at each vertex with split colors, so that there are no split vertices or seams in the color values\n\x09 */" },
		{ "BlendAllSeams.Name", "EMeshVertexPaintToolUtilityOperations::BlendAllSeams" },
		{ "BlendAllSeams.ToolTip", "Average the current color values at each vertex with split colors, so that there are no split vertices or seams in the color values" },
		{ "CopyChannelToChannel.Comment", "/**\n\x09 * Copy the color value from a source channel to all the selected target channels\n\x09 */" },
		{ "CopyChannelToChannel.Name", "EMeshVertexPaintToolUtilityOperations::CopyChannelToChannel" },
		{ "CopyChannelToChannel.ToolTip", "Copy the color value from a source channel to all the selected target channels" },
		{ "CopyFromWeightMap.Comment", "/**\n\x09 * Copy values from WeightMap into Vertex Color channels\n\x09 */" },
		{ "CopyFromWeightMap.Name", "EMeshVertexPaintToolUtilityOperations::CopyFromWeightMap" },
		{ "CopyFromWeightMap.ToolTip", "Copy values from WeightMap into Vertex Color channels" },
		{ "CopyToOtherLODs.Comment", "/**\n\x09 * Copy current values to any other LODs defined on the target\n\x09 */" },
		{ "CopyToOtherLODs.Name", "EMeshVertexPaintToolUtilityOperations::CopyToOtherLODs" },
		{ "CopyToOtherLODs.ToolTip", "Copy current values to any other LODs defined on the target" },
		{ "CopyToSingleLOD.Comment", "/**\n\x09 * Copy current values to a specific LOD defined on the target\n\x09 */" },
		{ "CopyToSingleLOD.Name", "EMeshVertexPaintToolUtilityOperations::CopyToSingleLOD" },
		{ "CopyToSingleLOD.ToolTip", "Copy current values to a specific LOD defined on the target" },
		{ "FillChannels.Comment", "/**\n\x09 * Set selected channels to a fixed value\n\x09 */" },
		{ "FillChannels.Name", "EMeshVertexPaintToolUtilityOperations::FillChannels" },
		{ "FillChannels.ToolTip", "Set selected channels to a fixed value" },
		{ "InvertChannels.Comment", "/**\n\x09 * Invert channel values\n\x09 */" },
		{ "InvertChannels.Name", "EMeshVertexPaintToolUtilityOperations::InvertChannels" },
		{ "InvertChannels.ToolTip", "Invert channel values" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "SwapChannels.Comment", "/**\n\x09 * Swap values between two Channels\n\x09 */" },
		{ "SwapChannels.Name", "EMeshVertexPaintToolUtilityOperations::SwapChannels" },
		{ "SwapChannels.ToolTip", "Swap values between two Channels" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshVertexPaintToolUtilityOperations::BlendAllSeams", (int64)EMeshVertexPaintToolUtilityOperations::BlendAllSeams },
		{ "EMeshVertexPaintToolUtilityOperations::FillChannels", (int64)EMeshVertexPaintToolUtilityOperations::FillChannels },
		{ "EMeshVertexPaintToolUtilityOperations::InvertChannels", (int64)EMeshVertexPaintToolUtilityOperations::InvertChannels },
		{ "EMeshVertexPaintToolUtilityOperations::CopyChannelToChannel", (int64)EMeshVertexPaintToolUtilityOperations::CopyChannelToChannel },
		{ "EMeshVertexPaintToolUtilityOperations::SwapChannels", (int64)EMeshVertexPaintToolUtilityOperations::SwapChannels },
		{ "EMeshVertexPaintToolUtilityOperations::CopyFromWeightMap", (int64)EMeshVertexPaintToolUtilityOperations::CopyFromWeightMap },
		{ "EMeshVertexPaintToolUtilityOperations::CopyToOtherLODs", (int64)EMeshVertexPaintToolUtilityOperations::CopyToOtherLODs },
		{ "EMeshVertexPaintToolUtilityOperations::CopyToSingleLOD", (int64)EMeshVertexPaintToolUtilityOperations::CopyToSingleLOD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EMeshVertexPaintToolUtilityOperations",
	"EMeshVertexPaintToolUtilityOperations",
	Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations()
{
	if (!Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations.InnerSingleton;
}
// End Enum EMeshVertexPaintToolUtilityOperations

// Begin Class UMeshVertexPaintToolUtilityActions Function ApplySelectedOperation
struct Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_ApplySelectedOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UtilityOperations" },
		{ "Comment", "/**\n\x09 * Apply the Operation currently selected below\n\x09 */" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Apply the Operation currently selected below" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_ApplySelectedOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPaintToolUtilityActions, nullptr, "ApplySelectedOperation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_ApplySelectedOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_ApplySelectedOperation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_ApplySelectedOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_ApplySelectedOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPaintToolUtilityActions::execApplySelectedOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySelectedOperation();
	P_NATIVE_END;
}
// End Class UMeshVertexPaintToolUtilityActions Function ApplySelectedOperation

// Begin Class UMeshVertexPaintToolUtilityActions Function GetLODNamesFunc
struct Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics
{
	struct MeshVertexPaintToolUtilityActions_eventGetLODNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPaintToolUtilityActions_eventGetLODNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPaintToolUtilityActions, nullptr, "GetLODNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::MeshVertexPaintToolUtilityActions_eventGetLODNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::MeshVertexPaintToolUtilityActions_eventGetLODNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPaintToolUtilityActions::execGetLODNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetLODNamesFunc();
	P_NATIVE_END;
}
// End Class UMeshVertexPaintToolUtilityActions Function GetLODNamesFunc

// Begin Class UMeshVertexPaintToolUtilityActions Function GetWeightMapsFunc
struct Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics
{
	struct MeshVertexPaintToolUtilityActions_eventGetWeightMapsFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// this function is called provide set of available weight maps\n" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "this function is called provide set of available weight maps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshVertexPaintToolUtilityActions_eventGetWeightMapsFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshVertexPaintToolUtilityActions, nullptr, "GetWeightMapsFunc", nullptr, nullptr, Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::MeshVertexPaintToolUtilityActions_eventGetWeightMapsFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::MeshVertexPaintToolUtilityActions_eventGetWeightMapsFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshVertexPaintToolUtilityActions::execGetWeightMapsFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetWeightMapsFunc();
	P_NATIVE_END;
}
// End Class UMeshVertexPaintToolUtilityActions Function GetWeightMapsFunc

// Begin Class UMeshVertexPaintToolUtilityActions
void UMeshVertexPaintToolUtilityActions::StaticRegisterNativesUMeshVertexPaintToolUtilityActions()
{
	UClass* Class = UMeshVertexPaintToolUtilityActions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplySelectedOperation", &UMeshVertexPaintToolUtilityActions::execApplySelectedOperation },
		{ "GetLODNamesFunc", &UMeshVertexPaintToolUtilityActions::execGetLODNamesFunc },
		{ "GetWeightMapsFunc", &UMeshVertexPaintToolUtilityActions::execGetWeightMapsFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPaintToolUtilityActions);
UClass* Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_NoRegister()
{
	return UMeshVertexPaintToolUtilityActions::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "Comment", "/**\n\x09 * Operation to apply to current Vertex Colors\n\x09 */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Operation to apply to current Vertex Colors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceChannel_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "EditCondition", "Operation == EMeshVertexPaintToolUtilityOperations::CopyChannelToChannel || Operation == EMeshVertexPaintToolUtilityOperations::SwapChannels" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceValue_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "EditCondition", "Operation == EMeshVertexPaintToolUtilityOperations::FillChannels" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "Comment", "/** Target Vertex Weight Map */" },
		{ "EditCondition", "Operation == EMeshVertexPaintToolUtilityOperations::CopyFromWeightMap" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetWeightMapsFunc" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Target Vertex Weight Map" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapsList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChannels_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "EditCondition", "Operation == EMeshVertexPaintToolUtilityOperations::FillChannels || Operation == EMeshVertexPaintToolUtilityOperations::InvertChannels || Operation == EMeshVertexPaintToolUtilityOperations::CopyChannelToChannel || Operation == EMeshVertexPaintToolUtilityOperations::CopyFromWeightMap" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChannel_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "EditCondition", "Operation == EMeshVertexPaintToolUtilityOperations::SwapChannels" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyToHiRes_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "Comment", "/** Copy colors to HiRes Source Mesh, if it exists */" },
		{ "EditCondition", "Operation == EMeshVertexPaintToolUtilityOperations::CopyToOtherLODs" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Copy colors to HiRes Source Mesh, if it exists" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyToLODName_MetaData[] = {
		{ "Category", "UtilityOperations" },
		{ "Comment", "/** Target LOD to copy Colors to */" },
		{ "DisplayName", "Copy To LOD" },
		{ "EditCondition", "Operation == EMeshVertexPaintToolUtilityOperations::CopyToSingleLOD" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetLODNamesFunc" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Target LOD to copy Colors to" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMapsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightMapsList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetChannels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetChannel;
	static void NewProp_bCopyToHiRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyToHiRes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CopyToLODName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LODNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODNamesList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_ApplySelectedOperation, "ApplySelectedOperation" }, // 3390209600
		{ &Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetLODNamesFunc, "GetLODNamesFunc" }, // 3005443058
		{ &Z_Construct_UFunction_UMeshVertexPaintToolUtilityActions_GetWeightMapsFunc, "GetWeightMapsFunc" }, // 1963902324
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPaintToolUtilityActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, Operation), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintToolUtilityOperations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 3278470803
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_SourceChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_SourceChannel = { "SourceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, SourceChannel), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceChannel_MetaData), NewProp_SourceChannel_MetaData) }; // 1377780283
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_SourceValue = { "SourceValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, SourceValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceValue_MetaData), NewProp_SourceValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, WeightMap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMap_MetaData), NewProp_WeightMap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_WeightMapsList_Inner = { "WeightMapsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_WeightMapsList = { "WeightMapsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, WeightMapsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapsList_MetaData), NewProp_WeightMapsList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_TargetChannels = { "TargetChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, TargetChannels), Z_Construct_UScriptStruct_FModelingToolsColorChannelFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChannels_MetaData), NewProp_TargetChannels_MetaData) }; // 1132658321
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_TargetChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_TargetChannel = { "TargetChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, TargetChannel), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexPaintColorChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChannel_MetaData), NewProp_TargetChannel_MetaData) }; // 1377780283
void Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_bCopyToHiRes_SetBit(void* Obj)
{
	((UMeshVertexPaintToolUtilityActions*)Obj)->bCopyToHiRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_bCopyToHiRes = { "bCopyToHiRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeshVertexPaintToolUtilityActions), &Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_bCopyToHiRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyToHiRes_MetaData), NewProp_bCopyToHiRes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_CopyToLODName = { "CopyToLODName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, CopyToLODName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyToLODName_MetaData), NewProp_CopyToLODName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_LODNamesList_Inner = { "LODNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_LODNamesList = { "LODNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintToolUtilityActions, LODNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODNamesList_MetaData), NewProp_LODNamesList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_SourceChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_SourceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_SourceValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_WeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_WeightMapsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_WeightMapsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_TargetChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_TargetChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_TargetChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_bCopyToHiRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_CopyToLODName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_LODNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::NewProp_LODNamesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::ClassParams = {
	&UMeshVertexPaintToolUtilityActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexPaintToolUtilityActions()
{
	if (!Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.OuterSingleton, Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexPaintToolUtilityActions>()
{
	return UMeshVertexPaintToolUtilityActions::StaticClass();
}
UMeshVertexPaintToolUtilityActions::UMeshVertexPaintToolUtilityActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPaintToolUtilityActions);
UMeshVertexPaintToolUtilityActions::~UMeshVertexPaintToolUtilityActions() {}
// End Class UMeshVertexPaintToolUtilityActions

// Begin Class UMeshVertexPaintTool
void UMeshVertexPaintTool::StaticRegisterNativesUMeshVertexPaintTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexPaintTool);
UClass* Z_Construct_UClass_UMeshVertexPaintTool_NoRegister()
{
	return UMeshVertexPaintTool::StaticClass();
}
struct Z_Construct_UClass_UMeshVertexPaintTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Vertex Color Painting TOol\n */" },
		{ "IncludePath", "MeshVertexPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Mesh Vertex Color Painting TOol" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterProperties_MetaData[] = {
		{ "Comment", "/** Filters on paint brush */" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "Filters on paint brush" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintBrushOpProperties_MetaData[] = {
		{ "Comment", "// This will be of type UVertexPaintBrushOpProps, we keep a ref so we can change active color on pick\n" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "This will be of type UVertexPaintBrushOpProps, we keep a ref so we can change active color on pick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EraseBrushOpProperties_MetaData[] = {
		{ "Comment", "// This will be of type UVertexPaintBrushOpProps, we keep a ref so we can change active color on pick\n" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
		{ "ToolTip", "This will be of type UVertexPaintBrushOpProps, we keep a ref so we can change active color on pick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilityActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyLassoMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexPaintTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolygroupLayerProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintBrushOpProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EraseBrushOpProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuickActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UtilityActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolyLassoMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshElementsDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexPaintTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygroupLayerProperties_MetaData), NewProp_PolygroupLayerProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, BasicProperties), Z_Construct_UClass_UVertexPaintBasicProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_FilterProperties = { "FilterProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, FilterProperties), Z_Construct_UClass_UVertexPaintBrushFilterProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterProperties_MetaData), NewProp_FilterProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PaintBrushOpProperties = { "PaintBrushOpProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, PaintBrushOpProperties), Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintBrushOpProperties_MetaData), NewProp_PaintBrushOpProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_EraseBrushOpProperties = { "EraseBrushOpProperties", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, EraseBrushOpProperties), Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EraseBrushOpProperties_MetaData), NewProp_EraseBrushOpProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_QuickActions = { "QuickActions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, QuickActions), Z_Construct_UClass_UMeshVertexPaintToolQuickActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickActions_MetaData), NewProp_QuickActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_UtilityActions = { "UtilityActions", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, UtilityActions), Z_Construct_UClass_UMeshVertexPaintToolUtilityActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilityActions_MetaData), NewProp_UtilityActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PolyLassoMechanic = { "PolyLassoMechanic", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, PolyLassoMechanic), Z_Construct_UClass_UPolyLassoMarqueeMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyLassoMechanic_MetaData), NewProp_PolyLassoMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshActor_MetaData), NewProp_PreviewMeshActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshVertexPaintTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshElementsDisplay_MetaData), NewProp_MeshElementsDisplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshVertexPaintTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PolygroupLayerProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_FilterProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PaintBrushOpProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_EraseBrushOpProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_QuickActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_UtilityActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PolyLassoMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_PreviewMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_DynamicMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexPaintTool_Statics::NewProp_MeshElementsDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshVertexPaintTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshSculptToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UMeshVertexPaintTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexPaintTool_Statics::ClassParams = {
	&UMeshVertexPaintTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshVertexPaintTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexPaintTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshVertexPaintTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshVertexPaintTool()
{
	if (!Z_Registration_Info_UClass_UMeshVertexPaintTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexPaintTool.OuterSingleton, Z_Construct_UClass_UMeshVertexPaintTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshVertexPaintTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexPaintTool>()
{
	return UMeshVertexPaintTool::StaticClass();
}
UMeshVertexPaintTool::UMeshVertexPaintTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexPaintTool);
UMeshVertexPaintTool::~UMeshVertexPaintTool() {}
// End Class UMeshVertexPaintTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexPaintTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeshVertexPaintInteractionType_StaticEnum, TEXT("EMeshVertexPaintInteractionType"), &Z_Registration_Info_UEnum_EMeshVertexPaintInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2330960753U) },
		{ EMeshVertexPaintColorChannel_StaticEnum, TEXT("EMeshVertexPaintColorChannel"), &Z_Registration_Info_UEnum_EMeshVertexPaintColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1377780283U) },
		{ EMeshVertexPaintColorBlendMode_StaticEnum, TEXT("EMeshVertexPaintColorBlendMode"), &Z_Registration_Info_UEnum_EMeshVertexPaintColorBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 370567730U) },
		{ EMeshVertexPaintBrushType_StaticEnum, TEXT("EMeshVertexPaintBrushType"), &Z_Registration_Info_UEnum_EMeshVertexPaintBrushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2319943573U) },
		{ EMeshVertexPaintSecondaryActionType_StaticEnum, TEXT("EMeshVertexPaintSecondaryActionType"), &Z_Registration_Info_UEnum_EMeshVertexPaintSecondaryActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2743138549U) },
		{ EMeshVertexPaintBrushAreaType_StaticEnum, TEXT("EMeshVertexPaintBrushAreaType"), &Z_Registration_Info_UEnum_EMeshVertexPaintBrushAreaType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4187263104U) },
		{ EMeshVertexPaintVisibilityType_StaticEnum, TEXT("EMeshVertexPaintVisibilityType"), &Z_Registration_Info_UEnum_EMeshVertexPaintVisibilityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3147407771U) },
		{ EMeshVertexPaintMaterialMode_StaticEnum, TEXT("EMeshVertexPaintMaterialMode"), &Z_Registration_Info_UEnum_EMeshVertexPaintMaterialMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2279639965U) },
		{ EMeshVertexPaintToolActions_StaticEnum, TEXT("EMeshVertexPaintToolActions"), &Z_Registration_Info_UEnum_EMeshVertexPaintToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3536847493U) },
		{ EMeshVertexPaintToolUtilityOperations_StaticEnum, TEXT("EMeshVertexPaintToolUtilityOperations"), &Z_Registration_Info_UEnum_EMeshVertexPaintToolUtilityOperations, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3278470803U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshVertexPaintToolBuilder, UMeshVertexPaintToolBuilder::StaticClass, TEXT("UMeshVertexPaintToolBuilder"), &Z_Registration_Info_UClass_UMeshVertexPaintToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPaintToolBuilder), 4146735635U) },
		{ Z_Construct_UClass_UVertexPaintBasicProperties, UVertexPaintBasicProperties::StaticClass, TEXT("UVertexPaintBasicProperties"), &Z_Registration_Info_UClass_UVertexPaintBasicProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintBasicProperties), 472719639U) },
		{ Z_Construct_UClass_UVertexPaintBrushFilterProperties, UVertexPaintBrushFilterProperties::StaticClass, TEXT("UVertexPaintBrushFilterProperties"), &Z_Registration_Info_UClass_UVertexPaintBrushFilterProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintBrushFilterProperties), 1819057409U) },
		{ Z_Construct_UClass_UMeshVertexPaintToolActionPropertySet, UMeshVertexPaintToolActionPropertySet::StaticClass, TEXT("UMeshVertexPaintToolActionPropertySet"), &Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPaintToolActionPropertySet), 434683567U) },
		{ Z_Construct_UClass_UMeshVertexPaintToolQuickActions, UMeshVertexPaintToolQuickActions::StaticClass, TEXT("UMeshVertexPaintToolQuickActions"), &Z_Registration_Info_UClass_UMeshVertexPaintToolQuickActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPaintToolQuickActions), 1146981785U) },
		{ Z_Construct_UClass_UMeshVertexPaintToolUtilityActions, UMeshVertexPaintToolUtilityActions::StaticClass, TEXT("UMeshVertexPaintToolUtilityActions"), &Z_Registration_Info_UClass_UMeshVertexPaintToolUtilityActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPaintToolUtilityActions), 2719894253U) },
		{ Z_Construct_UClass_UMeshVertexPaintTool, UMeshVertexPaintTool::StaticClass, TEXT("UMeshVertexPaintTool"), &Z_Registration_Info_UClass_UMeshVertexPaintTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexPaintTool), 3997020515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexPaintTool_h_3786307243(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexPaintTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexPaintTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexPaintTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexPaintTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
