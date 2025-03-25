// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendBoneByChannel.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendBoneByChannel() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FBlendBoneByChannelEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry;
class UScriptStruct* FBlendBoneByChannelEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BlendBoneByChannelEntry"));
	}
	return Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FBlendBoneByChannelEntry>()
{
	return FBlendBoneByChannelEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Bone to take Transform from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Bone to take Transform from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Bone to apply Transform to */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Bone to apply Transform to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendTranslation_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Copy Translation from Source to Target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Translation from Source to Target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendRotation_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Copy Rotation from Source to Target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Rotation from Source to Target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendScale_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Copy Scale from Source to Target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Scale from Source to Target" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
	static void NewProp_bBlendTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendTranslation;
	static void NewProp_bBlendRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendRotation;
	static void NewProp_bBlendScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendBoneByChannelEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendBoneByChannelEntry, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBone_MetaData), NewProp_SourceBone_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendBoneByChannelEntry, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBone_MetaData), NewProp_TargetBone_MetaData) }; // 4218265988
void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_SetBit(void* Obj)
{
	((FBlendBoneByChannelEntry*)Obj)->bBlendTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation = { "bBlendTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendTranslation_MetaData), NewProp_bBlendTranslation_MetaData) };
void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_SetBit(void* Obj)
{
	((FBlendBoneByChannelEntry*)Obj)->bBlendRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation = { "bBlendRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendRotation_MetaData), NewProp_bBlendRotation_MetaData) };
void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_SetBit(void* Obj)
{
	((FBlendBoneByChannelEntry*)Obj)->bBlendScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale = { "bBlendScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendScale_MetaData), NewProp_bBlendScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"BlendBoneByChannelEntry",
	Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers),
	sizeof(FBlendBoneByChannelEntry),
	alignof(FBlendBoneByChannelEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry()
{
	if (!Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.InnerSingleton, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry.InnerSingleton;
}
// End ScriptStruct FBlendBoneByChannelEntry

// Begin ScriptStruct FAnimNode_BlendBoneByChannel
static_assert(std::is_polymorphic<FAnimNode_BlendBoneByChannel>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_BlendBoneByChannel cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel;
class UScriptStruct* FAnimNode_BlendBoneByChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendBoneByChannel"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendBoneByChannel>()
{
	return FAnimNode_BlendBoneByChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneDefinitions_MetaData[] = {
		{ "Category", "Blend" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "B" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformsSpace_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Space to convert transforms into prior to copying channels */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Space to convert transforms into prior to copying channels" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneDefinitions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformsSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendBoneByChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, A), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, B), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_Inner = { "BoneDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, METADATA_PARAMS(0, nullptr) }; // 2675321771
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions = { "BoneDefinitions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, BoneDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneDefinitions_MetaData), NewProp_BoneDefinitions_MetaData) }; // 2675321771
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace = { "TransformsSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, TransformsSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformsSpace_MetaData), NewProp_TransformsSpace_MetaData) }; // 385354733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_BlendBoneByChannel",
	Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers),
	sizeof(FAnimNode_BlendBoneByChannel),
	alignof(FAnimNode_BlendBoneByChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendBoneByChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlendBoneByChannelEntry::StaticStruct, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewStructOps, TEXT("BlendBoneByChannelEntry"), &Z_Registration_Info_UScriptStruct_BlendBoneByChannelEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendBoneByChannelEntry), 2675321771U) },
		{ FAnimNode_BlendBoneByChannel::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewStructOps, TEXT("AnimNode_BlendBoneByChannel"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendBoneByChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendBoneByChannel), 339510755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_1891682173(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendBoneByChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
