// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_LinkedAnimGraph.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedAnimGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_LinkedAnimGraph
static_assert(std::is_polymorphic<FAnimNode_LinkedAnimGraph>() == std::is_polymorphic<FAnimNode_CustomProperty>(), "USTRUCT FAnimNode_LinkedAnimGraph cannot be polymorphic unless super FAnimNode_CustomProperty is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph;
class UScriptStruct* FAnimNode_LinkedAnimGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedAnimGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedAnimGraph>()
{
	return FAnimNode_LinkedAnimGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPoses_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Input poses for the node, intentionally not accessible because if there's no input\n\x09 *  nodes in the target class we don't want to show these as pins\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "Input poses for the node, intentionally not accessible because if there's no input\nnodes in the target class we don't want to show these as pins" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPoseNames_MetaData[] = {
		{ "Comment", "/** List of input pose names, 1-1 with pose links about, built by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "List of input pose names, 1-1 with pose links about, built by the compiler" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The class spawned for this linked instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "The class spawned for this linked instance" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingBlendOutProfile_MetaData[] = {
		{ "Comment", "// Optional blend profile to use during inertial blending (pulled from the prior state's blend out)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Optional blend profile to use during inertial blending (pulled from the prior state's blend out)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingBlendInProfile_MetaData[] = {
		{ "Comment", "// Optional blend profile to use during inertial blending (pulled from the new state's blend in)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Optional blend profile to use during inertial blending (pulled from the new state's blend in)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveNotifiesFromLinkedInstances_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether named notifies will be received by this linked instance from other instances (outer or other linked instances) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "Whether named notifies will be received by this linked instance from other instances (outer or other linked instances)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateNotifiesToLinkedInstances_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether named notifies will be propagated from this linked instance to other instances (outer or other linked instances) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedAnimGraph.h" },
		{ "ToolTip", "Whether named notifies will be propagated from this linked instance to other instances (outer or other linked instances)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPoses;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputPoseNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPoseNames;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceClass;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingBlendOutProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingBlendInProfile;
	static void NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveNotifiesFromLinkedInstances;
	static void NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateNotifiesToLinkedInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedAnimGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses_Inner = { "InputPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(0, nullptr) }; // 1074011079
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses = { "InputPoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, InputPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPoses_MetaData), NewProp_InputPoses_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames_Inner = { "InputPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames = { "InputPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, InputPoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPoseNames_MetaData), NewProp_InputPoseNames_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InstanceClass = { "InstanceClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, InstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceClass_MetaData), NewProp_InstanceClass_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, Tag_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_PendingBlendOutProfile = { "PendingBlendOutProfile", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, PendingBlendOutProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingBlendOutProfile_MetaData), NewProp_PendingBlendOutProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_PendingBlendInProfile = { "PendingBlendInProfile", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedAnimGraph, PendingBlendInProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingBlendInProfile_MetaData), NewProp_PendingBlendInProfile_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit(void* Obj)
{
	((FAnimNode_LinkedAnimGraph*)Obj)->bReceiveNotifiesFromLinkedInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances = { "bReceiveNotifiesFromLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_LinkedAnimGraph), &Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceiveNotifiesFromLinkedInstances_MetaData), NewProp_bReceiveNotifiesFromLinkedInstances_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit(void* Obj)
{
	((FAnimNode_LinkedAnimGraph*)Obj)->bPropagateNotifiesToLinkedInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances = { "bPropagateNotifiesToLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_LinkedAnimGraph), &Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateNotifiesToLinkedInstances_MetaData), NewProp_bPropagateNotifiesToLinkedInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InputPoseNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_InstanceClass,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_Tag,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_PendingBlendOutProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_PendingBlendInProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bReceiveNotifiesFromLinkedInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewProp_bPropagateNotifiesToLinkedInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
	&NewStructOps,
	"AnimNode_LinkedAnimGraph",
	Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::PropPointers),
	sizeof(FAnimNode_LinkedAnimGraph),
	alignof(FAnimNode_LinkedAnimGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph.InnerSingleton;
}
// End ScriptStruct FAnimNode_LinkedAnimGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_LinkedAnimGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph_Statics::NewStructOps, TEXT("AnimNode_LinkedAnimGraph"), &Z_Registration_Info_UScriptStruct_AnimNode_LinkedAnimGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LinkedAnimGraph), 4248343641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimGraph_h_1834144248(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedAnimGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
