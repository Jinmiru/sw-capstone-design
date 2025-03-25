// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/RecomputeUVsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecomputeUVsTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsToolBuilder_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class URecomputeUVsToolBuilder
void URecomputeUVsToolBuilder::StaticRegisterNativesURecomputeUVsToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecomputeUVsToolBuilder);
UClass* Z_Construct_UClass_URecomputeUVsToolBuilder_NoRegister()
{
	return URecomputeUVsToolBuilder::StaticClass();
}
struct Z_Construct_UClass_URecomputeUVsToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RecomputeUVsTool.h" },
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecomputeUVsToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::ClassParams = {
	&URecomputeUVsToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URecomputeUVsToolBuilder()
{
	if (!Z_Registration_Info_UClass_URecomputeUVsToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecomputeUVsToolBuilder.OuterSingleton, Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URecomputeUVsToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<URecomputeUVsToolBuilder>()
{
	return URecomputeUVsToolBuilder::StaticClass();
}
URecomputeUVsToolBuilder::URecomputeUVsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URecomputeUVsToolBuilder);
URecomputeUVsToolBuilder::~URecomputeUVsToolBuilder() {}
// End Class URecomputeUVsToolBuilder

// Begin Class URecomputeUVsTool
void URecomputeUVsTool::StaticRegisterNativesURecomputeUVsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecomputeUVsTool);
UClass* Z_Construct_UClass_URecomputeUVsTool_NoRegister()
{
	return URecomputeUVsTool::StaticClass();
}
struct Z_Construct_UClass_URecomputeUVsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * URecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh\n */" },
		{ "IncludePath", "RecomputeUVsTool.h" },
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
		{ "ToolTip", "URecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateUVLayoutViewOnSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVLayoutView_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecomputeUVsOpFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVChannelProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolygroupLayerProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSettings;
	static void NewProp_bCreateUVLayoutViewOnSetup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateUVLayoutViewOnSetup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVLayoutView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecomputeUVsOpFactory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecomputeUVsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelProperties_MetaData), NewProp_UVChannelProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsTool, Settings), Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygroupLayerProperties_MetaData), NewProp_PolygroupLayerProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsTool, MaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) };
void Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_SetBit(void* Obj)
{
	((URecomputeUVsTool*)Obj)->bCreateUVLayoutViewOnSetup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup = { "bCreateUVLayoutViewOnSetup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URecomputeUVsTool), &Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateUVLayoutViewOnSetup_MetaData), NewProp_bCreateUVLayoutViewOnSetup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVLayoutView = { "UVLayoutView", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsTool, UVLayoutView), Z_Construct_UClass_UUVLayoutPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVLayoutView_MetaData), NewProp_UVLayoutView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_RecomputeUVsOpFactory = { "RecomputeUVsOpFactory", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsTool, RecomputeUVsOpFactory), Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecomputeUVsOpFactory_MetaData), NewProp_RecomputeUVsOpFactory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecomputeUVsTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVChannelProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_MaterialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVLayoutView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_RecomputeUVsOpFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Preview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URecomputeUVsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URecomputeUVsTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(URecomputeUVsTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URecomputeUVsTool_Statics::ClassParams = {
	&URecomputeUVsTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URecomputeUVsTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_URecomputeUVsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URecomputeUVsTool()
{
	if (!Z_Registration_Info_UClass_URecomputeUVsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecomputeUVsTool.OuterSingleton, Z_Construct_UClass_URecomputeUVsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URecomputeUVsTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<URecomputeUVsTool>()
{
	return URecomputeUVsTool::StaticClass();
}
URecomputeUVsTool::URecomputeUVsTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URecomputeUVsTool);
URecomputeUVsTool::~URecomputeUVsTool() {}
// End Class URecomputeUVsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URecomputeUVsToolBuilder, URecomputeUVsToolBuilder::StaticClass, TEXT("URecomputeUVsToolBuilder"), &Z_Registration_Info_UClass_URecomputeUVsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecomputeUVsToolBuilder), 1462836302U) },
		{ Z_Construct_UClass_URecomputeUVsTool, URecomputeUVsTool::StaticClass, TEXT("URecomputeUVsTool"), &Z_Registration_Info_UClass_URecomputeUVsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecomputeUVsTool), 2114967422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_413439142(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
