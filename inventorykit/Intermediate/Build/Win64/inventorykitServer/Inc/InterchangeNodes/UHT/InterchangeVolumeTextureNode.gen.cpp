// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeVolumeTextureNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeVolumeTextureNode() {}

// Begin Cross Module References
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeVolumeTextureNode
void UInterchangeVolumeTextureNode::StaticRegisterNativesUInterchangeVolumeTextureNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeVolumeTextureNode);
UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister()
{
	return UInterchangeVolumeTextureNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeVolumeTextureNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVolumeTextureNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeVolumeTextureNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::ClassParams = {
	&UInterchangeVolumeTextureNode::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.OuterSingleton, Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeVolumeTextureNode>()
{
	return UInterchangeVolumeTextureNode::StaticClass();
}
UInterchangeVolumeTextureNode::UInterchangeVolumeTextureNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeVolumeTextureNode);
UInterchangeVolumeTextureNode::~UInterchangeVolumeTextureNode() {}
// End Class UInterchangeVolumeTextureNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeVolumeTextureNode, UInterchangeVolumeTextureNode::StaticClass, TEXT("UInterchangeVolumeTextureNode"), &Z_Registration_Info_UClass_UInterchangeVolumeTextureNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeVolumeTextureNode), 3047306259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_3044066121(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
