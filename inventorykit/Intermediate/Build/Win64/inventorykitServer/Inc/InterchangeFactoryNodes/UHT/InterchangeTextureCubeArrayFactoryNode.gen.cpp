// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeTextureCubeArrayFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureCubeArrayFactoryNode() {}

// Begin Cross Module References
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeTextureCubeArrayFactoryNode
void UInterchangeTextureCubeArrayFactoryNode::StaticRegisterNativesUInterchangeTextureCubeArrayFactoryNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureCubeArrayFactoryNode);
UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_NoRegister()
{
	return UInterchangeTextureCubeArrayFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureCubeArrayFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureCubeArrayFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureCubeArrayFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_Statics::ClassParams = {
	&UInterchangeTextureCubeArrayFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTextureCubeArrayFactoryNode>()
{
	return UInterchangeTextureCubeArrayFactoryNode::StaticClass();
}
UInterchangeTextureCubeArrayFactoryNode::UInterchangeTextureCubeArrayFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureCubeArrayFactoryNode);
UInterchangeTextureCubeArrayFactoryNode::~UInterchangeTextureCubeArrayFactoryNode() {}
// End Class UInterchangeTextureCubeArrayFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeArrayFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode, UInterchangeTextureCubeArrayFactoryNode::StaticClass, TEXT("UInterchangeTextureCubeArrayFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTextureCubeArrayFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureCubeArrayFactoryNode), 3925572656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeArrayFactoryNode_h_4289215197(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeArrayFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeArrayFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
