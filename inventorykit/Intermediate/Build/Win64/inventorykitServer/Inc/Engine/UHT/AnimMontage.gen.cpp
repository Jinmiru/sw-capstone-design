// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMontage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNotifyEventType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageSubStepResult();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlendArgs();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimMontageInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPoint();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointMarker();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMontageBlendSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSlotAnimationTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurve();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCompositeSection
static_assert(std::is_polymorphic<FCompositeSection>() == std::is_polymorphic<FAnimLinkableElement>(), "USTRUCT FCompositeSection cannot be polymorphic unless super FAnimLinkableElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositeSection;
class UScriptStruct* FCompositeSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositeSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeSection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CompositeSection"));
	}
	return Z_Registration_Info_UScriptStruct_CompositeSection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompositeSection>()
{
	return FCompositeSection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompositeSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Section data for each track. Reference of data will be stored in the child class for the way they want\n * AnimComposite vs AnimMontage have different requirement for the actual data reference\n * This only contains composite section information. (vertical sequences)\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Section data for each track. Reference of data will be stored in the child class for the way they want\nAnimComposite vs AnimMontage have different requirement for the actual data reference\nThis only contains composite section information. (vertical sequences)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Section Name */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Section Name" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** Start Time **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Start Time *" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSectionName_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Should this animation loop. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Should this animation loop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_Inner_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextSectionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompositeSection, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompositeSection, StartTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName = { "NextSectionName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompositeSection, NextSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSectionName_MetaData), NewProp_NextSectionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_Inner_MetaData), NewProp_MetaData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompositeSection, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimLinkableElement,
	&NewStructOps,
	"CompositeSection",
	Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers),
	sizeof(FCompositeSection),
	alignof(FCompositeSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositeSection.InnerSingleton, Z_Construct_UScriptStruct_FCompositeSection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompositeSection.InnerSingleton;
}
// End ScriptStruct FCompositeSection

// Begin ScriptStruct FSlotAnimationTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotAnimationTrack;
class UScriptStruct* FSlotAnimationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotAnimationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotAnimationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotAnimationTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SlotAnimationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_SlotAnimationTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSlotAnimationTrack>()
{
	return FSlotAnimationTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Each slot data referenced by Animation Slot \n * contains slot name, and animation data \n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Each slot data referenced by Animation Slot\ncontains slot name, and animation data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimTrack_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotAnimationTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotAnimationTrack, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack = { "AnimTrack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotAnimationTrack, AnimTrack), Z_Construct_UScriptStruct_FAnimTrack, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimTrack_MetaData), NewProp_AnimTrack_MetaData) }; // 1583647364
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SlotAnimationTrack",
	Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers),
	sizeof(FSlotAnimationTrack),
	alignof(FSlotAnimationTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlotAnimationTrack()
{
	if (!Z_Registration_Info_UScriptStruct_SlotAnimationTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotAnimationTrack.InnerSingleton, Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlotAnimationTrack.InnerSingleton;
}
// End ScriptStruct FSlotAnimationTrack

// Begin ScriptStruct FBranchingPoint
static_assert(std::is_polymorphic<FBranchingPoint>() == std::is_polymorphic<FAnimLinkableElement>(), "USTRUCT FBranchingPoint cannot be polymorphic unless super FAnimLinkableElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BranchingPoint;
class UScriptStruct* FBranchingPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BranchingPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BranchingPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPoint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPoint"));
	}
	return Z_Registration_Info_UScriptStruct_BranchingPoint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchingPoint>()
{
	return FBranchingPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBranchingPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Remove FBranchingPoint when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Remove FBranchingPoint when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "BranchingPoint" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTimeOffset_MetaData[] = {
		{ "Comment", "/** An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerTimeOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchingPoint, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchingPoint, DisplayTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayTime_MetaData), NewProp_DisplayTime_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset = { "TriggerTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchingPoint, TriggerTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerTimeOffset_MetaData), NewProp_TriggerTimeOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimLinkableElement,
	&NewStructOps,
	"BranchingPoint",
	Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers),
	sizeof(FBranchingPoint),
	alignof(FBranchingPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBranchingPoint()
{
	if (!Z_Registration_Info_UScriptStruct_BranchingPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BranchingPoint.InnerSingleton, Z_Construct_UScriptStruct_FBranchingPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BranchingPoint.InnerSingleton;
}
// End ScriptStruct FBranchingPoint

// Begin Enum EAnimNotifyEventType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimNotifyEventType;
static UEnum* EAnimNotifyEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNotifyEventType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimNotifyEventType"));
	}
	return Z_Registration_Info_UEnum_EAnimNotifyEventType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimNotifyEventType::Type>()
{
	return EAnimNotifyEventType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Begin.Comment", "/** */" },
		{ "Begin.Name", "EAnimNotifyEventType::Begin" },
		{ "Comment", "/**  */" },
		{ "End.Comment", "/** */" },
		{ "End.Name", "EAnimNotifyEventType::End" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimNotifyEventType::Begin", (int64)EAnimNotifyEventType::Begin },
		{ "EAnimNotifyEventType::End", (int64)EAnimNotifyEventType::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimNotifyEventType",
	"EAnimNotifyEventType::Type",
	Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimNotifyEventType()
{
	if (!Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimNotifyEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimNotifyEventType.InnerSingleton;
}
// End Enum EAnimNotifyEventType

// Begin Enum EMontageBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageBlendMode;
static UEnum* EMontageBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageBlendMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMontageBlendMode"));
	}
	return Z_Registration_Info_UEnum_EMontageBlendMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMontageBlendMode>()
{
	return EMontageBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMontageBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Inertialization.Comment", "//Uses inertialization. Requires an inertialization node somewhere in the graph after any slot node used by this montage.\n" },
		{ "Inertialization.Name", "EMontageBlendMode::Inertialization" },
		{ "Inertialization.ToolTip", "Uses inertialization. Requires an inertialization node somewhere in the graph after any slot node used by this montage." },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "Standard.Comment", "//Uses standard weight based blend\n" },
		{ "Standard.Name", "EMontageBlendMode::Standard" },
		{ "Standard.ToolTip", "Uses standard weight based blend" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMontageBlendMode::Standard", (int64)EMontageBlendMode::Standard },
		{ "EMontageBlendMode::Inertialization", (int64)EMontageBlendMode::Inertialization },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMontageBlendMode",
	"EMontageBlendMode",
	Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMontageBlendMode()
{
	if (!Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton, Z_Construct_UEnum_Engine_EMontageBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMontageBlendMode.InnerSingleton;
}
// End Enum EMontageBlendMode

// Begin ScriptStruct FBranchingPointMarker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BranchingPointMarker;
class UScriptStruct* FBranchingPointMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BranchingPointMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BranchingPointMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPointMarker, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPointMarker"));
	}
	return Z_Registration_Info_UScriptStruct_BranchingPointMarker.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchingPointMarker>()
{
	return FBranchingPointMarker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBranchingPointMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** AnimNotifies marked as BranchingPoints will create these markers on their Begin/End times.\n\x09They create stopping points when the Montage is being ticked to dispatch events. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "AnimNotifies marked as BranchingPoints will create these markers on their Begin/End times.\n      They create stopping points when the Montage is being ticked to dispatch events." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyEventType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NotifyIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyEventType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPointMarker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex = { "NotifyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchingPointMarker, NotifyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyIndex_MetaData), NewProp_NotifyIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime = { "TriggerTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchingPointMarker, TriggerTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerTime_MetaData), NewProp_TriggerTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType = { "NotifyEventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBranchingPointMarker, NotifyEventType), Z_Construct_UEnum_Engine_EAnimNotifyEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyEventType_MetaData), NewProp_NotifyEventType_MetaData) }; // 581801205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BranchingPointMarker",
	Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers),
	sizeof(FBranchingPointMarker),
	alignof(FBranchingPointMarker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointMarker()
{
	if (!Z_Registration_Info_UScriptStruct_BranchingPointMarker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BranchingPointMarker.InnerSingleton, Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BranchingPointMarker.InnerSingleton;
}
// End ScriptStruct FBranchingPointMarker

// Begin Enum EMontageSubStepResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageSubStepResult;
static UEnum* EMontageSubStepResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageSubStepResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMontageSubStepResult"));
	}
	return Z_Registration_Info_UEnum_EMontageSubStepResult.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMontageSubStepResult>()
{
	return EMontageSubStepResult_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InvalidMontage.Name", "EMontageSubStepResult::InvalidMontage" },
		{ "InvalidSection.Name", "EMontageSubStepResult::InvalidSection" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "Moved.Name", "EMontageSubStepResult::Moved" },
		{ "NotMoved.Name", "EMontageSubStepResult::NotMoved" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMontageSubStepResult::Moved", (int64)EMontageSubStepResult::Moved },
		{ "EMontageSubStepResult::NotMoved", (int64)EMontageSubStepResult::NotMoved },
		{ "EMontageSubStepResult::InvalidSection", (int64)EMontageSubStepResult::InvalidSection },
		{ "EMontageSubStepResult::InvalidMontage", (int64)EMontageSubStepResult::InvalidMontage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMontageSubStepResult",
	"EMontageSubStepResult",
	Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMontageSubStepResult()
{
	if (!Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton, Z_Construct_UEnum_Engine_EMontageSubStepResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMontageSubStepResult.InnerSingleton;
}
// End Enum EMontageSubStepResult

// Begin ScriptStruct FMontageBlendSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MontageBlendSettings;
class UScriptStruct* FMontageBlendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MontageBlendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MontageBlendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontageBlendSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MontageBlendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MontageBlendSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMontageBlendSettings>()
{
	return FMontageBlendSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMontageBlendSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Montage blend settings. Can be used to overwrite default Montage settings on Play/Stop\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Montage blend settings. Can be used to overwrite default Montage settings on Play/Stop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Blend Profile to use for this blend */" },
		{ "DisplayAfter", "Blend" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend Profile to use for this blend" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** AlphaBlend options (time, curve, etc.) */" },
		{ "DisplayAfter", "BlendMode" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "AlphaBlend options (time, curve, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Type of blend mode (Standard vs Inertial) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Type of blend mode (Standard vs Inertial)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontageBlendSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontageBlendSettings, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfile_MetaData), NewProp_BlendProfile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontageBlendSettings, Blend), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blend_MetaData), NewProp_Blend_MetaData) }; // 1411331559
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontageBlendSettings, BlendMode), Z_Construct_UEnum_Engine_EMontageBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2012790393
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_Blend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewProp_BlendMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MontageBlendSettings",
	Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::PropPointers),
	sizeof(FMontageBlendSettings),
	alignof(FMontageBlendSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMontageBlendSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MontageBlendSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MontageBlendSettings.InnerSingleton, Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MontageBlendSettings.InnerSingleton;
}
// End ScriptStruct FMontageBlendSettings

// Begin ScriptStruct FAnimMontageInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimMontageInstance;
class UScriptStruct* FAnimMontageInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimMontageInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimMontageInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimMontageInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimMontageInstance"));
	}
	return Z_Registration_Info_UScriptStruct_AnimMontageInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimMontageInstance>()
{
	return FAnimMontageInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimMontageInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[] = {
		{ "Comment", "// Montage reference\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Montage reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendTimeMultiplier_MetaData[] = {
		{ "Comment", "// Blend Time multiplier to allow extending and narrowing blendtimes\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend Time multiplier to allow extending and narrowing blendtimes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSections_MetaData[] = {
		{ "Comment", "// list of next sections per section - index of array is section id\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "list of next sections per section - index of array is section id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevSections_MetaData[] = {
		{ "Comment", "// list of prev sections per section - index of array is section id\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "list of prev sections per section - index of array is section id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStateBranchingPoints_MetaData[] = {
		{ "Comment", "/** Currently Active AnimNotifyState, stored as a copy of the event as we need to\n\x09\x09""call NotifyEnd on the event after a deletion in the editor. After this the event\n\x09\x09is removed correctly. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Currently Active AnimNotifyState, stored as a copy of the event as we need to\n              call NotifyEnd on the event after a deletion in the editor. After this the event\n              is removed correctly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableRootMotionCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultBlendTimeMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextSections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrevSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrevSections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStateBranchingPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveStateBranchingPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisableRootMotionCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimMontageInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Montage_MetaData), NewProp_Montage_MetaData) };
void Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_SetBit(void* Obj)
{
	((FAnimMontageInstance*)Obj)->bPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimMontageInstance), &Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaying_MetaData), NewProp_bPlaying_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier = { "DefaultBlendTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, DefaultBlendTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlendTimeMultiplier_MetaData), NewProp_DefaultBlendTimeMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_Inner = { "NextSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections = { "NextSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, NextSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSections_MetaData), NewProp_NextSections_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_Inner = { "PrevSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections = { "PrevSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, PrevSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevSections_MetaData), NewProp_PrevSections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_Inner = { "ActiveStateBranchingPoints", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(0, nullptr) }; // 3109849065
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints = { "ActiveStateBranchingPoints", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, ActiveStateBranchingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStateBranchingPoints_MetaData), NewProp_ActiveStateBranchingPoints_MetaData) }; // 3109849065
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, Blend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blend_MetaData), NewProp_Blend_MetaData) }; // 879909083
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount = { "DisableRootMotionCount", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimMontageInstance, DisableRootMotionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableRootMotionCount_MetaData), NewProp_DisableRootMotionCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimMontageInstance",
	Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers),
	sizeof(FAnimMontageInstance),
	alignof(FAnimMontageInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimMontageInstance()
{
	if (!Z_Registration_Info_UScriptStruct_AnimMontageInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimMontageInstance.InnerSingleton, Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimMontageInstance.InnerSingleton;
}
// End ScriptStruct FAnimMontageInstance

// Begin Class UAnimMontage Function CreateSlotAnimationAsDynamicMontage_WithBlendSettings
struct Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics
{
	struct AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms
	{
		UAnimSequenceBase* Asset;
		FName SlotNodeName;
		FMontageBlendSettings BlendInSettings;
		FMontageBlendSettings BlendOutSettings;
		float InPlayRate;
		int32 LoopCount;
		float InBlendOutTriggerTime;
		UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Utility function to create dynamic montage from AnimSequence with blend in settings */" },
		{ "CPP_Default_InBlendOutTriggerTime", "-1.000000" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_LoopCount", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Utility function to create dynamic montage from AnimSequence with blend in settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendInSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendInSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOutSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendOutTriggerTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, Asset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, SlotNodeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings = { "BlendInSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, BlendInSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendInSettings_MetaData), NewProp_BlendInSettings_MetaData) }; // 2473259411
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings = { "BlendOutSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, BlendOutSettings), Z_Construct_UScriptStruct_FMontageBlendSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutSettings_MetaData), NewProp_BlendOutSettings_MetaData) }; // 2473259411
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, LoopCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InBlendOutTriggerTime = { "InBlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, InBlendOutTriggerTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_SlotNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendInSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_BlendOutSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_InBlendOutTriggerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "CreateSlotAnimationAsDynamicMontage_WithBlendSettings", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::AnimMontage_eventCreateSlotAnimationAsDynamicMontage_WithBlendSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execCreateSlotAnimationAsDynamicMontage_WithBlendSettings)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Asset);
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotNodeName);
	P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendInSettings);
	P_GET_STRUCT_REF(FMontageBlendSettings,Z_Param_Out_BlendOutSettings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_LoopCount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendOutTriggerTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings(Z_Param_Asset,Z_Param_SlotNodeName,Z_Param_Out_BlendInSettings,Z_Param_Out_BlendOutSettings,Z_Param_InPlayRate,Z_Param_LoopCount,Z_Param_InBlendOutTriggerTime);
	P_NATIVE_END;
}
// End Class UAnimMontage Function CreateSlotAnimationAsDynamicMontage_WithBlendSettings

// Begin Class UAnimMontage Function GetBlendInArgs
struct Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics
{
	struct AnimMontage_eventGetBlendInArgs_Parms
	{
		FAlphaBlendArgs ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetBlendInArgs_Parms, ReturnValue), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(0, nullptr) }; // 1411331559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetBlendInArgs", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::AnimMontage_eventGetBlendInArgs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::AnimMontage_eventGetBlendInArgs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetBlendInArgs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetBlendInArgs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetBlendInArgs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAlphaBlendArgs*)Z_Param__Result=P_THIS->GetBlendInArgs();
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetBlendInArgs

// Begin Class UAnimMontage Function GetBlendOutArgs
struct Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics
{
	struct AnimMontage_eventGetBlendOutArgs_Parms
	{
		FAlphaBlendArgs ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetBlendOutArgs_Parms, ReturnValue), Z_Construct_UScriptStruct_FAlphaBlendArgs, METADATA_PARAMS(0, nullptr) }; // 1411331559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetBlendOutArgs", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::AnimMontage_eventGetBlendOutArgs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::AnimMontage_eventGetBlendOutArgs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetBlendOutArgs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAlphaBlendArgs*)Z_Param__Result=P_THIS->GetBlendOutArgs();
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetBlendOutArgs

// Begin Class UAnimMontage Function GetDefaultBlendInTime
struct Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics
{
	struct AnimMontage_eventGetDefaultBlendInTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetDefaultBlendInTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetDefaultBlendInTime", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::AnimMontage_eventGetDefaultBlendInTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::AnimMontage_eventGetDefaultBlendInTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetDefaultBlendInTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultBlendInTime();
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetDefaultBlendInTime

// Begin Class UAnimMontage Function GetDefaultBlendOutTime
struct Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics
{
	struct AnimMontage_eventGetDefaultBlendOutTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetDefaultBlendOutTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetDefaultBlendOutTime", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::AnimMontage_eventGetDefaultBlendOutTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::AnimMontage_eventGetDefaultBlendOutTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetDefaultBlendOutTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultBlendOutTime();
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetDefaultBlendOutTime

// Begin Class UAnimMontage Function GetFirstAnimReference
struct Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics
{
	struct AnimMontage_eventGetFirstAnimReference_Parms
	{
		UAnimSequenceBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetFirstAnimReference_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetFirstAnimReference", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::AnimMontage_eventGetFirstAnimReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::AnimMontage_eventGetFirstAnimReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetFirstAnimReference)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequenceBase**)Z_Param__Result=P_THIS->GetFirstAnimReference();
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetFirstAnimReference

// Begin Class UAnimMontage Function GetGroupName
struct Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics
{
	struct AnimMontage_eventGetGroupName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get the Montage's Group Name. This is the group from the first slot.  */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Get the Montage's Group Name. This is the group from the first slot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetGroupName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetGroupName", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::AnimMontage_eventGetGroupName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::AnimMontage_eventGetGroupName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetGroupName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetGroupName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetGroupName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetGroupName();
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetGroupName

// Begin Class UAnimMontage Function GetNumSections
struct Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics
{
	struct AnimMontage_eventGetNumSections_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Returns the number of sections this montage has */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Returns the number of sections this montage has" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetNumSections", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::AnimMontage_eventGetNumSections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::AnimMontage_eventGetNumSections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetNumSections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetNumSections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetNumSections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumSections();
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetNumSections

// Begin Class UAnimMontage Function GetSectionIndex
struct Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics
{
	struct AnimMontage_eventGetSectionIndex_Parms
	{
		FName InSectionName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get SectionIndex from SectionName. Returns INDEX_None if not found */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Get SectionIndex from SectionName. Returns INDEX_None if not found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSectionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetSectionIndex_Parms, InSectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetSectionIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_InSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetSectionIndex", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::AnimMontage_eventGetSectionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::AnimMontage_eventGetSectionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetSectionIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetSectionIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetSectionIndex)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSectionIndex(Z_Param_InSectionName);
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetSectionIndex

// Begin Class UAnimMontage Function GetSectionName
struct Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics
{
	struct AnimMontage_eventGetSectionName_Parms
	{
		int32 SectionIndex;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Get SectionName from SectionIndex. Returns NAME_None if not found */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Get SectionName from SectionIndex. Returns NAME_None if not found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetSectionName_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventGetSectionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "GetSectionName", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::AnimMontage_eventGetSectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::AnimMontage_eventGetSectionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_GetSectionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetSectionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execGetSectionName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSectionName(Z_Param_SectionIndex);
	P_NATIVE_END;
}
// End Class UAnimMontage Function GetSectionName

// Begin Class UAnimMontage Function IsDynamicMontage
struct Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics
{
	struct AnimMontage_eventIsDynamicMontage_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimMontage_eventIsDynamicMontage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimMontage_eventIsDynamicMontage_Parms), &Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "IsDynamicMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::AnimMontage_eventIsDynamicMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::AnimMontage_eventIsDynamicMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_IsDynamicMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_IsDynamicMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execIsDynamicMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDynamicMontage();
	P_NATIVE_END;
}
// End Class UAnimMontage Function IsDynamicMontage

// Begin Class UAnimMontage Function IsValidAdditiveSlot
struct Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics
{
	struct AnimMontage_eventIsValidAdditiveSlot_Parms
	{
		FName SlotNodeName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** Check if this slot has a valid additive animation for the specified slot.\n\x09 * The slot name should not include the group name.\n\x09 * i.e. for \"DefaultGroup.DefaultSlot\", the slot name is \"DefaultSlot\".\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Check if this slot has a valid additive animation for the specified slot.\nThe slot name should not include the group name.\ni.e. for \"DefaultGroup.DefaultSlot\", the slot name is \"DefaultSlot\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotNodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNodeName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::NewProp_SlotNodeName = { "SlotNodeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventIsValidAdditiveSlot_Parms, SlotNodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotNodeName_MetaData), NewProp_SlotNodeName_MetaData) };
void Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimMontage_eventIsValidAdditiveSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimMontage_eventIsValidAdditiveSlot_Parms), &Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::NewProp_SlotNodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "IsValidAdditiveSlot", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::AnimMontage_eventIsValidAdditiveSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::AnimMontage_eventIsValidAdditiveSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execIsValidAdditiveSlot)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotNodeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidAdditiveSlot(Z_Param_Out_SlotNodeName);
	P_NATIVE_END;
}
// End Class UAnimMontage Function IsValidAdditiveSlot

// Begin Class UAnimMontage Function IsValidSectionName
struct Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics
{
	struct AnimMontage_eventIsValidSectionName_Parms
	{
		FName InSectionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "Comment", "/** @return true if valid section */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "@return true if valid section" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSectionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_InSectionName = { "InSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimMontage_eventIsValidSectionName_Parms, InSectionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimMontage_eventIsValidSectionName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimMontage_eventIsValidSectionName_Parms), &Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_InSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, nullptr, "IsValidSectionName", nullptr, nullptr, Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::AnimMontage_eventIsValidSectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::AnimMontage_eventIsValidSectionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimMontage_IsValidSectionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimMontage_IsValidSectionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimMontage::execIsValidSectionName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InSectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidSectionName(Z_Param_InSectionName);
	P_NATIVE_END;
}
// End Class UAnimMontage Function IsValidSectionName

// Begin Class UAnimMontage
void UAnimMontage::StaticRegisterNativesUAnimMontage()
{
	UClass* Class = UAnimMontage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSlotAnimationAsDynamicMontage_WithBlendSettings", &UAnimMontage::execCreateSlotAnimationAsDynamicMontage_WithBlendSettings },
		{ "GetBlendInArgs", &UAnimMontage::execGetBlendInArgs },
		{ "GetBlendOutArgs", &UAnimMontage::execGetBlendOutArgs },
		{ "GetDefaultBlendInTime", &UAnimMontage::execGetDefaultBlendInTime },
		{ "GetDefaultBlendOutTime", &UAnimMontage::execGetDefaultBlendOutTime },
		{ "GetFirstAnimReference", &UAnimMontage::execGetFirstAnimReference },
		{ "GetGroupName", &UAnimMontage::execGetGroupName },
		{ "GetNumSections", &UAnimMontage::execGetNumSections },
		{ "GetSectionIndex", &UAnimMontage::execGetSectionIndex },
		{ "GetSectionName", &UAnimMontage::execGetSectionName },
		{ "IsDynamicMontage", &UAnimMontage::execIsDynamicMontage },
		{ "IsValidAdditiveSlot", &UAnimMontage::execIsValidAdditiveSlot },
		{ "IsValidSectionName", &UAnimMontage::execIsValidSectionName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimMontage);
UClass* Z_Construct_UClass_UAnimMontage_NoRegister()
{
	return UAnimMontage::StaticClass();
}
struct Z_Construct_UClass_UAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Any property you're adding to AnimMontage and parent class has to be considered for Child Asset\n *\n * Child Asset is considered to be only asset mapping feature using everything else in the class\n * For example, you can just use all parent's setting  for the montage, but only remap assets\n * This isn't magic bullet unfortunately and it is consistent effort of keeping the data synced with parent\n * If you add new property, please make sure those property has to be copied for children.\n * If it does, please add the copy in the function RefreshParentAssetData\n */" },
		{ "HideCategories", "UObject Length" },
		{ "IncludePath", "Animation/AnimMontage.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Any property you're adding to AnimMontage and parent class has to be considered for Child Asset\n\nChild Asset is considered to be only asset mapping feature using everything else in the class\nFor example, you can just use all parent's setting  for the montage, but only remap assets\nThis isn't magic bullet unfortunately and it is consistent effort of keeping the data synced with parent\nIf you add new property, please make sure those property has to be copied for children.\nIf it does, please add the copy in the function RefreshParentAssetData" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendModeIn_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendModeOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** Blend in option. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend in option." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** Blend out option. This is only used when it blends out itself. If it's interrupted by other montages, it will use new montage's BlendIn option to blend out. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend out option. This is only used when it blends out itself. If it's interrupted by other montages, it will use new montage's BlendIn option to blend out." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTriggerTime_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** Time from Sequence End to trigger blend out.\n\x09 * <0 means using BlendOutTime, so BlendOut finishes as Montage ends.\n\x09 * >=0 means using 'SequenceEnd - BlendOutTriggerTime' to trigger blend out. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Time from Sequence End to trigger blend out.\n<0 means using BlendOutTime, so BlendOut finishes as Montage ends.\n>=0 means using 'SequenceEnd - BlendOutTriggerTime' to trigger blend out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncGroup_MetaData[] = {
		{ "Category", "SyncGroup" },
		{ "Comment", "/** If you're using marker based sync for this montage, make sure to add sync group name. For now we only support one group */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If you're using marker based sync for this montage, make sure to add sync group name. For now we only support one group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncSlotIndex_MetaData[] = {
		{ "Category", "SyncGroup" },
		{ "Comment", "/** Index of the slot track used for collecting sync markers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Index of the slot track used for collecting sync markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeSections_MetaData[] = {
		{ "Comment", "// composite section. \n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "composite section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotAnimTracks_MetaData[] = {
		{ "Comment", "// slot data, each slot contains anim track\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "slot data, each slot contains anim track" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPoints_MetaData[] = {
		{ "Comment", "// Remove this when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Remove this when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotionTranslation_MetaData[] = {
		{ "Comment", "/** If this is on, it will allow extracting root motion translation. DEPRECATED in 4.5 root motion is controlled by anim sequences **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If this is on, it will allow extracting root motion translation. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotionRotation_MetaData[] = {
		{ "Comment", "/** If this is on, it will allow extracting root motion rotation. DEPRECATED in 4.5 root motion is controlled by anim sequences **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If this is on, it will allow extracting root motion rotation. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoBlendOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** When it hits end, it automatically blends out. If this is false, it won't blend out but keep the last pose until stopped explicitly */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "When it hits end, it automatically blends out. If this is false, it won't blend out but keep the last pose until stopped explicitly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfileIn_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** The blend profile to use. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "The blend profile to use." },
		{ "UseAsBlendProfile", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfileOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "Comment", "/** The blend profile to use. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "The blend profile to use." },
		{ "UseAsBlendProfile", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[] = {
		{ "Comment", "/** Root Bone will be locked to that position when extracting root motion. DEPRECATED in 4.5 root motion is controlled by anim sequences **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Root Bone will be locked to that position when extracting root motion. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "Comment", "/** Preview Base pose for additive BlendSpace **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointMarkers_MetaData[] = {
		{ "Comment", "/** Cached list of Branching Point markers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Cached list of Branching Point markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointStateNotifyIndices_MetaData[] = {
		{ "Comment", "/** Keep track of which AnimNotify_State are marked as BranchingPoints, so we can update their state when the Montage is ticked */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Keep track of which AnimNotify_State are marked as BranchingPoints, so we can update their state when the Montage is ticked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStretchCurve_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/** Time stretch curve will only be used when the montage has a non-default play rate  */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Time stretch curve will only be used when the montage has a non-default play rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStretchCurveName_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "Comment", "/** Name of optional TimeStretchCurveName to look for in Montage. Time stretch curve will only be used when the montage has a non-default play rate */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Name of optional TimeStretchCurveName to look for in Montage. Time stretch curve will only be used when the montage has a non-default play rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendModeIn_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendModeIn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendModeOut_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendModeOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOut;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SyncGroup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SyncSlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompositeSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompositeSections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotAnimTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotAnimTracks;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchingPoints;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bEnableRootMotionTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotionTranslation;
	static void NewProp_bEnableRootMotionRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotionRotation;
	static void NewProp_bEnableAutoBlendOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoBlendOut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfileIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendProfileOut;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointMarkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchingPointMarkers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BranchingPointStateNotifyIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BranchingPointStateNotifyIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStretchCurve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TimeStretchCurveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimMontage_CreateSlotAnimationAsDynamicMontage_WithBlendSettings, "CreateSlotAnimationAsDynamicMontage_WithBlendSettings" }, // 2827076925
		{ &Z_Construct_UFunction_UAnimMontage_GetBlendInArgs, "GetBlendInArgs" }, // 2054218312
		{ &Z_Construct_UFunction_UAnimMontage_GetBlendOutArgs, "GetBlendOutArgs" }, // 3077624154
		{ &Z_Construct_UFunction_UAnimMontage_GetDefaultBlendInTime, "GetDefaultBlendInTime" }, // 2110615476
		{ &Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime, "GetDefaultBlendOutTime" }, // 2213016802
		{ &Z_Construct_UFunction_UAnimMontage_GetFirstAnimReference, "GetFirstAnimReference" }, // 1419188571
		{ &Z_Construct_UFunction_UAnimMontage_GetGroupName, "GetGroupName" }, // 2178557720
		{ &Z_Construct_UFunction_UAnimMontage_GetNumSections, "GetNumSections" }, // 617552430
		{ &Z_Construct_UFunction_UAnimMontage_GetSectionIndex, "GetSectionIndex" }, // 2206979475
		{ &Z_Construct_UFunction_UAnimMontage_GetSectionName, "GetSectionName" }, // 2744866972
		{ &Z_Construct_UFunction_UAnimMontage_IsDynamicMontage, "IsDynamicMontage" }, // 39301013
		{ &Z_Construct_UFunction_UAnimMontage_IsValidAdditiveSlot, "IsValidAdditiveSlot" }, // 3401822213
		{ &Z_Construct_UFunction_UAnimMontage_IsValidSectionName, "IsValidSectionName" }, // 3319863118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn = { "BlendModeIn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendModeIn), Z_Construct_UEnum_Engine_EMontageBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendModeIn_MetaData), NewProp_BlendModeIn_MetaData) }; // 2012790393
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut = { "BlendModeOut", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendModeOut), Z_Construct_UEnum_Engine_EMontageBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendModeOut_MetaData), NewProp_BlendModeOut_MetaData) }; // 2012790393
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendIn_MetaData), NewProp_BlendIn_MetaData) }; // 879909083
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendInTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendInTime_MetaData), NewProp_BlendInTime_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendOut), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOut_MetaData), NewProp_BlendOut_MetaData) }; // 879909083
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendOutTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutTime_MetaData), NewProp_BlendOutTime_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime = { "BlendOutTriggerTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendOutTriggerTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutTriggerTime_MetaData), NewProp_BlendOutTriggerTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, SyncGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncGroup_MetaData), NewProp_SyncGroup_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex = { "SyncSlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, SyncSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncSlotIndex_MetaData), NewProp_SyncSlotIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData = { "MarkerData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, MarkerData), Z_Construct_UScriptStruct_FMarkerSyncData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerData_MetaData), NewProp_MarkerData_MetaData) }; // 702228068
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_Inner = { "CompositeSections", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCompositeSection, METADATA_PARAMS(0, nullptr) }; // 3909454586
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections = { "CompositeSections", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, CompositeSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeSections_MetaData), NewProp_CompositeSections_MetaData) }; // 3909454586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_Inner = { "SlotAnimTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlotAnimationTrack, METADATA_PARAMS(0, nullptr) }; // 3203150603
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks = { "SlotAnimTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, SlotAnimTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotAnimTracks_MetaData), NewProp_SlotAnimTracks_MetaData) }; // 3203150603
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_Inner = { "BranchingPoints", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBranchingPoint, METADATA_PARAMS(0, nullptr) }; // 1531027755
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints = { "BranchingPoints", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BranchingPoints_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPoints_MetaData), NewProp_BranchingPoints_MetaData) }; // 1531027755
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_SetBit(void* Obj)
{
	((UAnimMontage*)Obj)->bEnableRootMotionTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation = { "bEnableRootMotionTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRootMotionTranslation_MetaData), NewProp_bEnableRootMotionTranslation_MetaData) };
void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_SetBit(void* Obj)
{
	((UAnimMontage*)Obj)->bEnableRootMotionRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation = { "bEnableRootMotionRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRootMotionRotation_MetaData), NewProp_bEnableRootMotionRotation_MetaData) };
void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_SetBit(void* Obj)
{
	((UAnimMontage*)Obj)->bEnableAutoBlendOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut = { "bEnableAutoBlendOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoBlendOut_MetaData), NewProp_bEnableAutoBlendOut_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileIn = { "BlendProfileIn", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendProfileIn), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfileIn_MetaData), NewProp_BlendProfileIn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileOut = { "BlendProfileOut", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BlendProfileOut), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendProfileOut_MetaData), NewProp_BlendProfileOut_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock = { "RootMotionRootLock", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionRootLock_MetaData), NewProp_RootMotionRootLock_MetaData) }; // 103583639
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose = { "PreviewBasePose", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewBasePose_MetaData), NewProp_PreviewBasePose_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_Inner = { "BranchingPointMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBranchingPointMarker, METADATA_PARAMS(0, nullptr) }; // 740703196
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers = { "BranchingPointMarkers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BranchingPointMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointMarkers_MetaData), NewProp_BranchingPointMarkers_MetaData) }; // 740703196
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_Inner = { "BranchingPointStateNotifyIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices = { "BranchingPointStateNotifyIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, BranchingPointStateNotifyIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointStateNotifyIndices_MetaData), NewProp_BranchingPointStateNotifyIndices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve = { "TimeStretchCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, TimeStretchCurve), Z_Construct_UScriptStruct_FTimeStretchCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStretchCurve_MetaData), NewProp_TimeStretchCurve_MetaData) }; // 2339713338
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName = { "TimeStretchCurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimMontage, TimeStretchCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStretchCurveName_MetaData), NewProp_TimeStretchCurveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendModeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendProfileOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimCompositeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimMontage_Statics::ClassParams = {
	&UAnimMontage::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimMontage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimMontage()
{
	if (!Z_Registration_Info_UClass_UAnimMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimMontage.OuterSingleton, Z_Construct_UClass_UAnimMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimMontage.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimMontage>()
{
	return UAnimMontage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMontage);
UAnimMontage::~UAnimMontage() {}
// End Class UAnimMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimNotifyEventType_StaticEnum, TEXT("EAnimNotifyEventType"), &Z_Registration_Info_UEnum_EAnimNotifyEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 581801205U) },
		{ EMontageBlendMode_StaticEnum, TEXT("EMontageBlendMode"), &Z_Registration_Info_UEnum_EMontageBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2012790393U) },
		{ EMontageSubStepResult_StaticEnum, TEXT("EMontageSubStepResult"), &Z_Registration_Info_UEnum_EMontageSubStepResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1639814964U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCompositeSection::StaticStruct, Z_Construct_UScriptStruct_FCompositeSection_Statics::NewStructOps, TEXT("CompositeSection"), &Z_Registration_Info_UScriptStruct_CompositeSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositeSection), 3909454586U) },
		{ FSlotAnimationTrack::StaticStruct, Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewStructOps, TEXT("SlotAnimationTrack"), &Z_Registration_Info_UScriptStruct_SlotAnimationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotAnimationTrack), 3203150603U) },
		{ FBranchingPoint::StaticStruct, Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewStructOps, TEXT("BranchingPoint"), &Z_Registration_Info_UScriptStruct_BranchingPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBranchingPoint), 1531027755U) },
		{ FBranchingPointMarker::StaticStruct, Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewStructOps, TEXT("BranchingPointMarker"), &Z_Registration_Info_UScriptStruct_BranchingPointMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBranchingPointMarker), 740703196U) },
		{ FMontageBlendSettings::StaticStruct, Z_Construct_UScriptStruct_FMontageBlendSettings_Statics::NewStructOps, TEXT("MontageBlendSettings"), &Z_Registration_Info_UScriptStruct_MontageBlendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMontageBlendSettings), 2473259411U) },
		{ FAnimMontageInstance::StaticStruct, Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewStructOps, TEXT("AnimMontageInstance"), &Z_Registration_Info_UScriptStruct_AnimMontageInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimMontageInstance), 1513556854U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimMontage, UAnimMontage::StaticClass, TEXT("UAnimMontage"), &Z_Registration_Info_UClass_UAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimMontage), 233672779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_3519071903(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
