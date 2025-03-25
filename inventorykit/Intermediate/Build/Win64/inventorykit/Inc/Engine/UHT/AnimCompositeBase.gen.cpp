// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompositeBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FRootMotionExtractionStep
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionExtractionStep;
class UScriptStruct* FRootMotionExtractionStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionExtractionStep, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionExtractionStep"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionExtractionStep>()
{
	return FRootMotionExtractionStep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct defining a RootMotionExtractionStep.\n * When extracting RootMotion we can encounter looping animations (wrap around), or different animations.\n * We break those up into different steps, to help with RootMotion extraction, \n * as we can only extract a contiguous range per AnimSequence.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Struct defining a RootMotionExtractionStep.\nWhen extracting RootMotion we can encounter looping animations (wrap around), or different animations.\nWe break those up into different steps, to help with RootMotion extraction,\nas we can only extract a contiguous range per AnimSequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "Comment", "/** AnimSequence ref */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "AnimSequence ref" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Comment", "/** Start position to extract root motion from. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Start position to extract root motion from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "Comment", "/** End position to extract root motion to. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "End position to extract root motion to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionExtractionStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionExtractionStep, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionExtractionStep, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionExtractionStep, EndPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RootMotionExtractionStep",
	Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers),
	sizeof(FRootMotionExtractionStep),
	alignof(FRootMotionExtractionStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionExtractionStep.InnerSingleton;
}
// End ScriptStruct FRootMotionExtractionStep

// Begin ScriptStruct FAnimSegment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSegment;
class UScriptStruct* FAnimSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSegment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSegment"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSegment.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSegment>()
{
	return FAnimSegment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSegment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** this is anim segment that defines what animation and how **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "this is anim segment that defines what animation and how *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimReference_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Anim Reference to play - only allow AnimSequence or AnimComposite **/" },
		{ "DisplayName", "Animation Reference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Anim Reference to play - only allow AnimSequence or AnimComposite *" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayLength_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "DisplayName", "Cached Animation Asset length" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Start Pos within this AnimCompositeBase */" },
		{ "DisplayName", "Starting Position" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Start Pos within this AnimCompositeBase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartTime_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Time to start playing AnimSequence at. */" },
		{ "DisplayName", "Start Time" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Time to start playing AnimSequence at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimEndTime_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Time to end playing the AnimSequence at. */" },
		{ "DisplayName", "End Time" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Time to end playing the AnimSequence at." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "Comment", "/** Playback speed of this animation. If you'd like to reverse, set -1*/" },
		{ "DisplayName", "Play Rate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Playback speed of this animation. If you'd like to reverse, set -1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopingCount_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "DisplayName", "Loop Count" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimReference;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedPlayLength;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimEndTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopingCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference = { "AnimReference", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSegment, AnimReference), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimReference_MetaData), NewProp_AnimReference_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_CachedPlayLength = { "CachedPlayLength", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSegment, CachedPlayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayLength_MetaData), NewProp_CachedPlayLength_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSegment, StartPos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPos_MetaData), NewProp_StartPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime = { "AnimStartTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSegment, AnimStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimStartTime_MetaData), NewProp_AnimStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime = { "AnimEndTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSegment, AnimEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimEndTime_MetaData), NewProp_AnimEndTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSegment, AnimPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimPlayRate_MetaData), NewProp_AnimPlayRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount = { "LoopingCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSegment, LoopingCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopingCount_MetaData), NewProp_LoopingCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_CachedPlayLength,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSegment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimSegment",
	Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers),
	sizeof(FAnimSegment),
	alignof(FAnimSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSegment.InnerSingleton, Z_Construct_UScriptStruct_FAnimSegment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSegment.InnerSingleton;
}
// End ScriptStruct FAnimSegment

// Begin ScriptStruct FAnimTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimTrack;
class UScriptStruct* FAnimTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimTrack"));
	}
	return Z_Registration_Info_UScriptStruct_AnimTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimTrack>()
{
	return FAnimTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This is list of anim segments for this track \n * For now this is only one TArray, but in the future \n * we should define more transition/blending behaviors\n **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "This is list of anim segments for this track\nFor now this is only one TArray, but in the future\nwe should define more transition/blending behaviors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSegments_MetaData[] = {
		{ "Category", "AnimTrack" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSegments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_Inner = { "AnimSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimSegment, METADATA_PARAMS(0, nullptr) }; // 3555758399
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments = { "AnimSegments", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimTrack, AnimSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSegments_MetaData), NewProp_AnimSegments_MetaData) }; // 3555758399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimTrack",
	Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers),
	sizeof(FAnimTrack),
	alignof(FAnimTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack()
{
	if (!Z_Registration_Info_UScriptStruct_AnimTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimTrack.InnerSingleton, Z_Construct_UScriptStruct_FAnimTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimTrack.InnerSingleton;
}
// End ScriptStruct FAnimTrack

// Begin Class UAnimCompositeBase
void UAnimCompositeBase::StaticRegisterNativesUAnimCompositeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompositeBase);
UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister()
{
	return UAnimCompositeBase::StaticClass();
}
struct Z_Construct_UClass_UAnimCompositeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimCompositeBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonTargetFrameRate_MetaData[] = {
		{ "Category", "AnimationComposite" },
		{ "Comment", "/** Frame-rate used to represent this Animation Montage (best fitting for placed Animation Sequences)*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Frame-rate used to represent this Animation Montage (best fitting for placed Animation Sequences)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonTargetFrameRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompositeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimCompositeBase_Statics::NewProp_CommonTargetFrameRate = { "CommonTargetFrameRate", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCompositeBase, CommonTargetFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonTargetFrameRate_MetaData), NewProp_CommonTargetFrameRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompositeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompositeBase_Statics::NewProp_CommonTargetFrameRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompositeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimCompositeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompositeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompositeBase_Statics::ClassParams = {
	&UAnimCompositeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimCompositeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompositeBase_Statics::PropPointers),
	0,
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCompositeBase()
{
	if (!Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton, Z_Construct_UClass_UAnimCompositeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCompositeBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCompositeBase>()
{
	return UAnimCompositeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompositeBase);
UAnimCompositeBase::~UAnimCompositeBase() {}
// End Class UAnimCompositeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRootMotionExtractionStep::StaticStruct, Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewStructOps, TEXT("RootMotionExtractionStep"), &Z_Registration_Info_UScriptStruct_RootMotionExtractionStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionExtractionStep), 1337784770U) },
		{ FAnimSegment::StaticStruct, Z_Construct_UScriptStruct_FAnimSegment_Statics::NewStructOps, TEXT("AnimSegment"), &Z_Registration_Info_UScriptStruct_AnimSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSegment), 3555758399U) },
		{ FAnimTrack::StaticStruct, Z_Construct_UScriptStruct_FAnimTrack_Statics::NewStructOps, TEXT("AnimTrack"), &Z_Registration_Info_UScriptStruct_AnimTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimTrack), 1583647364U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompositeBase, UAnimCompositeBase::StaticClass, TEXT("UAnimCompositeBase"), &Z_Registration_Info_UClass_UAnimCompositeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompositeBase), 2304158679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_3011036805(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompositeBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
