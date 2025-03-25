// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingTools/Public/UVLayoutTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVLayoutTool() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutTool();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutTool_NoRegister();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutToolBuilder();
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References

// Begin Class UUVLayoutToolBuilder
void UUVLayoutToolBuilder::StaticRegisterNativesUUVLayoutToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutToolBuilder);
UClass* Z_Construct_UClass_UUVLayoutToolBuilder_NoRegister()
{
	return UUVLayoutToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UUVLayoutToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UVLayoutTool.h" },
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUVLayoutToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutToolBuilder_Statics::ClassParams = {
	&UUVLayoutToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVLayoutToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVLayoutToolBuilder()
{
	if (!Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton, Z_Construct_UClass_UUVLayoutToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVLayoutToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVLayoutToolBuilder>()
{
	return UUVLayoutToolBuilder::StaticClass();
}
UUVLayoutToolBuilder::UUVLayoutToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutToolBuilder);
UUVLayoutToolBuilder::~UUVLayoutToolBuilder() {}
// End Class UUVLayoutToolBuilder

// Begin Class UUVLayoutTool
void UUVLayoutTool::StaticRegisterNativesUUVLayoutTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutTool);
UClass* Z_Construct_UClass_UUVLayoutTool_NoRegister()
{
	return UUVLayoutTool::StaticClass();
}
struct Z_Construct_UClass_UUVLayoutTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The level editor version of the UV layout tool.\n */" },
		{ "IncludePath", "UVLayoutTool.h" },
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
		{ "ToolTip", "The level editor version of the UV layout tool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVLayoutView_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVLayoutTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVChannelProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Previews_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Factories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Factories;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVLayoutView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelProperties_MetaData), NewProp_UVChannelProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutTool, BasicProperties), Z_Construct_UClass_UUVLayoutProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicProperties_MetaData), NewProp_BasicProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutTool, MaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSettings_MetaData), NewProp_MaterialSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Previews_MetaData), NewProp_Previews_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutTool, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factories_MetaData), NewProp_Factories_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVLayoutView = { "UVLayoutView", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUVLayoutTool, UVLayoutView), Z_Construct_UClass_UUVLayoutPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVLayoutView_MetaData), NewProp_UVLayoutView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVChannelProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_BasicProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_MaterialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Previews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_Factories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutTool_Statics::NewProp_UVLayoutView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUVLayoutTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUVLayoutTool_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractiveToolManageGeometrySelectionAPI_NoRegister, (int32)VTABLE_OFFSET(UUVLayoutTool, IInteractiveToolManageGeometrySelectionAPI), false },  // 148893895
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutTool_Statics::ClassParams = {
	&UUVLayoutTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUVLayoutTool_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UUVLayoutTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUVLayoutTool()
{
	if (!Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton, Z_Construct_UClass_UUVLayoutTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUVLayoutTool.OuterSingleton;
}
template<> MESHMODELINGTOOLS_API UClass* StaticClass<UUVLayoutTool>()
{
	return UUVLayoutTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutTool);
UUVLayoutTool::~UUVLayoutTool() {}
// End Class UUVLayoutTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUVLayoutToolBuilder, UUVLayoutToolBuilder::StaticClass, TEXT("UUVLayoutToolBuilder"), &Z_Registration_Info_UClass_UUVLayoutToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutToolBuilder), 2554016748U) },
		{ Z_Construct_UClass_UUVLayoutTool, UUVLayoutTool::StaticClass, TEXT("UUVLayoutTool"), &Z_Registration_Info_UClass_UUVLayoutTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutTool), 2815950984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_2925226199(TEXT("/Script/MeshModelingTools"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVLayoutTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
