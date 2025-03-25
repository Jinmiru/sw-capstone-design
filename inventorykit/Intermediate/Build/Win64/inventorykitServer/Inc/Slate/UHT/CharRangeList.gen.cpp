// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Text/CharRangeList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharRangeList() {}

// Begin Cross Module References
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCharRange();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCharRangeList();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin ScriptStruct FCharRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharRange;
class UScriptStruct* FCharRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharRange, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CharRange"));
	}
	return Z_Registration_Info_UScriptStruct_CharRange.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCharRange>()
{
	return FCharRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a range of characters, specified by the Unicode code point of the first and last characters in the range, both included.\n*   If you need a single-character range, simply use the same character for both the first and last characters. */" },
		{ "ModuleRelativePath", "Public/Framework/Text/CharRangeList.h" },
		{ "ToolTip", "Represents a range of characters, specified by the Unicode code point of the first and last characters in the range, both included.\n If you need a single-character range, simply use the same character for both the first and last characters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_First_MetaData[] = {
		{ "Category", "Char Range" },
		{ "Comment", "/** Unicode code point of the first character in the range (inclusive). Only characters within the Basic Multilingual Plane are supported.\n\x09*   Note: The code point must be entered in decimal, not hexadecimal. */" },
		{ "ModuleRelativePath", "Public/Framework/Text/CharRangeList.h" },
		{ "ToolTip", "Unicode code point of the first character in the range (inclusive). Only characters within the Basic Multilingual Plane are supported.\n Note: The code point must be entered in decimal, not hexadecimal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Last_MetaData[] = {
		{ "Category", "Char Range" },
		{ "Comment", "/** Unicode code point of the last character in the range (inclusive). Only characters within the Basic Multilingual Plane are supported.\n\x09*   Note: The code point must be entered in decimal, not hexadecimal. */" },
		{ "ModuleRelativePath", "Public/Framework/Text/CharRangeList.h" },
		{ "ToolTip", "Unicode code point of the last character in the range (inclusive). Only characters within the Basic Multilingual Plane are supported.\n Note: The code point must be entered in decimal, not hexadecimal." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_First;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Last;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCharRange_Statics::NewProp_First = { "First", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharRange, First), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_First_MetaData), NewProp_First_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCharRange_Statics::NewProp_Last = { "Last", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharRange, Last), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Last_MetaData), NewProp_Last_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharRange_Statics::NewProp_First,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharRange_Statics::NewProp_Last,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"CharRange",
	Z_Construct_UScriptStruct_FCharRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharRange_Statics::PropPointers),
	sizeof(FCharRange),
	alignof(FCharRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharRange()
{
	if (!Z_Registration_Info_UScriptStruct_CharRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharRange.InnerSingleton, Z_Construct_UScriptStruct_FCharRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharRange.InnerSingleton;
}
// End ScriptStruct FCharRange

// Begin ScriptStruct FCharRangeList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharRangeList;
class UScriptStruct* FCharRangeList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharRangeList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharRangeList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharRangeList, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CharRangeList"));
	}
	return Z_Registration_Info_UScriptStruct_CharRangeList.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCharRangeList>()
{
	return FCharRangeList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharRangeList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a list of character ranges. */" },
		{ "ModuleRelativePath", "Public/Framework/Text/CharRangeList.h" },
		{ "ToolTip", "Represents a list of character ranges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[] = {
		{ "Category", "Char Range List" },
		{ "ModuleRelativePath", "Public/Framework/Text/CharRangeList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ranges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ranges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharRangeList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharRangeList_Statics::NewProp_Ranges_Inner = { "Ranges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharRange, METADATA_PARAMS(0, nullptr) }; // 3184621562
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharRangeList_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharRangeList, Ranges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ranges_MetaData), NewProp_Ranges_MetaData) }; // 3184621562
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharRangeList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharRangeList_Statics::NewProp_Ranges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharRangeList_Statics::NewProp_Ranges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharRangeList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharRangeList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"CharRangeList",
	Z_Construct_UScriptStruct_FCharRangeList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharRangeList_Statics::PropPointers),
	sizeof(FCharRangeList),
	alignof(FCharRangeList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharRangeList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharRangeList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharRangeList()
{
	if (!Z_Registration_Info_UScriptStruct_CharRangeList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharRangeList.InnerSingleton, Z_Construct_UScriptStruct_FCharRangeList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharRangeList.InnerSingleton;
}
// End ScriptStruct FCharRangeList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_CharRangeList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharRange::StaticStruct, Z_Construct_UScriptStruct_FCharRange_Statics::NewStructOps, TEXT("CharRange"), &Z_Registration_Info_UScriptStruct_CharRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharRange), 3184621562U) },
		{ FCharRangeList::StaticStruct, Z_Construct_UScriptStruct_FCharRangeList_Statics::NewStructOps, TEXT("CharRangeList"), &Z_Registration_Info_UScriptStruct_CharRangeList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharRangeList), 3344276519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_CharRangeList_h_1495800343(TEXT("/Script/Slate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_CharRangeList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Text_CharRangeList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
