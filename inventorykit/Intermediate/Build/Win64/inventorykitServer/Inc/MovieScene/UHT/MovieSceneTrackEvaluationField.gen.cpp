// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackEvaluationField() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumberRange();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTrackEvaluationFieldEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry;
class UScriptStruct* FMovieSceneTrackEvaluationFieldEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackEvaluationFieldEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackEvaluationFieldEntry>()
{
	return FMovieSceneTrackEvaluationFieldEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegacySortOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForcedTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_LegacySortOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackEvaluationFieldEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Section_MetaData), NewProp_Section_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, Range), Z_Construct_UScriptStruct_FFrameNumberRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_ForcedTime = { "ForcedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, ForcedTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedTime_MetaData), NewProp_ForcedTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) }; // 1683700086
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_LegacySortOrder = { "LegacySortOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackEvaluationFieldEntry, LegacySortOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegacySortOrder_MetaData), NewProp_LegacySortOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Section,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_ForcedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewProp_LegacySortOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackEvaluationFieldEntry",
	Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::PropPointers),
	sizeof(FMovieSceneTrackEvaluationFieldEntry),
	alignof(FMovieSceneTrackEvaluationFieldEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackEvaluationFieldEntry

// Begin ScriptStruct FMovieSceneTrackEvaluationField
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField;
class UScriptStruct* FMovieSceneTrackEvaluationField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackEvaluationField"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackEvaluationField>()
{
	return FMovieSceneTrackEvaluationField::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTrackEvaluationField.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackEvaluationField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry, METADATA_PARAMS(0, nullptr) }; // 3748927674
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackEvaluationField, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3748927674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackEvaluationField",
	Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::PropPointers),
	sizeof(FMovieSceneTrackEvaluationField),
	alignof(FMovieSceneTrackEvaluationField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackEvaluationField

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTrackEvaluationFieldEntry::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationFieldEntry_Statics::NewStructOps, TEXT("MovieSceneTrackEvaluationFieldEntry"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationFieldEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackEvaluationFieldEntry), 3748927674U) },
		{ FMovieSceneTrackEvaluationField::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackEvaluationField_Statics::NewStructOps, TEXT("MovieSceneTrackEvaluationField"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackEvaluationField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackEvaluationField), 2513291813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_2922799808(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneTrackEvaluationField_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
