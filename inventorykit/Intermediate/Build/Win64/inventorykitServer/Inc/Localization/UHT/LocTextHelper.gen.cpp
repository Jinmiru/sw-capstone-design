// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/Localization/Public/LocTextHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocTextHelper() {}

// Begin Cross Module References
LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode();
UPackage* Z_Construct_UPackage__Script_Localization();
// End Cross Module References

// Begin Enum ELocTextPlatformSplitMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocTextPlatformSplitMode;
static UEnum* ELocTextPlatformSplitMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocTextPlatformSplitMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocTextPlatformSplitMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("ELocTextPlatformSplitMode"));
	}
	return Z_Registration_Info_UEnum_ELocTextPlatformSplitMode.OuterSingleton;
}
template<> LOCALIZATION_API UEnum* StaticEnum<ELocTextPlatformSplitMode>()
{
	return ELocTextPlatformSplitMode_StaticEnum();
}
struct Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Split platform specific localization data for all platforms */" },
		{ "All.Name", "ELocTextPlatformSplitMode::All" },
		{ "All.ToolTip", "Split platform specific localization data for all platforms" },
		{ "Comment", "/** How should we split platform specific localization data? */" },
		{ "Confidential.Comment", "/** Split platform specific localization data for confidential platforms only */" },
		{ "Confidential.Name", "ELocTextPlatformSplitMode::Confidential" },
		{ "Confidential.ToolTip", "Split platform specific localization data for confidential platforms only" },
		{ "ModuleRelativePath", "Public/LocTextHelper.h" },
		{ "None.Comment", "/** Don't split platform specific localization data */" },
		{ "None.Name", "ELocTextPlatformSplitMode::None" },
		{ "None.ToolTip", "Don't split platform specific localization data" },
		{ "ToolTip", "How should we split platform specific localization data?" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocTextPlatformSplitMode::None", (int64)ELocTextPlatformSplitMode::None },
		{ "ELocTextPlatformSplitMode::Confidential", (int64)ELocTextPlatformSplitMode::Confidential },
		{ "ELocTextPlatformSplitMode::All", (int64)ELocTextPlatformSplitMode::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	"ELocTextPlatformSplitMode",
	"ELocTextPlatformSplitMode",
	Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode()
{
	if (!Z_Registration_Info_UEnum_ELocTextPlatformSplitMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocTextPlatformSplitMode.InnerSingleton, Z_Construct_UEnum_Localization_ELocTextPlatformSplitMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocTextPlatformSplitMode.InnerSingleton;
}
// End Enum ELocTextPlatformSplitMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocTextHelper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocTextPlatformSplitMode_StaticEnum, TEXT("ELocTextPlatformSplitMode"), &Z_Registration_Info_UEnum_ELocTextPlatformSplitMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 528793090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocTextHelper_h_4221617401(TEXT("/Script/Localization"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocTextHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocTextHelper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
