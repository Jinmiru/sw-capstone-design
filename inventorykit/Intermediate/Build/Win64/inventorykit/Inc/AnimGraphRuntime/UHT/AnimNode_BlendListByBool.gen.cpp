// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByBool() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_BlendListByBool
static_assert(std::is_polymorphic<FAnimNode_BlendListByBool>() == std::is_polymorphic<FAnimNode_BlendListBase>(), "USTRUCT FAnimNode_BlendListByBool cannot be polymorphic unless super FAnimNode_BlendListBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool;
class UScriptStruct* FAnimNode_BlendListByBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByBool"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListByBool>()
{
	return FAnimNode_BlendListByBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This node is effectively a 'branch', picking one of two input poses based on an input Boolean value\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
		{ "ToolTip", "This node is effectively a 'branch', picking one of two input poses based on an input Boolean value" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActiveValue_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// Which input should be connected to the output?\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Which input should be connected to the output?" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bActiveValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_SetBit(void* Obj)
{
	((FAnimNode_BlendListByBool*)Obj)->bActiveValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue = { "bActiveValue", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_BlendListByBool), &Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActiveValue_MetaData), NewProp_bActiveValue_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
	&NewStructOps,
	"AnimNode_BlendListByBool",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers), 0),
	sizeof(FAnimNode_BlendListByBool),
	alignof(FAnimNode_BlendListByBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendListByBool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_BlendListByBool::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewStructOps, TEXT("AnimNode_BlendListByBool"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendListByBool), 2617314342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_648872026(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
