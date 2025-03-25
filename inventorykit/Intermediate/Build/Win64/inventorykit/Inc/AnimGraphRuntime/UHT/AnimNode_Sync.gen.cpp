// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Sync.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Sync() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Sync();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_Sync
static_assert(std::is_polymorphic<FAnimNode_Sync>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Sync cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Sync;
class UScriptStruct* FAnimNode_Sync::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Sync.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Sync.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Sync, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Sync"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Sync.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Sync>()
{
	return FAnimNode_Sync::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_Sync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The group name that we synchronize with (NAME_None if it is not part of any group). \n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
		{ "ToolTip", "The group name that we synchronize with (NAME_None if it is not part of any group)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The role this animation can assume within the group (ignored if GroupName is not set)\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Sync.h" },
		{ "ToolTip", "The role this animation can assume within the group (ignored if GroupName is not set)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Sync>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Sync, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Sync, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_Sync, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupRole_MetaData), NewProp_GroupRole_MetaData) }; // 2417928914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewProp_GroupRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_Sync",
	Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::PropPointers),
	sizeof(FAnimNode_Sync),
	alignof(FAnimNode_Sync),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Sync()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Sync.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Sync.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Sync.InnerSingleton;
}
// End ScriptStruct FAnimNode_Sync

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_Sync::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Sync_Statics::NewStructOps, TEXT("AnimNode_Sync"), &Z_Registration_Info_UScriptStruct_AnimNode_Sync, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Sync), 1088258916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_2172421756(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_Sync_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
