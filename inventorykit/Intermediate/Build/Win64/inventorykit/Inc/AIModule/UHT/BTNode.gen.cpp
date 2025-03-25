// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTNode() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTNode
void UBTNode::StaticRegisterNativesUBTNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTNode);
UClass* Z_Construct_UClass_UBTNode_NoRegister()
{
	return UBTNode::StaticClass();
}
struct Z_Construct_UClass_UBTNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** node name */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
		{ "ToolTip", "node name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeAsset_MetaData[] = {
		{ "Comment", "/** source asset */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
		{ "ToolTip", "source asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
		{ "Comment", "/** parent node */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTNode.h" },
		{ "ToolTip", "parent node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTNode_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTNode, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTNode_Statics::NewProp_TreeAsset = { "TreeAsset", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTNode, TreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeAsset_MetaData), NewProp_TreeAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTNode, ParentNode), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTNode_Statics::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTNode_Statics::NewProp_TreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTNode_Statics::NewProp_ParentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBTNode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UBTNode, IGameplayTaskOwnerInterface), false },  // 1243777696
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTNode_Statics::ClassParams = {
	&UBTNode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTNode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTNode()
{
	if (!Z_Registration_Info_UClass_UBTNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTNode.OuterSingleton, Z_Construct_UClass_UBTNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTNode.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTNode>()
{
	return UBTNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTNode);
UBTNode::~UBTNode() {}
// End Class UBTNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTNode, UBTNode::StaticClass, TEXT("UBTNode"), &Z_Registration_Info_UClass_UBTNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTNode), 2855679587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_2948328344(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
