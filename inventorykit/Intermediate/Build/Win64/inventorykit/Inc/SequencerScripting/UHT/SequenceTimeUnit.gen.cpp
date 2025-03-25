// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/SequenceTimeUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceTimeUnit() {}

// Begin Cross Module References
SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Enum ESequenceTimeUnit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequenceTimeUnit;
static UEnum* ESequenceTimeUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, (UObject*)Z_Construct_UPackage__Script_SequencerScripting(), TEXT("ESequenceTimeUnit"));
	}
	return Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UEnum* StaticEnum<ESequenceTimeUnit>()
{
	return ESequenceTimeUnit_StaticEnum();
}
struct Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DisplayRate.Name", "ESequenceTimeUnit::DisplayRate" },
		{ "ModuleRelativePath", "Public/SequenceTimeUnit.h" },
		{ "TickResolution.Name", "ESequenceTimeUnit::TickResolution" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESequenceTimeUnit::DisplayRate", (int64)ESequenceTimeUnit::DisplayRate },
		{ "ESequenceTimeUnit::TickResolution", (int64)ESequenceTimeUnit::TickResolution },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SequencerScripting,
	nullptr,
	"ESequenceTimeUnit",
	"ESequenceTimeUnit",
	Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit()
{
	if (!Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton, Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton;
}
// End Enum ESequenceTimeUnit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESequenceTimeUnit_StaticEnum, TEXT("ESequenceTimeUnit"), &Z_Registration_Info_UEnum_ESequenceTimeUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2822372898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_2576313329(TEXT("/Script/SequencerScripting"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
