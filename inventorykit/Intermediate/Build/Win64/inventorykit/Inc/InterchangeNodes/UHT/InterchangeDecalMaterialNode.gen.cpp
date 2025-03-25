// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeDecalMaterialNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDecalMaterialNode() {}

// Begin Cross Module References
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDecalMaterialNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDecalMaterialNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderNode();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeDecalMaterialNode
void UInterchangeDecalMaterialNode::StaticRegisterNativesUInterchangeDecalMaterialNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDecalMaterialNode);
UClass* Z_Construct_UClass_UInterchangeDecalMaterialNode_NoRegister()
{
	return UInterchangeDecalMaterialNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeDecalMaterialNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeDecalMaterialNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDecalMaterialNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeShaderNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics::ClassParams = {
	&UInterchangeDecalMaterialNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeDecalMaterialNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.OuterSingleton, Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeDecalMaterialNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeDecalMaterialNode>()
{
	return UInterchangeDecalMaterialNode::StaticClass();
}
UInterchangeDecalMaterialNode::UInterchangeDecalMaterialNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDecalMaterialNode);
UInterchangeDecalMaterialNode::~UInterchangeDecalMaterialNode() {}
// End Class UInterchangeDecalMaterialNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDecalMaterialNode, UInterchangeDecalMaterialNode::StaticClass, TEXT("UInterchangeDecalMaterialNode"), &Z_Registration_Info_UClass_UInterchangeDecalMaterialNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDecalMaterialNode), 275221083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_1123482215(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
