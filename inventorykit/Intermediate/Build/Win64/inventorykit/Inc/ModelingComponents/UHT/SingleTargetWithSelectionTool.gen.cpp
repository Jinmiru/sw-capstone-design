// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/BaseTools/SingleTargetWithSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleTargetWithSelectionTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class USingleTargetWithSelectionToolBuilder
void USingleTargetWithSelectionToolBuilder::StaticRegisterNativesUSingleTargetWithSelectionToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleTargetWithSelectionToolBuilder);
UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_NoRegister()
{
	return USingleTargetWithSelectionToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTools/SingleTargetWithSelectionTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleTargetWithSelectionToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::ClassParams = {
	&USingleTargetWithSelectionToolBuilder::StaticClass,
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
	0x001000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder()
{
	if (!Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_USingleTargetWithSelectionToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleTargetWithSelectionToolBuilder>()
{
	return USingleTargetWithSelectionToolBuilder::StaticClass();
}
USingleTargetWithSelectionToolBuilder::USingleTargetWithSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleTargetWithSelectionToolBuilder);
USingleTargetWithSelectionToolBuilder::~USingleTargetWithSelectionToolBuilder() {}
// End Class USingleTargetWithSelectionToolBuilder

// Begin Class USingleTargetWithSelectionTool
void USingleTargetWithSelectionTool::StaticRegisterNativesUSingleTargetWithSelectionTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleTargetWithSelectionTool);
UClass* Z_Construct_UClass_USingleTargetWithSelectionTool_NoRegister()
{
	return USingleTargetWithSelectionTool::StaticClass();
}
struct Z_Construct_UClass_USingleTargetWithSelectionTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTools/SingleTargetWithSelectionTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySelectionVizProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometrySelectionViz_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/SingleTargetWithSelectionTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometrySelectionVizProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometrySelectionViz;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleTargetWithSelectionTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USingleTargetWithSelectionTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_GeometrySelectionVizProperties = { "GeometrySelectionVizProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USingleTargetWithSelectionTool, GeometrySelectionVizProperties), Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySelectionVizProperties_MetaData), NewProp_GeometrySelectionVizProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_GeometrySelectionViz = { "GeometrySelectionViz", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USingleTargetWithSelectionTool, GeometrySelectionViz), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometrySelectionViz_MetaData), NewProp_GeometrySelectionViz_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_TargetWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_GeometrySelectionVizProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::NewProp_GeometrySelectionViz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::ClassParams = {
	&USingleTargetWithSelectionTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleTargetWithSelectionTool()
{
	if (!Z_Registration_Info_UClass_USingleTargetWithSelectionTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleTargetWithSelectionTool.OuterSingleton, Z_Construct_UClass_USingleTargetWithSelectionTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleTargetWithSelectionTool.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleTargetWithSelectionTool>()
{
	return USingleTargetWithSelectionTool::StaticClass();
}
USingleTargetWithSelectionTool::USingleTargetWithSelectionTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleTargetWithSelectionTool);
USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool() {}
// End Class USingleTargetWithSelectionTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleTargetWithSelectionToolBuilder, USingleTargetWithSelectionToolBuilder::StaticClass, TEXT("USingleTargetWithSelectionToolBuilder"), &Z_Registration_Info_UClass_USingleTargetWithSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleTargetWithSelectionToolBuilder), 2917955921U) },
		{ Z_Construct_UClass_USingleTargetWithSelectionTool, USingleTargetWithSelectionTool::StaticClass, TEXT("USingleTargetWithSelectionTool"), &Z_Registration_Info_UClass_USingleTargetWithSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleTargetWithSelectionTool), 492452861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_2807037755(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleTargetWithSelectionTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
