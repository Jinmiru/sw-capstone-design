// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/DynamicMeshBrushTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshBrushTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushTool_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UDynamicMeshBrushTool
void UDynamicMeshBrushTool::StaticRegisterNativesUDynamicMeshBrushTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshBrushTool);
UClass* Z_Construct_UClass_UDynamicMeshBrushTool_NoRegister()
{
	return UDynamicMeshBrushTool::StaticClass();
}
struct Z_Construct_UClass_UDynamicMeshBrushTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDynamicMeshBrushTool is a base class that specializes UBaseBrushTool\n * for brushing on an FDynamicMesh3. The input FPrimitiveComponentTarget is hidden\n * and a UPreviewMesh is created and shown in its place. This UPreviewMesh is\n * used for hit-testing and dynamic rendering.\n * \n */" },
		{ "IncludePath", "DynamicMeshBrushTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshBrushTool.h" },
		{ "ToolTip", "UDynamicMeshBrushTool is a base class that specializes UBaseBrushTool\nfor brushing on an FDynamicMesh3. The input FPrimitiveComponentTarget is hidden\nand a UPreviewMesh is created and shown in its place. This UPreviewMesh is\nused for hit-testing and dynamic rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshBrushTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshBrushTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicMeshBrushTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicMeshBrushTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshBrushTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushTool_Statics::NewProp_PreviewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDynamicMeshBrushTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseBrushTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshBrushTool_Statics::ClassParams = {
	&UDynamicMeshBrushTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDynamicMeshBrushTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicMeshBrushTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicMeshBrushTool()
{
	if (!Z_Registration_Info_UClass_UDynamicMeshBrushTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshBrushTool.OuterSingleton, Z_Construct_UClass_UDynamicMeshBrushTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicMeshBrushTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDynamicMeshBrushTool>()
{
	return UDynamicMeshBrushTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshBrushTool);
UDynamicMeshBrushTool::~UDynamicMeshBrushTool() {}
// End Class UDynamicMeshBrushTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshBrushTool, UDynamicMeshBrushTool::StaticClass, TEXT("UDynamicMeshBrushTool"), &Z_Registration_Info_UClass_UDynamicMeshBrushTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshBrushTool), 1677702920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_956409972(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshBrushTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
