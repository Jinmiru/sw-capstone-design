// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByInt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByInt() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_BlendListByInt
static_assert(std::is_polymorphic<FAnimNode_BlendListByInt>() == std::is_polymorphic<FAnimNode_BlendListBase>(), "USTRUCT FAnimNode_BlendListByInt cannot be polymorphic unless super FAnimNode_BlendListBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt;
class UScriptStruct* FAnimNode_BlendListByInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByInt"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListByInt>()
{
	return FAnimNode_BlendListByInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Blend list node; has many children\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByInt.h" },
		{ "ToolTip", "Blend list node; has many children" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveChildIndex_MetaData[] = {
		{ "Category", "Runtime" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByInt.h" },
		{ "PinShownByDefault", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveChildIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewProp_ActiveChildIndex = { "ActiveChildIndex", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendListByInt, ActiveChildIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveChildIndex_MetaData), NewProp_ActiveChildIndex_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewProp_ActiveChildIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
	&NewStructOps,
	"AnimNode_BlendListByInt",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::PropPointers), 0),
	sizeof(FAnimNode_BlendListByInt),
	alignof(FAnimNode_BlendListByInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendListByInt

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_BlendListByInt::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewStructOps, TEXT("AnimNode_BlendListByInt"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendListByInt), 694457030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_2458512621(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
