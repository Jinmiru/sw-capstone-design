// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerScriptingRange() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin ScriptStruct FSequencerScriptingRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerScriptingRange;
class UScriptStruct* FSequencerScriptingRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerScriptingRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerScriptingRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerScriptingRange, (UObject*)Z_Construct_UPackage__Script_SequencerScripting(), TEXT("SequencerScriptingRange"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerScriptingRange.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UScriptStruct* StaticStruct<FSequencerScriptingRange>()
{
	return FSequencerScriptingRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequencerScriptingRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStart_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/SequencerScriptingRange.h" },
		{ "ScriptName", "HasStartValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEnd_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/SequencerScriptingRange.h" },
		{ "ScriptName", "HasEndValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusiveStart_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/SequencerScriptingRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExclusiveEnd_MetaData[] = {
		{ "Category", "Range" },
		{ "ModuleRelativePath", "Public/SequencerScriptingRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerScriptingRange.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStart;
	static void NewProp_bHasEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InclusiveStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExclusiveEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InternalRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerScriptingRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasStart_SetBit(void* Obj)
{
	((FSequencerScriptingRange*)Obj)->bHasStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasStart = { "bHasStart", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSequencerScriptingRange), &Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStart_MetaData), NewProp_bHasStart_MetaData) };
void Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasEnd_SetBit(void* Obj)
{
	((FSequencerScriptingRange*)Obj)->bHasEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasEnd = { "bHasEnd", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSequencerScriptingRange), &Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEnd_MetaData), NewProp_bHasEnd_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_InclusiveStart = { "InclusiveStart", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequencerScriptingRange, InclusiveStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusiveStart_MetaData), NewProp_InclusiveStart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_ExclusiveEnd = { "ExclusiveEnd", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequencerScriptingRange, ExclusiveEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExclusiveEnd_MetaData), NewProp_ExclusiveEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_InternalRate = { "InternalRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequencerScriptingRange, InternalRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalRate_MetaData), NewProp_InternalRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_bHasEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_InclusiveStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_ExclusiveEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewProp_InternalRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	nullptr,
	&NewStructOps,
	"SequencerScriptingRange",
	Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::PropPointers),
	sizeof(FSequencerScriptingRange),
	alignof(FSequencerScriptingRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerScriptingRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerScriptingRange.InnerSingleton, Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SequencerScriptingRange.InnerSingleton;
}
// End ScriptStruct FSequencerScriptingRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerScriptingRange_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSequencerScriptingRange::StaticStruct, Z_Construct_UScriptStruct_FSequencerScriptingRange_Statics::NewStructOps, TEXT("SequencerScriptingRange"), &Z_Registration_Info_UScriptStruct_SequencerScriptingRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerScriptingRange), 572197110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerScriptingRange_h_1367815920(TEXT("/Script/SequencerScripting"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerScriptingRange_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerScriptingRange_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
