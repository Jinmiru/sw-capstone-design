// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_TwoWayBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TwoWayBlend() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_TwoWayBlend
static_assert(std::is_polymorphic<FAnimNode_TwoWayBlend>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_TwoWayBlend cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend;
class UScriptStruct* FAnimNode_TwoWayBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_TwoWayBlend"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_TwoWayBlend>()
{
	return FAnimNode_TwoWayBlend::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This represents a baked transition\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
		{ "ToolTip", "This represents a baked transition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The data type used to control the alpha blending between the A and B poses. \n\x09\x09Note: Changing this value will disconnect alpha input pins. \n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
		{ "ToolTip", "The data type used to control the alpha blending between the A and B poses.\n              Note: Changing this value will disconnect alpha input pins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The boolean value that controls the alpha blending when the alpha input type is set to 'Bool' */" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The boolean value that controls the alpha blending when the alpha input type is set to 'Bool'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetChildOnActivation_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "/** This reinitializes child pose when re-activated. For example, when active child changes */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
		{ "ToolTip", "This reinitializes child pose when re-activated. For example, when active child changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdateChildren_MetaData[] = {
		{ "Category", "Option" },
		{ "Comment", "/** Always update children, regardless of whether or not that child has weight. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Always update children, regardless of whether or not that child has weight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The float value that controls the alpha blending when the alpha input type is set to 'Float' */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The float value that controls the alpha blending when the alpha input type is set to 'Float'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The animation curve that controls the alpha blending when the alpha input type is set to 'Curve' */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The animation curve that controls the alpha blending when the alpha input type is set to 'Curve'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TwoWayBlend.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
	static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
	static void NewProp_bResetChildOnActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetChildOnActivation;
	static void NewProp_bAlwaysUpdateChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdateChildren;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TwoWayBlend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, A), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, B), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1074011079
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInputType_MetaData), NewProp_AlphaInputType_MetaData) }; // 3333507802
void Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
{
	((FAnimNode_TwoWayBlend*)Obj)->bAlphaBoolEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_TwoWayBlend), &Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlphaBoolEnabled_MetaData), NewProp_bAlphaBoolEnabled_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bResetChildOnActivation_SetBit(void* Obj)
{
	((FAnimNode_TwoWayBlend*)Obj)->bResetChildOnActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bResetChildOnActivation = { "bResetChildOnActivation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_TwoWayBlend), &Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bResetChildOnActivation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetChildOnActivation_MetaData), NewProp_bResetChildOnActivation_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlwaysUpdateChildren_SetBit(void* Obj)
{
	((FAnimNode_TwoWayBlend*)Obj)->bAlwaysUpdateChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlwaysUpdateChildren = { "bAlwaysUpdateChildren", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAnimNode_TwoWayBlend), &Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlwaysUpdateChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysUpdateChildren_MetaData), NewProp_bAlwaysUpdateChildren_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaBoolBlend_MetaData), NewProp_AlphaBoolBlend_MetaData) }; // 3261382999
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, AlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurveName_MetaData), NewProp_AlphaCurveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_TwoWayBlend, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBiasClamp_MetaData), NewProp_AlphaScaleBiasClamp_MetaData) }; // 1905782755
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlphaBoolEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bResetChildOnActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_bAlwaysUpdateChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaBoolBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewProp_AlphaScaleBiasClamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_TwoWayBlend",
	Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::PropPointers),
	sizeof(FAnimNode_TwoWayBlend),
	alignof(FAnimNode_TwoWayBlend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend.InnerSingleton;
}
// End ScriptStruct FAnimNode_TwoWayBlend

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_TwoWayBlend_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_TwoWayBlend::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TwoWayBlend_Statics::NewStructOps, TEXT("AnimNode_TwoWayBlend"), &Z_Registration_Info_UScriptStruct_AnimNode_TwoWayBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TwoWayBlend), 4208218853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_TwoWayBlend_h_3933795548(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_TwoWayBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_TwoWayBlend_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
