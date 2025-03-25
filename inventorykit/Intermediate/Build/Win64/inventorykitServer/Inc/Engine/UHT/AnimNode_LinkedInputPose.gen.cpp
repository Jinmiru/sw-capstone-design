// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_LinkedInputPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedInputPose() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_LinkedInputPose
static_assert(std::is_polymorphic<FAnimNode_LinkedInputPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LinkedInputPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose;
class UScriptStruct* FAnimNode_LinkedInputPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedInputPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedInputPose>()
{
	return FAnimNode_LinkedInputPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** The name of this linked input pose node's pose, used to identify the input of this graph. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The name of this linked input pose node's pose, used to identify the input of this graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Comment", "/** The graph that this linked input pose node is in, filled in by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "ToolTip", "The graph that this linked input pose node is in, filled in by the compiler" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[] = {
		{ "Comment", "/** Input pose, optionally linked dynamically to another graph */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "ToolTip", "Input pose, optionally linked dynamically to another graph" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Graph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedInputPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedInputPose, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedInputPose, Graph), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LinkedInputPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPose_MetaData), NewProp_InputPose_MetaData) }; // 1074011079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_LinkedInputPose",
	Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers),
	sizeof(FAnimNode_LinkedInputPose),
	alignof(FAnimNode_LinkedInputPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_LinkedInputPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_LinkedInputPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewStructOps, TEXT("AnimNode_LinkedInputPose"), &Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LinkedInputPose), 2125121955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_1363253815(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
