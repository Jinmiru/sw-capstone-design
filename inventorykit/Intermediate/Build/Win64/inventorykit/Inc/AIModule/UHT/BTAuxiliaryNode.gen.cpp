// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTAuxiliaryNode() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode();
AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTAuxiliaryNode
void UBTAuxiliaryNode::StaticRegisterNativesUBTAuxiliaryNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTAuxiliaryNode);
UClass* Z_Construct_UClass_UBTAuxiliaryNode_NoRegister()
{
	return UBTAuxiliaryNode::StaticClass();
}
struct Z_Construct_UClass_UBTAuxiliaryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Auxiliary nodes are supporting nodes, that receive notification about execution flow and can be ticked\n *\n * Because some of them can be instanced for specific AI, following virtual functions are not marked as const:\n *  - OnBecomeRelevant\n *  - OnCeaseRelevant\n *  - TickNode\n *\n * If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\n * Template nodes are shared across all behavior tree components using the same tree asset and must store\n * their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )\n *\n */" },
		{ "IncludePath", "BehaviorTree/BTAuxiliaryNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTAuxiliaryNode.h" },
		{ "ToolTip", "Auxiliary nodes are supporting nodes, that receive notification about execution flow and can be ticked\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - OnBecomeRelevant\n - OnCeaseRelevant\n - TickNode\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTAuxiliaryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTAuxiliaryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTAuxiliaryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTAuxiliaryNode_Statics::ClassParams = {
	&UBTAuxiliaryNode::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTAuxiliaryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTAuxiliaryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTAuxiliaryNode()
{
	if (!Z_Registration_Info_UClass_UBTAuxiliaryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTAuxiliaryNode.OuterSingleton, Z_Construct_UClass_UBTAuxiliaryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTAuxiliaryNode.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTAuxiliaryNode>()
{
	return UBTAuxiliaryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTAuxiliaryNode);
UBTAuxiliaryNode::~UBTAuxiliaryNode() {}
// End Class UBTAuxiliaryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTAuxiliaryNode, UBTAuxiliaryNode::StaticClass, TEXT("UBTAuxiliaryNode"), &Z_Registration_Info_UClass_UBTAuxiliaryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTAuxiliaryNode), 4157127455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_3342174838(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
