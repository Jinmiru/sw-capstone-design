// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_MultiWayBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MultiWayBlend() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_MultiWayBlend
static_assert(std::is_polymorphic<FAnimNode_MultiWayBlend>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_MultiWayBlend cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend;
class UScriptStruct* FAnimNode_MultiWayBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MultiWayBlend"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MultiWayBlend>()
{
	return FAnimNode_MultiWayBlend::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This represents a baked transition\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
		{ "ToolTip", "This represents a baked transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredAlphas_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdditiveNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredAlphas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DesiredAlphas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static void NewProp_bAdditiveNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditiveNode;
	static void NewProp_bNormalizeAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MultiWayBlend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(0, nullptr) }; // 1074011079
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MultiWayBlend, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poses_MetaData), NewProp_Poses_MetaData) }; // 1074011079
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_Inner = { "DesiredAlphas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas = { "DesiredAlphas", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MultiWayBlend, DesiredAlphas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredAlphas_MetaData), NewProp_DesiredAlphas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MultiWayBlend, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
void Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_SetBit(void* Obj)
{
	((FAnimNode_MultiWayBlend*)Obj)->bAdditiveNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode = { "bAdditiveNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_MultiWayBlend), &Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdditiveNode_MetaData), NewProp_bAdditiveNode_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_SetBit(void* Obj)
{
	((FAnimNode_MultiWayBlend*)Obj)->bNormalizeAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha = { "bNormalizeAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_MultiWayBlend), &Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeAlpha_MetaData), NewProp_bNormalizeAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_MultiWayBlend",
	Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers),
	sizeof(FAnimNode_MultiWayBlend),
	alignof(FAnimNode_MultiWayBlend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.InnerSingleton;
}
// End ScriptStruct FAnimNode_MultiWayBlend

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_MultiWayBlend::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewStructOps, TEXT("AnimNode_MultiWayBlend"), &Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MultiWayBlend), 1119895943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_1491795444(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
