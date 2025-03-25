// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/DrawPolygonTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawPolygonTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonToolSnapProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonToolSnapProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonToolStandardProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawPolygonToolStandardProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode();
MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UDrawPolygonToolBuilder
void UDrawPolygonToolBuilder::StaticRegisterNativesUDrawPolygonToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolygonToolBuilder);
UClass* Z_Construct_UClass_UDrawPolygonToolBuilder_NoRegister()
{
	return UDrawPolygonToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UDrawPolygonToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DrawPolygonTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolygonToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDrawPolygonToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolygonToolBuilder_Statics::ClassParams = {
	&UDrawPolygonToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawPolygonToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawPolygonToolBuilder()
{
	if (!Z_Registration_Info_UClass_UDrawPolygonToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolygonToolBuilder.OuterSingleton, Z_Construct_UClass_UDrawPolygonToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawPolygonToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawPolygonToolBuilder>()
{
	return UDrawPolygonToolBuilder::StaticClass();
}
UDrawPolygonToolBuilder::UDrawPolygonToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolygonToolBuilder);
UDrawPolygonToolBuilder::~UDrawPolygonToolBuilder() {}
// End Class UDrawPolygonToolBuilder

// Begin Enum EDrawPolygonDrawMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawPolygonDrawMode;
static UEnum* EDrawPolygonDrawMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDrawPolygonDrawMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDrawPolygonDrawMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EDrawPolygonDrawMode"));
	}
	return Z_Registration_Info_UEnum_EDrawPolygonDrawMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EDrawPolygonDrawMode>()
{
	return EDrawPolygonDrawMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Circle.Comment", "/** Draw a circle */" },
		{ "Circle.Name", "EDrawPolygonDrawMode::Circle" },
		{ "Circle.ToolTip", "Draw a circle" },
		{ "Comment", "/** Polygon tool draw type */" },
		{ "Freehand.Comment", "/** Draw a freehand polygon */" },
		{ "Freehand.Name", "EDrawPolygonDrawMode::Freehand" },
		{ "Freehand.ToolTip", "Draw a freehand polygon" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "Rectangle.Comment", "/** Draw a rectangle */" },
		{ "Rectangle.Name", "EDrawPolygonDrawMode::Rectangle" },
		{ "Rectangle.ToolTip", "Draw a rectangle" },
		{ "Ring.Comment", "/** Draw a circle with a hole in the center */" },
		{ "Ring.Name", "EDrawPolygonDrawMode::Ring" },
		{ "Ring.ToolTip", "Draw a circle with a hole in the center" },
		{ "RoundedRectangle.Comment", "/** Draw a rounded rectangle */" },
		{ "RoundedRectangle.Name", "EDrawPolygonDrawMode::RoundedRectangle" },
		{ "RoundedRectangle.ToolTip", "Draw a rounded rectangle" },
		{ "Square.Comment", "/** Draw a square */" },
		{ "Square.Name", "EDrawPolygonDrawMode::Square" },
		{ "Square.ToolTip", "Draw a square" },
		{ "ToolTip", "Polygon tool draw type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDrawPolygonDrawMode::Freehand", (int64)EDrawPolygonDrawMode::Freehand },
		{ "EDrawPolygonDrawMode::Circle", (int64)EDrawPolygonDrawMode::Circle },
		{ "EDrawPolygonDrawMode::Square", (int64)EDrawPolygonDrawMode::Square },
		{ "EDrawPolygonDrawMode::Rectangle", (int64)EDrawPolygonDrawMode::Rectangle },
		{ "EDrawPolygonDrawMode::RoundedRectangle", (int64)EDrawPolygonDrawMode::RoundedRectangle },
		{ "EDrawPolygonDrawMode::Ring", (int64)EDrawPolygonDrawMode::Ring },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EDrawPolygonDrawMode",
	"EDrawPolygonDrawMode",
	Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode()
{
	if (!Z_Registration_Info_UEnum_EDrawPolygonDrawMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawPolygonDrawMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDrawPolygonDrawMode.InnerSingleton;
}
// End Enum EDrawPolygonDrawMode

// Begin Enum EDrawPolygonExtrudeMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode;
static UEnum* EDrawPolygonExtrudeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EDrawPolygonExtrudeMode"));
	}
	return Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EDrawPolygonExtrudeMode>()
{
	return EDrawPolygonExtrudeMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** How the drawn polygon gets extruded */" },
		{ "Fixed.Comment", "/** Extrude drawn polygon to fixed height determined by the Extrude Height property */" },
		{ "Fixed.Name", "EDrawPolygonExtrudeMode::Fixed" },
		{ "Fixed.ToolTip", "Extrude drawn polygon to fixed height determined by the Extrude Height property" },
		{ "Flat.Comment", "/** Flat polygon without extrusion */" },
		{ "Flat.Name", "EDrawPolygonExtrudeMode::Flat" },
		{ "Flat.ToolTip", "Flat polygon without extrusion" },
		{ "Interactive.Comment", "/** Extrude drawn polygon to height set via additional mouse input after closing the polygon */" },
		{ "Interactive.Name", "EDrawPolygonExtrudeMode::Interactive" },
		{ "Interactive.ToolTip", "Extrude drawn polygon to height set via additional mouse input after closing the polygon" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "How the drawn polygon gets extruded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDrawPolygonExtrudeMode::Flat", (int64)EDrawPolygonExtrudeMode::Flat },
		{ "EDrawPolygonExtrudeMode::Fixed", (int64)EDrawPolygonExtrudeMode::Fixed },
		{ "EDrawPolygonExtrudeMode::Interactive", (int64)EDrawPolygonExtrudeMode::Interactive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
	nullptr,
	"EDrawPolygonExtrudeMode",
	"EDrawPolygonExtrudeMode",
	Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode()
{
	if (!Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode.InnerSingleton;
}
// End Enum EDrawPolygonExtrudeMode

// Begin Class UDrawPolygonToolStandardProperties
void UDrawPolygonToolStandardProperties::StaticRegisterNativesUDrawPolygonToolStandardProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolygonToolStandardProperties);
UClass* Z_Construct_UClass_UDrawPolygonToolStandardProperties_NoRegister()
{
	return UDrawPolygonToolStandardProperties::StaticClass();
}
struct Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrawPolygonTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonDrawMode_MetaData[] = {
		{ "Category", "Polygon" },
		{ "Comment", "/** Type of polygon to draw in the viewport */" },
		{ "DisplayName", "Draw Mode" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Type of polygon to draw in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSelfIntersections_MetaData[] = {
		{ "Category", "Polygon" },
		{ "Comment", "/** Allow freehand drawn polygons to self-intersect */" },
		{ "DisplayName", "Self-Intersections" },
		{ "EditCondition", "PolygonDrawMode == EDrawPolygonDrawMode::Freehand" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Allow freehand drawn polygons to self-intersect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatureSizeRatio_MetaData[] = {
		{ "Category", "Polygon" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Size of secondary features, e.g. the rounded corners of a rounded rectangle, as fraction of the overall shape size */" },
		{ "EditCondition", "PolygonDrawMode == EDrawPolygonDrawMode::RoundedRectangle || PolygonDrawMode == EDrawPolygonDrawMode::Ring" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Size of secondary features, e.g. the rounded corners of a rounded rectangle, as fraction of the overall shape size" },
		{ "UIMax", "0.99" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialSlices_MetaData[] = {
		{ "Category", "Polygon" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "3" },
		{ "Comment", "/** Number of radial subdivisions in round features, e.g. circles or rounded corners */" },
		{ "EditCondition", "PolygonDrawMode == EDrawPolygonDrawMode::Circle || PolygonDrawMode == EDrawPolygonDrawMode::RoundedRectangle || PolygonDrawMode == EDrawPolygonDrawMode::Ring" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Number of radial subdivisions in round features, e.g. circles or rounded corners" },
		{ "UIMax", "100" },
		{ "UIMin", "3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Polygon" },
		{ "Comment", "/** Distance between the last clicked point and the current point  */" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Distance between the last clicked point and the current point" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGridGizmo_MetaData[] = {
		{ "Category", "Polygon" },
		{ "Comment", "/** If true, shows a gizmo to manipulate the additional grid used to draw the polygon on */" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "If true, shows a gizmo to manipulate the additional grid used to draw the polygon on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** If and how the drawn polygon gets extruded */" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "If and how the drawn polygon gets extruded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeHeight_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-10000" },
		{ "Comment", "/** Extrude distance when using the Fixed extrude mode */" },
		{ "EditCondition", "ExtrudeMode == EDrawPolygonExtrudeMode::Fixed" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Extrude distance when using the Fixed extrude mode" },
		{ "UIMax", "1000" },
		{ "UIMin", "-1000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PolygonDrawMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PolygonDrawMode;
	static void NewProp_bAllowSelfIntersections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSelfIntersections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FeatureSizeRatio;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RadialSlices;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bShowGridGizmo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGridGizmo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExtrudeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExtrudeMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrudeHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolygonToolStandardProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_PolygonDrawMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_PolygonDrawMode = { "PolygonDrawMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonToolStandardProperties, PolygonDrawMode), Z_Construct_UEnum_MeshModelingTools_EDrawPolygonDrawMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonDrawMode_MetaData), NewProp_PolygonDrawMode_MetaData) }; // 2923897697
void Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bAllowSelfIntersections_SetBit(void* Obj)
{
	((UDrawPolygonToolStandardProperties*)Obj)->bAllowSelfIntersections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bAllowSelfIntersections = { "bAllowSelfIntersections", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolStandardProperties), &Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bAllowSelfIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSelfIntersections_MetaData), NewProp_bAllowSelfIntersections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_FeatureSizeRatio = { "FeatureSizeRatio", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonToolStandardProperties, FeatureSizeRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatureSizeRatio_MetaData), NewProp_FeatureSizeRatio_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_RadialSlices = { "RadialSlices", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonToolStandardProperties, RadialSlices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialSlices_MetaData), NewProp_RadialSlices_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000400020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonToolStandardProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bShowGridGizmo_SetBit(void* Obj)
{
	((UDrawPolygonToolStandardProperties*)Obj)->bShowGridGizmo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bShowGridGizmo = { "bShowGridGizmo", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolStandardProperties), &Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bShowGridGizmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGridGizmo_MetaData), NewProp_bShowGridGizmo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_ExtrudeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_ExtrudeMode = { "ExtrudeMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonToolStandardProperties, ExtrudeMode), Z_Construct_UEnum_MeshModelingTools_EDrawPolygonExtrudeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeMode_MetaData), NewProp_ExtrudeMode_MetaData) }; // 4034229299
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_ExtrudeHeight = { "ExtrudeHeight", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonToolStandardProperties, ExtrudeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtrudeHeight_MetaData), NewProp_ExtrudeHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_PolygonDrawMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_PolygonDrawMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bAllowSelfIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_FeatureSizeRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_RadialSlices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_bShowGridGizmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_ExtrudeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_ExtrudeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::NewProp_ExtrudeHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::ClassParams = {
	&UDrawPolygonToolStandardProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawPolygonToolStandardProperties()
{
	if (!Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.OuterSingleton, Z_Construct_UClass_UDrawPolygonToolStandardProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawPolygonToolStandardProperties>()
{
	return UDrawPolygonToolStandardProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolygonToolStandardProperties);
UDrawPolygonToolStandardProperties::~UDrawPolygonToolStandardProperties() {}
// End Class UDrawPolygonToolStandardProperties

// Begin Class UDrawPolygonToolSnapProperties
void UDrawPolygonToolSnapProperties::StaticRegisterNativesUDrawPolygonToolSnapProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolygonToolSnapProperties);
UClass* Z_Construct_UClass_UDrawPolygonToolSnapProperties_NoRegister()
{
	return UDrawPolygonToolSnapProperties::StaticClass();
}
struct Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DrawPolygonTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapping_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enables additional snapping controls. If false, all snapping is disabled. */" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Enables additional snapping controls. If false, all snapping is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToWorldGrid_MetaData[] = {
		{ "Comment", "//~ Not user visible. Mirrors the snapping settings in the viewport and is used in EditConditions\n" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToVertices_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Snap to vertices in other meshes. Requires Enable Snapping to be true. */" },
		{ "EditCondition", "bEnableSnapping" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Snap to vertices in other meshes. Requires Enable Snapping to be true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToEdges_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Snap to edges in other meshes. Requires Enable Snapping to be true. */" },
		{ "EditCondition", "bEnableSnapping" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Snap to edges in other meshes. Requires Enable Snapping to be true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToAxes_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Snap to axes of the drawing grid and axes relative to the last segment. Requires grid snapping to be disabled in viewport, and Enable Snapping to be true. */" },
		{ "EditCondition", "bEnableSnapping && !bSnapToWorldGrid" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Snap to axes of the drawing grid and axes relative to the last segment. Requires grid snapping to be disabled in viewport, and Enable Snapping to be true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToLengths_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** When snapping to axes, also try to snap to the length of an existing segment in the polygon. Requires grid snapping to be disabled in viewport, and Snap to Axes and Enable Snapping to be true. */" },
		{ "EditCondition", "bEnableSnapping && !bSnapToWorldGrid && bSnapToAxes" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "When snapping to axes, also try to snap to the length of an existing segment in the polygon. Requires grid snapping to be disabled in viewport, and Snap to Axes and Enable Snapping to be true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToSurfaces_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Snap to surfaces of existing objects. Requires grid snapping to be disabled in viewport, and Enable Snapping to be true.  */" },
		{ "EditCondition", "bEnableSnapping && !bSnapToWorldGrid" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Snap to surfaces of existing objects. Requires grid snapping to be disabled in viewport, and Enable Snapping to be true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapToSurfacesOffset_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Offset for snap point on the surface of an existing object in the direction of the surface normal. Requires grid snapping to be disabled in viewport, and Snap to Surfaces and Enable Snapping to be true. */" },
		{ "DisplayName", "Surface Offset" },
		{ "EditCondition", "bEnableSnapping && !bSnapToWorldGrid && bSnapToSurfaces" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Offset for snap point on the surface of an existing object in the direction of the surface normal. Requires grid snapping to be disabled in viewport, and Snap to Surfaces and Enable Snapping to be true." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableSnapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapping;
	static void NewProp_bSnapToWorldGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToWorldGrid;
	static void NewProp_bSnapToVertices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToVertices;
	static void NewProp_bSnapToEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToEdges;
	static void NewProp_bSnapToAxes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToAxes;
	static void NewProp_bSnapToLengths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToLengths;
	static void NewProp_bSnapToSurfaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToSurfaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapToSurfacesOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolygonToolSnapProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bEnableSnapping_SetBit(void* Obj)
{
	((UDrawPolygonToolSnapProperties*)Obj)->bEnableSnapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bEnableSnapping = { "bEnableSnapping", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolSnapProperties), &Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bEnableSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSnapping_MetaData), NewProp_bEnableSnapping_MetaData) };
void Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToWorldGrid_SetBit(void* Obj)
{
	((UDrawPolygonToolSnapProperties*)Obj)->bSnapToWorldGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToWorldGrid = { "bSnapToWorldGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolSnapProperties), &Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToWorldGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToWorldGrid_MetaData), NewProp_bSnapToWorldGrid_MetaData) };
void Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToVertices_SetBit(void* Obj)
{
	((UDrawPolygonToolSnapProperties*)Obj)->bSnapToVertices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToVertices = { "bSnapToVertices", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolSnapProperties), &Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToVertices_MetaData), NewProp_bSnapToVertices_MetaData) };
void Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToEdges_SetBit(void* Obj)
{
	((UDrawPolygonToolSnapProperties*)Obj)->bSnapToEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToEdges = { "bSnapToEdges", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolSnapProperties), &Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToEdges_MetaData), NewProp_bSnapToEdges_MetaData) };
void Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToAxes_SetBit(void* Obj)
{
	((UDrawPolygonToolSnapProperties*)Obj)->bSnapToAxes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToAxes = { "bSnapToAxes", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolSnapProperties), &Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToAxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToAxes_MetaData), NewProp_bSnapToAxes_MetaData) };
void Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToLengths_SetBit(void* Obj)
{
	((UDrawPolygonToolSnapProperties*)Obj)->bSnapToLengths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToLengths = { "bSnapToLengths", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolSnapProperties), &Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToLengths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToLengths_MetaData), NewProp_bSnapToLengths_MetaData) };
void Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToSurfaces_SetBit(void* Obj)
{
	((UDrawPolygonToolSnapProperties*)Obj)->bSnapToSurfaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToSurfaces = { "bSnapToSurfaces", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrawPolygonToolSnapProperties), &Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToSurfaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToSurfaces_MetaData), NewProp_bSnapToSurfaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_SnapToSurfacesOffset = { "SnapToSurfacesOffset", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonToolSnapProperties, SnapToSurfacesOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapToSurfacesOffset_MetaData), NewProp_SnapToSurfacesOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bEnableSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToWorldGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToLengths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_bSnapToSurfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::NewProp_SnapToSurfacesOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::ClassParams = {
	&UDrawPolygonToolSnapProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawPolygonToolSnapProperties()
{
	if (!Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.OuterSingleton, Z_Construct_UClass_UDrawPolygonToolSnapProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawPolygonToolSnapProperties>()
{
	return UDrawPolygonToolSnapProperties::StaticClass();
}
UDrawPolygonToolSnapProperties::UDrawPolygonToolSnapProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolygonToolSnapProperties);
UDrawPolygonToolSnapProperties::~UDrawPolygonToolSnapProperties() {}
// End Class UDrawPolygonToolSnapProperties

// Begin Class UDrawPolygonTool
void UDrawPolygonTool::StaticRegisterNativesUDrawPolygonTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolygonTool);
UClass* Z_Construct_UClass_UDrawPolygonTool_NoRegister()
{
	return UDrawPolygonTool::StaticClass();
}
struct Z_Construct_UClass_UDrawPolygonTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This tool allows the user to draw and extrude 2D polygons\n */" },
		{ "IncludePath", "DrawPolygonTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "This tool allows the user to draw and extrude 2D polygons" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "/** Property set for type of output object (StaticMesh, Volume, etc) */" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Property set for type of output object (StaticMesh, Volume, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonProperties_MetaData[] = {
		{ "Comment", "/** Properties that control polygon generation exposed to user via details view */" },
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
		{ "ToolTip", "Properties that control polygon generation exposed to user via details view" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolygonTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolygonProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DragAlignmentMechanic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolygonTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_PolygonProperties = { "PolygonProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, PolygonProperties), Z_Construct_UClass_UDrawPolygonToolStandardProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonProperties_MetaData), NewProp_PolygonProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_SnapProperties = { "SnapProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, SnapProperties), Z_Construct_UClass_UDrawPolygonToolSnapProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapProperties_MetaData), NewProp_SnapProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialProperties_MetaData), NewProp_MaterialProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_HeightMechanic = { "HeightMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, HeightMechanic), Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMechanic_MetaData), NewProp_HeightMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragAlignmentMechanic_MetaData), NewProp_DragAlignmentMechanic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrawPolygonTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMechanic_MetaData), NewProp_PlaneMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawPolygonTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_PolygonProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_SnapProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_MaterialProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_HeightMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_DragAlignmentMechanic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolygonTool_Statics::NewProp_PlaneMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrawPolygonTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolygonTool_Statics::ClassParams = {
	&UDrawPolygonTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDrawPolygonTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolygonTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrawPolygonTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrawPolygonTool()
{
	if (!Z_Registration_Info_UClass_UDrawPolygonTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolygonTool.OuterSingleton, Z_Construct_UClass_UDrawPolygonTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrawPolygonTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawPolygonTool>()
{
	return UDrawPolygonTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolygonTool);
UDrawPolygonTool::~UDrawPolygonTool() {}
// End Class UDrawPolygonTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawPolygonTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDrawPolygonDrawMode_StaticEnum, TEXT("EDrawPolygonDrawMode"), &Z_Registration_Info_UEnum_EDrawPolygonDrawMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2923897697U) },
		{ EDrawPolygonExtrudeMode_StaticEnum, TEXT("EDrawPolygonExtrudeMode"), &Z_Registration_Info_UEnum_EDrawPolygonExtrudeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4034229299U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrawPolygonToolBuilder, UDrawPolygonToolBuilder::StaticClass, TEXT("UDrawPolygonToolBuilder"), &Z_Registration_Info_UClass_UDrawPolygonToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolygonToolBuilder), 4125474867U) },
		{ Z_Construct_UClass_UDrawPolygonToolStandardProperties, UDrawPolygonToolStandardProperties::StaticClass, TEXT("UDrawPolygonToolStandardProperties"), &Z_Registration_Info_UClass_UDrawPolygonToolStandardProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolygonToolStandardProperties), 1312407366U) },
		{ Z_Construct_UClass_UDrawPolygonToolSnapProperties, UDrawPolygonToolSnapProperties::StaticClass, TEXT("UDrawPolygonToolSnapProperties"), &Z_Registration_Info_UClass_UDrawPolygonToolSnapProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolygonToolSnapProperties), 3504183528U) },
		{ Z_Construct_UClass_UDrawPolygonTool, UDrawPolygonTool::StaticClass, TEXT("UDrawPolygonTool"), &Z_Registration_Info_UClass_UDrawPolygonTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolygonTool), 2779701346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawPolygonTool_h_4214353782(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawPolygonTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawPolygonTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawPolygonTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawPolygonTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
