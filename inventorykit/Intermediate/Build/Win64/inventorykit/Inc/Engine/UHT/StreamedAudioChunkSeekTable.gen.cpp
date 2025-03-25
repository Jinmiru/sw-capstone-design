// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/StreamedAudioChunkSeekTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamedAudioChunkSeekTable() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChunkSeekTableMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EChunkSeekTableMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChunkSeekTableMode;
static UEnum* EChunkSeekTableMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EChunkSeekTableMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EChunkSeekTableMode"));
	}
	return Z_Registration_Info_UEnum_EChunkSeekTableMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EChunkSeekTableMode>()
{
	return EChunkSeekTableMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConstantSamplesPerEntry.Name", "EChunkSeekTableMode::ConstantSamplesPerEntry" },
		{ "ModuleRelativePath", "Classes/Sound/StreamedAudioChunkSeekTable.h" },
		{ "VariableSamplesPerEntry.Name", "EChunkSeekTableMode::VariableSamplesPerEntry" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChunkSeekTableMode::ConstantSamplesPerEntry", (int64)EChunkSeekTableMode::ConstantSamplesPerEntry },
		{ "EChunkSeekTableMode::VariableSamplesPerEntry", (int64)EChunkSeekTableMode::VariableSamplesPerEntry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EChunkSeekTableMode",
	"EChunkSeekTableMode",
	Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EChunkSeekTableMode()
{
	if (!Z_Registration_Info_UEnum_EChunkSeekTableMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChunkSeekTableMode.InnerSingleton, Z_Construct_UEnum_Engine_EChunkSeekTableMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChunkSeekTableMode.InnerSingleton;
}
// End Enum EChunkSeekTableMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChunkSeekTableMode_StaticEnum, TEXT("EChunkSeekTableMode"), &Z_Registration_Info_UEnum_EChunkSeekTableMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1713974621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h_3400318309(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_StreamedAudioChunkSeekTable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
