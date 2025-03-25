// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSimCaching/Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h"
#include "Niagara/Classes/NiagaraSimCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheSection() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters();
NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection();
NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister();
NIAGARASIMCACHING_API UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode();
NIAGARASIMCACHING_API UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode();
NIAGARASIMCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams();
UPackage* Z_Construct_UPackage__Script_NiagaraSimCaching();
// End Cross Module References

// Begin Enum ENiagaraSimCacheSectionPlayMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode;
static UEnum* ENiagaraSimCacheSectionPlayMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("ENiagaraSimCacheSectionPlayMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.OuterSingleton;
}
template<> NIAGARASIMCACHING_API UEnum* StaticEnum<ENiagaraSimCacheSectionPlayMode>()
{
	return ENiagaraSimCacheSectionPlayMode_StaticEnum();
}
struct Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayCacheOnly.Comment", "/**\n\x09When the sequence has no cached data to display, the Niagara component is disabled\n\x09*/" },
		{ "DisplayCacheOnly.Name", "ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly" },
		{ "DisplayCacheOnly.ToolTip", "When the sequence has no cached data to display, the Niagara component is disabled" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "SimWithoutCache.Comment", "/**\n\x09When the sequence has no cached data to display, the Niagara component runs the simulation normally\n\x09*/" },
		{ "SimWithoutCache.Name", "ENiagaraSimCacheSectionPlayMode::SimWithoutCache" },
		{ "SimWithoutCache.ToolTip", "When the sequence has no cached data to display, the Niagara component runs the simulation normally" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraSimCacheSectionPlayMode::SimWithoutCache", (int64)ENiagaraSimCacheSectionPlayMode::SimWithoutCache },
		{ "ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly", (int64)ENiagaraSimCacheSectionPlayMode::DisplayCacheOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
	nullptr,
	"ENiagaraSimCacheSectionPlayMode",
	"ENiagaraSimCacheSectionPlayMode",
	Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton, Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode.InnerSingleton;
}
// End Enum ENiagaraSimCacheSectionPlayMode

// Begin Enum ENiagaraSimCacheSectionStretchMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode;
static UEnum* ENiagaraSimCacheSectionStretchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("ENiagaraSimCacheSectionStretchMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.OuterSingleton;
}
template<> NIAGARASIMCACHING_API UEnum* StaticEnum<ENiagaraSimCacheSectionStretchMode>()
{
	return ENiagaraSimCacheSectionStretchMode_StaticEnum();
}
struct Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "Repeat.Comment", "/**\n\x09When the cache section is stretched in the track it will repeat the cached data \n\x09*/" },
		{ "Repeat.Name", "ENiagaraSimCacheSectionStretchMode::Repeat" },
		{ "Repeat.ToolTip", "When the cache section is stretched in the track it will repeat the cached data" },
		{ "TimeDilate.Comment", "/**\n\x09When the cache section is stretched in the track it will dilate the input time so the cached data is stretched once over the full section\n\x09*/" },
		{ "TimeDilate.Name", "ENiagaraSimCacheSectionStretchMode::TimeDilate" },
		{ "TimeDilate.ToolTip", "When the cache section is stretched in the track it will dilate the input time so the cached data is stretched once over the full section" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraSimCacheSectionStretchMode::Repeat", (int64)ENiagaraSimCacheSectionStretchMode::Repeat },
		{ "ENiagaraSimCacheSectionStretchMode::TimeDilate", (int64)ENiagaraSimCacheSectionStretchMode::TimeDilate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
	nullptr,
	"ENiagaraSimCacheSectionStretchMode",
	"ENiagaraSimCacheSectionStretchMode",
	Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton, Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode.InnerSingleton;
}
// End Enum ENiagaraSimCacheSectionStretchMode

// Begin ScriptStruct FMovieSceneNiagaraCacheParams
static_assert(std::is_polymorphic<FMovieSceneNiagaraCacheParams>() == std::is_polymorphic<FMovieSceneBaseCacheParams>(), "USTRUCT FMovieSceneNiagaraCacheParams cannot be polymorphic unless super FMovieSceneBaseCacheParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams;
class UScriptStruct* FMovieSceneNiagaraCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams, (UObject*)Z_Construct_UPackage__Script_NiagaraSimCaching(), TEXT("MovieSceneNiagaraCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.OuterSingleton;
}
template<> NIAGARASIMCACHING_API UScriptStruct* StaticStruct<FMovieSceneNiagaraCacheParams>()
{
	return FMovieSceneNiagaraCacheParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheParameters_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimCache_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "Comment", "/** The sim cache this section plays and records into */" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "The sim cache this section plays and records into" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockCacheToReadOnly_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "Comment", "/** If true then the section properties might still be changed (so the section itself is not locked), but the cache cannot be rerecorded to prevent accidentally overriding the data within */" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "If true then the section properties might still be changed (so the section itself is not locked), but the cache cannot be rerecorded to prevent accidentally overriding the data within" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideQualityLevel_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordQualityLevel_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "Comment", "/** If set, then the engine scalability setting will be overriden with this value when recording a new cache for this track */" },
		{ "EditCondition", "bOverrideQualityLevel" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "If set, then the engine scalability setting will be overriden with this value when recording a new cache for this track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheReplayPlayMode_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/** What should the effect do when the track has no cache data to display */" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "What should the effect do when the track has no cache data to display" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStretchMode_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/** What should the effect do when the cache section is stretched? */" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "What should the effect do when the cache section is stretched?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
	static void NewProp_bLockCacheToReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockCacheToReadOnly;
	static void NewProp_bOverrideQualityLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideQualityLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RecordQualityLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RecordQualityLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CacheReplayPlayMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheReplayPlayMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SectionStretchMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SectionStretchMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraCacheParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheParameters = { "CacheParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, CacheParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheParameters_MetaData), NewProp_CacheParameters_MetaData) }; // 4056509866
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimCache_MetaData), NewProp_SimCache_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bLockCacheToReadOnly_SetBit(void* Obj)
{
	((FMovieSceneNiagaraCacheParams*)Obj)->bLockCacheToReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bLockCacheToReadOnly = { "bLockCacheToReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneNiagaraCacheParams), &Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bLockCacheToReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockCacheToReadOnly_MetaData), NewProp_bLockCacheToReadOnly_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bOverrideQualityLevel_SetBit(void* Obj)
{
	((FMovieSceneNiagaraCacheParams*)Obj)->bOverrideQualityLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bOverrideQualityLevel = { "bOverrideQualityLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneNiagaraCacheParams), &Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bOverrideQualityLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideQualityLevel_MetaData), NewProp_bOverrideQualityLevel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_RecordQualityLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_RecordQualityLevel = { "RecordQualityLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, RecordQualityLevel), Z_Construct_UEnum_Engine_EPerQualityLevels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordQualityLevel_MetaData), NewProp_RecordQualityLevel_MetaData) }; // 702377748
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode = { "CacheReplayPlayMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, CacheReplayPlayMode), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionPlayMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheReplayPlayMode_MetaData), NewProp_CacheReplayPlayMode_MetaData) }; // 863262568
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode = { "SectionStretchMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraCacheParams, SectionStretchMode), Z_Construct_UEnum_NiagaraSimCaching_ENiagaraSimCacheSectionStretchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStretchMode_MetaData), NewProp_SectionStretchMode_MetaData) }; // 780217365
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bLockCacheToReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_bOverrideQualityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_RecordQualityLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_RecordQualityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_CacheReplayPlayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewProp_SectionStretchMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
	Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams,
	&NewStructOps,
	"MovieSceneNiagaraCacheParams",
	Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::PropPointers),
	sizeof(FMovieSceneNiagaraCacheParams),
	alignof(FMovieSceneNiagaraCacheParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneNiagaraCacheParams

// Begin Class UMovieSceneNiagaraCacheSection
void UMovieSceneNiagaraCacheSection::StaticRegisterNativesUMovieSceneNiagaraCacheSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraCacheSection);
UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection_NoRegister()
{
	return UMovieSceneNiagaraCacheSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control NiagaraCache playback\n */" },
		{ "IncludePath", "Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ToolTip", "Movie scene section that control NiagaraCache playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "NiagaraCache" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCacheOutOfDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheSection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static void NewProp_bCacheOutOfDate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheOutOfDate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraCacheSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNiagaraCacheSection, Params), Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 4034111762
void Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_SetBit(void* Obj)
{
	((UMovieSceneNiagaraCacheSection*)Obj)->bCacheOutOfDate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate = { "bCacheOutOfDate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieSceneNiagaraCacheSection), &Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCacheOutOfDate_MetaData), NewProp_bCacheOutOfDate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::NewProp_bCacheOutOfDate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneBaseCacheSection,
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::ClassParams = {
	&UMovieSceneNiagaraCacheSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::PropPointers),
	0,
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraCacheSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection.OuterSingleton;
}
template<> NIAGARASIMCACHING_API UClass* StaticClass<UMovieSceneNiagaraCacheSection>()
{
	return UMovieSceneNiagaraCacheSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraCacheSection);
UMovieSceneNiagaraCacheSection::~UMovieSceneNiagaraCacheSection() {}
// End Class UMovieSceneNiagaraCacheSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraSimCacheSectionPlayMode_StaticEnum, TEXT("ENiagaraSimCacheSectionPlayMode"), &Z_Registration_Info_UEnum_ENiagaraSimCacheSectionPlayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 863262568U) },
		{ ENiagaraSimCacheSectionStretchMode_StaticEnum, TEXT("ENiagaraSimCacheSectionStretchMode"), &Z_Registration_Info_UEnum_ENiagaraSimCacheSectionStretchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 780217365U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneNiagaraCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams_Statics::NewStructOps, TEXT("MovieSceneNiagaraCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraCacheParams), 4034111762U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraCacheSection, UMovieSceneNiagaraCacheSection::StaticClass, TEXT("UMovieSceneNiagaraCacheSection"), &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraCacheSection), 4177867324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_31807763(TEXT("/Script/NiagaraSimCaching"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheSection_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
