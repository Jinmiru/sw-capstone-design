// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TimeManagement/Public/FrameNumberDisplayFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameNumberDisplayFormat() {}

// Begin Cross Module References
TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats();
UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References

// Begin Enum EFrameNumberDisplayFormats
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFrameNumberDisplayFormats;
static UEnum* EFrameNumberDisplayFormats_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFrameNumberDisplayFormats.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFrameNumberDisplayFormats.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats, (UObject*)Z_Construct_UPackage__Script_TimeManagement(), TEXT("EFrameNumberDisplayFormats"));
	}
	return Z_Registration_Info_UEnum_EFrameNumberDisplayFormats.OuterSingleton;
}
template<> TIMEMANAGEMENT_API UEnum* StaticEnum<EFrameNumberDisplayFormats>()
{
	return EFrameNumberDisplayFormats_StaticEnum();
}
struct Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DropFrameTimecode.Comment", "/* Drop Frame Timecode */" },
		{ "DropFrameTimecode.DisplayName", "DF Timecode" },
		{ "DropFrameTimecode.Name", "EFrameNumberDisplayFormats::DropFrameTimecode" },
		{ "DropFrameTimecode.ToolTip", "Drop Frame Timecode" },
		{ "Frames.Name", "EFrameNumberDisplayFormats::Frames" },
		{ "MAX_Count.Hidden", "" },
		{ "MAX_Count.Name", "EFrameNumberDisplayFormats::MAX_Count" },
		{ "ModuleRelativePath", "Public/FrameNumberDisplayFormat.h" },
		{ "NonDropFrameTimecode.Comment", "/* Non-Drop Frame Timecode */" },
		{ "NonDropFrameTimecode.DisplayName", "NDF Timecode" },
		{ "NonDropFrameTimecode.Name", "EFrameNumberDisplayFormats::NonDropFrameTimecode" },
		{ "NonDropFrameTimecode.ToolTip", "Non-Drop Frame Timecode" },
		{ "Seconds.Name", "EFrameNumberDisplayFormats::Seconds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFrameNumberDisplayFormats::NonDropFrameTimecode", (int64)EFrameNumberDisplayFormats::NonDropFrameTimecode },
		{ "EFrameNumberDisplayFormats::DropFrameTimecode", (int64)EFrameNumberDisplayFormats::DropFrameTimecode },
		{ "EFrameNumberDisplayFormats::Seconds", (int64)EFrameNumberDisplayFormats::Seconds },
		{ "EFrameNumberDisplayFormats::Frames", (int64)EFrameNumberDisplayFormats::Frames },
		{ "EFrameNumberDisplayFormats::MAX_Count", (int64)EFrameNumberDisplayFormats::MAX_Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TimeManagement,
	nullptr,
	"EFrameNumberDisplayFormats",
	"EFrameNumberDisplayFormats",
	Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats()
{
	if (!Z_Registration_Info_UEnum_EFrameNumberDisplayFormats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFrameNumberDisplayFormats.InnerSingleton, Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFrameNumberDisplayFormats.InnerSingleton;
}
// End Enum EFrameNumberDisplayFormats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FrameNumberDisplayFormat_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFrameNumberDisplayFormats_StaticEnum, TEXT("EFrameNumberDisplayFormats"), &Z_Registration_Info_UEnum_EFrameNumberDisplayFormats, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 817291549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FrameNumberDisplayFormat_h_1967430259(TEXT("/Script/TimeManagement"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FrameNumberDisplayFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_FrameNumberDisplayFormat_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
