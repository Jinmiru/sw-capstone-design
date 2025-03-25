// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/VolumeToMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeToMeshTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVolumeToMeshToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UVolumeToMeshToolBuilder
void UVolumeToMeshToolBuilder::StaticRegisterNativesUVolumeToMeshToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeToMeshToolBuilder);
UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder_NoRegister()
{
	return UVolumeToMeshToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VolumeToMeshTool.h" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeToMeshToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::ClassParams = {
	&UVolumeToMeshToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVolumeToMeshToolBuilder()
{
	if (!Z_Registration_Info_UClass_UVolumeToMeshToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeToMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UVolumeToMeshToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVolumeToMeshToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVolumeToMeshToolBuilder>()
{
	return UVolumeToMeshToolBuilder::StaticClass();
}
UVolumeToMeshToolBuilder::UVolumeToMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeToMeshToolBuilder);
UVolumeToMeshToolBuilder::~UVolumeToMeshToolBuilder() {}
// End Class UVolumeToMeshToolBuilder

// Begin Class UVolumeToMeshToolProperties
void UVolumeToMeshToolProperties::StaticRegisterNativesUVolumeToMeshToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeToMeshToolProperties);
UClass* Z_Construct_UClass_UVolumeToMeshToolProperties_NoRegister()
{
	return UVolumeToMeshToolProperties::StaticClass();
}
struct Z_Construct_UClass_UVolumeToMeshToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VolumeToMeshTool.h" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeldEdges_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Weld coincident vertices and edges together in the resulting mesh to form a closed mesh surface. */" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
		{ "ToolTip", "Weld coincident vertices and edges together in the resulting mesh to form a closed mesh surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRepair_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If WeldEdges is enabled, attempt to fill any small holes or cracks in the resulting mesh to form a closed surface. */" },
		{ "EditCondition", "bWeldEdges" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
		{ "ToolTip", "If WeldEdges is enabled, attempt to fill any small holes or cracks in the resulting mesh to form a closed surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If WeldEdges is enabled, and after mesh generation is complete, flip edges in planar regions to improve triangle quality. */" },
		{ "EditCondition", "bWeldEdges" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
		{ "ToolTip", "If WeldEdges is enabled, and after mesh generation is complete, flip edges in planar regions to improve triangle quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Show the wireframe of the resulting converted mesh geometry.*/" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
		{ "ToolTip", "Show the wireframe of the resulting converted mesh geometry." },
	};
#endif // WITH_METADATA
	static void NewProp_bWeldEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldEdges;
	static void NewProp_bAutoRepair_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRepair;
	static void NewProp_bOptimizeMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeMesh;
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeToMeshToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges_SetBit(void* Obj)
{
	((UVolumeToMeshToolProperties*)Obj)->bWeldEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges = { "bWeldEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeldEdges_MetaData), NewProp_bWeldEdges_MetaData) };
void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair_SetBit(void* Obj)
{
	((UVolumeToMeshToolProperties*)Obj)->bAutoRepair = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair = { "bAutoRepair", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRepair_MetaData), NewProp_bAutoRepair_MetaData) };
void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh_SetBit(void* Obj)
{
	((UVolumeToMeshToolProperties*)Obj)->bOptimizeMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh = { "bOptimizeMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeMesh_MetaData), NewProp_bOptimizeMesh_MetaData) };
void Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UVolumeToMeshToolProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVolumeToMeshToolProperties), &Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bWeldEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bAutoRepair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bOptimizeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::NewProp_bShowWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::ClassParams = {
	&UVolumeToMeshToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVolumeToMeshToolProperties()
{
	if (!Z_Registration_Info_UClass_UVolumeToMeshToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeToMeshToolProperties.OuterSingleton, Z_Construct_UClass_UVolumeToMeshToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVolumeToMeshToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVolumeToMeshToolProperties>()
{
	return UVolumeToMeshToolProperties::StaticClass();
}
UVolumeToMeshToolProperties::UVolumeToMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeToMeshToolProperties);
UVolumeToMeshToolProperties::~UVolumeToMeshToolProperties() {}
// End Class UVolumeToMeshToolProperties

// Begin Class UVolumeToMeshTool
void UVolumeToMeshTool::StaticRegisterNativesUVolumeToMeshTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeToMeshTool);
UClass* Z_Construct_UClass_UVolumeToMeshTool_NoRegister()
{
	return UVolumeToMeshTool::StaticClass();
}
struct Z_Construct_UClass_UVolumeToMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VolumeToMeshTool.h" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeEdgesSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VolumeToMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTypeProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_TargetVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeEdgesSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeToMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeToMeshTool, Settings), Z_Construct_UClass_UVolumeToMeshToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeToMeshTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTypeProperties_MetaData), NewProp_OutputTypeProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeToMeshTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_TargetVolume = { "TargetVolume", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeToMeshTool, TargetVolume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetVolume_MetaData), NewProp_TargetVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_VolumeEdgesSet = { "VolumeEdgesSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumeToMeshTool, VolumeEdgesSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeEdgesSet_MetaData), NewProp_VolumeEdgesSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeToMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_OutputTypeProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_TargetVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeToMeshTool_Statics::NewProp_VolumeEdgesSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVolumeToMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeToMeshTool_Statics::ClassParams = {
	&UVolumeToMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVolumeToMeshTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeToMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVolumeToMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVolumeToMeshTool()
{
	if (!Z_Registration_Info_UClass_UVolumeToMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeToMeshTool.OuterSingleton, Z_Construct_UClass_UVolumeToMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVolumeToMeshTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVolumeToMeshTool>()
{
	return UVolumeToMeshTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeToMeshTool);
UVolumeToMeshTool::~UVolumeToMeshTool() {}
// End Class UVolumeToMeshTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeToMeshToolBuilder, UVolumeToMeshToolBuilder::StaticClass, TEXT("UVolumeToMeshToolBuilder"), &Z_Registration_Info_UClass_UVolumeToMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeToMeshToolBuilder), 615937274U) },
		{ Z_Construct_UClass_UVolumeToMeshToolProperties, UVolumeToMeshToolProperties::StaticClass, TEXT("UVolumeToMeshToolProperties"), &Z_Registration_Info_UClass_UVolumeToMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeToMeshToolProperties), 3002420694U) },
		{ Z_Construct_UClass_UVolumeToMeshTool, UVolumeToMeshTool::StaticClass, TEXT("UVolumeToMeshTool"), &Z_Registration_Info_UClass_UVolumeToMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeToMeshTool), 3694656958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_1223523753(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_VolumeToMeshTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
