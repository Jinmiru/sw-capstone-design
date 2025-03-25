// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/PlaneCutTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneCutTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutOperatorFactory();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutOperatorFactory_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UPlaneCutToolBuilder
void UPlaneCutToolBuilder::StaticRegisterNativesUPlaneCutToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutToolBuilder);
UClass* Z_Construct_UClass_UPlaneCutToolBuilder_NoRegister()
{
	return UPlaneCutToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UPlaneCutToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlaneCutToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutToolBuilder_Statics::ClassParams = {
	&UPlaneCutToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaneCutToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaneCutToolBuilder()
{
	if (!Z_Registration_Info_UClass_UPlaneCutToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutToolBuilder.OuterSingleton, Z_Construct_UClass_UPlaneCutToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaneCutToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutToolBuilder>()
{
	return UPlaneCutToolBuilder::StaticClass();
}
UPlaneCutToolBuilder::UPlaneCutToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutToolBuilder);
UPlaneCutToolBuilder::~UPlaneCutToolBuilder() {}
// End Class UPlaneCutToolBuilder

// Begin Class UPlaneCutToolProperties
void UPlaneCutToolProperties::StaticRegisterNativesUPlaneCutToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutToolProperties);
UClass* Z_Construct_UClass_UPlaneCutToolProperties_NoRegister()
{
	return UPlaneCutToolProperties::StaticClass();
}
struct Z_Construct_UClass_UPlaneCutToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the plane cut operation\n */" },
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Standard properties of the plane cut operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepBothHalves_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, both halves of the cut are computed */" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, both halves of the cut are computed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingBetweenHalves_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If keeping both halves, separate the two pieces by this amount */" },
		{ "Delta", "0.500000" },
		{ "EditCondition", "bKeepBothHalves" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If keeping both halves, separate the two pieces by this amount" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportSeparatedPiecesAsNewMeshAssets_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, meshes cut into multiple pieces will be saved as separate assets on 'accept'. */" },
		{ "EditCondition", "bKeepBothHalves" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, meshes cut into multiple pieces will be saved as separate assets on 'accept'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillCutHole_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, the cut surface is filled with simple planar hole fill surface(s) */" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, the cut surface is filled with simple planar hole fill surface(s)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillSpans_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, will attempt to fill cut holes even if they're ill-formed (e.g. because they connect to pre-existing holes in the geometry) */" },
		{ "EditCondition", "bFillCutHole" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, will attempt to fill cut holes even if they're ill-formed (e.g. because they connect to pre-existing holes in the geometry)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyAlongCut_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, will simplify triangulation along plane cut when doing so will not affect the shape, UVs or PolyGroups */" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, will simplify triangulation along plane cut when doing so will not affect the shape, UVs or PolyGroups" },
	};
#endif // WITH_METADATA
	static void NewProp_bKeepBothHalves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepBothHalves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingBetweenHalves;
	static void NewProp_bExportSeparatedPiecesAsNewMeshAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSeparatedPiecesAsNewMeshAssets;
	static void NewProp_bShowPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
	static void NewProp_bFillCutHole_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCutHole;
	static void NewProp_bFillSpans_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillSpans;
	static void NewProp_bSimplifyAlongCut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyAlongCut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves_SetBit(void* Obj)
{
	((UPlaneCutToolProperties*)Obj)->bKeepBothHalves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves = { "bKeepBothHalves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepBothHalves_MetaData), NewProp_bKeepBothHalves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_SpacingBetweenHalves = { "SpacingBetweenHalves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneCutToolProperties, SpacingBetweenHalves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingBetweenHalves_MetaData), NewProp_SpacingBetweenHalves_MetaData) };
void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets_SetBit(void* Obj)
{
	((UPlaneCutToolProperties*)Obj)->bExportSeparatedPiecesAsNewMeshAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets = { "bExportSeparatedPiecesAsNewMeshAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportSeparatedPiecesAsNewMeshAssets_MetaData), NewProp_bExportSeparatedPiecesAsNewMeshAssets_MetaData) };
void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview_SetBit(void* Obj)
{
	((UPlaneCutToolProperties*)Obj)->bShowPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPreview_MetaData), NewProp_bShowPreview_MetaData) };
void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole_SetBit(void* Obj)
{
	((UPlaneCutToolProperties*)Obj)->bFillCutHole = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole = { "bFillCutHole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillCutHole_MetaData), NewProp_bFillCutHole_MetaData) };
void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans_SetBit(void* Obj)
{
	((UPlaneCutToolProperties*)Obj)->bFillSpans = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans = { "bFillSpans", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillSpans_MetaData), NewProp_bFillSpans_MetaData) };
void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bSimplifyAlongCut_SetBit(void* Obj)
{
	((UPlaneCutToolProperties*)Obj)->bSimplifyAlongCut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bSimplifyAlongCut = { "bSimplifyAlongCut", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bSimplifyAlongCut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimplifyAlongCut_MetaData), NewProp_bSimplifyAlongCut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneCutToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_SpacingBetweenHalves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bSimplifyAlongCut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaneCutToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::ClassParams = {
	&UPlaneCutToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlaneCutToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaneCutToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaneCutToolProperties()
{
	if (!Z_Registration_Info_UClass_UPlaneCutToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutToolProperties.OuterSingleton, Z_Construct_UClass_UPlaneCutToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaneCutToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutToolProperties>()
{
	return UPlaneCutToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutToolProperties);
UPlaneCutToolProperties::~UPlaneCutToolProperties() {}
// End Class UPlaneCutToolProperties

// Begin Enum EPlaneCutToolActions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlaneCutToolActions;
static UEnum* EPlaneCutToolActions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlaneCutToolActions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlaneCutToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPlaneCutToolActions"));
	}
	return Z_Registration_Info_UEnum_EPlaneCutToolActions.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPlaneCutToolActions>()
{
	return EPlaneCutToolActions_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cut.Name", "EPlaneCutToolActions::Cut" },
		{ "FlipPlane.Name", "EPlaneCutToolActions::FlipPlane" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "NoAction.Name", "EPlaneCutToolActions::NoAction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlaneCutToolActions::NoAction", (int64)EPlaneCutToolActions::NoAction },
		{ "EPlaneCutToolActions::Cut", (int64)EPlaneCutToolActions::Cut },
		{ "EPlaneCutToolActions::FlipPlane", (int64)EPlaneCutToolActions::FlipPlane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EPlaneCutToolActions",
	"EPlaneCutToolActions",
	Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions()
{
	if (!Z_Registration_Info_UEnum_EPlaneCutToolActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlaneCutToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlaneCutToolActions.InnerSingleton;
}
// End Enum EPlaneCutToolActions

// Begin Class UPlaneCutOperatorFactory
void UPlaneCutOperatorFactory::StaticRegisterNativesUPlaneCutOperatorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutOperatorFactory);
UClass* Z_Construct_UClass_UPlaneCutOperatorFactory_NoRegister()
{
	return UPlaneCutOperatorFactory::StaticClass();
}
struct Z_Construct_UClass_UPlaneCutOperatorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CutTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutOperatorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::NewProp_CutTool = { "CutTool", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneCutOperatorFactory, CutTool), Z_Construct_UClass_UPlaneCutTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutTool_MetaData), NewProp_CutTool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::NewProp_CutTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::ClassParams = {
	&UPlaneCutOperatorFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaneCutOperatorFactory()
{
	if (!Z_Registration_Info_UClass_UPlaneCutOperatorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutOperatorFactory.OuterSingleton, Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaneCutOperatorFactory.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutOperatorFactory>()
{
	return UPlaneCutOperatorFactory::StaticClass();
}
UPlaneCutOperatorFactory::UPlaneCutOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutOperatorFactory);
UPlaneCutOperatorFactory::~UPlaneCutOperatorFactory() {}
// End Class UPlaneCutOperatorFactory

// Begin Class UPlaneCutTool Function Cut
struct Z_Construct_UFunction_UPlaneCutTool_Cut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Cut with the current plane without exiting the tool (Hotkey: T)*/" },
		{ "DisplayName", "Cut" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Cut with the current plane without exiting the tool (Hotkey: T)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaneCutTool, nullptr, "Cut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlaneCutTool_Cut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlaneCutTool::execCut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cut();
	P_NATIVE_END;
}
// End Class UPlaneCutTool Function Cut

// Begin Class UPlaneCutTool Function FlipPlane
struct Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Flip the cutting plane (Hotkey: R) */" },
		{ "DisplayName", "Flip Plane" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Flip the cutting plane (Hotkey: R)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaneCutTool, nullptr, "FlipPlane", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlaneCutTool_FlipPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlaneCutTool::execFlipPlane)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlipPlane();
	P_NATIVE_END;
}
// End Class UPlaneCutTool Function FlipPlane

// Begin Class UPlaneCutTool
void UPlaneCutTool::StaticRegisterNativesUPlaneCutTool()
{
	UClass* Class = UPlaneCutTool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Cut", &UPlaneCutTool::execCut },
		{ "FlipPlane", &UPlaneCutTool::execFlipPlane },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutTool);
UClass* Z_Construct_UClass_UPlaneCutTool_NoRegister()
{
	return UPlaneCutTool::StaticClass();
}
struct Z_Construct_UClass_UPlaneCutTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Plane Cutting Tool\n */" },
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Simple Mesh Plane Cutting Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshesToCut_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Previews_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshesToCut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesToCut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMechanic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlaneCutTool_Cut, "Cut" }, // 25060367
		{ &Z_Construct_UFunction_UPlaneCutTool_FlipPlane, "FlipPlane" }, // 435557334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneCutTool, BasicProperties), Z_Construct_UClass_UPlaneCutToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneCutTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Previews_MetaData), NewProp_Previews_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut_Inner = { "MeshesToCut", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut = { "MeshesToCut", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneCutTool, MeshesToCut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshesToCut_MetaData), NewProp_MeshesToCut_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaneCutTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMechanic_MetaData), NewProp_PlaneMechanic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneCutTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_PlaneMechanic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaneCutTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutTool_Statics::ClassParams = {
	&UPlaneCutTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlaneCutTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaneCutTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaneCutTool()
{
	if (!Z_Registration_Info_UClass_UPlaneCutTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutTool.OuterSingleton, Z_Construct_UClass_UPlaneCutTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaneCutTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutTool>()
{
	return UPlaneCutTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutTool);
UPlaneCutTool::~UPlaneCutTool() {}
// End Class UPlaneCutTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlaneCutToolActions_StaticEnum, TEXT("EPlaneCutToolActions"), &Z_Registration_Info_UEnum_EPlaneCutToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1061226666U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlaneCutToolBuilder, UPlaneCutToolBuilder::StaticClass, TEXT("UPlaneCutToolBuilder"), &Z_Registration_Info_UClass_UPlaneCutToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutToolBuilder), 4048223694U) },
		{ Z_Construct_UClass_UPlaneCutToolProperties, UPlaneCutToolProperties::StaticClass, TEXT("UPlaneCutToolProperties"), &Z_Registration_Info_UClass_UPlaneCutToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutToolProperties), 1808183081U) },
		{ Z_Construct_UClass_UPlaneCutOperatorFactory, UPlaneCutOperatorFactory::StaticClass, TEXT("UPlaneCutOperatorFactory"), &Z_Registration_Info_UClass_UPlaneCutOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutOperatorFactory), 2394772266U) },
		{ Z_Construct_UClass_UPlaneCutTool, UPlaneCutTool::StaticClass, TEXT("UPlaneCutTool"), &Z_Registration_Info_UClass_UPlaneCutTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutTool), 3456667200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_1546977896(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
