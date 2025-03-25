// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/WeldMeshEdgesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeldMeshEdgesTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UWeldMeshEdgesToolBuilder
void UWeldMeshEdgesToolBuilder::StaticRegisterNativesUWeldMeshEdgesToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesToolBuilder);
UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister()
{
	return UWeldMeshEdgesToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::ClassParams = {
	&UWeldMeshEdgesToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder()
{
	if (!Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesToolBuilder>()
{
	return UWeldMeshEdgesToolBuilder::StaticClass();
}
UWeldMeshEdgesToolBuilder::UWeldMeshEdgesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesToolBuilder);
UWeldMeshEdgesToolBuilder::~UWeldMeshEdgesToolBuilder() {}
// End Class UWeldMeshEdgesToolBuilder

// Begin Enum EWeldMeshEdgesAttributeUIMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode;
static UEnum* EWeldMeshEdgesAttributeUIMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EWeldMeshEdgesAttributeUIMode"));
	}
	return Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EWeldMeshEdgesAttributeUIMode>()
{
	return EWeldMeshEdgesAttributeUIMode_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "None.Comment", "/** Do not weld split-attributes*/" },
		{ "None.Name", "EWeldMeshEdgesAttributeUIMode::None" },
		{ "None.ToolTip", "Do not weld split-attributes" },
		{ "OnFullMesh.Comment", "/** Apply attribute welding to all split-attributes */" },
		{ "OnFullMesh.Name", "EWeldMeshEdgesAttributeUIMode::OnFullMesh" },
		{ "OnFullMesh.ToolTip", "Apply attribute welding to all split-attributes" },
		{ "OnWeldedMeshEdgesOnly.Comment", "/** Apply attribute welding only along the current mesh welds */" },
		{ "OnWeldedMeshEdgesOnly.Name", "EWeldMeshEdgesAttributeUIMode::OnWeldedMeshEdgesOnly" },
		{ "OnWeldedMeshEdgesOnly.ToolTip", "Apply attribute welding only along the current mesh welds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeldMeshEdgesAttributeUIMode::None", (int64)EWeldMeshEdgesAttributeUIMode::None },
		{ "EWeldMeshEdgesAttributeUIMode::OnWeldedMeshEdgesOnly", (int64)EWeldMeshEdgesAttributeUIMode::OnWeldedMeshEdgesOnly },
		{ "EWeldMeshEdgesAttributeUIMode::OnFullMesh", (int64)EWeldMeshEdgesAttributeUIMode::OnFullMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EWeldMeshEdgesAttributeUIMode",
	"EWeldMeshEdgesAttributeUIMode",
	Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode()
{
	if (!Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode.InnerSingleton;
}
// End Enum EWeldMeshEdgesAttributeUIMode

// Begin Class UWeldMeshEdgesToolProperties
void UWeldMeshEdgesToolProperties::StaticRegisterNativesUWeldMeshEdgesToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesToolProperties);
UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister()
{
	return UWeldMeshEdgesToolProperties::StaticClass();
}
struct Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.00000001" },
		{ "Comment", "/** Edges are considered matching if both pairs of endpoint vertices are closer than this distance */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Edges are considered matching if both pairs of endpoint vertices are closer than this distance" },
		{ "UIMax", "0.01" },
		{ "UIMin", "0.000001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUnique_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Only merge unambiguous pairs that have unique duplicate-edge matches */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Only merge unambiguous pairs that have unique duplicate-edge matches" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResolveTJunctions_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, after an initial attempt at Welding, attempt to resolve remaining open edges in T-junction configurations via edge splits, and then retry Weld */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "If enabled, after an initial attempt at Welding, attempt to resolve remaining open edges in T-junction configurations via edge splits, and then retry Weld" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialEdges_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Initial number of open boundary edges */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Initial number of open boundary edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingEdges_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of remaining open boundary edges */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Number of remaining open boundary edges" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttrWeldingMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Controls split-attribute welding performed after the Mesh weld.  Applies to normals, tangents, UVs and colors. */" },
		{ "DisplayName", "Split-Attribute Welding" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Controls split-attribute welding performed after the Mesh weld.  Applies to normals, tangents, UVs and colors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitNormalThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold on the angle between normals used to determine if split normals should be merged*/" },
		{ "DisplayName", "Normal Angle Threshold" },
		{ "EditCondition", "AttrWeldingMode != EWeldMeshEdgesAttributeUIMode::None" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Threshold on the angle between normals used to determine if split normals should be merged" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitTangentsThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold on the angle between tangent used to determine if split tangents should be merged*/" },
		{ "DisplayName", "Tangent Angle Threshold" },
		{ "EditCondition", "AttrWeldingMode != EWeldMeshEdgesAttributeUIMode::None" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Threshold on the angle between tangent used to determine if split tangents should be merged" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitUVThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Threshold uv-distance used to determine if split UVs should be merged */" },
		{ "DisplayName", "UV Distance Threshold" },
		{ "EditCondition", "AttrWeldingMode != EWeldMeshEdgesAttributeUIMode::None" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Threshold uv-distance used to determine if split UVs should be merged" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitColorThreshold_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Threshold color-distance used to determine if split colors should be merged */" },
		{ "DisplayName", "Color Distance Threshold" },
		{ "EditCondition", "AttrWeldingMode != EWeldMeshEdgesAttributeUIMode::None" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Threshold color-distance used to determine if split colors should be merged" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static void NewProp_bOnlyUnique_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUnique;
	static void NewProp_bResolveTJunctions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolveTJunctions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialEdges;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingEdges;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttrWeldingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttrWeldingMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitNormalThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitTangentsThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitUVThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitColorThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_SetBit(void* Obj)
{
	((UWeldMeshEdgesToolProperties*)Obj)->bOnlyUnique = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique = { "bOnlyUnique", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeldMeshEdgesToolProperties), &Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyUnique_MetaData), NewProp_bOnlyUnique_MetaData) };
void Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_SetBit(void* Obj)
{
	((UWeldMeshEdgesToolProperties*)Obj)->bResolveTJunctions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions = { "bResolveTJunctions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeldMeshEdgesToolProperties), &Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResolveTJunctions_MetaData), NewProp_bResolveTJunctions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_InitialEdges = { "InitialEdges", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, InitialEdges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialEdges_MetaData), NewProp_InitialEdges_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_RemainingEdges = { "RemainingEdges", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, RemainingEdges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingEdges_MetaData), NewProp_RemainingEdges_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_AttrWeldingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_AttrWeldingMode = { "AttrWeldingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, AttrWeldingMode), Z_Construct_UEnum_MeshModelingToolsExp_EWeldMeshEdgesAttributeUIMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttrWeldingMode_MetaData), NewProp_AttrWeldingMode_MetaData) }; // 3941714233
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitNormalThreshold = { "SplitNormalThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, SplitNormalThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitNormalThreshold_MetaData), NewProp_SplitNormalThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitTangentsThreshold = { "SplitTangentsThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, SplitTangentsThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitTangentsThreshold_MetaData), NewProp_SplitTangentsThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitUVThreshold = { "SplitUVThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, SplitUVThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitUVThreshold_MetaData), NewProp_SplitUVThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitColorThreshold = { "SplitColorThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, SplitColorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitColorThreshold_MetaData), NewProp_SplitColorThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_InitialEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_RemainingEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_AttrWeldingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_AttrWeldingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitNormalThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitTangentsThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitUVThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_SplitColorThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::ClassParams = {
	&UWeldMeshEdgesToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties()
{
	if (!Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesToolProperties>()
{
	return UWeldMeshEdgesToolProperties::StaticClass();
}
UWeldMeshEdgesToolProperties::UWeldMeshEdgesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesToolProperties);
UWeldMeshEdgesToolProperties::~UWeldMeshEdgesToolProperties() {}
// End Class UWeldMeshEdgesToolProperties

// Begin Class UWeldMeshEdgesOperatorFactory
void UWeldMeshEdgesOperatorFactory::StaticRegisterNativesUWeldMeshEdgesOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesOperatorFactory);
UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister()
{
	return UWeldMeshEdgesOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeldMeshEdgesTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeldMeshEdgesTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::NewProp_WeldMeshEdgesTool = { "WeldMeshEdgesTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesOperatorFactory, WeldMeshEdgesTool), Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeldMeshEdgesTool_MetaData), NewProp_WeldMeshEdgesTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::NewProp_WeldMeshEdgesTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::ClassParams = {
	&UWeldMeshEdgesOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory()
{
	if (!Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesOperatorFactory>()
{
	return UWeldMeshEdgesOperatorFactory::StaticClass();
}
UWeldMeshEdgesOperatorFactory::UWeldMeshEdgesOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesOperatorFactory);
UWeldMeshEdgesOperatorFactory::~UWeldMeshEdgesOperatorFactory() {}
// End Class UWeldMeshEdgesOperatorFactory

// Begin Class UWeldMeshEdgesTool
void UWeldMeshEdgesTool::StaticRegisterNativesUWeldMeshEdgesTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesTool);
UClass* Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister()
{
	return UWeldMeshEdgesTool::StaticClass();
}
struct Z_Construct_UClass_UWeldMeshEdgesTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Weld Edges Tool\n */" },
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Mesh Weld Edges Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperatorFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewCompute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshElementsDisplay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OperatorFactory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesTool, Settings), Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_PreviewCompute = { "PreviewCompute", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesTool, PreviewCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewCompute_MetaData), NewProp_PreviewCompute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshElementsDisplay_MetaData), NewProp_MeshElementsDisplay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_OperatorFactory = { "OperatorFactory", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeldMeshEdgesTool, OperatorFactory), Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperatorFactory_MetaData), NewProp_OperatorFactory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeldMeshEdgesTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_PreviewCompute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_MeshElementsDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_OperatorFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeldMeshEdgesTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::ClassParams = {
	&UWeldMeshEdgesTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeldMeshEdgesTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeldMeshEdgesTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeldMeshEdgesTool()
{
	if (!Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesTool>()
{
	return UWeldMeshEdgesTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesTool);
UWeldMeshEdgesTool::~UWeldMeshEdgesTool() {}
// End Class UWeldMeshEdgesTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeldMeshEdgesAttributeUIMode_StaticEnum, TEXT("EWeldMeshEdgesAttributeUIMode"), &Z_Registration_Info_UEnum_EWeldMeshEdgesAttributeUIMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3941714233U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeldMeshEdgesToolBuilder, UWeldMeshEdgesToolBuilder::StaticClass, TEXT("UWeldMeshEdgesToolBuilder"), &Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesToolBuilder), 2881176008U) },
		{ Z_Construct_UClass_UWeldMeshEdgesToolProperties, UWeldMeshEdgesToolProperties::StaticClass, TEXT("UWeldMeshEdgesToolProperties"), &Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesToolProperties), 3706806274U) },
		{ Z_Construct_UClass_UWeldMeshEdgesOperatorFactory, UWeldMeshEdgesOperatorFactory::StaticClass, TEXT("UWeldMeshEdgesOperatorFactory"), &Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesOperatorFactory), 2265537549U) },
		{ Z_Construct_UClass_UWeldMeshEdgesTool, UWeldMeshEdgesTool::StaticClass, TEXT("UWeldMeshEdgesTool"), &Z_Registration_Info_UClass_UWeldMeshEdgesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesTool), 1259068259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_3752398912(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
