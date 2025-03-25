// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimData/AttributeIdentifier.h"
#include "Runtime/Engine/Classes/Animation/AttributeCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequence() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat4f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVariableFrameStrippingSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributePerBoneData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFrameRate();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimSequenceTrackContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer;
class UScriptStruct* FAnimSequenceTrackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSequenceTrackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSequenceTrackContainer>()
{
	return FAnimSequenceTrackContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// These two always should go together, but it is not right now. \n// I wonder in the future, we change all compressed to be inside as well, so they all stay together\n// When remove tracks, it should be handled together \n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "These two always should go together, but it is not right now.\nI wonder in the future, we change all compressed to be inside as well, so they all stay together\nWhen remove tracks, it should be handled together" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationTracks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequenceTrackContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks_Inner = { "AnimationTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(0, nullptr) }; // 3047033106
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks = { "AnimationTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSequenceTrackContainer, AnimationTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTracks_MetaData), NewProp_AnimationTracks_MetaData) }; // 3047033106
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames_Inner = { "TrackNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames = { "TrackNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSequenceTrackContainer, TrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackNames_MetaData), NewProp_TrackNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_AnimationTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewProp_TrackNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimSequenceTrackContainer",
	Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::PropPointers),
	sizeof(FAnimSequenceTrackContainer),
	alignof(FAnimSequenceTrackContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer.InnerSingleton, Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer.InnerSingleton;
}
// End ScriptStruct FAnimSequenceTrackContainer

// Begin ScriptStruct FTranslationTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TranslationTrack;
class UScriptStruct* FTranslationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TranslationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TranslationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TranslationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TranslationTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTranslationTrack>()
{
	return FTranslationTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTranslationTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num().\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PosKeys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys_Inner = { "PosKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys = { "PosKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTranslationTrack, PosKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosKeys_MetaData), NewProp_PosKeys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTranslationTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTranslationTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_PosKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewProp_Times,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTranslationTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TranslationTrack",
	Z_Construct_UScriptStruct_FTranslationTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationTrack_Statics::PropPointers),
	sizeof(FTranslationTrack),
	alignof(FTranslationTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTranslationTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTranslationTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TranslationTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TranslationTrack.InnerSingleton, Z_Construct_UScriptStruct_FTranslationTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TranslationTrack.InnerSingleton;
}
// End ScriptStruct FTranslationTrack

// Begin ScriptStruct FRotationTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotationTrack;
class UScriptStruct* FRotationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RotationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_RotationTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRotationTrack>()
{
	return FRotationTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotationTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keyframe rotation data for one track.  Rot(i) occurs at Time(i).  Rot.Num() always equals Time.Num().\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Keyframe rotation data for one track.  Rot(i) occurs at Time(i).  Rot.Num() always equals Time.Num()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotKeys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys_Inner = { "RotKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys = { "RotKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationTrack, RotKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotKeys_MetaData), NewProp_RotKeys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_RotKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationTrack_Statics::NewProp_Times,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RotationTrack",
	Z_Construct_UScriptStruct_FRotationTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationTrack_Statics::PropPointers),
	sizeof(FRotationTrack),
	alignof(FRotationTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotationTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotationTrack()
{
	if (!Z_Registration_Info_UScriptStruct_RotationTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotationTrack.InnerSingleton, Z_Construct_UScriptStruct_FRotationTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RotationTrack.InnerSingleton;
}
// End ScriptStruct FRotationTrack

// Begin ScriptStruct FScaleTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScaleTrack;
class UScriptStruct* FScaleTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScaleTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScaleTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScaleTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ScaleTrack"));
	}
	return Z_Registration_Info_UScriptStruct_ScaleTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScaleTrack>()
{
	return FScaleTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScaleTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keyframe scale data for one track.  Scale(i) occurs at Time(i).  Rot.Num() always equals Time.Num().\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Keyframe scale data for one track.  Scale(i) occurs at Time(i).  Rot.Num() always equals Time.Num()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleKeys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScaleTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys_Inner = { "ScaleKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys = { "ScaleKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScaleTrack, ScaleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleKeys_MetaData), NewProp_ScaleKeys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScaleTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScaleTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_ScaleKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleTrack_Statics::NewProp_Times,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScaleTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ScaleTrack",
	Z_Construct_UScriptStruct_FScaleTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleTrack_Statics::PropPointers),
	sizeof(FScaleTrack),
	alignof(FScaleTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScaleTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScaleTrack()
{
	if (!Z_Registration_Info_UScriptStruct_ScaleTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScaleTrack.InnerSingleton, Z_Construct_UScriptStruct_FScaleTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScaleTrack.InnerSingleton;
}
// End ScriptStruct FScaleTrack

// Begin ScriptStruct FCurveTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveTrack;
class UScriptStruct* FCurveTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveTrack"));
	}
	return Z_Registration_Info_UScriptStruct_CurveTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveTrack>()
{
	return FCurveTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Key frame curve data for one track\n * CurveName: Morph Target Name\n * CurveWeights: List of weights for each frame\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Key frame curve data for one track\nCurveName: Morph Target Name\nCurveWeights: List of weights for each frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveWeights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveWeights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveTrack, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights_Inner = { "CurveWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights = { "CurveWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveTrack, CurveWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveWeights_MetaData), NewProp_CurveWeights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTrack_Statics::NewProp_CurveWeights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CurveTrack",
	Z_Construct_UScriptStruct_FCurveTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTrack_Statics::PropPointers),
	sizeof(FCurveTrack),
	alignof(FCurveTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveTrack()
{
	if (!Z_Registration_Info_UScriptStruct_CurveTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveTrack.InnerSingleton, Z_Construct_UScriptStruct_FCurveTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveTrack.InnerSingleton;
}
// End ScriptStruct FCurveTrack

// Begin ScriptStruct FCompressedTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompressedTrack;
class UScriptStruct* FCompressedTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompressedTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CompressedTrack"));
	}
	return Z_Registration_Info_UScriptStruct_CompressedTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompressedTrack>()
{
	return FCompressedTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompressedTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteStream_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteStream_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteStream;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mins;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ranges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream_Inner = { "ByteStream", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream = { "ByteStream", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompressedTrack, ByteStream), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteStream_MetaData), NewProp_ByteStream_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompressedTrack, Times), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Times_MetaData), NewProp_Times_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Mins = { "Mins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Mins, FCompressedTrack), STRUCT_OFFSET(FCompressedTrack, Mins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mins_MetaData), NewProp_Mins_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Ranges, FCompressedTrack), STRUCT_OFFSET(FCompressedTrack, Ranges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ranges_MetaData), NewProp_Ranges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompressedTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_ByteStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Times,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Mins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewProp_Ranges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CompressedTrack",
	Z_Construct_UScriptStruct_FCompressedTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::PropPointers),
	sizeof(FCompressedTrack),
	alignof(FCompressedTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompressedTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompressedTrack()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompressedTrack.InnerSingleton, Z_Construct_UScriptStruct_FCompressedTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompressedTrack.InnerSingleton;
}
// End ScriptStruct FCompressedTrack

// Begin Enum EStripAnimDataOnDedicatedServerSettings
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings;
static UEnum* EStripAnimDataOnDedicatedServerSettings_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStripAnimDataOnDedicatedServerSettings"));
	}
	return Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStripAnimDataOnDedicatedServerSettings>()
{
	return EStripAnimDataOnDedicatedServerSettings_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum used to decide whether we should strip animation data on dedicated server */" },
		{ "DoNotStripAnimDataOnDedicatedServer.Comment", "/** Do not strip track data on dedicated server regardless of the value of 'Strip Animation Data on Dedicated Server' option in Project Settings  */" },
		{ "DoNotStripAnimDataOnDedicatedServer.Name", "EStripAnimDataOnDedicatedServerSettings::DoNotStripAnimDataOnDedicatedServer" },
		{ "DoNotStripAnimDataOnDedicatedServer.ToolTip", "Do not strip track data on dedicated server regardless of the value of 'Strip Animation Data on Dedicated Server' option in Project Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "StripAnimDataOnDedicatedServer.Comment", "/** Strip track data on dedicated server regardless of the value of 'Strip Animation Data on Dedicated Server' option in Project Settings as long as EnableRootMotion is false  */" },
		{ "StripAnimDataOnDedicatedServer.Name", "EStripAnimDataOnDedicatedServerSettings::StripAnimDataOnDedicatedServer" },
		{ "StripAnimDataOnDedicatedServer.ToolTip", "Strip track data on dedicated server regardless of the value of 'Strip Animation Data on Dedicated Server' option in Project Settings as long as EnableRootMotion is false" },
		{ "ToolTip", "Enum used to decide whether we should strip animation data on dedicated server" },
		{ "UseProjectSetting.Comment", "/** Strip track data on dedicated server if 'Strip Animation Data on Dedicated Server' option in Project Settings is true and EnableRootMotion is false */" },
		{ "UseProjectSetting.Name", "EStripAnimDataOnDedicatedServerSettings::UseProjectSetting" },
		{ "UseProjectSetting.ToolTip", "Strip track data on dedicated server if 'Strip Animation Data on Dedicated Server' option in Project Settings is true and EnableRootMotion is false" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStripAnimDataOnDedicatedServerSettings::UseProjectSetting", (int64)EStripAnimDataOnDedicatedServerSettings::UseProjectSetting },
		{ "EStripAnimDataOnDedicatedServerSettings::StripAnimDataOnDedicatedServer", (int64)EStripAnimDataOnDedicatedServerSettings::StripAnimDataOnDedicatedServer },
		{ "EStripAnimDataOnDedicatedServerSettings::DoNotStripAnimDataOnDedicatedServer", (int64)EStripAnimDataOnDedicatedServerSettings::DoNotStripAnimDataOnDedicatedServer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStripAnimDataOnDedicatedServerSettings",
	"EStripAnimDataOnDedicatedServerSettings",
	Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings()
{
	if (!Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.InnerSingleton, Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings.InnerSingleton;
}
// End Enum EStripAnimDataOnDedicatedServerSettings

// Begin Class UAnimSequence Function AddBoneFloatCustomAttribute
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics
{
	struct AnimSequence_eventAddBoneFloatCustomAttribute_Parms
	{
		FName BoneName;
		FName AttributeName;
		TArray<float> TimeKeys;
		TArray<float> ValueKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddBoneFloatCustomAttribute has been deprecated, use UAnimDataController::AddAttribute instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeKeys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys_Inner = { "TimeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys = { "TimeKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, TimeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeKeys_MetaData), NewProp_TimeKeys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys_Inner = { "ValueKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys = { "ValueKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneFloatCustomAttribute_Parms, ValueKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueKeys_MetaData), NewProp_ValueKeys_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_TimeKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::NewProp_ValueKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "AddBoneFloatCustomAttribute", nullptr, nullptr, Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::AnimSequence_eventAddBoneFloatCustomAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::AnimSequence_eventAddBoneFloatCustomAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimSequence::execAddBoneFloatCustomAttribute)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
	P_GET_TARRAY_REF(float,Z_Param_Out_TimeKeys);
	P_GET_TARRAY_REF(float,Z_Param_Out_ValueKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBoneFloatCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_TimeKeys,Z_Param_Out_ValueKeys);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimSequence Function AddBoneFloatCustomAttribute

// Begin Class UAnimSequence Function AddBoneIntegerCustomAttribute
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics
{
	struct AnimSequence_eventAddBoneIntegerCustomAttribute_Parms
	{
		FName BoneName;
		FName AttributeName;
		TArray<float> TimeKeys;
		TArray<int32> ValueKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddBoneIntegerCustomAttribute has been deprecated, use UAnimDataController::AddAttribute instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeKeys;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys_Inner = { "TimeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys = { "TimeKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, TimeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeKeys_MetaData), NewProp_TimeKeys_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys_Inner = { "ValueKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys = { "ValueKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneIntegerCustomAttribute_Parms, ValueKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueKeys_MetaData), NewProp_ValueKeys_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_TimeKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::NewProp_ValueKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "AddBoneIntegerCustomAttribute", nullptr, nullptr, Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::AnimSequence_eventAddBoneIntegerCustomAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::AnimSequence_eventAddBoneIntegerCustomAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimSequence::execAddBoneIntegerCustomAttribute)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
	P_GET_TARRAY_REF(float,Z_Param_Out_TimeKeys);
	P_GET_TARRAY_REF(int32,Z_Param_Out_ValueKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBoneIntegerCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_TimeKeys,Z_Param_Out_ValueKeys);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimSequence Function AddBoneIntegerCustomAttribute

// Begin Class UAnimSequence Function AddBoneStringCustomAttribute
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics
{
	struct AnimSequence_eventAddBoneStringCustomAttribute_Parms
	{
		FName BoneName;
		FName AttributeName;
		TArray<float> TimeKeys;
		TArray<FString> ValueKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddBoneStringCustomAttribute has been deprecated, use UAnimDataController::AddAttribute instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeKeys;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValueKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys_Inner = { "TimeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys = { "TimeKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, TimeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeKeys_MetaData), NewProp_TimeKeys_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys_Inner = { "ValueKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys = { "ValueKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventAddBoneStringCustomAttribute_Parms, ValueKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueKeys_MetaData), NewProp_ValueKeys_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_TimeKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::NewProp_ValueKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "AddBoneStringCustomAttribute", nullptr, nullptr, Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::AnimSequence_eventAddBoneStringCustomAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::AnimSequence_eventAddBoneStringCustomAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimSequence::execAddBoneStringCustomAttribute)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
	P_GET_TARRAY_REF(float,Z_Param_Out_TimeKeys);
	P_GET_TARRAY_REF(FString,Z_Param_Out_ValueKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBoneStringCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_TimeKeys,Z_Param_Out_ValueKeys);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimSequence Function AddBoneStringCustomAttribute

// Begin Class UAnimSequence Function RemoveAllCustomAttributes
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveAllCustomAttributes has been deprecated, use UAnimDataController::RemoveAllAttributes instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "RemoveAllCustomAttributes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimSequence::execRemoveAllCustomAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllCustomAttributes();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimSequence Function RemoveAllCustomAttributes

// Begin Class UAnimSequence Function RemoveAllCustomAttributesForBone
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics
{
	struct AnimSequence_eventRemoveAllCustomAttributesForBone_Parms
	{
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveAllCustomAttributesForBone has been deprecated, use UAnimDataController::RemoveAllAttributesForBone instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventRemoveAllCustomAttributesForBone_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "RemoveAllCustomAttributesForBone", nullptr, nullptr, Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::AnimSequence_eventRemoveAllCustomAttributesForBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::AnimSequence_eventRemoveAllCustomAttributesForBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimSequence::execRemoveAllCustomAttributesForBone)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllCustomAttributesForBone(Z_Param_Out_BoneName);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimSequence Function RemoveAllCustomAttributesForBone

// Begin Class UAnimSequence Function RemoveCustomAttribute
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics
{
	struct AnimSequence_eventRemoveCustomAttribute_Parms
	{
		FName BoneName;
		FName AttributeName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveCustomAttribute has been deprecated, use UAnimDataController::RemoveAttribute instead" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventRemoveCustomAttribute_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimSequence_eventRemoveCustomAttribute_Parms, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::NewProp_AttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSequence, nullptr, "RemoveCustomAttribute", nullptr, nullptr, Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::AnimSequence_eventRemoveCustomAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::AnimSequence_eventRemoveCustomAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimSequence::execRemoveCustomAttribute)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCustomAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimSequence Function RemoveCustomAttribute

// Begin Class UAnimSequence
void UAnimSequence::StaticRegisterNativesUAnimSequence()
{
#if WITH_EDITOR
	UClass* Class = UAnimSequence::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBoneFloatCustomAttribute", &UAnimSequence::execAddBoneFloatCustomAttribute },
		{ "AddBoneIntegerCustomAttribute", &UAnimSequence::execAddBoneIntegerCustomAttribute },
		{ "AddBoneStringCustomAttribute", &UAnimSequence::execAddBoneStringCustomAttribute },
		{ "RemoveAllCustomAttributes", &UAnimSequence::execRemoveAllCustomAttributes },
		{ "RemoveAllCustomAttributesForBone", &UAnimSequence::execRemoveAllCustomAttributesForBone },
		{ "RemoveCustomAttribute", &UAnimSequence::execRemoveCustomAttribute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequence);
UClass* Z_Construct_UClass_UAnimSequence_NoRegister()
{
	return UAnimSequence::StaticClass();
}
struct Z_Construct_UClass_UAnimSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject Length" },
		{ "IncludePath", "Animation/AnimSequence.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportFileFramerate_MetaData[] = {
		{ "Comment", "/** The DCC framerate of the imported file. UI information only, unit are Hz */" },
		{ "DisplayName", "Import File Framerate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The DCC framerate of the imported file. UI information only, unit are Hz" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportResampleFramerate_MetaData[] = {
		{ "Comment", "/** The resample framerate that was computed during import. UI information only, unit are Hz */" },
		{ "DisplayName", "Import Resample Framerate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The resample framerate that was computed during import. UI information only, unit are Hz" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingFrameRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawDataGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackNames_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFrameStripping_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Allow frame stripping to be performed on this animation if the platform requests it\n\x09 * Can be disabled if animation has high frequency movements that are being lost.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Allow frame stripping to be performed on this animation if the platform requests it\nCan be disabled if animation has high frequency movements that are being lost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionErrorThresholdScale_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Set a scale for error threshold on compression. This is useful if the animation will \n\x09 * be played back at a different scale (e.g. if you know the animation will be played\n\x09 * on an actor/component that is scaled up by a factor of 10, set this value to 10)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Set a scale for error threshold on compression. This is useful if the animation will\nbe played back at a different scale (e.g. if you know the animation will be played\non an actor/component that is scaled up by a factor of 10, set this value to 10)" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The bone compression settings used to compress bones in this sequence. */" },
		{ "ForceShowEngineContent", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The bone compression settings used to compress bones in this sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveCompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The curve compression settings used to compress curves in this sequence. */" },
		{ "ForceShowEngineContent", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "The curve compression settings used to compress curves in this sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableFrameStrippingSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "ForceShowEngineContent", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimType_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/** Additive animation type. **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additive animation type. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefPoseType_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/* Additive refrerence pose type. Refer above enum type */" },
		{ "DisplayName", "Base Pose Type" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additive refrerence pose type. Refer above enum type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefFrameIndex_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/* Additve reference frame if RefPoseType == AnimFrame **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additve reference frame if RefPoseType == AnimFrame *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefPoseSeq_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/* Additive reference animation if it's relevant - i.e. AnimScaled or AnimFrame **/" },
		{ "DisplayName", "Base Pose Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Additive reference animation if it's relevant - i.e. AnimScaled or AnimFrame *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Base pose to use when retargeting */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose. */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "If RetargetSource is set to Default (None), this is asset for the base pose to use when retargeting. Transform data will be saved in RetargetSourceAssetReferencePose." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetSourceAssetReferencePose_MetaData[] = {
		{ "Comment", "/** When using RetargetSourceAsset, use the post stored here */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "When using RetargetSourceAsset, use the post stored here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** This defines how values between keys are calculated **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "This defines how values between keys are calculated *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotion_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will allow extracting of root motion **/" },
		{ "DisplayName", "EnableRootMotion" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "If this is on, it will allow extracting of root motion *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Root Bone will be locked to that position when extracting root motion.**/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Root Bone will be locked to that position when extracting root motion.*" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceRootLock_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** Force Root Bone Lock even if Root Motion is not enabled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Force Root Bone Lock even if Root Motion is not enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNormalizedRootMotionScale_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "Comment", "/** If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) **/" },
		{ "DisplayName", "Use Normalized Root Motion Scale" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "If this is on, it will use a normalized scale value for the root motion extracted: FVector(1.0, 1.0, 1.0) *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRootMotionSettingsCopiedFromMontage_MetaData[] = {
		{ "Comment", "/** Have we copied root motion settings from an owning montage */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Have we copied root motion settings from an owning montage" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[] = {
		{ "Comment", "/** Saved version number with CompressAnimations commandlet. To help with doing it in multiple passes. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Saved version number with CompressAnimations commandlet. To help with doing it in multiple passes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotOverrideCompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Do not attempt to override compression scheme when running CompressAnimations commandlet.\n\x09 * Some high frequency animations are too sensitive and shouldn't be changed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Do not attempt to override compression scheme when running CompressAnimations commandlet.\nSome high frequency animations are too sensitive and shouldn't be changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Path to the resource used to construct this skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StripAnimDataOnDedicatedServer_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Enum used to decide whether we should strip animation data on dedicated server */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Enum used to decide whether we should strip animation data on dedicated server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthoredSyncMarkers_MetaData[] = {
		{ "Comment", "/** Authored Sync markers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
		{ "ToolTip", "Authored Sync markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFrameRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformTargetFrameRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSampledKeys_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSampledFrames_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneCustomAttributeData_MetaData[] = {
		{ "Category", "CustomAttributes" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSequence.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportFileFramerate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImportResampleFramerate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingFrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawDataGuid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationTrackNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationTrackNames;
	static void NewProp_bAllowFrameStripping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFrameStripping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionErrorThresholdScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneCompressionSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveCompressionSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VariableFrameStrippingSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdditiveAnimType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefPoseType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RefFrameIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RefPoseSeq;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetSource;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RetargetSourceAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetSourceAssetReferencePose_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RetargetSourceAssetReferencePose;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static void NewProp_bEnableRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock;
	static void NewProp_bForceRootLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRootLock;
	static void NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNormalizedRootMotionScale;
	static void NewProp_bRootMotionSettingsCopiedFromMontage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRootMotionSettingsCopiedFromMontage;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion;
	static void NewProp_bDoNotOverrideCompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotOverrideCompression;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_StripAnimDataOnDedicatedServer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StripAnimDataOnDedicatedServer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuthoredSyncMarkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AuthoredSyncMarkers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformTargetFrameRate;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSampledKeys;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSampledFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneCustomAttributeData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerBoneCustomAttributeData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeCurves_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeCurves_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimSequence_AddBoneFloatCustomAttribute, "AddBoneFloatCustomAttribute" }, // 1728789726
		{ &Z_Construct_UFunction_UAnimSequence_AddBoneIntegerCustomAttribute, "AddBoneIntegerCustomAttribute" }, // 2092050489
		{ &Z_Construct_UFunction_UAnimSequence_AddBoneStringCustomAttribute, "AddBoneStringCustomAttribute" }, // 1242100852
		{ &Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributes, "RemoveAllCustomAttributes" }, // 2737010600
		{ &Z_Construct_UFunction_UAnimSequence_RemoveAllCustomAttributesForBone, "RemoveAllCustomAttributesForBone" }, // 3468870626
		{ &Z_Construct_UFunction_UAnimSequence_RemoveCustomAttribute, "RemoveCustomAttribute" }, // 3364931397
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportFileFramerate = { "ImportFileFramerate", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, ImportFileFramerate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportFileFramerate_MetaData), NewProp_ImportFileFramerate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportResampleFramerate = { "ImportResampleFramerate", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, ImportResampleFramerate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportResampleFramerate_MetaData), NewProp_ImportResampleFramerate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, NumFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFrames_MetaData), NewProp_NumFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumberOfKeys = { "NumberOfKeys", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, NumberOfKeys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfKeys_MetaData), NewProp_NumberOfKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_SamplingFrameRate = { "SamplingFrameRate", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, SamplingFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingFrameRate_MetaData), NewProp_SamplingFrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RawDataGuid = { "RawDataGuid", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RawDataGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawDataGuid_MetaData), NewProp_RawDataGuid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames_Inner = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames = { "AnimationTrackNames", nullptr, (EPropertyFlags)0x0020080800220001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, AnimationTrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTrackNames_MetaData), NewProp_AnimationTrackNames_MetaData) };
void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping_SetBit(void* Obj)
{
	((UAnimSequence*)Obj)->bAllowFrameStripping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping = { "bAllowFrameStripping", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFrameStripping_MetaData), NewProp_bAllowFrameStripping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressionErrorThresholdScale = { "CompressionErrorThresholdScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, CompressionErrorThresholdScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionErrorThresholdScale_MetaData), NewProp_CompressionErrorThresholdScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_BoneCompressionSettings = { "BoneCompressionSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, BoneCompressionSettings), Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneCompressionSettings_MetaData), NewProp_BoneCompressionSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_CurveCompressionSettings = { "CurveCompressionSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, CurveCompressionSettings), Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveCompressionSettings_MetaData), NewProp_CurveCompressionSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_VariableFrameStrippingSettings = { "VariableFrameStrippingSettings", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, VariableFrameStrippingSettings), Z_Construct_UClass_UVariableFrameStrippingSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableFrameStrippingSettings_MetaData), NewProp_VariableFrameStrippingSettings_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AdditiveAnimType = { "AdditiveAnimType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, AdditiveAnimType), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditiveAnimType_MetaData), NewProp_AdditiveAnimType_MetaData) }; // 1982879751
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseType = { "RefPoseType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RefPoseType), Z_Construct_UEnum_Engine_EAdditiveBasePoseType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefPoseType_MetaData), NewProp_RefPoseType_MetaData) }; // 133878346
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefFrameIndex = { "RefFrameIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RefFrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefFrameIndex_MetaData), NewProp_RefFrameIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseSeq = { "RefPoseSeq", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RefPoseSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefPoseSeq_MetaData), NewProp_RefPoseSeq_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSource = { "RetargetSource", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RetargetSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetSource_MetaData), NewProp_RetargetSource_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAsset = { "RetargetSourceAsset", nullptr, (EPropertyFlags)0x0014010800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RetargetSourceAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetSourceAsset_MetaData), NewProp_RetargetSourceAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose_Inner = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose = { "RetargetSourceAssetReferencePose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RetargetSourceAssetReferencePose), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetSourceAssetReferencePose_MetaData), NewProp_RetargetSourceAssetReferencePose_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 1943220743
void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_SetBit(void* Obj)
{
	((UAnimSequence*)Obj)->bEnableRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion = { "bEnableRootMotion", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRootMotion_MetaData), NewProp_bEnableRootMotion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_RootMotionRootLock = { "RootMotionRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionRootLock_MetaData), NewProp_RootMotionRootLock_MetaData) }; // 103583639
void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_SetBit(void* Obj)
{
	((UAnimSequence*)Obj)->bForceRootLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock = { "bForceRootLock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceRootLock_MetaData), NewProp_bForceRootLock_MetaData) };
void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit(void* Obj)
{
	((UAnimSequence*)Obj)->bUseNormalizedRootMotionScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale = { "bUseNormalizedRootMotionScale", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNormalizedRootMotionScale_MetaData), NewProp_bUseNormalizedRootMotionScale_MetaData) };
void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_SetBit(void* Obj)
{
	((UAnimSequence*)Obj)->bRootMotionSettingsCopiedFromMontage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage = { "bRootMotionSettingsCopiedFromMontage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRootMotionSettingsCopiedFromMontage_MetaData), NewProp_bRootMotionSettingsCopiedFromMontage_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressCommandletVersion = { "CompressCommandletVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, CompressCommandletVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressCommandletVersion_MetaData), NewProp_CompressCommandletVersion_MetaData) };
void Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression_SetBit(void* Obj)
{
	((UAnimSequence*)Obj)->bDoNotOverrideCompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression = { "bDoNotOverrideCompression", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimSequence), &Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotOverrideCompression_MetaData), NewProp_bDoNotOverrideCompression_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, SourceFilePath_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFileTimestamp_MetaData), NewProp_SourceFileTimestamp_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_StripAnimDataOnDedicatedServer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_StripAnimDataOnDedicatedServer = { "StripAnimDataOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, StripAnimDataOnDedicatedServer), Z_Construct_UEnum_Engine_EStripAnimDataOnDedicatedServerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StripAnimDataOnDedicatedServer_MetaData), NewProp_StripAnimDataOnDedicatedServer_MetaData) }; // 1693409484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers_Inner = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(0, nullptr) }; // 1140688646
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, AuthoredSyncMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthoredSyncMarkers_MetaData), NewProp_AuthoredSyncMarkers_MetaData) }; // 1140688646
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_TargetFrameRate = { "TargetFrameRate", nullptr, (EPropertyFlags)0x0020090000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, TargetFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFrameRate_MetaData), NewProp_TargetFrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_PlatformTargetFrameRate = { "PlatformTargetFrameRate", nullptr, (EPropertyFlags)0x0020090000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, PlatformTargetFrameRate), Z_Construct_UScriptStruct_FPerPlatformFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformTargetFrameRate_MetaData), NewProp_PlatformTargetFrameRate_MetaData) }; // 422856478
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumberOfSampledKeys = { "NumberOfSampledKeys", nullptr, (EPropertyFlags)0x0020090800222001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, NumberOfSampledKeys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSampledKeys_MetaData), NewProp_NumberOfSampledKeys_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumberOfSampledFrames = { "NumberOfSampledFrames", nullptr, (EPropertyFlags)0x0020080800222001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, NumberOfSampledFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSampledFrames_MetaData), NewProp_NumberOfSampledFrames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData_Inner = { "PerBoneCustomAttributeData", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomAttributePerBoneData, METADATA_PARAMS(0, nullptr) }; // 2480736602
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData = { "PerBoneCustomAttributeData", nullptr, (EPropertyFlags)0x0040000800020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, PerBoneCustomAttributeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerBoneCustomAttributeData_MetaData), NewProp_PerBoneCustomAttributeData_MetaData) }; // 2480736602
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AttributeCurves_ValueProp = { "AttributeCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAttributeCurve, METADATA_PARAMS(0, nullptr) }; // 1210399308
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AttributeCurves_Key_KeyProp = { "AttributeCurves_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(0, nullptr) }; // 4035253764
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimSequence_Statics::NewProp_AttributeCurves = { "AttributeCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSequence, AttributeCurves), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeCurves_MetaData), NewProp_AttributeCurves_MetaData) }; // 4035253764 1210399308
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequence_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportFileFramerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_ImportResampleFramerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumberOfKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_SamplingFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RawDataGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AnimationTrackNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bAllowFrameStripping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressionErrorThresholdScale,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_BoneCompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_CurveCompressionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_VariableFrameStrippingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AdditiveAnimType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RefPoseSeq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSource,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RetargetSourceAssetReferencePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bEnableRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_RootMotionRootLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bForceRootLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bUseNormalizedRootMotionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bRootMotionSettingsCopiedFromMontage,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_CompressCommandletVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_bDoNotOverrideCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_SourceFileTimestamp,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_StripAnimDataOnDedicatedServer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_StripAnimDataOnDedicatedServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AuthoredSyncMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_TargetFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_PlatformTargetFrameRate,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumberOfSampledKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_NumberOfSampledFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_PerBoneCustomAttributeData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AttributeCurves_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AttributeCurves_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequence_Statics::NewProp_AttributeCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequence_Statics::ClassParams = {
	&UAnimSequence::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UAnimSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimSequence()
{
	if (!Z_Registration_Info_UClass_UAnimSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequence.OuterSingleton, Z_Construct_UClass_UAnimSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimSequence.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimSequence>()
{
	return UAnimSequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequence);
UAnimSequence::~UAnimSequence() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimSequence)
// End Class UAnimSequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStripAnimDataOnDedicatedServerSettings_StaticEnum, TEXT("EStripAnimDataOnDedicatedServerSettings"), &Z_Registration_Info_UEnum_EStripAnimDataOnDedicatedServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1693409484U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimSequenceTrackContainer::StaticStruct, Z_Construct_UScriptStruct_FAnimSequenceTrackContainer_Statics::NewStructOps, TEXT("AnimSequenceTrackContainer"), &Z_Registration_Info_UScriptStruct_AnimSequenceTrackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSequenceTrackContainer), 413525332U) },
		{ FTranslationTrack::StaticStruct, Z_Construct_UScriptStruct_FTranslationTrack_Statics::NewStructOps, TEXT("TranslationTrack"), &Z_Registration_Info_UScriptStruct_TranslationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTranslationTrack), 1205059216U) },
		{ FRotationTrack::StaticStruct, Z_Construct_UScriptStruct_FRotationTrack_Statics::NewStructOps, TEXT("RotationTrack"), &Z_Registration_Info_UScriptStruct_RotationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotationTrack), 3975298560U) },
		{ FScaleTrack::StaticStruct, Z_Construct_UScriptStruct_FScaleTrack_Statics::NewStructOps, TEXT("ScaleTrack"), &Z_Registration_Info_UScriptStruct_ScaleTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScaleTrack), 3076875296U) },
		{ FCurveTrack::StaticStruct, Z_Construct_UScriptStruct_FCurveTrack_Statics::NewStructOps, TEXT("CurveTrack"), &Z_Registration_Info_UScriptStruct_CurveTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveTrack), 2283111386U) },
		{ FCompressedTrack::StaticStruct, Z_Construct_UScriptStruct_FCompressedTrack_Statics::NewStructOps, TEXT("CompressedTrack"), &Z_Registration_Info_UScriptStruct_CompressedTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompressedTrack), 3966585836U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequence, UAnimSequence::StaticClass, TEXT("UAnimSequence"), &Z_Registration_Info_UClass_UAnimSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequence), 6594138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_371302205(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSequence_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
