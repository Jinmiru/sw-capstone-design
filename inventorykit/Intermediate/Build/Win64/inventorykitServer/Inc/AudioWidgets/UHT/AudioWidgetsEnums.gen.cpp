// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioWidgetsEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioWidgetsEnums() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioPanelLayoutType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioPanelLayoutType;
static UEnum* EAudioPanelLayoutType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioPanelLayoutType"));
	}
	return Z_Registration_Info_UEnum_EAudioPanelLayoutType.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioPanelLayoutType>()
{
	return EAudioPanelLayoutType_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Advanced.DisplayName", "Advanced" },
		{ "Advanced.Name", "EAudioPanelLayoutType::Advanced" },
		{ "Basic.DisplayName", "Basic" },
		{ "Basic.Name", "EAudioPanelLayoutType::Basic" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AudioWidgetsEnums.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioPanelLayoutType::Basic", (int64)EAudioPanelLayoutType::Basic },
		{ "EAudioPanelLayoutType::Advanced", (int64)EAudioPanelLayoutType::Advanced },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioPanelLayoutType",
	"EAudioPanelLayoutType",
	Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType()
{
	if (!Z_Registration_Info_UEnum_EAudioPanelLayoutType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioPanelLayoutType.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioPanelLayoutType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioPanelLayoutType.InnerSingleton;
}
// End Enum EAudioPanelLayoutType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioPanelLayoutType_StaticEnum, TEXT("EAudioPanelLayoutType"), &Z_Registration_Info_UEnum_EAudioPanelLayoutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 227856546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h_3162739942(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
