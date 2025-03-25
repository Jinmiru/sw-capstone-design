// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneSkeletalAnimationSection.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationSection() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSkeletalAnimationParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams;
class UScriptStruct* FMovieSceneSkeletalAnimationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimationParams>()
{
	return FMovieSceneSkeletalAnimationParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AnimSequence,/Script/Engine.AnimComposite,/Script/Engine.AnimStreamable" },
		{ "Category", "Animation" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the beginning of the animation clip for the first loop of play. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip for the first loop of play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The slot name to use for the animation */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The slot name to use for the animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Comment", "/** The weight curve for this animation section */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "The weight curve for this animation section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimNotifiers_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If on will skip sending animation notifies */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on will skip sending animation notifies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceCustomMode_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If on animation sequence will always play when active even if the animation is controlled by a Blueprint or Anim Instance Class*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on animation sequence will always play when active even if the animation is controlled by a Blueprint or Anim Instance Class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapRootBone_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If on the root bone transform will be swapped to the specified root*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "If on the root bone transform will be swapped to the specified root" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MirrorDataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
	static void NewProp_bSkipAnimNotifiers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimNotifiers;
	static void NewProp_bForceCustomMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCustomMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SwapRootBone_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SwapRootBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLoopStartFrameOffset_MetaData), NewProp_FirstLoopStartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrameOffset_MetaData), NewProp_StartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFrameOffset_MetaData), NewProp_EndFrameOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((FMovieSceneSkeletalAnimationParams*)Obj)->bReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorDataTable_MetaData), NewProp_MirrorDataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) }; // 139010471
void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_SetBit(void* Obj)
{
	((FMovieSceneSkeletalAnimationParams*)Obj)->bSkipAnimNotifiers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers = { "bSkipAnimNotifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipAnimNotifiers_MetaData), NewProp_bSkipAnimNotifiers_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_SetBit(void* Obj)
{
	((FMovieSceneSkeletalAnimationParams*)Obj)->bForceCustomMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode = { "bForceCustomMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSkeletalAnimationParams), &Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceCustomMode_MetaData), NewProp_bForceCustomMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone = { "SwapRootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, SwapRootBone), Z_Construct_UEnum_AnimGraphRuntime_ESwapRootBone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapRootBone_MetaData), NewProp_SwapRootBone_MetaData) }; // 398666558
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, StartOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSkeletalAnimationParams, EndOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_FirstLoopStartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_MirrorDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bSkipAnimNotifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_bForceCustomMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_SwapRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewProp_EndOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"MovieSceneSkeletalAnimationParams",
	Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::PropPointers),
	sizeof(FMovieSceneSkeletalAnimationParams),
	alignof(FMovieSceneSkeletalAnimationParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneSkeletalAnimationParams

// Begin Class UMovieSceneSkeletalAnimationSection
void UMovieSceneSkeletalAnimationSection::StaticRegisterNativesUMovieSceneSkeletalAnimationSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSkeletalAnimationSection);
UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister()
{
	return UMovieSceneSkeletalAnimationSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control skeletal animation\n */" },
		{ "IncludePath", "Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Movie scene section that control skeletal animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Location offset applied before the matched offset*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Location offset applied before the matched offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Location offset applied after the matched offset*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Location offset applied after the matched offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchWithPrevious_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchedBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchedLocationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Location offset determined by matching*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Location offset determined by matching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchedRotationOffset_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/* Rotation offset determined by matching*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Rotation offset determined by matching" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchIncludeZHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRotationYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRotationPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchRotationRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSkeleton_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to show the underlying skeleton for this section. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSkeletalAnimationSection.h" },
		{ "ToolTip", "Whether to show the underlying skeleton for this section." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotationOffset;
	static void NewProp_bMatchWithPrevious_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchWithPrevious;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MatchedBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchedLocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchedRotationOffset;
	static void NewProp_bMatchTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchTranslation;
	static void NewProp_bMatchIncludeZHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchIncludeZHeight;
	static void NewProp_bMatchRotationYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRotationYaw;
	static void NewProp_bMatchRotationPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRotationPitch;
	static void NewProp_bMatchRotationRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchRotationRoll;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShowSkeleton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSkeleton;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Params), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 961506608
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, AnimSequence_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, Animation_DEPRECATED), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, EndOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, PlayRate_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bReverse_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverse_MetaData), NewProp_bReverse_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, SlotName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartLocationOffset = { "StartLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocationOffset_MetaData), NewProp_StartLocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartRotationOffset = { "StartRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, StartRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotationOffset_MetaData), NewProp_StartRotationOffset_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchWithPrevious = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious = { "bMatchWithPrevious", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchWithPrevious_MetaData), NewProp_bMatchWithPrevious_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedBoneName = { "MatchedBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, MatchedBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchedBoneName_MetaData), NewProp_MatchedBoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedLocationOffset = { "MatchedLocationOffset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, MatchedLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchedLocationOffset_MetaData), NewProp_MatchedLocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedRotationOffset = { "MatchedRotationOffset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSkeletalAnimationSection, MatchedRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchedRotationOffset_MetaData), NewProp_MatchedRotationOffset_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation = { "bMatchTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchTranslation_MetaData), NewProp_bMatchTranslation_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchIncludeZHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight = { "bMatchIncludeZHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchIncludeZHeight_MetaData), NewProp_bMatchIncludeZHeight_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchRotationYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw = { "bMatchRotationYaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchRotationYaw_MetaData), NewProp_bMatchRotationYaw_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchRotationPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch = { "bMatchRotationPitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchRotationPitch_MetaData), NewProp_bMatchRotationPitch_MetaData) };
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bMatchRotationRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll = { "bMatchRotationRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchRotationRoll_MetaData), NewProp_bMatchRotationRoll_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton_SetBit(void* Obj)
{
	((UMovieSceneSkeletalAnimationSection*)Obj)->bShowSkeleton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton = { "bShowSkeleton", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationSection), &Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSkeleton_MetaData), NewProp_bShowSkeleton_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_StartRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchWithPrevious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedLocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_MatchedRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchIncludeZHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bMatchRotationRoll,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::NewProp_bShowSkeleton,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSkeletalAnimationSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::ClassParams = {
	&UMovieSceneSkeletalAnimationSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.OuterSingleton, Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationSection>()
{
	return UMovieSceneSkeletalAnimationSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationSection);
UMovieSceneSkeletalAnimationSection::~UMovieSceneSkeletalAnimationSection() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSkeletalAnimationSection)
// End Class UMovieSceneSkeletalAnimationSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSkeletalAnimationParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationParams_Statics::NewStructOps, TEXT("MovieSceneSkeletalAnimationParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSkeletalAnimationParams), 961506608U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSkeletalAnimationSection, UMovieSceneSkeletalAnimationSection::StaticClass, TEXT("UMovieSceneSkeletalAnimationSection"), &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSkeletalAnimationSection), 3150959932U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_3031377991(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSkeletalAnimationSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
