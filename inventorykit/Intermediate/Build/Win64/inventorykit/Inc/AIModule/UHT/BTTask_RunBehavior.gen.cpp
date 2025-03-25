// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunBehavior() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehavior();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehavior_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_RunBehavior
void UBTTask_RunBehavior::StaticRegisterNativesUBTTask_RunBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RunBehavior);
UClass* Z_Construct_UClass_UBTTask_RunBehavior_NoRegister()
{
	return UBTTask_RunBehavior::StaticClass();
}
struct Z_Construct_UClass_UBTTask_RunBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * RunBehavior task allows pushing subtrees on execution stack.\n * Subtree asset can't be changed in runtime! \n *\n * This limitation is caused by support for subtree's root level decorators,\n * which are injected into parent tree, and structure of running tree\n * cannot be modified in runtime (see: BTNode: ExecutionIndex, MemoryOffset)\n *\n * Use RunBehaviorDynamic task for subtrees that need to be changed in runtime.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ToolTip", "RunBehavior task allows pushing subtrees on execution stack.\nSubtree asset can't be changed in runtime!\n\nThis limitation is caused by support for subtree's root level decorators,\nwhich are injected into parent tree, and structure of running tree\ncannot be modified in runtime (see: BTNode: ExecutionIndex, MemoryOffset)\n\nUse RunBehaviorDynamic task for subtrees that need to be changed in runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorAsset_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** behavior to run */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ToolTip", "behavior to run" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset = { "BehaviorAsset", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_RunBehavior, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorAsset_MetaData), NewProp_BehaviorAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_RunBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunBehavior_Statics::ClassParams = {
	&UBTTask_RunBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_RunBehavior()
{
	if (!Z_Registration_Info_UClass_UBTTask_RunBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RunBehavior.OuterSingleton, Z_Construct_UClass_UBTTask_RunBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_RunBehavior.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_RunBehavior>()
{
	return UBTTask_RunBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunBehavior);
UBTTask_RunBehavior::~UBTTask_RunBehavior() {}
// End Class UBTTask_RunBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RunBehavior, UBTTask_RunBehavior::StaticClass, TEXT("UBTTask_RunBehavior"), &Z_Registration_Info_UClass_UBTTask_RunBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RunBehavior), 3369761453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_939700011(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_RunBehavior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
