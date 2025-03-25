// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceGraphBase() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase();
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_BlendSpaceGraphBase
static_assert(std::is_polymorphic<FAnimNode_BlendSpaceGraphBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_BlendSpaceGraphBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase;
class UScriptStruct* FAnimNode_BlendSpaceGraphBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceGraphBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpaceGraphBase>()
{
	return FAnimNode_BlendSpaceGraphBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Allows multiple animations to be blended between based on input parameters\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Coordinates" },
		{ "Comment", "// The X coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The X coordinate to sample in the blendspace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Coordinates" },
		{ "Comment", "// The Y coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Y coordinate to sample in the blendspace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sync" },
		{ "Comment", "// The group name that we synchronize with (NAME_None if it is not part of any group). Note that\n// this is the name of the group used to sync the output of this node - it will not force\n// syncing of animations contained by it. Animations inside this Blend Space have their own\n// options for syncing.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The group name that we synchronize with (NAME_None if it is not part of any group). Note that\nthis is the name of the group used to sync the output of this node - it will not force\nsyncing of animations contained by it. Animations inside this Blend Space have their own\noptions for syncing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sync" },
		{ "Comment", "// The role this Blend Space can assume within the group (ignored if GroupName is not set). Note\n// that this is the role of the output of this node, not of animations contained by it.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The role this Blend Space can assume within the group (ignored if GroupName is not set). Note\nthat this is the role of the output of this node, not of animations contained by it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[] = {
		{ "Comment", "// The internal blendspace asset to play\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The internal blendspace asset to play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplePoseLinks_MetaData[] = {
		{ "Comment", "// Pose links for each sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Pose links for each sample in the blendspace" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePoseLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePoseLinks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceGraphBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupRole_MetaData), NewProp_GroupRole_MetaData) }; // 2417928914
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpace_MetaData), NewProp_BlendSpace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks_Inner = { "SamplePoseLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(0, nullptr) }; // 1074011079
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks = { "SamplePoseLinks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, SamplePoseLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplePoseLinks_MetaData), NewProp_SamplePoseLinks_MetaData) }; // 1074011079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_BlendSpaceGraphBase",
	Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::PropPointers),
	sizeof(FAnimNode_BlendSpaceGraphBase),
	alignof(FAnimNode_BlendSpaceGraphBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendSpaceGraphBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_BlendSpaceGraphBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewStructOps, TEXT("AnimNode_BlendSpaceGraphBase"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpaceGraphBase), 772563168U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_3978125975(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
