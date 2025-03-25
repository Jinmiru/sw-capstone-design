// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavGraph/NavigationGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraphNode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraphNode();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class ANavigationGraphNode
void ANavigationGraphNode::StaticRegisterNativesANavigationGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationGraphNode);
UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister()
{
	return ANavigationGraphNode::StaticClass();
}
struct Z_Construct_UClass_ANavigationGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NavGraph/NavigationGraphNode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANavigationGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationGraphNode_Statics::ClassParams = {
	&ANavigationGraphNode::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigationGraphNode()
{
	if (!Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton, Z_Construct_UClass_ANavigationGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationGraphNode>()
{
	return ANavigationGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationGraphNode);
ANavigationGraphNode::~ANavigationGraphNode() {}
// End Class ANavigationGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationGraphNode, ANavigationGraphNode::StaticClass, TEXT("ANavigationGraphNode"), &Z_Registration_Info_UClass_ANavigationGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationGraphNode), 33939795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_1465100294(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
