// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/ISoundWaveCloudStreaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISoundWaveCloudStreaming() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UEnum* Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType();
AUDIOEXTENSIONS_API UEnum* Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType();
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings();
AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Enum ESoundWaveCloudStreamingPlatformProjectEnableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType;
static UEnum* ESoundWaveCloudStreamingPlatformProjectEnableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("ESoundWaveCloudStreamingPlatformProjectEnableType"));
	}
	return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UEnum* StaticEnum<ESoundWaveCloudStreamingPlatformProjectEnableType>()
{
	return ESoundWaveCloudStreamingPlatformProjectEnableType_StaticEnum();
}
struct Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Platform specific enabling of Sound Wave cloud streaming. */" },
		{ "Disabled.Comment", "/** Disabled for this platform. */" },
		{ "Disabled.Name", "ESoundWaveCloudStreamingPlatformProjectEnableType::Disabled" },
		{ "Disabled.ToolTip", "Disabled for this platform." },
		{ "Enabled.Comment", "/** Enabled for this platform. */" },
		{ "Enabled.Name", "ESoundWaveCloudStreamingPlatformProjectEnableType::Enabled" },
		{ "Enabled.ToolTip", "Enabled for this platform." },
		{ "ModuleRelativePath", "Public/ISoundWaveCloudStreaming.h" },
		{ "ToolTip", "Platform specific enabling of Sound Wave cloud streaming." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoundWaveCloudStreamingPlatformProjectEnableType::Enabled", (int64)ESoundWaveCloudStreamingPlatformProjectEnableType::Enabled },
		{ "ESoundWaveCloudStreamingPlatformProjectEnableType::Disabled", (int64)ESoundWaveCloudStreamingPlatformProjectEnableType::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioExtensions,
	nullptr,
	"ESoundWaveCloudStreamingPlatformProjectEnableType",
	"ESoundWaveCloudStreamingPlatformProjectEnableType",
	Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType()
{
	if (!Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.InnerSingleton, Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType.InnerSingleton;
}
// End Enum ESoundWaveCloudStreamingPlatformProjectEnableType

// Begin ScriptStruct FSoundWaveCloudStreamingPlatformProjectSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings;
class UScriptStruct* FSoundWaveCloudStreamingPlatformProjectSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("SoundWaveCloudStreamingPlatformProjectSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UScriptStruct* StaticStruct<FSoundWaveCloudStreamingPlatformProjectSettings>()
{
	return FSoundWaveCloudStreamingPlatformProjectSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Platform specific settings for Sound Wave cloud streaming. */" },
		{ "ModuleRelativePath", "Public/ISoundWaveCloudStreaming.h" },
		{ "ToolTip", "Platform specific settings for Sound Wave cloud streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablementSetting_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Overrides whether to use cloud streaming on this platform. */" },
		{ "ModuleRelativePath", "Public/ISoundWaveCloudStreaming.h" },
		{ "ToolTip", "Overrides whether to use cloud streaming on this platform." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnablementSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnablementSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveCloudStreamingPlatformProjectSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::NewProp_EnablementSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::NewProp_EnablementSetting = { "EnablementSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveCloudStreamingPlatformProjectSettings, EnablementSetting), Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformProjectEnableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablementSetting_MetaData), NewProp_EnablementSetting_MetaData) }; // 1810398243
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::NewProp_EnablementSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::NewProp_EnablementSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	nullptr,
	&NewStructOps,
	"SoundWaveCloudStreamingPlatformProjectSettings",
	Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::PropPointers),
	sizeof(FSoundWaveCloudStreamingPlatformProjectSettings),
	alignof(FSoundWaveCloudStreamingPlatformProjectSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings.InnerSingleton;
}
// End ScriptStruct FSoundWaveCloudStreamingPlatformProjectSettings

// Begin Enum ESoundWaveCloudStreamingPlatformEnableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType;
static UEnum* ESoundWaveCloudStreamingPlatformEnableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("ESoundWaveCloudStreamingPlatformEnableType"));
	}
	return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UEnum* StaticEnum<ESoundWaveCloudStreamingPlatformEnableType>()
{
	return ESoundWaveCloudStreamingPlatformEnableType_StaticEnum();
}
struct Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Platform specific enabling of Sound Wave cloud streaming. */" },
		{ "Disabled.Comment", "/** Disables Sound Wave cloud streaming for this platform. */" },
		{ "Disabled.Name", "ESoundWaveCloudStreamingPlatformEnableType::Disabled" },
		{ "Disabled.ToolTip", "Disables Sound Wave cloud streaming for this platform." },
		{ "Inherited.Comment", "/** Use Sound Wave setting. */" },
		{ "Inherited.Name", "ESoundWaveCloudStreamingPlatformEnableType::Inherited" },
		{ "Inherited.ToolTip", "Use Sound Wave setting." },
		{ "ModuleRelativePath", "Public/ISoundWaveCloudStreaming.h" },
		{ "SWC_MultipleValues.Comment", "/** Used in Slate widget configuration to indicate multiple selected objects have different values. */" },
		{ "SWC_MultipleValues.DisplayName", "Multiple values" },
		{ "SWC_MultipleValues.Hidden", "" },
		{ "SWC_MultipleValues.Name", "ESoundWaveCloudStreamingPlatformEnableType::SWC_MultipleValues" },
		{ "SWC_MultipleValues.ToolTip", "Used in Slate widget configuration to indicate multiple selected objects have different values." },
		{ "ToolTip", "Platform specific enabling of Sound Wave cloud streaming." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoundWaveCloudStreamingPlatformEnableType::Inherited", (int64)ESoundWaveCloudStreamingPlatformEnableType::Inherited },
		{ "ESoundWaveCloudStreamingPlatformEnableType::Disabled", (int64)ESoundWaveCloudStreamingPlatformEnableType::Disabled },
		{ "ESoundWaveCloudStreamingPlatformEnableType::SWC_MultipleValues", (int64)ESoundWaveCloudStreamingPlatformEnableType::SWC_MultipleValues },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioExtensions,
	nullptr,
	"ESoundWaveCloudStreamingPlatformEnableType",
	"ESoundWaveCloudStreamingPlatformEnableType",
	Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType()
{
	if (!Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.InnerSingleton, Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType.InnerSingleton;
}
// End Enum ESoundWaveCloudStreamingPlatformEnableType

// Begin ScriptStruct FSoundWaveCloudStreamingPlatformSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings;
class UScriptStruct* FSoundWaveCloudStreamingPlatformSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("SoundWaveCloudStreamingPlatformSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UScriptStruct* StaticStruct<FSoundWaveCloudStreamingPlatformSettings>()
{
	return FSoundWaveCloudStreamingPlatformSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Platform specific settings for Sound Wave cloud streaming. */" },
		{ "ModuleRelativePath", "Public/ISoundWaveCloudStreaming.h" },
		{ "ToolTip", "Platform specific settings for Sound Wave cloud streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablementSetting_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Overrides whether to use cloud streaming on this platform. */" },
		{ "ModuleRelativePath", "Public/ISoundWaveCloudStreaming.h" },
		{ "ToolTip", "Overrides whether to use cloud streaming on this platform." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnablementSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnablementSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveCloudStreamingPlatformSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::NewProp_EnablementSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::NewProp_EnablementSetting = { "EnablementSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundWaveCloudStreamingPlatformSettings, EnablementSetting), Z_Construct_UEnum_AudioExtensions_ESoundWaveCloudStreamingPlatformEnableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablementSetting_MetaData), NewProp_EnablementSetting_MetaData) }; // 1046046685
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::NewProp_EnablementSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::NewProp_EnablementSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	nullptr,
	&NewStructOps,
	"SoundWaveCloudStreamingPlatformSettings",
	Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::PropPointers),
	sizeof(FSoundWaveCloudStreamingPlatformSettings),
	alignof(FSoundWaveCloudStreamingPlatformSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings.InnerSingleton;
}
// End ScriptStruct FSoundWaveCloudStreamingPlatformSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESoundWaveCloudStreamingPlatformProjectEnableType_StaticEnum, TEXT("ESoundWaveCloudStreamingPlatformProjectEnableType"), &Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformProjectEnableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1810398243U) },
		{ ESoundWaveCloudStreamingPlatformEnableType_StaticEnum, TEXT("ESoundWaveCloudStreamingPlatformEnableType"), &Z_Registration_Info_UEnum_ESoundWaveCloudStreamingPlatformEnableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1046046685U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundWaveCloudStreamingPlatformProjectSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics::NewStructOps, TEXT("SoundWaveCloudStreamingPlatformProjectSettings"), &Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveCloudStreamingPlatformProjectSettings), 1413925578U) },
		{ FSoundWaveCloudStreamingPlatformSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics::NewStructOps, TEXT("SoundWaveCloudStreamingPlatformSettings"), &Z_Registration_Info_UScriptStruct_SoundWaveCloudStreamingPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveCloudStreamingPlatformSettings), 2149475394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_2766710457(TEXT("/Script/AudioExtensions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
