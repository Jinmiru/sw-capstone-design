// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTree() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBTDecoratorLogic();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBehaviorTree
void UBehaviorTree::StaticRegisterNativesUBehaviorTree()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTree);
UClass* Z_Construct_UClass_UBehaviorTree_NoRegister()
{
	return UBehaviorTree::StaticClass();
}
struct Z_Construct_UClass_UBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/BehaviorTree.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** root node of loaded tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "root node of loaded tree" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTGraph_MetaData[] = {
		{ "Comment", "/** Graph for Behavior Tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "Graph for Behavior Tree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastEditedDocuments_MetaData[] = {
		{ "Comment", "/** Info about the graphs we last edited */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "Info about the graphs we last edited" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[] = {
		{ "Comment", "/** blackboard asset for this tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "blackboard asset for this tree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootDecorators_MetaData[] = {
		{ "Comment", "/** root level decorators, used by subtrees */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "root level decorators, used by subtrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootDecoratorOps_MetaData[] = {
		{ "Comment", "/** logic operators for root level decorators, used by subtrees  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTree.h" },
		{ "ToolTip", "logic operators for root level decorators, used by subtrees" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTGraph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastEditedDocuments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastEditedDocuments;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootDecorators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootDecorators;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootDecoratorOps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootDecoratorOps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTree, RootNode), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNode_MetaData), NewProp_RootNode_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph = { "BTGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTree, BTGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTGraph_MetaData), NewProp_BTGraph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_Inner = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(0, nullptr) }; // 1045714291
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments = { "LastEditedDocuments", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTree, LastEditedDocuments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastEditedDocuments_MetaData), NewProp_LastEditedDocuments_MetaData) }; // 1045714291
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTree, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardAsset_MetaData), NewProp_BlackboardAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_Inner = { "RootDecorators", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBTDecorator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators = { "RootDecorators", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTree, RootDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootDecorators_MetaData), NewProp_RootDecorators_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_Inner = { "RootDecoratorOps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBTDecoratorLogic, METADATA_PARAMS(0, nullptr) }; // 2642397667
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps = { "RootDecoratorOps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTree, RootDecoratorOps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootDecoratorOps_MetaData), NewProp_RootDecoratorOps_MetaData) }; // 2642397667
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootNode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BTGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_LastEditedDocuments,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_BlackboardAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTree_Statics::NewProp_RootDecoratorOps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviorTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBehaviorTree_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBlackboardAssetProvider_NoRegister, (int32)VTABLE_OFFSET(UBehaviorTree, IBlackboardAssetProvider), false },  // 4044292576
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTree_Statics::ClassParams = {
	&UBehaviorTree::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviorTree_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviorTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviorTree()
{
	if (!Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton, Z_Construct_UClass_UBehaviorTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviorTree.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBehaviorTree>()
{
	return UBehaviorTree::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTree);
UBehaviorTree::~UBehaviorTree() {}
// End Class UBehaviorTree

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTree, UBehaviorTree::StaticClass, TEXT("UBehaviorTree"), &Z_Registration_Info_UClass_UBehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTree), 1255169474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_2079045186(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
