// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RandomPlayer.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RandomPlayer() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FRandomPlayerSequenceEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry;
class UScriptStruct* FRandomPlayerSequenceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RandomPlayerSequenceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRandomPlayerSequenceEntry>()
{
	return FRandomPlayerSequenceEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** The random player node holds a list of sequences and parameter ranges which will be played continuously\n  * In a random order. If shuffle mode is enabled then each entry will be played once before repeating any\n  */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "The random player node holds a list of sequences and parameter ranges which will be played continuously\nIn a random order. If shuffle mode is enabled then each entry will be played once before repeating any" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sequence to play when this entry is picked */" },
		{ "DisallowedClasses", "/Script/Engine.AnimMontage" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Sequence to play when this entry is picked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When not in shuffle mode, this is the chance this entry will play (normalized against all other sample chances) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "When not in shuffle mode, this is the chance this entry will play (normalized against all other sample chances)" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum number of times this entry will loop before ending */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum number of times this entry will loop before ending" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of times this entry will loop before ending */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum number of times this entry will loop before ending" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum playrate for this entry */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum playrate for this entry" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum playrate for this entry */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum playrate for this entry" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Blending properties used when this entry is blending in ontop of another entry */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Blending properties used when this entry is blending in ontop of another entry" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToPlay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLoopCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLoopCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomPlayerSequenceEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomPlayerSequenceEntry, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay = { "ChanceToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomPlayerSequenceEntry, ChanceToPlay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceToPlay_MetaData), NewProp_ChanceToPlay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount = { "MinLoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinLoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLoopCount_MetaData), NewProp_MinLoopCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount = { "MaxLoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxLoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLoopCount_MetaData), NewProp_MaxLoopCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate = { "MinPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPlayRate_MetaData), NewProp_MinPlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate = { "MaxPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayRate_MetaData), NewProp_MaxPlayRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomPlayerSequenceEntry, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendIn_MetaData), NewProp_BlendIn_MetaData) }; // 879909083
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	&NewStructOps,
	"RandomPlayerSequenceEntry",
	Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers),
	sizeof(FRandomPlayerSequenceEntry),
	alignof(FRandomPlayerSequenceEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry()
{
	if (!Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.InnerSingleton, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry.InnerSingleton;
}
// End ScriptStruct FRandomPlayerSequenceEntry

// Begin ScriptStruct FAnimNode_RandomPlayer
static_assert(std::is_polymorphic<FAnimNode_RandomPlayer>() == std::is_polymorphic<FAnimNode_AssetPlayerRelevancyBase>(), "USTRUCT FAnimNode_RandomPlayer cannot be polymorphic unless super FAnimNode_AssetPlayerRelevancyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer;
class UScriptStruct* FAnimNode_RandomPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RandomPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RandomPlayer>()
{
	return FAnimNode_RandomPlayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** List of sequences to randomly step through */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "List of sequences to randomly step through" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "Comment", "/** Last encountered blend weight for this node */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Last encountered blend weight for this node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShuffleMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\n\x09  * without visiting each sequence in turn (no repeats). Enabling this will ignore\n\x09  * ChanceToPlay for each entry\n\x09  */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\nwithout visiting each sequence in turn (no repeats). Enabling this will ignore\nChanceToPlay for each entry" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
	static void NewProp_bShuffleMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffleMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RandomPlayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, METADATA_PARAMS(0, nullptr) }; // 3089305383
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RandomPlayer, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3089305383
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
{
	((FAnimNode_RandomPlayer*)Obj)->bIgnoreForRelevancyTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RandomPlayer), &Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreForRelevancyTest_MetaData), NewProp_bIgnoreForRelevancyTest_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RandomPlayer, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeight_MetaData), NewProp_BlendWeight_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit(void* Obj)
{
	((FAnimNode_RandomPlayer*)Obj)->bShuffleMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode = { "bShuffleMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_RandomPlayer), &Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShuffleMode_MetaData), NewProp_bShuffleMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bIgnoreForRelevancyTest,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_BlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase,
	&NewStructOps,
	"AnimNode_RandomPlayer",
	Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers),
	sizeof(FAnimNode_RandomPlayer),
	alignof(FAnimNode_RandomPlayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer.InnerSingleton;
}
// End ScriptStruct FAnimNode_RandomPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRandomPlayerSequenceEntry::StaticStruct, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewStructOps, TEXT("RandomPlayerSequenceEntry"), &Z_Registration_Info_UScriptStruct_RandomPlayerSequenceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRandomPlayerSequenceEntry), 3089305383U) },
		{ FAnimNode_RandomPlayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewStructOps, TEXT("AnimNode_RandomPlayer"), &Z_Registration_Info_UScriptStruct_AnimNode_RandomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RandomPlayer), 190254202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_2402767020(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RandomPlayer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
