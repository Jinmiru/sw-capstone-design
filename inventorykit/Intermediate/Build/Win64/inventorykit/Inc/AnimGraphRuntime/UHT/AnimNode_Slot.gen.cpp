// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Slot() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_Slot
static_assert(std::is_polymorphic<FAnimNode_Slot>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Slot cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Slot;
class UScriptStruct* FAnimNode_Slot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Slot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Slot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Slot, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Slot"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Slot.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Slot>()
{
	return FAnimNode_Slot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Slot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// An animation slot node normally acts as a passthru, but a montage or PlaySlotAnimation call from\n// game code can cause an animation to blend in and be played on the slot temporarily, overriding the\n// Source input.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "An animation slot node normally acts as a passthru, but a montage or PlaySlotAnimation call from\ngame code can cause an animation to blend in and be played on the slot temporarily, overriding the\nSource input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// The source input, passed thru to the output unless a montage or slot animation is currently playing\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "The source input, passed thru to the output unless a montage or slot animation is currently playing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The name of this slot, exposed to gameplay code, etc...\n" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "The name of this slot, exposed to gameplay code, etc..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdateSourcePose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Whether we should continue to update the source pose regardless of whether it would be used.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Slot.h" },
		{ "ToolTip", "Whether we should continue to update the source pose regardless of whether it would be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static void NewProp_bAlwaysUpdateSourcePose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdateSourcePose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Slot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Slot, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Slot, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_SetBit(void* Obj)
{
	((FAnimNode_Slot*)Obj)->bAlwaysUpdateSourcePose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose = { "bAlwaysUpdateSourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_Slot), &Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysUpdateSourcePose_MetaData), NewProp_bAlwaysUpdateSourcePose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewProp_bAlwaysUpdateSourcePose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_Slot",
	Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::PropPointers),
	sizeof(FAnimNode_Slot),
	alignof(FAnimNode_Slot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Slot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Slot.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Slot.InnerSingleton;
}
// End ScriptStruct FAnimNode_Slot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_Slot::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Slot_Statics::NewStructOps, TEXT("AnimNode_Slot"), &Z_Registration_Info_UScriptStruct_AnimNode_Slot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Slot), 2525534854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_3878306174(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Slot_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
