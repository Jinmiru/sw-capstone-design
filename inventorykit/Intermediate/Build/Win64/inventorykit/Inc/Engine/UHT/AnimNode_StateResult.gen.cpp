// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimNode_StateResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeFunctionRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_StateResult() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeFunctionRef();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_StateResult
static_assert(std::is_polymorphic<FAnimNode_StateResult>() == std::is_polymorphic<FAnimNode_Root>(), "USTRUCT FAnimNode_StateResult cannot be polymorphic unless super FAnimNode_Root is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_StateResult;
class UScriptStruct* FAnimNode_StateResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_StateResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_StateResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_StateResult"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_StateResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_StateResult>()
{
	return FAnimNode_StateResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Root node of an state machine state (sink node).\n// We dont use AnimNode_Root to let us distinguish these nodes in the property list at link time.\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_StateResult.h" },
		{ "ToolTip", "Root node of an state machine state (sink node).\nWe dont use AnimNode_Root to let us distinguish these nodes in the property list at link time." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateIndex_MetaData[] = {
		{ "Comment", "/** The index of the state this node belongs to. Filled in during the owning state machine's compilation. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_StateResult.h" },
		{ "ToolTip", "The index of the state this node belongs to. Filled in during the owning state machine's compilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateEntryFunction_MetaData[] = {
		{ "Comment", "/** The function called on state entry */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_StateResult.h" },
		{ "ToolTip", "The function called on state entry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateFullyBlendedInFunction_MetaData[] = {
		{ "Comment", "/** The function called on state fully blended in */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_StateResult.h" },
		{ "ToolTip", "The function called on state fully blended in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateExitFunction_MetaData[] = {
		{ "Comment", "/** The function called on state exit */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_StateResult.h" },
		{ "ToolTip", "The function called on state exit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateFullyBlendedOutFunction_MetaData[] = {
		{ "Comment", "/** The function called on state fully blended out */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_StateResult.h" },
		{ "ToolTip", "The function called on state fully blended out" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateEntryFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateFullyBlendedInFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateExitFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateFullyBlendedOutFunction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_StateResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateResult, StateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateIndex_MetaData), NewProp_StateIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateEntryFunction = { "StateEntryFunction", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateResult, StateEntryFunction), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateEntryFunction_MetaData), NewProp_StateEntryFunction_MetaData) }; // 3355215329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateFullyBlendedInFunction = { "StateFullyBlendedInFunction", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateResult, StateFullyBlendedInFunction), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateFullyBlendedInFunction_MetaData), NewProp_StateFullyBlendedInFunction_MetaData) }; // 3355215329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateExitFunction = { "StateExitFunction", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateResult, StateExitFunction), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateExitFunction_MetaData), NewProp_StateExitFunction_MetaData) }; // 3355215329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateFullyBlendedOutFunction = { "StateFullyBlendedOutFunction", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_StateResult, StateFullyBlendedOutFunction), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateFullyBlendedOutFunction_MetaData), NewProp_StateFullyBlendedOutFunction_MetaData) }; // 3355215329
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateEntryFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateFullyBlendedInFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateExitFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateFullyBlendedOutFunction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Root,
	&NewStructOps,
	"AnimNode_StateResult",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::PropPointers), 0),
	sizeof(FAnimNode_StateResult),
	alignof(FAnimNode_StateResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateResult()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_StateResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_StateResult.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_StateResult.InnerSingleton;
}
// End ScriptStruct FAnimNode_StateResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNode_StateResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_StateResult::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewStructOps, TEXT("AnimNode_StateResult"), &Z_Registration_Info_UScriptStruct_AnimNode_StateResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_StateResult), 2275463045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNode_StateResult_h_694918426(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNode_StateResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNode_StateResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
