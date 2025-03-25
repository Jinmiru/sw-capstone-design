// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgets/Public/AudioOscilloscopeEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioOscilloscopeEnums() {}

// Begin Cross Module References
AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode();
UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

// Begin Enum EAudioOscilloscopeTriggerMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode;
static UEnum* EAudioOscilloscopeTriggerMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("EAudioOscilloscopeTriggerMode"));
	}
	return Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.OuterSingleton;
}
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioOscilloscopeTriggerMode>()
{
	return EAudioOscilloscopeTriggerMode_StaticEnum();
}
struct Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Falling.DisplayName", "Falling" },
		{ "Falling.Name", "EAudioOscilloscopeTriggerMode::Falling" },
		{ "ModuleRelativePath", "Public/AudioOscilloscopeEnums.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAudioOscilloscopeTriggerMode::None" },
		{ "Rising.DisplayName", "Rising" },
		{ "Rising.Name", "EAudioOscilloscopeTriggerMode::Rising" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioOscilloscopeTriggerMode::None", (int64)EAudioOscilloscopeTriggerMode::None },
		{ "EAudioOscilloscopeTriggerMode::Rising", (int64)EAudioOscilloscopeTriggerMode::Rising },
		{ "EAudioOscilloscopeTriggerMode::Falling", (int64)EAudioOscilloscopeTriggerMode::Falling },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets,
	nullptr,
	"EAudioOscilloscopeTriggerMode",
	"EAudioOscilloscopeTriggerMode",
	Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode()
{
	if (!Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.InnerSingleton, Z_Construct_UEnum_AudioWidgets_EAudioOscilloscopeTriggerMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode.InnerSingleton;
}
// End Enum EAudioOscilloscopeTriggerMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioOscilloscopeTriggerMode_StaticEnum, TEXT("EAudioOscilloscopeTriggerMode"), &Z_Registration_Info_UEnum_EAudioOscilloscopeTriggerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3154934635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h_656230410(TEXT("/Script/AudioWidgets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioOscilloscopeEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
