// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeTextureCubeFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureCubeFactoryNode() {}

// Begin Cross Module References
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_NoRegister();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeTextureCubeFactoryNode
void UInterchangeTextureCubeFactoryNode::StaticRegisterNativesUInterchangeTextureCubeFactoryNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureCubeFactoryNode);
UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_NoRegister()
{
	return UInterchangeTextureCubeFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTextureCubeFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureCubeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureCubeFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::ClassParams = {
	&UInterchangeTextureCubeFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTextureCubeFactoryNode>()
{
	return UInterchangeTextureCubeFactoryNode::StaticClass();
}
UInterchangeTextureCubeFactoryNode::UInterchangeTextureCubeFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureCubeFactoryNode);
UInterchangeTextureCubeFactoryNode::~UInterchangeTextureCubeFactoryNode() {}
// End Class UInterchangeTextureCubeFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureCubeFactoryNode, UInterchangeTextureCubeFactoryNode::StaticClass, TEXT("UInterchangeTextureCubeFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureCubeFactoryNode), 1741541324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_1736576419(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
