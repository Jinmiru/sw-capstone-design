// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/CutMeshWithMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCutMeshWithMeshTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UCutMeshWithMeshToolProperties
void UCutMeshWithMeshToolProperties::StaticRegisterNativesUCutMeshWithMeshToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCutMeshWithMeshToolProperties);
UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties_NoRegister()
{
	return UCutMeshWithMeshToolProperties::StaticClass();
}
struct Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the CutMeshWithMesh operation\n */" },
		{ "IncludePath", "CutMeshWithMeshTool.h" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Standard properties of the CutMeshWithMesh operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryFixHoles_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Try to fill holes created by the Boolean operation, e.g. due to numerical errors */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Try to fill holes created by the Boolean operation, e.g. due to numerical errors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryCollapseEdges_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Try to collapse extra edges created by the Boolean operation */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Try to collapse extra edges created by the Boolean operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Threshold to determine whether a triangle in one mesh is inside or outside of the other */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Threshold to determine whether a triangle in one mesh is inside or outside of the other" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNewBoundaries_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Show boundary edges created by the Boolean operation, which might happen due to numerical errors */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Show boundary edges created by the Boolean operation, which might happen due to numerical errors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstMeshMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned" },
	};
#endif // WITH_METADATA
	static void NewProp_bTryFixHoles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryFixHoles;
	static void NewProp_bTryCollapseEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryCollapseEdges;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
	static void NewProp_bShowNewBoundaries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNewBoundaries;
	static void NewProp_bUseFirstMeshMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstMeshMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCutMeshWithMeshToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles_SetBit(void* Obj)
{
	((UCutMeshWithMeshToolProperties*)Obj)->bTryFixHoles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles = { "bTryFixHoles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryFixHoles_MetaData), NewProp_bTryFixHoles_MetaData) };
void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit(void* Obj)
{
	((UCutMeshWithMeshToolProperties*)Obj)->bTryCollapseEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges = { "bTryCollapseEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryCollapseEdges_MetaData), NewProp_bTryCollapseEdges_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCutMeshWithMeshToolProperties, WindingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindingThreshold_MetaData), NewProp_WindingThreshold_MetaData) };
void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries_SetBit(void* Obj)
{
	((UCutMeshWithMeshToolProperties*)Obj)->bShowNewBoundaries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries = { "bShowNewBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNewBoundaries_MetaData), NewProp_bShowNewBoundaries_MetaData) };
void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials_SetBit(void* Obj)
{
	((UCutMeshWithMeshToolProperties*)Obj)->bUseFirstMeshMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials = { "bUseFirstMeshMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFirstMeshMaterials_MetaData), NewProp_bUseFirstMeshMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_WindingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::ClassParams = {
	&UCutMeshWithMeshToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties()
{
	if (!Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.OuterSingleton, Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCutMeshWithMeshToolProperties>()
{
	return UCutMeshWithMeshToolProperties::StaticClass();
}
UCutMeshWithMeshToolProperties::UCutMeshWithMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCutMeshWithMeshToolProperties);
UCutMeshWithMeshToolProperties::~UCutMeshWithMeshToolProperties() {}
// End Class UCutMeshWithMeshToolProperties

// Begin Class UCutMeshWithMeshTool
void UCutMeshWithMeshTool::StaticRegisterNativesUCutMeshWithMeshTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCutMeshWithMeshTool);
UClass* Z_Construct_UClass_UCutMeshWithMeshTool_NoRegister()
{
	return UCutMeshWithMeshTool::StaticClass();
}
struct Z_Construct_UClass_UCutMeshWithMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCutMeshWithMeshTool cuts an input mesh into two pieces based on a second input mesh.\n * Essentially this just both a Boolean Subtract and a Boolean Intersection. However\n * doing those as two separate operations involves quite a few steps, so this Tool\n * does it in a single step and with some improved efficiency.\n */" },
		{ "IncludePath", "CutMeshWithMeshTool.h" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "UCutMeshWithMeshTool cuts an input mesh into two pieces based on a second input mesh.\nEssentially this just both a Boolean Subtract and a Boolean Intersection. However\ndoing those as two separate operations involves quite a few steps, so this Tool\ndoes it in a single step and with some improved efficiency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectPreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLineSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CutProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntersectPreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawnLineSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCutMeshWithMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_CutProperties = { "CutProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCutMeshWithMeshTool, CutProperties), Z_Construct_UClass_UCutMeshWithMeshToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutProperties_MetaData), NewProp_CutProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_IntersectPreviewMesh = { "IntersectPreviewMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCutMeshWithMeshTool, IntersectPreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectPreviewMesh_MetaData), NewProp_IntersectPreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_DrawnLineSet = { "DrawnLineSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCutMeshWithMeshTool, DrawnLineSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawnLineSet_MetaData), NewProp_DrawnLineSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCutMeshWithMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_CutProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_IntersectPreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_DrawnLineSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCutMeshWithMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::ClassParams = {
	&UCutMeshWithMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCutMeshWithMeshTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UCutMeshWithMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCutMeshWithMeshTool()
{
	if (!Z_Registration_Info_UClass_UCutMeshWithMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCutMeshWithMeshTool.OuterSingleton, Z_Construct_UClass_UCutMeshWithMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCutMeshWithMeshTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCutMeshWithMeshTool>()
{
	return UCutMeshWithMeshTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCutMeshWithMeshTool);
UCutMeshWithMeshTool::~UCutMeshWithMeshTool() {}
// End Class UCutMeshWithMeshTool

// Begin Class UCutMeshWithMeshToolBuilder
void UCutMeshWithMeshToolBuilder::StaticRegisterNativesUCutMeshWithMeshToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCutMeshWithMeshToolBuilder);
UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder_NoRegister()
{
	return UCutMeshWithMeshToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CutMeshWithMeshTool.h" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCutMeshWithMeshToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::ClassParams = {
	&UCutMeshWithMeshToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder()
{
	if (!Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCutMeshWithMeshToolBuilder>()
{
	return UCutMeshWithMeshToolBuilder::StaticClass();
}
UCutMeshWithMeshToolBuilder::UCutMeshWithMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCutMeshWithMeshToolBuilder);
UCutMeshWithMeshToolBuilder::~UCutMeshWithMeshToolBuilder() {}
// End Class UCutMeshWithMeshToolBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCutMeshWithMeshToolProperties, UCutMeshWithMeshToolProperties::StaticClass, TEXT("UCutMeshWithMeshToolProperties"), &Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCutMeshWithMeshToolProperties), 3085654704U) },
		{ Z_Construct_UClass_UCutMeshWithMeshTool, UCutMeshWithMeshTool::StaticClass, TEXT("UCutMeshWithMeshTool"), &Z_Registration_Info_UClass_UCutMeshWithMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCutMeshWithMeshTool), 35279987U) },
		{ Z_Construct_UClass_UCutMeshWithMeshToolBuilder, UCutMeshWithMeshToolBuilder::StaticClass, TEXT("UCutMeshWithMeshToolBuilder"), &Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCutMeshWithMeshToolBuilder), 4247349383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_3217740752(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
