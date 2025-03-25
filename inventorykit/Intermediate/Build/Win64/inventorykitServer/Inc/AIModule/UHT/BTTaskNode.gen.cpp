// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskNode() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTaskNode
void UBTTaskNode::StaticRegisterNativesUBTTaskNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTaskNode);
UClass* Z_Construct_UClass_UBTTaskNode_NoRegister()
{
	return UBTTaskNode::StaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Task are leaf nodes of behavior tree, which perform actual actions\n *\n * Because some of them can be instanced for specific AI, following virtual functions are not marked as const:\n *  - ExecuteTask\n *  - AbortTask\n *  - TickTask\n *  - OnMessage\n *\n * If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\n * Template nodes are shared across all behavior tree components using the same tree asset and must store\n * their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )\n *\n */" },
		{ "IncludePath", "BehaviorTree/BTTaskNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "Task are leaf nodes of behavior tree, which perform actual actions\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - ExecuteTask\n - AbortTask\n - TickTask\n - OnMessage\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[] = {
		{ "Comment", "/** service nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "service nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRestartSelf_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** if set, task search will be discarded when this task is selected to execute but is already running */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "if set, task search will be discarded when this task is selected to execute but is already running" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Services_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Services;
	static void NewProp_bIgnoreRestartSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRestartSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTaskNode, Services), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Services_MetaData), NewProp_Services_MetaData) };
void Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_SetBit(void* Obj)
{
	((UBTTaskNode*)Obj)->bIgnoreRestartSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf = { "bIgnoreRestartSelf", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTaskNode), &Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreRestartSelf_MetaData), NewProp_bIgnoreRestartSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTaskNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_Statics::ClassParams = {
	&UBTTaskNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTaskNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode.OuterSingleton, Z_Construct_UClass_UBTTaskNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTaskNode>()
{
	return UBTTaskNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode);
UBTTaskNode::~UBTTaskNode() {}
// End Class UBTTaskNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode, UBTTaskNode::StaticClass, TEXT("UBTTaskNode"), &Z_Registration_Info_UClass_UBTTaskNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode), 3621186799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_3897392047(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
