// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/BaseTools/MultiSelectionMeshEditingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiSelectionMeshEditingTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UMultiSelectionMeshEditingToolBuilder
void UMultiSelectionMeshEditingToolBuilder::StaticRegisterNativesUMultiSelectionMeshEditingToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiSelectionMeshEditingToolBuilder);
UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_NoRegister()
{
	return UMultiSelectionMeshEditingToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMultiSelectionMeshEditingToolBuilder is a base tool builder for multi\n * selection tools that define a common set of ToolTarget interfaces required\n * for editing meshes.\n */" },
		{ "IncludePath", "BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ToolTip", "UMultiSelectionMeshEditingToolBuilder is a base tool builder for multi\nselection tools that define a common set of ToolTarget interfaces required\nfor editing meshes." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiSelectionMeshEditingToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::ClassParams = {
	&UMultiSelectionMeshEditingToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder()
{
	if (!Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.OuterSingleton, Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMultiSelectionMeshEditingToolBuilder>()
{
	return UMultiSelectionMeshEditingToolBuilder::StaticClass();
}
UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiSelectionMeshEditingToolBuilder);
UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder() {}
// End Class UMultiSelectionMeshEditingToolBuilder

// Begin Class UMultiSelectionMeshEditingTool
void UMultiSelectionMeshEditingTool::StaticRegisterNativesUMultiSelectionMeshEditingTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiSelectionMeshEditingTool);
UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool_NoRegister()
{
	return UMultiSelectionMeshEditingTool::StaticClass();
}
struct Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Multi Selection Mesh Editing tool base class.\n */" },
		{ "IncludePath", "BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ToolTip", "Multi Selection Mesh Editing tool base class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/MultiSelectionMeshEditingTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiSelectionMeshEditingTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiSelectionMeshEditingTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::NewProp_TargetWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::ClassParams = {
	&UMultiSelectionMeshEditingTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool()
{
	if (!Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.OuterSingleton, Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMultiSelectionMeshEditingTool>()
{
	return UMultiSelectionMeshEditingTool::StaticClass();
}
UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiSelectionMeshEditingTool);
UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool() {}
// End Class UMultiSelectionMeshEditingTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder, UMultiSelectionMeshEditingToolBuilder::StaticClass, TEXT("UMultiSelectionMeshEditingToolBuilder"), &Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiSelectionMeshEditingToolBuilder), 1508575077U) },
		{ Z_Construct_UClass_UMultiSelectionMeshEditingTool, UMultiSelectionMeshEditingTool::StaticClass, TEXT("UMultiSelectionMeshEditingTool"), &Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiSelectionMeshEditingTool), 651000202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_1896830394(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
