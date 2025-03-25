// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SaveCachedPose() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_SaveCachedPose
static_assert(std::is_polymorphic<FAnimNode_SaveCachedPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_SaveCachedPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose;
class UScriptStruct* FAnimNode_SaveCachedPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SaveCachedPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SaveCachedPose>()
{
	return FAnimNode_SaveCachedPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace UE::Anim\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SaveCachedPose.h" },
		{ "ToolTip", "namespace UE::Anim" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SaveCachedPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachePoseName_MetaData[] = {
		{ "Comment", "/** Intentionally not exposed, set by AnimBlueprintCompiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SaveCachedPose.h" },
		{ "ToolTip", "Intentionally not exposed, set by AnimBlueprintCompiler" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CachePoseName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SaveCachedPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SaveCachedPose, Pose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_CachePoseName = { "CachePoseName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SaveCachedPose, CachePoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachePoseName_MetaData), NewProp_CachePoseName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_CachePoseName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_SaveCachedPose",
	Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::PropPointers),
	sizeof(FAnimNode_SaveCachedPose),
	alignof(FAnimNode_SaveCachedPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_SaveCachedPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SaveCachedPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_SaveCachedPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewStructOps, TEXT("AnimNode_SaveCachedPose"), &Z_Registration_Info_UScriptStruct_AnimNode_SaveCachedPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SaveCachedPose), 354905500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SaveCachedPose_h_3427357155(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SaveCachedPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_SaveCachedPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
