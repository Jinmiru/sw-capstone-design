// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeTextureBlurNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureBlurNode() {}

// Begin Cross Module References
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureBlurNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeTextureBlurNode
void UInterchangeTextureBlurNode::StaticRegisterNativesUInterchangeTextureBlurNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureBlurNode);
UClass* Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister()
{
	return UInterchangeTextureBlurNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureBlurNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTextureBlurNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureBlurNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureBlurNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureBlurNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTexture2DNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureBlurNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureBlurNode_Statics::ClassParams = {
	&UInterchangeTextureBlurNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureBlurNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureBlurNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureBlurNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureBlurNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureBlurNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureBlurNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureBlurNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTextureBlurNode>()
{
	return UInterchangeTextureBlurNode::StaticClass();
}
UInterchangeTextureBlurNode::UInterchangeTextureBlurNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureBlurNode);
UInterchangeTextureBlurNode::~UInterchangeTextureBlurNode() {}
// End Class UInterchangeTextureBlurNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureBlurNode, UInterchangeTextureBlurNode::StaticClass, TEXT("UInterchangeTextureBlurNode"), &Z_Registration_Info_UClass_UInterchangeTextureBlurNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureBlurNode), 1821087079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_3108780566(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
