// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncGroupScope();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTickRecord();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBlendSampleData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendSampleData;
class UScriptStruct* FBlendSampleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSampleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendSampleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSampleData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendSampleData"));
	}
	return Z_Registration_Info_UScriptStruct_BlendSampleData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendSampleData>()
{
	return FBlendSampleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlendSampleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transform definition */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Transform definition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleDataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightRate_MetaData[] = {
		{ "Comment", "// Rate of change of the Weight - used in smoothed BlendSpace blends\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Rate of change of the Weight - used in smoothed BlendSpace blends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplePlayRate_MetaData[] = {
		{ "Comment", "// We may merge multiple samples if they use the same animation\n// Calculate the combined sample play rate here\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "We may merge multiple samples if they use the same animation\nCalculate the combined sample play rate here" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleDataIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplePlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSampleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex = { "SampleDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSampleData, SampleDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleDataIndex_MetaData), NewProp_SampleDataIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSampleData, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animation_MetaData), NewProp_Animation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight = { "TotalWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSampleData, TotalWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWeight_MetaData), NewProp_TotalWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_WeightRate = { "WeightRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSampleData, WeightRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightRate_MetaData), NewProp_WeightRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSampleData, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime = { "PreviousTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSampleData, PreviousTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousTime_MetaData), NewProp_PreviousTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate = { "SamplePlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlendSampleData, SamplePlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplePlayRate_MetaData), NewProp_SamplePlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_WeightRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlendSampleData",
	Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers),
	sizeof(FBlendSampleData),
	alignof(FBlendSampleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData()
{
	if (!Z_Registration_Info_UScriptStruct_BlendSampleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendSampleData.InnerSingleton, Z_Construct_UScriptStruct_FBlendSampleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlendSampleData.InnerSingleton;
}
// End ScriptStruct FBlendSampleData

// Begin ScriptStruct FBlendFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendFilter;
class UScriptStruct* FBlendFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlendFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BlendFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlendFilter>()
{
	return FBlendFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlendFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BlendFilter",
	nullptr,
	0,
	sizeof(FBlendFilter),
	alignof(FBlendFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter()
{
	if (!Z_Registration_Info_UScriptStruct_BlendFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendFilter.InnerSingleton, Z_Construct_UScriptStruct_FBlendFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlendFilter.InnerSingleton;
}
// End ScriptStruct FBlendFilter

// Begin ScriptStruct FMarkerSyncAnimPosition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition;
class UScriptStruct* FMarkerSyncAnimPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MarkerSyncAnimPosition"));
	}
	return Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMarkerSyncAnimPosition>()
{
	return FMarkerSyncAnimPosition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represent a current play position in an animation\n//based on sync markers\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Represent a current play position in an animation\nbased on sync markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMarkerName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "/** The marker we have passed*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The marker we have passed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextMarkerName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "/** The marker we are heading towards */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The marker we are heading towards" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBetweenMarkers_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "/** Value between 0 and 1 representing where we are:\n\x09""0   we are at PreviousMarker\n\x09""1   we are at NextMarker\n\x09""0.5 we are half way between the two */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Value between 0 and 1 representing where we are:\n      0   we are at PreviousMarker\n      1   we are at NextMarker\n      0.5 we are half way between the two" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousMarkerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextMarkerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionBetweenMarkers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerSyncAnimPosition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName = { "PreviousMarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarkerSyncAnimPosition, PreviousMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousMarkerName_MetaData), NewProp_PreviousMarkerName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName = { "NextMarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarkerSyncAnimPosition, NextMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextMarkerName_MetaData), NewProp_NextMarkerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers = { "PositionBetweenMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMarkerSyncAnimPosition, PositionBetweenMarkers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBetweenMarkers_MetaData), NewProp_PositionBetweenMarkers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MarkerSyncAnimPosition",
	Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers),
	sizeof(FMarkerSyncAnimPosition),
	alignof(FMarkerSyncAnimPosition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition()
{
	if (!Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.InnerSingleton, Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition.InnerSingleton;
}
// End ScriptStruct FMarkerSyncAnimPosition

// Begin ScriptStruct FAnimTickRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimTickRecord;
class UScriptStruct* FAnimTickRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimTickRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimTickRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimTickRecord, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimTickRecord"));
	}
	return Z_Registration_Info_UScriptStruct_AnimTickRecord.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimTickRecord>()
{
	return FAnimTickRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimTickRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Information about an animation asset that needs to be ticked\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Information about an animation asset that needs to be ticked" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimTickRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimTickRecord, SourceAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAsset_MetaData), NewProp_SourceAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimTickRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimTickRecord",
	Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers),
	sizeof(FAnimTickRecord),
	alignof(FAnimTickRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimTickRecord()
{
	if (!Z_Registration_Info_UScriptStruct_AnimTickRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimTickRecord.InnerSingleton, Z_Construct_UScriptStruct_FAnimTickRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimTickRecord.InnerSingleton;
}
// End ScriptStruct FAnimTickRecord

// Begin Enum EAnimGroupRole
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimGroupRole;
static UEnum* EAnimGroupRole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimGroupRole, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimGroupRole"));
	}
	return Z_Registration_Info_UEnum_EAnimGroupRole.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimGroupRole::Type>()
{
	return EAnimGroupRole_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimGroupRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlwaysFollower.Comment", "/** This node will always be a follower (unless there are only followers, in which case the first one ticked wins). */" },
		{ "AlwaysFollower.Name", "EAnimGroupRole::AlwaysFollower" },
		{ "AlwaysFollower.ToolTip", "This node will always be a follower (unless there are only followers, in which case the first one ticked wins)." },
		{ "AlwaysLeader.Comment", "/** This node will always be a leader (if more than one node is AlwaysLeader, the last one ticked wins). */" },
		{ "AlwaysLeader.Name", "EAnimGroupRole::AlwaysLeader" },
		{ "AlwaysLeader.ToolTip", "This node will always be a leader (if more than one node is AlwaysLeader, the last one ticked wins)." },
		{ "CanBeLeader.Comment", "/** This node can be the leader, as long as it has a higher blend weight than the previous best leader. */" },
		{ "CanBeLeader.Name", "EAnimGroupRole::CanBeLeader" },
		{ "CanBeLeader.ToolTip", "This node can be the leader, as long as it has a higher blend weight than the previous best leader." },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "TransitionFollower.Comment", "/** This node will be excluded from the sync group while blending in. Once blended in it will be a follower until blended out*/" },
		{ "TransitionFollower.Name", "EAnimGroupRole::TransitionFollower" },
		{ "TransitionFollower.ToolTip", "This node will be excluded from the sync group while blending in. Once blended in it will be a follower until blended out" },
		{ "TransitionLeader.Comment", "/** This node will be excluded from the sync group while blending in. Once blended in it will be the sync group leader until blended out*/" },
		{ "TransitionLeader.Name", "EAnimGroupRole::TransitionLeader" },
		{ "TransitionLeader.ToolTip", "This node will be excluded from the sync group while blending in. Once blended in it will be the sync group leader until blended out" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimGroupRole::CanBeLeader", (int64)EAnimGroupRole::CanBeLeader },
		{ "EAnimGroupRole::AlwaysFollower", (int64)EAnimGroupRole::AlwaysFollower },
		{ "EAnimGroupRole::AlwaysLeader", (int64)EAnimGroupRole::AlwaysLeader },
		{ "EAnimGroupRole::TransitionLeader", (int64)EAnimGroupRole::TransitionLeader },
		{ "EAnimGroupRole::TransitionFollower", (int64)EAnimGroupRole::TransitionFollower },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimGroupRole",
	"EAnimGroupRole::Type",
	Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole()
{
	if (!Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton, Z_Construct_UEnum_Engine_EAnimGroupRole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimGroupRole.InnerSingleton;
}
// End Enum EAnimGroupRole

// Begin Enum EAnimSyncGroupScope
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimSyncGroupScope;
static UEnum* EAnimSyncGroupScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncGroupScope, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimSyncGroupScope"));
	}
	return Z_Registration_Info_UEnum_EAnimSyncGroupScope.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimSyncGroupScope>()
{
	return EAnimSyncGroupScope_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// Deprecated - do not use\n" },
		{ "Component.Comment", "// Sync with all animations in the main and linked instances of this skeletal mesh component\n" },
		{ "Component.Name", "EAnimSyncGroupScope::Component" },
		{ "Component.ToolTip", "Sync with all animations in the main and linked instances of this skeletal mesh component" },
		{ "Local.Comment", "// Sync only with animations in the current instance (either main or linked instance)\n" },
		{ "Local.Name", "EAnimSyncGroupScope::Local" },
		{ "Local.ToolTip", "Sync only with animations in the current instance (either main or linked instance)" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Deprecated - do not use" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimSyncGroupScope::Local", (int64)EAnimSyncGroupScope::Local },
		{ "EAnimSyncGroupScope::Component", (int64)EAnimSyncGroupScope::Component },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimSyncGroupScope",
	"EAnimSyncGroupScope",
	Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimSyncGroupScope()
{
	if (!Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton, Z_Construct_UEnum_Engine_EAnimSyncGroupScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimSyncGroupScope.InnerSingleton;
}
// End Enum EAnimSyncGroupScope

// Begin Enum EAnimSyncMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimSyncMethod;
static UEnum* EAnimSyncMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimSyncMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimSyncMethod"));
	}
	return Z_Registration_Info_UEnum_EAnimSyncMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimSyncMethod>()
{
	return EAnimSyncMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// How an asset will synchronize with other assets\n" },
		{ "DoNotSync.Comment", "// Don't sync ever\n" },
		{ "DoNotSync.Name", "EAnimSyncMethod::DoNotSync" },
		{ "DoNotSync.ToolTip", "Don't sync ever" },
		{ "Graph.Comment", "// Use the graph structure to provide a sync group to apply\n" },
		{ "Graph.Name", "EAnimSyncMethod::Graph" },
		{ "Graph.ToolTip", "Use the graph structure to provide a sync group to apply" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "SyncGroup.Comment", "// Use a named sync group\n" },
		{ "SyncGroup.Name", "EAnimSyncMethod::SyncGroup" },
		{ "SyncGroup.ToolTip", "Use a named sync group" },
		{ "ToolTip", "How an asset will synchronize with other assets" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimSyncMethod::DoNotSync", (int64)EAnimSyncMethod::DoNotSync },
		{ "EAnimSyncMethod::SyncGroup", (int64)EAnimSyncMethod::SyncGroup },
		{ "EAnimSyncMethod::Graph", (int64)EAnimSyncMethod::Graph },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimSyncMethod",
	"EAnimSyncMethod",
	Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod()
{
	if (!Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAnimSyncMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimSyncMethod.InnerSingleton;
}
// End Enum EAnimSyncMethod

// Begin ScriptStruct FAnimGroupInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimGroupInstance;
class UScriptStruct* FAnimGroupInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGroupInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimGroupInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimGroupInstance"));
	}
	return Z_Registration_Info_UScriptStruct_AnimGroupInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimGroupInstance>()
{
	return FAnimGroupInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimGroupInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGroupInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimGroupInstance",
	nullptr,
	0,
	sizeof(FAnimGroupInstance),
	alignof(FAnimGroupInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInstance()
{
	if (!Z_Registration_Info_UScriptStruct_AnimGroupInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimGroupInstance.InnerSingleton, Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimGroupInstance.InnerSingleton;
}
// End ScriptStruct FAnimGroupInstance

// Begin ScriptStruct FRootMotionMovementParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootMotionMovementParams;
class UScriptStruct* FRootMotionMovementParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionMovementParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootMotionMovementParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionMovementParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionMovementParams"));
	}
	return Z_Registration_Info_UScriptStruct_RootMotionMovementParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRootMotionMovementParams>()
{
	return FRootMotionMovementParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Utility struct to accumulate root motion. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Utility struct to accumulate root motion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionMovementParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
{
	((FRootMotionMovementParams*)Obj)->bHasRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion = { "bHasRootMotion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRootMotionMovementParams), &Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRootMotion_MetaData), NewProp_bHasRootMotion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionMovementParams, BlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeight_MetaData), NewProp_BlendWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform = { "RootMotionTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootMotionMovementParams, RootMotionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMotionTransform_MetaData), NewProp_RootMotionTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RootMotionMovementParams",
	Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers),
	sizeof(FRootMotionMovementParams),
	alignof(FRootMotionMovementParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams()
{
	if (!Z_Registration_Info_UScriptStruct_RootMotionMovementParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootMotionMovementParams.InnerSingleton, Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RootMotionMovementParams.InnerSingleton;
}
// End ScriptStruct FRootMotionMovementParams

// Begin ScriptStruct FAnimationGroupReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationGroupReference;
class UScriptStruct* FAnimationGroupReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationGroupReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationGroupReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationGroupReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationGroupReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationGroupReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationGroupReference>()
{
	return FAnimationGroupReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationGroupReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// How this animation will synchronize with other animations. \n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "How this animation will synchronize with other animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The group name that we synchronize with (NAME_None if it is not part of any group). \n" },
		{ "EditCondition", "Method == EAnimSyncMethod::SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The group name that we synchronize with (NAME_None if it is not part of any group)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The role this animation can assume within the group (ignored if GroupName is not set)\n" },
		{ "EditCondition", "Method == EAnimSyncMethod::SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The role this animation can assume within the group (ignored if GroupName is not set)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationGroupReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationGroupReference, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 2737461860
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationGroupReference, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationGroupReference, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupRole_MetaData), NewProp_GroupRole_MetaData) }; // 2417928914
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimationGroupReference",
	Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers),
	sizeof(FAnimationGroupReference),
	alignof(FAnimationGroupReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationGroupReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationGroupReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationGroupReference.InnerSingleton;
}
// End ScriptStruct FAnimationGroupReference

// Begin Class UAnimationAsset Function FindMetaDataByClass
struct Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics
{
	struct AnimationAsset_eventFindMetaDataByClass_Parms
	{
		const TSubclassOf<UAnimMetaData> MetaDataClass;
		UAnimMetaData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the first metadata of the specified class */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Returns the first metadata of the specified class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MetaDataClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::NewProp_MetaDataClass = { "MetaDataClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationAsset_eventFindMetaDataByClass_Parms, MetaDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaDataClass_MetaData), NewProp_MetaDataClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationAsset_eventFindMetaDataByClass_Parms, ReturnValue), Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::NewProp_MetaDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAsset, nullptr, "FindMetaDataByClass", nullptr, nullptr, Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::AnimationAsset_eventFindMetaDataByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::AnimationAsset_eventFindMetaDataByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationAsset::execFindMetaDataByClass)
{
	P_GET_OBJECT(UClass,Z_Param_MetaDataClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMetaData**)Z_Param__Result=P_THIS->FindMetaDataByClass(Z_Param_MetaDataClass);
	P_NATIVE_END;
}
// End Class UAnimationAsset Function FindMetaDataByClass

// Begin Class UAnimationAsset Function GetPlayLength
struct Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics
{
	struct AnimationAsset_eventGetPlayLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationAsset_eventGetPlayLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAsset, nullptr, "GetPlayLength", nullptr, nullptr, Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::AnimationAsset_eventGetPlayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::AnimationAsset_eventGetPlayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationAsset_GetPlayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAsset_GetPlayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationAsset::execGetPlayLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayLength();
	P_NATIVE_END;
}
// End Class UAnimationAsset Function GetPlayLength

// Begin Class UAnimationAsset Function SetPreviewSkeletalMesh
#if WITH_EDITOR
struct Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics
{
	struct AnimationAsset_eventSetPreviewSkeletalMesh_Parms
	{
		USkeletalMesh* PreviewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Sets or updates the preview skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Sets or updates the preview skeletal mesh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationAsset_eventSetPreviewSkeletalMesh_Parms, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::NewProp_PreviewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationAsset, nullptr, "SetPreviewSkeletalMesh", nullptr, nullptr, Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::AnimationAsset_eventSetPreviewSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::AnimationAsset_eventSetPreviewSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UAnimationAsset::execSetPreviewSkeletalMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPreviewSkeletalMesh(Z_Param_PreviewMesh);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UAnimationAsset Function SetPreviewSkeletalMesh

// Begin Class UAnimationAsset
void UAnimationAsset::StaticRegisterNativesUAnimationAsset()
{
	UClass* Class = UAnimationAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindMetaDataByClass", &UAnimationAsset::execFindMetaDataByClass },
		{ "GetPlayLength", &UAnimationAsset::execGetPlayLength },
#if WITH_EDITOR
		{ "SetPreviewSkeletalMesh", &UAnimationAsset::execSetPreviewSkeletalMesh },
#endif // WITH_EDITOR
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationAsset);
UClass* Z_Construct_UClass_UAnimationAsset_NoRegister()
{
	return UAnimationAsset::StaticClass();
}
struct Z_Construct_UClass_UAnimationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimationAsset.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Pointer to the Skeleton this asset can be played on .\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Pointer to the Skeleton this asset can be played on ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_Inner_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Category", "MetaData" },
		{ "Comment", "/** Meta data that can be saved with the asset \n\x09 * \n\x09 * You can query by GetMetaData function\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Parent Asset, if set, you won't be able to edit any data in here but just mapping table\n\x09 * \n\x09 * During cooking, this data will be used to bake out to normal asset */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Parent Asset, if set, you won't be able to edit any data in here but just mapping table\n\nDuring cooking, this data will be used to bake out to normal asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenAssets_MetaData[] = {
		{ "Comment", "/**\n\x09 * note this is transient as they're added as they're loaded\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "note this is transient as they're added as they're loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetMappingTable_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Asset mapping table when ParentAsset is set */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Asset mapping table when ParentAsset is set" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPoseAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset*/// @todo: note that this doesn't retarget right now\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset// @todo: note that this doesn't retarget right now" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildrenAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetMappingTable;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewPoseAsset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationAsset_FindMetaDataByClass, "FindMetaDataByClass" }, // 2120474136
		{ &Z_Construct_UFunction_UAnimationAsset_GetPlayLength, "GetPlayLength" }, // 131032492
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationAsset_SetPreviewSkeletalMesh, "SetPreviewSkeletalMesh" }, // 346177092
#endif // WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0144010000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_Inner_MetaData), NewProp_MetaData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0144008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset = { "ParentAsset", nullptr, (EPropertyFlags)0x0114010800020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, ParentAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentAsset_MetaData), NewProp_ParentAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_Inner = { "ChildrenAssets", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets = { "ChildrenAssets", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, ChildrenAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildrenAssets_MetaData), NewProp_ChildrenAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable = { "AssetMappingTable", nullptr, (EPropertyFlags)0x0124080800020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, AssetMappingTable), Z_Construct_UClass_UAssetMappingTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetMappingTable_MetaData), NewProp_AssetMappingTable_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x01240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData), NewProp_ThumbnailInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset = { "PreviewPoseAsset", nullptr, (EPropertyFlags)0x0114000800200001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, PreviewPoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewPoseAsset_MetaData), NewProp_PreviewPoseAsset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSkeletalMesh_MetaData), NewProp_PreviewSkeletalMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimationAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UAnimationAsset, IInterface_AssetUserData), false },  // 505316468
	{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UAnimationAsset, IInterface_PreviewMeshProvider), false },  // 1431543565
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationAsset_Statics::ClassParams = {
	&UAnimationAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationAsset()
{
	if (!Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton, Z_Construct_UClass_UAnimationAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimationAsset>()
{
	return UAnimationAsset::StaticClass();
}
UAnimationAsset::UAnimationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationAsset);
UAnimationAsset::~UAnimationAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationAsset)
// End Class UAnimationAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimGroupRole_StaticEnum, TEXT("EAnimGroupRole"), &Z_Registration_Info_UEnum_EAnimGroupRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2417928914U) },
		{ EAnimSyncGroupScope_StaticEnum, TEXT("EAnimSyncGroupScope"), &Z_Registration_Info_UEnum_EAnimSyncGroupScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1318482331U) },
		{ EAnimSyncMethod_StaticEnum, TEXT("EAnimSyncMethod"), &Z_Registration_Info_UEnum_EAnimSyncMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2737461860U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlendSampleData::StaticStruct, Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewStructOps, TEXT("BlendSampleData"), &Z_Registration_Info_UScriptStruct_BlendSampleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendSampleData), 96408571U) },
		{ FBlendFilter::StaticStruct, Z_Construct_UScriptStruct_FBlendFilter_Statics::NewStructOps, TEXT("BlendFilter"), &Z_Registration_Info_UScriptStruct_BlendFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendFilter), 3682170827U) },
		{ FMarkerSyncAnimPosition::StaticStruct, Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewStructOps, TEXT("MarkerSyncAnimPosition"), &Z_Registration_Info_UScriptStruct_MarkerSyncAnimPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMarkerSyncAnimPosition), 1119049420U) },
		{ FAnimTickRecord::StaticStruct, Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewStructOps, TEXT("AnimTickRecord"), &Z_Registration_Info_UScriptStruct_AnimTickRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimTickRecord), 3926874049U) },
		{ FAnimGroupInstance::StaticStruct, Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::NewStructOps, TEXT("AnimGroupInstance"), &Z_Registration_Info_UScriptStruct_AnimGroupInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimGroupInstance), 500898709U) },
		{ FRootMotionMovementParams::StaticStruct, Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewStructOps, TEXT("RootMotionMovementParams"), &Z_Registration_Info_UScriptStruct_RootMotionMovementParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootMotionMovementParams), 4025040720U) },
		{ FAnimationGroupReference::StaticStruct, Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewStructOps, TEXT("AnimationGroupReference"), &Z_Registration_Info_UScriptStruct_AnimationGroupReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationGroupReference), 4258444195U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationAsset, UAnimationAsset::StaticClass, TEXT("UAnimationAsset"), &Z_Registration_Info_UClass_UAnimationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationAsset), 3190754614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_583934861(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
