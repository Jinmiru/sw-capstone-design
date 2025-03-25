// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeTextureCubeArrayNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureCubeArrayNode() {}

// Begin Cross Module References
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeTextureCubeArrayNode
void UInterchangeTextureCubeArrayNode::StaticRegisterNativesUInterchangeTextureCubeArrayNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureCubeArrayNode);
UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister()
{
	return UInterchangeTextureCubeArrayNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTextureCubeArrayNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureCubeArrayNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureCubeArrayNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::ClassParams = {
	&UInterchangeTextureCubeArrayNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTextureCubeArrayNode>()
{
	return UInterchangeTextureCubeArrayNode::StaticClass();
}
UInterchangeTextureCubeArrayNode::UInterchangeTextureCubeArrayNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureCubeArrayNode);
UInterchangeTextureCubeArrayNode::~UInterchangeTextureCubeArrayNode() {}
// End Class UInterchangeTextureCubeArrayNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureCubeArrayNode, UInterchangeTextureCubeArrayNode::StaticClass, TEXT("UInterchangeTextureCubeArrayNode"), &Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureCubeArrayNode), 3513015338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_796514602(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
