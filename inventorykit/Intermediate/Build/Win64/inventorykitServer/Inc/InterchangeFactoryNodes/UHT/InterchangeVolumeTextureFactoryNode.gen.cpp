// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeVolumeTextureFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeVolumeTextureFactoryNode() {}

// Begin Cross Module References
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeVolumeTextureFactoryNode
void UInterchangeVolumeTextureFactoryNode::StaticRegisterNativesUInterchangeVolumeTextureFactoryNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeVolumeTextureFactoryNode);
UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_NoRegister()
{
	return UInterchangeVolumeTextureFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeVolumeTextureFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVolumeTextureFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeVolumeTextureFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::ClassParams = {
	&UInterchangeVolumeTextureFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeVolumeTextureFactoryNode>()
{
	return UInterchangeVolumeTextureFactoryNode::StaticClass();
}
UInterchangeVolumeTextureFactoryNode::UInterchangeVolumeTextureFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeVolumeTextureFactoryNode);
UInterchangeVolumeTextureFactoryNode::~UInterchangeVolumeTextureFactoryNode() {}
// End Class UInterchangeVolumeTextureFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode, UInterchangeVolumeTextureFactoryNode::StaticClass, TEXT("UInterchangeVolumeTextureFactoryNode"), &Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeVolumeTextureFactoryNode), 1069146932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_4173678445(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
