// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/RemeshMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemeshMeshTool() {}

// Begin Cross Module References
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshType();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class URemeshMeshToolBuilder
void URemeshMeshToolBuilder::StaticRegisterNativesURemeshMeshToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshMeshToolBuilder);
UClass* Z_Construct_UClass_URemeshMeshToolBuilder_NoRegister()
{
	return URemeshMeshToolBuilder::StaticClass();
}
struct Z_Construct_UClass_URemeshMeshToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RemeshMeshTool.h" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshMeshToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URemeshMeshToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshMeshToolBuilder_Statics::ClassParams = {
	&URemeshMeshToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URemeshMeshToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URemeshMeshToolBuilder()
{
	if (!Z_Registration_Info_UClass_URemeshMeshToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshMeshToolBuilder.OuterSingleton, Z_Construct_UClass_URemeshMeshToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemeshMeshToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshMeshToolBuilder>()
{
	return URemeshMeshToolBuilder::StaticClass();
}
URemeshMeshToolBuilder::URemeshMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshMeshToolBuilder);
URemeshMeshToolBuilder::~URemeshMeshToolBuilder() {}
// End Class URemeshMeshToolBuilder

// Begin Class URemeshMeshToolProperties
void URemeshMeshToolProperties::StaticRegisterNativesURemeshMeshToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshMeshToolProperties);
UClass* Z_Construct_UClass_URemeshMeshToolProperties_NoRegister()
{
	return URemeshMeshToolProperties::StaticClass();
}
struct Z_Construct_UClass_URemeshMeshToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Remesh operation\n */" },
		{ "IncludePath", "RemeshMeshTool.h" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Standard properties of the Remesh operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriangleCount_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Target triangle count */" },
		{ "EditCondition", "bUseTargetEdgeLength == false" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Target triangle count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingType_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Smoothing type */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Smoothing type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardAttributes_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Discard UVs and existing normals, allowing the remesher to ignore any UV and normal seams. New per-vertex normals are computed. */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Discard UVs and existing normals, allowing the remesher to ignore any UV and normal seams. New per-vertex normals are computed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGroupColors_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display colors corresponding to the mesh's polygon groups */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Display colors corresponding to the mesh's polygon groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemeshType_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Remeshing type */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Remeshing type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemeshIterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Remeshing passes */" },
		{ "EditCondition", "RemeshType == ERemeshType::FullPass" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Number of Remeshing passes" },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRemeshIterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of Remeshing passes, for Remeshers that have convergence criteria */" },
		{ "EditCondition", "RemeshType != ERemeshType::FullPass" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Maximum number of Remeshing passes, for Remeshers that have convergence criteria" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraProjectionIterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** For NormalFlowRemesher: extra iterations of normal flow with no remeshing */" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "For NormalFlowRemesher: extra iterations of normal flow with no remeshing" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTargetEdgeLength_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** If true, the target count is ignored and the target edge length is used directly */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "If true, the target count is ignored and the target edge length is used directly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdgeLength_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Remesh to have edges approximately this length. An attempt at a reasonable value is computed automatically for this field based on the selected target mesh. */" },
		{ "EditCondition", "bUseTargetEdgeLength == true" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "NoResetToDefault", "" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Remesh to have edges approximately this length. An attempt at a reasonable value is computed automatically for this field based on the selected target mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Enable projection back to input mesh */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Enable projection back to input mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReprojectConstraints_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Project constrained vertices back to original constraint curves */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Project constrained vertices back to original constraint curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryCornerAngleThreshold_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle threshold in degrees for classifying a boundary vertex as a corner. Corners will be fixed if Reproject Constraints is active. */" },
		{ "EditCondition", "bReprojectConstraints" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Angle threshold in degrees for classifying a boundary vertex as a corner. Corners will be fixed if Reproject Constraints is active." },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetTriangleCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingType;
	static void NewProp_bDiscardAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardAttributes;
	static void NewProp_bShowGroupColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGroupColors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RemeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RemeshType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemeshIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRemeshIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExtraProjectionIterations;
	static void NewProp_bUseTargetEdgeLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTargetEdgeLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetEdgeLength;
	static void NewProp_bReproject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
	static void NewProp_bReprojectConstraints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReprojectConstraints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryCornerAngleThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshMeshToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetTriangleCount = { "TargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, TargetTriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTriangleCount_MetaData), NewProp_TargetTriangleCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType = { "SmoothingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, SmoothingType), Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingType_MetaData), NewProp_SmoothingType_MetaData) }; // 1930428287
void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes_SetBit(void* Obj)
{
	((URemeshMeshToolProperties*)Obj)->bDiscardAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes = { "bDiscardAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDiscardAttributes_MetaData), NewProp_bDiscardAttributes_MetaData) };
void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors_SetBit(void* Obj)
{
	((URemeshMeshToolProperties*)Obj)->bShowGroupColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors = { "bShowGroupColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGroupColors_MetaData), NewProp_bShowGroupColors_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType = { "RemeshType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, RemeshType), Z_Construct_UEnum_ModelingOperators_ERemeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemeshType_MetaData), NewProp_RemeshType_MetaData) }; // 3270378351
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshIterations = { "RemeshIterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, RemeshIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemeshIterations_MetaData), NewProp_RemeshIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_MaxRemeshIterations = { "MaxRemeshIterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, MaxRemeshIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRemeshIterations_MetaData), NewProp_MaxRemeshIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_ExtraProjectionIterations = { "ExtraProjectionIterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, ExtraProjectionIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraProjectionIterations_MetaData), NewProp_ExtraProjectionIterations_MetaData) };
void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength_SetBit(void* Obj)
{
	((URemeshMeshToolProperties*)Obj)->bUseTargetEdgeLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength = { "bUseTargetEdgeLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTargetEdgeLength_MetaData), NewProp_bUseTargetEdgeLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetEdgeLength = { "TargetEdgeLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, TargetEdgeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEdgeLength_MetaData), NewProp_TargetEdgeLength_MetaData) };
void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject_SetBit(void* Obj)
{
	((URemeshMeshToolProperties*)Obj)->bReproject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReproject_MetaData), NewProp_bReproject_MetaData) };
void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints_SetBit(void* Obj)
{
	((URemeshMeshToolProperties*)Obj)->bReprojectConstraints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints = { "bReprojectConstraints", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReprojectConstraints_MetaData), NewProp_bReprojectConstraints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_BoundaryCornerAngleThreshold = { "BoundaryCornerAngleThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshToolProperties, BoundaryCornerAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryCornerAngleThreshold_MetaData), NewProp_BoundaryCornerAngleThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemeshMeshToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetTriangleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_MaxRemeshIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_ExtraProjectionIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetEdgeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_BoundaryCornerAngleThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URemeshMeshToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URemeshProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::ClassParams = {
	&URemeshMeshToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URemeshMeshToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URemeshMeshToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URemeshMeshToolProperties()
{
	if (!Z_Registration_Info_UClass_URemeshMeshToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshMeshToolProperties.OuterSingleton, Z_Construct_UClass_URemeshMeshToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemeshMeshToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshMeshToolProperties>()
{
	return URemeshMeshToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshMeshToolProperties);
URemeshMeshToolProperties::~URemeshMeshToolProperties() {}
// End Class URemeshMeshToolProperties

// Begin Class URemeshMeshTool
void URemeshMeshTool::StaticRegisterNativesURemeshMeshTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshMeshTool);
UClass* Z_Construct_UClass_URemeshMeshTool_NoRegister()
{
	return URemeshMeshTool::StaticClass();
}
struct Z_Construct_UClass_URemeshMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Remeshing Tool\n *\n * Note this is a subclass of UMultiSelectionTool, however we currently only ever apply it to one mesh at a time. The\n * function URemeshMeshToolBuilder::CanBuildTool will return true only when a single mesh is selected, and the tool will\n * only be applied to the first mesh in the selection list. The reason we inherit from UMultiSelectionTool is so \n * that subclasses of this class can work with multiple meshes (see, for example, UProjectToTargetTool.)\n */" },
		{ "IncludePath", "RemeshMeshTool.h" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simple Mesh Remeshing Tool\n\nNote this is a subclass of UMultiSelectionTool, however we currently only ever apply it to one mesh at a time. The\nfunction URemeshMeshToolBuilder::CanBuildTool will return true only when a single mesh is selected, and the tool will\nonly be applied to the first mesh in the selection list. The reason we inherit from UMultiSelectionTool is so\nthat subclasses of this class can work with multiple meshes (see, for example, UProjectToTargetTool.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshStatisticsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshStatisticsProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshElementsDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshTool, BasicProperties), Z_Construct_UClass_URemeshMeshToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshStatisticsProperties = { "MeshStatisticsProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshTool, MeshStatisticsProperties), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshStatisticsProperties_MetaData), NewProp_MeshStatisticsProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemeshMeshTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshElementsDisplay_MetaData), NewProp_MeshElementsDisplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemeshMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshStatisticsProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_Preview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshElementsDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URemeshMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshMeshTool_Statics::ClassParams = {
	&URemeshMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URemeshMeshTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URemeshMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URemeshMeshTool()
{
	if (!Z_Registration_Info_UClass_URemeshMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshMeshTool.OuterSingleton, Z_Construct_UClass_URemeshMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URemeshMeshTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshMeshTool>()
{
	return URemeshMeshTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshMeshTool);
URemeshMeshTool::~URemeshMeshTool() {}
// End Class URemeshMeshTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URemeshMeshToolBuilder, URemeshMeshToolBuilder::StaticClass, TEXT("URemeshMeshToolBuilder"), &Z_Registration_Info_UClass_URemeshMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshMeshToolBuilder), 2660514871U) },
		{ Z_Construct_UClass_URemeshMeshToolProperties, URemeshMeshToolProperties::StaticClass, TEXT("URemeshMeshToolProperties"), &Z_Registration_Info_UClass_URemeshMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshMeshToolProperties), 2748490103U) },
		{ Z_Construct_UClass_URemeshMeshTool, URemeshMeshTool::StaticClass, TEXT("URemeshMeshTool"), &Z_Registration_Info_UClass_URemeshMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshMeshTool), 1765423159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_304250474(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
