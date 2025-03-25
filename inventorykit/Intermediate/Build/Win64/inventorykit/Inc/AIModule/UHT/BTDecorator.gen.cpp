// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTDecorator
void UBTDecorator::StaticRegisterNativesUBTDecorator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator);
UClass* Z_Construct_UClass_UBTDecorator_NoRegister()
{
	return UBTDecorator::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Decorators are supporting nodes placed on parent-child connection, that receive notification about execution flow and can be ticked\n *\n * Because some of them can be instanced for specific AI, following virtual functions are not marked as const:\n *  - OnNodeActivation\n *  - OnNodeDeactivation\n *  - OnNodeProcessed\n *  - OnBecomeRelevant (from UBTAuxiliaryNode)\n *  - OnCeaseRelevant (from UBTAuxiliaryNode)\n *  - TickNode (from UBTAuxiliaryNode)\n *\n * If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\n * Template nodes are shared across all behavior tree components using the same tree asset and must store\n * their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )\n *\n */" },
		{ "IncludePath", "BehaviorTree/BTDecorator.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTDecorator.h" },
		{ "ToolTip", "Decorators are supporting nodes placed on parent-child connection, that receive notification about execution flow and can be ticked\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - OnNodeActivation\n - OnNodeDeactivation\n - OnNodeProcessed\n - OnBecomeRelevant (from UBTAuxiliaryNode)\n - OnCeaseRelevant (from UBTAuxiliaryNode)\n - TickNode (from UBTAuxiliaryNode)\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInverseCondition_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** if set, condition check result will be inversed */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTDecorator.h" },
		{ "ToolTip", "if set, condition check result will be inversed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowAbortMode_MetaData[] = {
		{ "Category", "FlowControl" },
		{ "Comment", "/** flow controller settings */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTDecorator.h" },
		{ "ToolTip", "flow controller settings" },
	};
#endif // WITH_METADATA
	static void NewProp_bInverseCondition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverseCondition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlowAbortMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition_SetBit(void* Obj)
{
	((UBTDecorator*)Obj)->bInverseCondition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition = { "bInverseCondition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTDecorator), &Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInverseCondition_MetaData), NewProp_bInverseCondition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Statics::NewProp_FlowAbortMode = { "FlowAbortMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator, FlowAbortMode), Z_Construct_UEnum_AIModule_EBTFlowAbortMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowAbortMode_MetaData), NewProp_FlowAbortMode_MetaData) }; // 4145382657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Statics::NewProp_FlowAbortMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTAuxiliaryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Statics::ClassParams = {
	&UBTDecorator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator()
{
	if (!Z_Registration_Info_UClass_UBTDecorator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator.OuterSingleton, Z_Construct_UClass_UBTDecorator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTDecorator>()
{
	return UBTDecorator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator);
UBTDecorator::~UBTDecorator() {}
// End Class UBTDecorator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator, UBTDecorator::StaticClass, TEXT("UBTDecorator"), &Z_Registration_Info_UClass_UBTDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator), 32273435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_1186086996(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTDecorator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
