// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_UseCachedPose() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_UseCachedPose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_UseCachedPose
static_assert(std::is_polymorphic<FAnimNode_UseCachedPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_UseCachedPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose;
class UScriptStruct* FAnimNode_UseCachedPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_UseCachedPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_UseCachedPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_UseCachedPose>()
{
	return FAnimNode_UseCachedPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_UseCachedPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkToCachingNode_MetaData[] = {
		{ "Comment", "// Note: This link is intentionally not public; it's wired up during compilation\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_UseCachedPose.h" },
		{ "ToolTip", "Note: This link is intentionally not public; it's wired up during compilation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachePoseName_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** Intentionally not exposed, set by AnimBlueprintCompiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_UseCachedPose.h" },
		{ "ToolTip", "Intentionally not exposed, set by AnimBlueprintCompiler" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkToCachingNode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CachePoseName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_UseCachedPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::NewProp_LinkToCachingNode = { "LinkToCachingNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_UseCachedPose, LinkToCachingNode), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkToCachingNode_MetaData), NewProp_LinkToCachingNode_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::NewProp_CachePoseName = { "CachePoseName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_UseCachedPose, CachePoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachePoseName_MetaData), NewProp_CachePoseName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::NewProp_LinkToCachingNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::NewProp_CachePoseName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_UseCachedPose",
	Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::PropPointers),
	sizeof(FAnimNode_UseCachedPose),
	alignof(FAnimNode_UseCachedPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_UseCachedPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_UseCachedPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_UseCachedPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_UseCachedPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_UseCachedPose_Statics::NewStructOps, TEXT("AnimNode_UseCachedPose"), &Z_Registration_Info_UScriptStruct_AnimNode_UseCachedPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_UseCachedPose), 442368249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_UseCachedPose_h_1924299674(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_UseCachedPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_UseCachedPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
