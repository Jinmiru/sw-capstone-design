// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingSource() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourcePriority();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingSourceShape();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FStreamingSourceShape
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamingSourceShape;
class UScriptStruct* FStreamingSourceShape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingSourceShape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamingSourceShape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingSourceShape, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamingSourceShape"));
	}
	return Z_Registration_Info_UScriptStruct_StreamingSourceShape.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingSourceShape>()
{
	return FStreamingSourceShape::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStreamingSourceShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGridLoadingRange_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/* If True, streaming source shape radius is bound to loading range radius. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "If True, streaming source shape radius is bound to loading range radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRangeScale_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/* Applies a scale to the grid's loading range (used if bUseGridLoadingRange is True). */" },
		{ "EditCondition", "bUseGridLoadingRange" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Applies a scale to the grid's loading range (used if bUseGridLoadingRange is True)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/* Custom streaming source shape radius (not used if bUseGridLoadingRange is True). */" },
		{ "EditCondition", "!bUseGridLoadingRange" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Custom streaming source shape radius (not used if bUseGridLoadingRange is True)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSector_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/* Whether the source shape is a spherical sector instead of a regular sphere source. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Whether the source shape is a spherical sector instead of a regular sphere source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectorAngle_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Shape's spherical sector angle in degree (not used if bIsSector is False). */" },
		{ "EditCondition", "bIsSector" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Shape's spherical sector angle in degree (not used if bIsSector is False)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/* Streaming source shape location (local to streaming source). */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Streaming source shape location (local to streaming source)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/* Streaming source shape rotation (local to streaming source). */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Streaming source shape rotation (local to streaming source)." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseGridLoadingRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGridLoadingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingRangeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bIsSector_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SectorAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingSourceShape>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bUseGridLoadingRange_SetBit(void* Obj)
{
	((FStreamingSourceShape*)Obj)->bUseGridLoadingRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bUseGridLoadingRange = { "bUseGridLoadingRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamingSourceShape), &Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bUseGridLoadingRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGridLoadingRange_MetaData), NewProp_bUseGridLoadingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_LoadingRangeScale = { "LoadingRangeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingSourceShape, LoadingRangeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingRangeScale_MetaData), NewProp_LoadingRangeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingSourceShape, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bIsSector_SetBit(void* Obj)
{
	((FStreamingSourceShape*)Obj)->bIsSector = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bIsSector = { "bIsSector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreamingSourceShape), &Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bIsSector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSector_MetaData), NewProp_bIsSector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_SectorAngle = { "SectorAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingSourceShape, SectorAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectorAngle_MetaData), NewProp_SectorAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingSourceShape, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStreamingSourceShape, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bUseGridLoadingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_LoadingRangeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_bIsSector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_SectorAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StreamingSourceShape",
	Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::PropPointers),
	sizeof(FStreamingSourceShape),
	alignof(FStreamingSourceShape),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStreamingSourceShape()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingSourceShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamingSourceShape.InnerSingleton, Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StreamingSourceShape.InnerSingleton;
}
// End ScriptStruct FStreamingSourceShape

// Begin Enum EStreamingSourceTargetBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior;
static UEnum* EStreamingSourceTargetBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStreamingSourceTargetBehavior"));
	}
	return Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStreamingSourceTargetBehavior>()
{
	return EStreamingSourceTargetBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Exclude.Name", "EStreamingSourceTargetBehavior::Exclude" },
		{ "Include.Name", "EStreamingSourceTargetBehavior::Include" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStreamingSourceTargetBehavior::Include", (int64)EStreamingSourceTargetBehavior::Include },
		{ "EStreamingSourceTargetBehavior::Exclude", (int64)EStreamingSourceTargetBehavior::Exclude },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStreamingSourceTargetBehavior",
	"EStreamingSourceTargetBehavior",
	Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior()
{
	if (!Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.InnerSingleton, Z_Construct_UEnum_Engine_EStreamingSourceTargetBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior.InnerSingleton;
}
// End Enum EStreamingSourceTargetBehavior

// Begin Enum EStreamingSourceTargetState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStreamingSourceTargetState;
static UEnum* EStreamingSourceTargetState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourceTargetState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStreamingSourceTargetState"));
	}
	return Z_Registration_Info_UEnum_EStreamingSourceTargetState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStreamingSourceTargetState>()
{
	return EStreamingSourceTargetState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Activated.Name", "EStreamingSourceTargetState::Activated" },
		{ "Comment", "/**\n * Streaming Source Target State\n */" },
		{ "Loaded.Name", "EStreamingSourceTargetState::Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Streaming Source Target State" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStreamingSourceTargetState::Loaded", (int64)EStreamingSourceTargetState::Loaded },
		{ "EStreamingSourceTargetState::Activated", (int64)EStreamingSourceTargetState::Activated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStreamingSourceTargetState",
	"EStreamingSourceTargetState",
	Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStreamingSourceTargetState()
{
	if (!Z_Registration_Info_UEnum_EStreamingSourceTargetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStreamingSourceTargetState.InnerSingleton, Z_Construct_UEnum_Engine_EStreamingSourceTargetState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStreamingSourceTargetState.InnerSingleton;
}
// End Enum EStreamingSourceTargetState

// Begin ScriptStruct FWorldPartitionStreamingQuerySource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource;
class UScriptStruct* FWorldPartitionStreamingQuerySource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionStreamingQuerySource"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionStreamingQuerySource>()
{
	return FWorldPartitionStreamingQuerySource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing all properties required to query a streaming state\n */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Structure containing all properties required to query a streaming state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/* Location to query. (not used if bSpatialQuery is false) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Location to query. (not used if bSpatialQuery is false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/* Radius to query. (not used if bSpatialQuery is false) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Radius to query. (not used if bSpatialQuery is false)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGridLoadingRange_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/* If True, Instead of providing a query radius, query can be bound to loading range radius. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "If True, Instead of providing a query radius, query can be bound to loading range radius." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/* Optional list of data layers to specialize the query. If empty only non data layer cells will be returned by the query. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "Optional list of data layers to specialize the query. If empty only non data layer cells will be returned by the query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDataLayersOnly_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/* If True, Only cells that are in a data layer found in DataLayers property will be returned by the query. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "If True, Only cells that are in a data layer found in DataLayers property will be returned by the query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpatialQuery_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/* If False, Location/Radius will not be used to find the cells. Only AlwaysLoaded cells will be returned by the query. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "ToolTip", "If False, Location/Radius will not be used to find the cells. Only AlwaysLoaded cells will be returned by the query." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bUseGridLoadingRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGridLoadingRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
	static void NewProp_bDataLayersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDataLayersOnly;
	static void NewProp_bSpatialQuery_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpatialQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionStreamingQuerySource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionStreamingQuerySource, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionStreamingQuerySource, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bUseGridLoadingRange_SetBit(void* Obj)
{
	((FWorldPartitionStreamingQuerySource*)Obj)->bUseGridLoadingRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bUseGridLoadingRange = { "bUseGridLoadingRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWorldPartitionStreamingQuerySource), &Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bUseGridLoadingRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGridLoadingRange_MetaData), NewProp_bUseGridLoadingRange_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldPartitionStreamingQuerySource, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayers_MetaData), NewProp_DataLayers_MetaData) };
void Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bDataLayersOnly_SetBit(void* Obj)
{
	((FWorldPartitionStreamingQuerySource*)Obj)->bDataLayersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bDataLayersOnly = { "bDataLayersOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWorldPartitionStreamingQuerySource), &Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bDataLayersOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDataLayersOnly_MetaData), NewProp_bDataLayersOnly_MetaData) };
void Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bSpatialQuery_SetBit(void* Obj)
{
	((FWorldPartitionStreamingQuerySource*)Obj)->bSpatialQuery = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bSpatialQuery = { "bSpatialQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWorldPartitionStreamingQuerySource), &Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bSpatialQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpatialQuery_MetaData), NewProp_bSpatialQuery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bUseGridLoadingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_DataLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_DataLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bDataLayersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewProp_bSpatialQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WorldPartitionStreamingQuerySource",
	Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::PropPointers),
	sizeof(FWorldPartitionStreamingQuerySource),
	alignof(FWorldPartitionStreamingQuerySource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource.InnerSingleton;
}
// End ScriptStruct FWorldPartitionStreamingQuerySource

// Begin Enum EStreamingSourcePriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStreamingSourcePriority;
static UEnum* EStreamingSourcePriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingSourcePriority, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EStreamingSourcePriority"));
	}
	return Z_Registration_Info_UEnum_EStreamingSourcePriority.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EStreamingSourcePriority>()
{
	return EStreamingSourcePriority_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Streaming Source Priority\n */" },
		{ "Default.Name", "EStreamingSourcePriority::Default" },
		{ "High.Name", "EStreamingSourcePriority::High" },
		{ "Highest.Name", "EStreamingSourcePriority::Highest" },
		{ "Low.Name", "EStreamingSourcePriority::Low" },
		{ "Lowest.Name", "EStreamingSourcePriority::Lowest" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingSource.h" },
		{ "Normal.Name", "EStreamingSourcePriority::Normal" },
		{ "ToolTip", "Streaming Source Priority" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStreamingSourcePriority::Highest", (int64)EStreamingSourcePriority::Highest },
		{ "EStreamingSourcePriority::High", (int64)EStreamingSourcePriority::High },
		{ "EStreamingSourcePriority::Normal", (int64)EStreamingSourcePriority::Normal },
		{ "EStreamingSourcePriority::Low", (int64)EStreamingSourcePriority::Low },
		{ "EStreamingSourcePriority::Lowest", (int64)EStreamingSourcePriority::Lowest },
		{ "EStreamingSourcePriority::Default", (int64)EStreamingSourcePriority::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EStreamingSourcePriority",
	"EStreamingSourcePriority",
	Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EStreamingSourcePriority()
{
	if (!Z_Registration_Info_UEnum_EStreamingSourcePriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStreamingSourcePriority.InnerSingleton, Z_Construct_UEnum_Engine_EStreamingSourcePriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStreamingSourcePriority.InnerSingleton;
}
// End Enum EStreamingSourcePriority

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStreamingSourceTargetBehavior_StaticEnum, TEXT("EStreamingSourceTargetBehavior"), &Z_Registration_Info_UEnum_EStreamingSourceTargetBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3925404505U) },
		{ EStreamingSourceTargetState_StaticEnum, TEXT("EStreamingSourceTargetState"), &Z_Registration_Info_UEnum_EStreamingSourceTargetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2820626581U) },
		{ EStreamingSourcePriority_StaticEnum, TEXT("EStreamingSourcePriority"), &Z_Registration_Info_UEnum_EStreamingSourcePriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3463526699U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStreamingSourceShape::StaticStruct, Z_Construct_UScriptStruct_FStreamingSourceShape_Statics::NewStructOps, TEXT("StreamingSourceShape"), &Z_Registration_Info_UScriptStruct_StreamingSourceShape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamingSourceShape), 2223099804U) },
		{ FWorldPartitionStreamingQuerySource::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource_Statics::NewStructOps, TEXT("WorldPartitionStreamingQuerySource"), &Z_Registration_Info_UScriptStruct_WorldPartitionStreamingQuerySource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionStreamingQuerySource), 888604988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_335505912(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingSource_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
