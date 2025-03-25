// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Engine/Public/Dataflow/DataflowEdNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowEdNode() {}

// Begin Cross Module References
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowEdNode();
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowEdNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References

// Begin Class UDataflowEdNode
void UDataflowEdNode::StaticRegisterNativesUDataflowEdNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowEdNode);
UClass* Z_Construct_UClass_UDataflowEdNode_NoRegister()
{
	return UDataflowEdNode::StaticClass();
}
struct Z_Construct_UClass_UDataflowEdNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowEdNode.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowEdNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInAssetEditor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowEdNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRenderInAssetEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInAssetEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowEdNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor_SetBit(void* Obj)
{
	((UDataflowEdNode*)Obj)->bRenderInAssetEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor = { "bRenderInAssetEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDataflowEdNode), &Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInAssetEditor_MetaData), NewProp_bRenderInAssetEditor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowEdNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowEdNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataflowEdNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowEdNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowEdNode_Statics::ClassParams = {
	&UDataflowEdNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataflowEdNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowEdNode_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowEdNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataflowEdNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataflowEdNode()
{
	if (!Z_Registration_Info_UClass_UDataflowEdNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowEdNode.OuterSingleton, Z_Construct_UClass_UDataflowEdNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataflowEdNode.OuterSingleton;
}
template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowEdNode>()
{
	return UDataflowEdNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowEdNode);
UDataflowEdNode::~UDataflowEdNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowEdNode)
// End Class UDataflowEdNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowEdNode, UDataflowEdNode::StaticClass, TEXT("UDataflowEdNode"), &Z_Registration_Info_UClass_UDataflowEdNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowEdNode), 3844946705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_468738175(TEXT("/Script/DataflowEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
