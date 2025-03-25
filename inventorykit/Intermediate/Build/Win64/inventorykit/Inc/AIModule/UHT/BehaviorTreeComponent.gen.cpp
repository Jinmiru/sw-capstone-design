// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBehaviorTreeComponent Function AddCooldownTagDuration
struct Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics
{
	struct BehaviorTreeComponent_eventAddCooldownTagDuration_Parms
	{
		FGameplayTag CooldownTag;
		float CooldownDuration;
		bool bAddToExistingDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** add to the cooldown tag's duration */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "add to the cooldown tag's duration" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static void NewProp_bAddToExistingDuration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
{
	((BehaviorTreeComponent_eventAddCooldownTagDuration_Parms*)Obj)->bAddToExistingDuration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "AddCooldownTagDuration", nullptr, nullptr, Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::BehaviorTreeComponent_eventAddCooldownTagDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviorTreeComponent::execAddCooldownTagDuration)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CooldownDuration);
	P_GET_UBOOL(Z_Param_bAddToExistingDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCooldownTagDuration(Z_Param_CooldownTag,Z_Param_CooldownDuration,Z_Param_bAddToExistingDuration);
	P_NATIVE_END;
}
// End Class UBehaviorTreeComponent Function AddCooldownTagDuration

// Begin Class UBehaviorTreeComponent Function GetTagCooldownEndTime
struct Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics
{
	struct BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms
	{
		FGameplayTag CooldownTag;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** @return the cooldown tag end time, 0.0f if CooldownTag is not found */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "@return the cooldown tag end time, 0.0f if CooldownTag is not found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_CooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "GetTagCooldownEndTime", nullptr, nullptr, Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviorTreeComponent::execGetTagCooldownEndTime)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetTagCooldownEndTime(Z_Param_CooldownTag);
	P_NATIVE_END;
}
// End Class UBehaviorTreeComponent Function GetTagCooldownEndTime

// Begin Class UBehaviorTreeComponent Function SetDynamicSubtree
struct Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics
{
	struct BehaviorTreeComponent_eventSetDynamicSubtree_Parms
	{
		FGameplayTag InjectTag;
		UBehaviorTree* BehaviorAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** assign subtree to RunBehaviorDynamic task specified by tag. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "assign subtree to RunBehaviorDynamic task specified by tag." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InjectTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_InjectTag = { "InjectTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, InjectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_BehaviorAsset = { "BehaviorAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_InjectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_BehaviorAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "SetDynamicSubtree", nullptr, nullptr, Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::BehaviorTreeComponent_eventSetDynamicSubtree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::BehaviorTreeComponent_eventSetDynamicSubtree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviorTreeComponent::execSetDynamicSubtree)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InjectTag);
	P_GET_OBJECT(UBehaviorTree,Z_Param_BehaviorAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamicSubtree(Z_Param_InjectTag,Z_Param_BehaviorAsset);
	P_NATIVE_END;
}
// End Class UBehaviorTreeComponent Function SetDynamicSubtree

// Begin Class UBehaviorTreeComponent
void UBehaviorTreeComponent::StaticRegisterNativesUBehaviorTreeComponent()
{
	UClass* Class = UBehaviorTreeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCooldownTagDuration", &UBehaviorTreeComponent::execAddCooldownTagDuration },
		{ "GetTagCooldownEndTime", &UBehaviorTreeComponent::execGetTagCooldownEndTime },
		{ "SetDynamicSubtree", &UBehaviorTreeComponent::execSetDynamicSubtree },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeComponent);
UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister()
{
	return UBehaviorTreeComponent::StaticClass();
}
struct Z_Construct_UClass_UBehaviorTreeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BehaviorTree/BehaviorTreeComponent.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstances_MetaData[] = {
		{ "Comment", "/** instanced nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "instanced nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** data asset defining the tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "data asset defining the tree" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBehaviorTreeAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration, "AddCooldownTagDuration" }, // 3751402409
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime, "GetTagCooldownEndTime" }, // 3099655397
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree, "SetDynamicSubtree" }, // 1234793369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_Inner = { "NodeInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances = { "NodeInstances", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeComponent, NodeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeInstances_MetaData), NewProp_NodeInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset = { "DefaultBehaviorTreeAsset", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviorTreeComponent, DefaultBehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBehaviorTreeAsset_MetaData), NewProp_DefaultBehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviorTreeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBrainComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::ClassParams = {
	&UBehaviorTreeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviorTreeComponent()
{
	if (!Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton, Z_Construct_UClass_UBehaviorTreeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeComponent>()
{
	return UBehaviorTreeComponent::StaticClass();
}
UBehaviorTreeComponent::~UBehaviorTreeComponent() {}
// End Class UBehaviorTreeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeComponent, UBehaviorTreeComponent::StaticClass, TEXT("UBehaviorTreeComponent"), &Z_Registration_Info_UClass_UBehaviorTreeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeComponent), 306310985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_3719953636(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
