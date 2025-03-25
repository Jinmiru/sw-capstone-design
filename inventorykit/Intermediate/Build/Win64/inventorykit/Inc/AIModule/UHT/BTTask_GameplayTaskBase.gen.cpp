// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_GameplayTaskBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTTask_GameplayTaskBase
void UBTTask_GameplayTaskBase::StaticRegisterNativesUBTTask_GameplayTaskBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_GameplayTaskBase);
UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister()
{
	return UBTTask_GameplayTaskBase::StaticClass();
}
struct Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for managing gameplay tasks\n * Since AITask doesn't have any kind of success/failed results, default implemenation will only return EBTNode::Succeeded\n *\n * In your ExecuteTask:\n * - use NewBTAITask() helper to create task\n * - initialize task with values if needed\n * - use StartGameplayTask() helper to execute and get node result\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
		{ "ToolTip", "Base class for managing gameplay tasks\nSince AITask doesn't have any kind of success/failed results, default implemenation will only return EBTNode::Succeeded\n\nIn your ExecuteTask:\n- use NewBTAITask() helper to create task\n- initialize task with values if needed\n- use StartGameplayTask() helper to execute and get node result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForGameplayTask_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** if set, behavior tree task will wait until gameplay tasks finishes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
		{ "ToolTip", "if set, behavior tree task will wait until gameplay tasks finishes" },
	};
#endif // WITH_METADATA
	static void NewProp_bWaitForGameplayTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForGameplayTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_GameplayTaskBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask_SetBit(void* Obj)
{
	((UBTTask_GameplayTaskBase*)Obj)->bWaitForGameplayTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask = { "bWaitForGameplayTask", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTTask_GameplayTaskBase), &Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForGameplayTask_MetaData), NewProp_bWaitForGameplayTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::ClassParams = {
	&UBTTask_GameplayTaskBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase()
{
	if (!Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.OuterSingleton, Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_GameplayTaskBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTTask_GameplayTaskBase>()
{
	return UBTTask_GameplayTaskBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_GameplayTaskBase);
UBTTask_GameplayTaskBase::~UBTTask_GameplayTaskBase() {}
// End Class UBTTask_GameplayTaskBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_GameplayTaskBase, UBTTask_GameplayTaskBase::StaticClass, TEXT("UBTTask_GameplayTaskBase"), &Z_Registration_Info_UClass_UBTTask_GameplayTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_GameplayTaskBase), 3428398908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_388654980(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
