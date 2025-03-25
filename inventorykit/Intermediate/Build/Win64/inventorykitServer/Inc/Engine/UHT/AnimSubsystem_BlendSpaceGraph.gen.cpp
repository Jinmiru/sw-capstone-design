// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimSubsystem_BlendSpaceGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_BlendSpaceGraph() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimSubsystem_BlendSpaceGraph
static_assert(std::is_polymorphic<FAnimSubsystem_BlendSpaceGraph>() == std::is_polymorphic<FAnimSubsystem>(), "USTRUCT FAnimSubsystem_BlendSpaceGraph cannot be polymorphic unless super FAnimSubsystem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph;
class UScriptStruct* FAnimSubsystem_BlendSpaceGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystem_BlendSpaceGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystem_BlendSpaceGraph>()
{
	return FAnimSubsystem_BlendSpaceGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_BlendSpaceGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpaces_MetaData[] = {
		{ "Comment", "// Any internal blendspaces we host\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_BlendSpaceGraph.h" },
		{ "ToolTip", "Any internal blendspaces we host" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendSpaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendSpaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystem_BlendSpaceGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces_Inner = { "BlendSpaces", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces = { "BlendSpaces", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSubsystem_BlendSpaceGraph, BlendSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendSpaces_MetaData), NewProp_BlendSpaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimSubsystem,
	&NewStructOps,
	"AnimSubsystem_BlendSpaceGraph",
	Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::PropPointers),
	sizeof(FAnimSubsystem_BlendSpaceGraph),
	alignof(FAnimSubsystem_BlendSpaceGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.InnerSingleton;
}
// End ScriptStruct FAnimSubsystem_BlendSpaceGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimSubsystem_BlendSpaceGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewStructOps, TEXT("AnimSubsystem_BlendSpaceGraph"), &Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystem_BlendSpaceGraph), 1686432480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_238913811(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
