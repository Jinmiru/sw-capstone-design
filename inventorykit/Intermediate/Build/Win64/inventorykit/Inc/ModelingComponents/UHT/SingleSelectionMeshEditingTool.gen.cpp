// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/BaseTools/SingleSelectionMeshEditingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleSelectionMeshEditingTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class USingleSelectionMeshEditingToolBuilder
void USingleSelectionMeshEditingToolBuilder::StaticRegisterNativesUSingleSelectionMeshEditingToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleSelectionMeshEditingToolBuilder);
UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_NoRegister()
{
	return USingleSelectionMeshEditingToolBuilder::StaticClass();
}
struct Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleSelectionMeshEditingToolBuilder is a base tool builder for single\n * selection tools that define a common set of ToolTarget interfaces required\n * for editing meshes.\n */" },
		{ "IncludePath", "BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ToolTip", "USingleSelectionMeshEditingToolBuilder is a base tool builder for single\nselection tools that define a common set of ToolTarget interfaces required\nfor editing meshes." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleSelectionMeshEditingToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::ClassParams = {
	&USingleSelectionMeshEditingToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder()
{
	if (!Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.OuterSingleton, Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleSelectionMeshEditingToolBuilder>()
{
	return USingleSelectionMeshEditingToolBuilder::StaticClass();
}
USingleSelectionMeshEditingToolBuilder::USingleSelectionMeshEditingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleSelectionMeshEditingToolBuilder);
USingleSelectionMeshEditingToolBuilder::~USingleSelectionMeshEditingToolBuilder() {}
// End Class USingleSelectionMeshEditingToolBuilder

// Begin Class USingleSelectionMeshEditingTool
void USingleSelectionMeshEditingTool::StaticRegisterNativesUSingleSelectionMeshEditingTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleSelectionMeshEditingTool);
UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool_NoRegister()
{
	return USingleSelectionMeshEditingTool::StaticClass();
}
struct Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Single Selection Mesh Editing tool base class.\n */" },
		{ "IncludePath", "BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ToolTip", "Single Selection Mesh Editing tool base class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/SingleSelectionMeshEditingTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleSelectionMeshEditingTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USingleSelectionMeshEditingTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorld_MetaData), NewProp_TargetWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_TargetWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::ClassParams = {
	&USingleSelectionMeshEditingTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool()
{
	if (!Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.OuterSingleton, Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleSelectionMeshEditingTool>()
{
	return USingleSelectionMeshEditingTool::StaticClass();
}
USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleSelectionMeshEditingTool);
USingleSelectionMeshEditingTool::~USingleSelectionMeshEditingTool() {}
// End Class USingleSelectionMeshEditingTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder, USingleSelectionMeshEditingToolBuilder::StaticClass, TEXT("USingleSelectionMeshEditingToolBuilder"), &Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleSelectionMeshEditingToolBuilder), 3044274659U) },
		{ Z_Construct_UClass_USingleSelectionMeshEditingTool, USingleSelectionMeshEditingTool::StaticClass, TEXT("USingleSelectionMeshEditingTool"), &Z_Registration_Info_UClass_USingleSelectionMeshEditingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleSelectionMeshEditingTool), 191673126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_2412512537(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
