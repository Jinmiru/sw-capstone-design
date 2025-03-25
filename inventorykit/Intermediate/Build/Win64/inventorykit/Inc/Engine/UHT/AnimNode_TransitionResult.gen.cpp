// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionResult() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_TransitionResult
static_assert(std::is_polymorphic<FAnimNode_TransitionResult>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_TransitionResult cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult;
class UScriptStruct* FAnimNode_TransitionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_TransitionResult"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_TransitionResult>()
{
	return FAnimNode_TransitionResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Root node of a state machine transition graph\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionResult.h" },
		{ "ToolTip", "Root node of a state machine transition graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionResult.h" },
		{ "PinShownByDefault", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanEnterTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TransitionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_SetBit(void* Obj)
{
	((FAnimNode_TransitionResult*)Obj)->bCanEnterTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition = { "bCanEnterTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_TransitionResult), &Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEnterTransition_MetaData), NewProp_bCanEnterTransition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_TransitionResult",
	Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::PropPointers),
	sizeof(FAnimNode_TransitionResult),
	alignof(FAnimNode_TransitionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.InnerSingleton;
}
// End ScriptStruct FAnimNode_TransitionResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_TransitionResult::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewStructOps, TEXT("AnimNode_TransitionResult"), &Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TransitionResult), 843949049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_446219629(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
