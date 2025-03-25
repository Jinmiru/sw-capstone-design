// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAttenuation() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPriorityAttenuationMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESoundDistanceCalc
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundDistanceCalc;
static UEnum* ESoundDistanceCalc_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundDistanceCalc, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundDistanceCalc"));
	}
	return Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESoundDistanceCalc>()
{
	return ESoundDistanceCalc_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// This enumeration is deprecated\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "SOUNDDISTANCE_InfiniteXYPlane.Name", "SOUNDDISTANCE_InfiniteXYPlane" },
		{ "SOUNDDISTANCE_InfiniteXZPlane.Name", "SOUNDDISTANCE_InfiniteXZPlane" },
		{ "SOUNDDISTANCE_InfiniteYZPlane.Name", "SOUNDDISTANCE_InfiniteYZPlane" },
		{ "SOUNDDISTANCE_MAX.Name", "SOUNDDISTANCE_MAX" },
		{ "SOUNDDISTANCE_Normal.Name", "SOUNDDISTANCE_Normal" },
		{ "ToolTip", "This enumeration is deprecated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SOUNDDISTANCE_Normal", (int64)SOUNDDISTANCE_Normal },
		{ "SOUNDDISTANCE_InfiniteXYPlane", (int64)SOUNDDISTANCE_InfiniteXYPlane },
		{ "SOUNDDISTANCE_InfiniteXZPlane", (int64)SOUNDDISTANCE_InfiniteXZPlane },
		{ "SOUNDDISTANCE_InfiniteYZPlane", (int64)SOUNDDISTANCE_InfiniteYZPlane },
		{ "SOUNDDISTANCE_MAX", (int64)SOUNDDISTANCE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESoundDistanceCalc",
	"ESoundDistanceCalc",
	Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc()
{
	if (!Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton, Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton;
}
// End Enum ESoundDistanceCalc

// Begin Enum ESoundSpatializationAlgorithm
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm;
static UEnum* ESoundSpatializationAlgorithm_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundSpatializationAlgorithm"));
	}
	return Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESoundSpatializationAlgorithm>()
{
	return ESoundSpatializationAlgorithm_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "SPATIALIZATION_Default.Comment", "// Standard panning method for spatialization (linear or equal power method defined in project settings)\n" },
		{ "SPATIALIZATION_Default.DisplayName", "Panning" },
		{ "SPATIALIZATION_Default.Name", "SPATIALIZATION_Default" },
		{ "SPATIALIZATION_Default.ToolTip", "Standard panning method for spatialization (linear or equal power method defined in project settings)" },
		{ "SPATIALIZATION_HRTF.Comment", "// Binaural spatialization method if available (requires headphones, enabled by plugins)\n" },
		{ "SPATIALIZATION_HRTF.DisplayName", "Binaural" },
		{ "SPATIALIZATION_HRTF.Name", "SPATIALIZATION_HRTF" },
		{ "SPATIALIZATION_HRTF.ToolTip", "Binaural spatialization method if available (requires headphones, enabled by plugins)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SPATIALIZATION_Default", (int64)SPATIALIZATION_Default },
		{ "SPATIALIZATION_HRTF", (int64)SPATIALIZATION_HRTF },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESoundSpatializationAlgorithm",
	"ESoundSpatializationAlgorithm",
	Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm()
{
	if (!Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton, Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton;
}
// End Enum ESoundSpatializationAlgorithm

// Begin Enum EAirAbsorptionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAirAbsorptionMethod;
static UEnum* EAirAbsorptionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAirAbsorptionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAirAbsorptionMethod"));
	}
	return Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAirAbsorptionMethod>()
{
	return EAirAbsorptionMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// The air absorption conforms to a custom distance curve.\n" },
		{ "CustomCurve.Name", "EAirAbsorptionMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "The air absorption conforms to a custom distance curve." },
		{ "Linear.Comment", "// The air absorption conform to a linear distance function\n" },
		{ "Linear.Name", "EAirAbsorptionMethod::Linear" },
		{ "Linear.ToolTip", "The air absorption conform to a linear distance function" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAirAbsorptionMethod::Linear", (int64)EAirAbsorptionMethod::Linear },
		{ "EAirAbsorptionMethod::CustomCurve", (int64)EAirAbsorptionMethod::CustomCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAirAbsorptionMethod",
	"EAirAbsorptionMethod",
	Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod()
{
	if (!Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton;
}
// End Enum EAirAbsorptionMethod

// Begin Enum EReverbSendMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReverbSendMethod;
static UEnum* EReverbSendMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReverbSendMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReverbSendMethod"));
	}
	return Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EReverbSendMethod>()
{
	return EReverbSendMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EReverbSendMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A reverb send based on a supplied curve\n" },
		{ "CustomCurve.Name", "EReverbSendMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A reverb send based on a supplied curve" },
		{ "Linear.Comment", "// A reverb send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "EReverbSendMethod::Linear" },
		{ "Linear.ToolTip", "A reverb send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual reverb send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "EReverbSendMethod::Manual" },
		{ "Manual.ToolTip", "A manual reverb send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReverbSendMethod::Linear", (int64)EReverbSendMethod::Linear },
		{ "EReverbSendMethod::CustomCurve", (int64)EReverbSendMethod::CustomCurve },
		{ "EReverbSendMethod::Manual", (int64)EReverbSendMethod::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EReverbSendMethod",
	"EReverbSendMethod",
	Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod()
{
	if (!Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton, Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton;
}
// End Enum EReverbSendMethod

// Begin Enum EPriorityAttenuationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPriorityAttenuationMethod;
static UEnum* EPriorityAttenuationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPriorityAttenuationMethod"));
	}
	return Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPriorityAttenuationMethod>()
{
	return EPriorityAttenuationMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A priority attenuation based on a supplied curve\n" },
		{ "CustomCurve.Name", "EPriorityAttenuationMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A priority attenuation based on a supplied curve" },
		{ "Linear.Comment", "// A priority attenuation based on linear interpolation between a distance range and priority attenuation range\n" },
		{ "Linear.Name", "EPriorityAttenuationMethod::Linear" },
		{ "Linear.ToolTip", "A priority attenuation based on linear interpolation between a distance range and priority attenuation range" },
		{ "Manual.Comment", "// A manual priority attenuation (Uses the specified constant value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "EPriorityAttenuationMethod::Manual" },
		{ "Manual.ToolTip", "A manual priority attenuation (Uses the specified constant value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPriorityAttenuationMethod::Linear", (int64)EPriorityAttenuationMethod::Linear },
		{ "EPriorityAttenuationMethod::CustomCurve", (int64)EPriorityAttenuationMethod::CustomCurve },
		{ "EPriorityAttenuationMethod::Manual", (int64)EPriorityAttenuationMethod::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPriorityAttenuationMethod",
	"EPriorityAttenuationMethod",
	Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPriorityAttenuationMethod()
{
	if (!Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton;
}
// End Enum EPriorityAttenuationMethod

// Begin ScriptStruct FSoundAttenuationPluginSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings;
class UScriptStruct* FSoundAttenuationPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundAttenuationPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundAttenuationPluginSettings>()
{
	return FSoundAttenuationPluginSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/** Settings to use with spatialization audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Spatialization Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with spatialization audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Occlusion Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** Settings to use with reverb audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Reverb Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with reverb audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataOverridePluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationSourceDataOverride" },
		{ "Comment", "/** Settings to use with source data override audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Source Data Override Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with source data override audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpatializationPluginSettingsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpatializationPluginSettingsArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OcclusionPluginSettingsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OcclusionPluginSettingsArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReverbPluginSettingsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReverbPluginSettingsArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceDataOverridePluginSettingsArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDataOverridePluginSettingsArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundAttenuationPluginSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_Inner = { "SpatializationPluginSettingsArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray = { "SpatializationPluginSettingsArray", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationPluginSettings, SpatializationPluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatializationPluginSettingsArray_MetaData), NewProp_SpatializationPluginSettingsArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_Inner = { "OcclusionPluginSettingsArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray = { "OcclusionPluginSettingsArray", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationPluginSettings, OcclusionPluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionPluginSettingsArray_MetaData), NewProp_OcclusionPluginSettingsArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_Inner = { "ReverbPluginSettingsArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray = { "ReverbPluginSettingsArray", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationPluginSettings, ReverbPluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbPluginSettingsArray_MetaData), NewProp_ReverbPluginSettingsArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_Inner = { "SourceDataOverridePluginSettingsArray", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray = { "SourceDataOverridePluginSettingsArray", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationPluginSettings, SourceDataOverridePluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDataOverridePluginSettingsArray_MetaData), NewProp_SourceDataOverridePluginSettingsArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundAttenuationPluginSettings",
	Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers),
	sizeof(FSoundAttenuationPluginSettings),
	alignof(FSoundAttenuationPluginSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.InnerSingleton;
}
// End ScriptStruct FSoundAttenuationPluginSettings

// Begin Enum ENonSpatializedRadiusSpeakerMapMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode;
static UEnum* ENonSpatializedRadiusSpeakerMapMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENonSpatializedRadiusSpeakerMapMode"));
	}
	return Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENonSpatializedRadiusSpeakerMapMode>()
{
	return ENonSpatializedRadiusSpeakerMapMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines how to speaker map the sound when using the non-spatialized radius feature\n" },
		{ "Direct2D.Comment", "// Will blend the 3D source to the same representation speaker map used when playing the asset 2D\n" },
		{ "Direct2D.Name", "ENonSpatializedRadiusSpeakerMapMode::Direct2D" },
		{ "Direct2D.ToolTip", "Will blend the 3D source to the same representation speaker map used when playing the asset 2D" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "OmniDirectional.Comment", "// Will blend the 3D sound to an omni-directional sound (equal output mapping in all directions)\n" },
		{ "OmniDirectional.Name", "ENonSpatializedRadiusSpeakerMapMode::OmniDirectional" },
		{ "OmniDirectional.ToolTip", "Will blend the 3D sound to an omni-directional sound (equal output mapping in all directions)" },
		{ "Surround2D.Comment", "// Will blend the 3D source to a multichannel 2D version (i.e. upmix stereo to quad) if rendering in surround\n" },
		{ "Surround2D.Name", "ENonSpatializedRadiusSpeakerMapMode::Surround2D" },
		{ "Surround2D.ToolTip", "Will blend the 3D source to a multichannel 2D version (i.e. upmix stereo to quad) if rendering in surround" },
		{ "ToolTip", "Defines how to speaker map the sound when using the non-spatialized radius feature" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENonSpatializedRadiusSpeakerMapMode::OmniDirectional", (int64)ENonSpatializedRadiusSpeakerMapMode::OmniDirectional },
		{ "ENonSpatializedRadiusSpeakerMapMode::Direct2D", (int64)ENonSpatializedRadiusSpeakerMapMode::Direct2D },
		{ "ENonSpatializedRadiusSpeakerMapMode::Surround2D", (int64)ENonSpatializedRadiusSpeakerMapMode::Surround2D },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENonSpatializedRadiusSpeakerMapMode",
	"ENonSpatializedRadiusSpeakerMapMode",
	Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode()
{
	if (!Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.InnerSingleton, Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode.InnerSingleton;
}
// End Enum ENonSpatializedRadiusSpeakerMapMode

// Begin ScriptStruct FAttenuationSubmixSendSettings
static_assert(std::is_polymorphic<FAttenuationSubmixSendSettings>() == std::is_polymorphic<FSoundSubmixSendInfoBase>(), "USTRUCT FAttenuationSubmixSendSettings cannot be polymorphic unless super FSoundSubmixSendInfoBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings;
class UScriptStruct* FAttenuationSubmixSendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AttenuationSubmixSendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAttenuationSubmixSendSettings>()
{
	return FAttenuationSubmixSendSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttenuationSubmixSendSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase,
	&NewStructOps,
	"AttenuationSubmixSendSettings",
	nullptr,
	0,
	sizeof(FAttenuationSubmixSendSettings),
	alignof(FAttenuationSubmixSendSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings()
{
	if (!Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.InnerSingleton, Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.InnerSingleton;
}
// End ScriptStruct FAttenuationSubmixSendSettings

// Begin ScriptStruct FSoundAttenuationSettings
static_assert(std::is_polymorphic<FSoundAttenuationSettings>() == std::is_polymorphic<FBaseAttenuationSettings>(), "USTRUCT FSoundAttenuationSettings cannot be polymorphic unless super FBaseAttenuationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundAttenuationSettings;
class UScriptStruct* FSoundAttenuationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundAttenuationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundAttenuationSettings>()
{
	return FSoundAttenuationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nThe settings for attenuating.\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The settings for attenuating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuate_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* Allows distance-based volume attenuation. */" },
		{ "DisplayName", "Enable Volume Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows distance-based volume attenuation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpatialize_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/* Allows the source to be 3D spatialized. */" },
		{ "DisplayName", "Enable Spatialization" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows the source to be 3D spatialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuateWithLPF_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance. */" },
		{ "DisplayName", "Enable Air Absorption" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableListenerFocus_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Enable listener focus-based adjustments. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enable listener focus-based adjustments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFocusInterpolation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Enables focus interpolation to smooth transition in and and of focus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables focus interpolation to smooth transition in and and of focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Enables realtime occlusion tracing. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables realtime occlusion tracing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Enables tracing against complex collision when doing occlusion traces. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables tracing against complex collision when doing occlusion traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReverbSend_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** Enables adjusting reverb sends based on distance. */" },
		{ "DisplayName", "Enable Reverb Send" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables adjusting reverb sends based on distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePriorityAttenuation_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/** Enables attenuation of sound priority based off distance. */" },
		{ "DisplayName", "Enable Priority Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables attenuation of sound priority based off distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNormalizationToStereoSounds_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/** Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing. */" },
		{ "DisplayName", "Normalize 3D Stereo Sounds" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogFrequencyScaling_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear). */" },
		{ "DisplayName", "Enable Log Frequency Scaling" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubmixSends_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** Enables submix sends based on distance. */" },
		{ "DisplayName", "Enable Submix Send" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables submix sends based on distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSourceDataOverride_MetaData[] = {
		{ "Category", "AttenuationSourceDataOverride" },
		{ "Comment", "/** Enables overriding WaveInstance data using source data override plugin */" },
		{ "DisplayName", "Enable Source Data Override" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables overriding WaveInstance data using source data override plugin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSendToAudioLink_MetaData[] = {
		{ "Category", "AttenuationAudioLink" },
		{ "Comment", "/** Enables/Disables AudioLink on all sources using this attenuation */" },
		{ "DisplayName", "Enable Send to AudioLink" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables/Disables AudioLink on all sources using this attenuation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationAlgorithm_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What method we use to spatialize the sound. */" },
		{ "DisplayName", "Spatialization Method" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method we use to spatialize the sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioLinkSettingsOverride_MetaData[] = {
		{ "Category", "AttenuationAudioLink" },
		{ "Comment", "/** AudioLink Setting Overrides */" },
		{ "DisplayName", "AudioLink Settings Override" },
		{ "EditCondition", "bEnableSendToAudioLink" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "AudioLink Setting Overrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BinauralRadius_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What min radius to use to swap to non-binaural audio when a sound starts playing. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What min radius to use to swap to non-binaural audio when a sound starts playing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomLowpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomHighpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMethod_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** What method to use to map distance values to frequency absorption values. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to map distance values to frequency absorption values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/* Which trace channel to use for audio occlusion checks. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Which trace channel to use for audio occlusion checks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbSendMethod_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** What method to use to control master reverb sends */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to control master reverb sends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMethod_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/** What method to use to control priority attenuation */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to control priority attenuation" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmniRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedRadiusStart_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The distance below which a sound begins to linearly interpolate towards being non-spatialized (2D). See \"Non Spatialized Radius End\" to define the end of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation. Note: this does not apply when using a 3rd party binaural plugin (audio will remain spatialized). */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The distance below which a sound begins to linearly interpolate towards being non-spatialized (2D). See \"Non Spatialized Radius End\" to define the end of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation. Note: this does not apply when using a 3rd party binaural plugin (audio will remain spatialized)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedRadiusEnd_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The distance below which a sound is fully non-spatialized (2D). See \"Non Spatialized Radius Start\" to define the start of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The distance below which a sound is fully non-spatialized (2D). See \"Non Spatialized Radius Start\" to define the start of the interpolation and the \"Non Spatialized Radius Mode\" for the mode of the interpolation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonSpatializedRadiusMode_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Defines how to interpolate a 3D sound towards a 2D sound when using the non-spatialized radius start and end properties. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Defines how to interpolate a 3D sound towards a 2D sound when using the non-spatialized radius start and end properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StereoSpread_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The world-space distance between left and right stereo channels when stereo assets are 3D spatialized. */" },
		{ "DisplayName", "3D Stereo Spread" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The world-space distance between left and right stereo channels when stereo assets are 3D spatialized." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The distance min range at which to apply an absorption LPF filter. */" },
		{ "DisplayName", "Min Distance Range" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The distance min range at which to apply an absorption LPF filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values. */" },
		{ "DisplayName", "Max Distance Range" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the lowpass absorption filter. */" },
		{ "DisplayName", "Low Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the lowpass absorption filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the lowpass absorption filter. */" },
		{ "DisplayName", "Low Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the lowpass absorption filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the highpass absorption filter. */" },
		{ "DisplayName", "High Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the highpass absorption filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the highpass absorption filter. */" },
		{ "DisplayName", "High Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the highpass absorption filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are.  */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to attenuate sounds that are in focus. Can be overridden at the sound-level. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusAttackInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar used to increase interpolation speed upwards to the target Focus value */" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed upwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusReleaseInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar used to increase interpolation speed downwards to the target Focus value */" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed downwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionLowPassFilterFrequency_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The low pass filter frequency (in Hz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The low pass filter frequency (in Hz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The amount of volume attenuation to apply to sounds which are occluded. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount of volume attenuation to apply to sounds which are occluded." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionInterpolationTime_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded." },
		{ "UIMin", "0.0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMin_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb min send distance. */" },
		{ "DisplayName", "Reverb Min Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb min send distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMax_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb max send distance. */" },
		{ "DisplayName", "Reverb Max Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb max send distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMin_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The min distance to send to the master reverb. */" },
		{ "DisplayName", "Reverb Min Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The min distance to send to the master reverb." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMax_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The max distance to send to the master reverb. */" },
		{ "DisplayName", "Reverb Max Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance to send to the master reverb." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualReverbSendLevel_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/* The manual master reverb send level to use. Doesn't change as a function of distance. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The manual master reverb send level to use. Doesn't change as a function of distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMin_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolated value to scale priority against when the sound is at the minimum priority attenuation distance from the closest listener. */" },
		{ "DisplayName", "Priority Attenuation At Min Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Interpolated value to scale priority against when the sound is at the minimum priority attenuation distance from the closest listener." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMax_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolated value to scale priority against when the sound is at the maximum priority attenuation distance from the closest listener. */" },
		{ "DisplayName", "Priority Attenuation At Max Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Interpolated value to scale priority against when the sound is at the maximum priority attenuation distance from the closest listener." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationDistanceMin_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The min distance to attenuate priority. */" },
		{ "DisplayName", "Priority Attenuation Min Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The min distance to attenuate priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationDistanceMax_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The max distance to attenuate priority. */" },
		{ "DisplayName", "Priority Attenuation Max Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance to attenuate priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualPriorityAttenuation_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Static priority scalar to use (doesn't change as a function of distance). */" },
		{ "DisplayName", "Attenuation Priority" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Static priority scalar to use (doesn't change as a function of distance)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomReverbSendCurve_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/* The custom reverb send curve to use for distance-based send level. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendSettings_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** Set of submix send settings to use to send audio to submixes as a function of distance. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Set of submix send settings to use to send audio to submixes as a function of distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPriorityAttenuationCurve_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/* The custom curve to use for distance-based priority attenuation. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The custom curve to use for distance-based priority attenuation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginSettings_MetaData[] = {
		{ "Category", "AttenuationPluginSettings" },
		{ "Comment", "/** Sound attenuation plugin settings to use with sounds that play with this attenuation setting. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sound attenuation plugin settings to use with sounds that play with this attenuation setting." },
	};
#endif // WITH_METADATA
	static void NewProp_bAttenuate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuate;
	static void NewProp_bSpatialize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpatialize;
	static void NewProp_bAttenuateWithLPF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuateWithLPF;
	static void NewProp_bEnableListenerFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableListenerFocus;
	static void NewProp_bEnableFocusInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusInterpolation;
	static void NewProp_bEnableOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion;
	static void NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion;
	static void NewProp_bEnableReverbSend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReverbSend;
	static void NewProp_bEnablePriorityAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePriorityAttenuation;
	static void NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNormalizationToStereoSounds;
	static void NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogFrequencyScaling;
	static void NewProp_bEnableSubmixSends_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubmixSends;
	static void NewProp_bEnableSourceDataOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceDataOverride;
	static void NewProp_bEnableSendToAudioLink_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSendToAudioLink;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpatializationAlgorithm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioLinkSettingsOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BinauralRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLowpassAirAbsorptionCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHighpassAirAbsorptionCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbsorptionMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbsorptionMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReverbSendMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReverbSendMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityAttenuationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityAttenuationMethod;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OmniRadius;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonSpatializedRadiusStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonSpatializedRadiusEnd;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NonSpatializedRadiusMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NonSpatializedRadiusMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoSpread;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpatializationPluginSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusMax;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusAzimuth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusAzimuth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistanceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusDistanceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusPriorityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusPriorityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusVolumeAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusVolumeAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusAttackInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusReleaseInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionLowPassFilterFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionVolumeAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionInterpolationTime;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OcclusionPluginSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReverbPluginSettings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualReverbSendLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationDistanceMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationDistanceMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualPriorityAttenuation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomReverbSendCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixSendSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixSendSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPriorityAttenuationCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PluginSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundAttenuationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bAttenuate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate = { "bAttenuate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttenuate_MetaData), NewProp_bAttenuate_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bSpatialize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize = { "bSpatialize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpatialize_MetaData), NewProp_bSpatialize_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bAttenuateWithLPF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF = { "bAttenuateWithLPF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttenuateWithLPF_MetaData), NewProp_bAttenuateWithLPF_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableListenerFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus = { "bEnableListenerFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableListenerFocus_MetaData), NewProp_bEnableListenerFocus_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableFocusInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation = { "bEnableFocusInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFocusInterpolation_MetaData), NewProp_bEnableFocusInterpolation_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion = { "bEnableOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOcclusion_MetaData), NewProp_bEnableOcclusion_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bUseComplexCollisionForOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion = { "bUseComplexCollisionForOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComplexCollisionForOcclusion_MetaData), NewProp_bUseComplexCollisionForOcclusion_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableReverbSend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend = { "bEnableReverbSend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableReverbSend_MetaData), NewProp_bEnableReverbSend_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnablePriorityAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation = { "bEnablePriorityAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePriorityAttenuation_MetaData), NewProp_bEnablePriorityAttenuation_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bApplyNormalizationToStereoSounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds = { "bApplyNormalizationToStereoSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyNormalizationToStereoSounds_MetaData), NewProp_bApplyNormalizationToStereoSounds_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableLogFrequencyScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling = { "bEnableLogFrequencyScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLogFrequencyScaling_MetaData), NewProp_bEnableLogFrequencyScaling_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableSubmixSends = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends = { "bEnableSubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSubmixSends_MetaData), NewProp_bEnableSubmixSends_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableSourceDataOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride = { "bEnableSourceDataOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSourceDataOverride_MetaData), NewProp_bEnableSourceDataOverride_MetaData) };
void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_SetBit(void* Obj)
{
	((FSoundAttenuationSettings*)Obj)->bEnableSendToAudioLink = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink = { "bEnableSendToAudioLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSendToAudioLink_MetaData), NewProp_bEnableSendToAudioLink_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm = { "SpatializationAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationAlgorithm), Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatializationAlgorithm_MetaData), NewProp_SpatializationAlgorithm_MetaData) }; // 3421118539
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AudioLinkSettingsOverride = { "AudioLinkSettingsOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, AudioLinkSettingsOverride), Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioLinkSettingsOverride_MetaData), NewProp_AudioLinkSettingsOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_BinauralRadius = { "BinauralRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, BinauralRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BinauralRadius_MetaData), NewProp_BinauralRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve = { "CustomLowpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, CustomLowpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomLowpassAirAbsorptionCurve_MetaData), NewProp_CustomLowpassAirAbsorptionCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve = { "CustomHighpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, CustomHighpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomHighpassAirAbsorptionCurve_MetaData), NewProp_CustomHighpassAirAbsorptionCurve_MetaData) }; // 762678829
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod = { "AbsorptionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, AbsorptionMethod), Z_Construct_UEnum_Engine_EAirAbsorptionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionMethod_MetaData), NewProp_AbsorptionMethod_MetaData) }; // 3349293244
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel = { "OcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionTraceChannel_MetaData), NewProp_OcclusionTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod = { "ReverbSendMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbSendMethod), Z_Construct_UEnum_Engine_EReverbSendMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbSendMethod_MetaData), NewProp_ReverbSendMethod_MetaData) }; // 4249716989
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod = { "PriorityAttenuationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationMethod), Z_Construct_UEnum_Engine_EPriorityAttenuationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityAttenuationMethod_MetaData), NewProp_PriorityAttenuationMethod_MetaData) }; // 3229334839
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType = { "DistanceType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, DistanceType_DEPRECATED), Z_Construct_UEnum_Engine_ESoundDistanceCalc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceType_MetaData), NewProp_DistanceType_MetaData) }; // 3071675131
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius = { "OmniRadius", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OmniRadius_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmniRadius_MetaData), NewProp_OmniRadius_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusStart = { "NonSpatializedRadiusStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonSpatializedRadiusStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonSpatializedRadiusStart_MetaData), NewProp_NonSpatializedRadiusStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusEnd = { "NonSpatializedRadiusEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonSpatializedRadiusEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonSpatializedRadiusEnd_MetaData), NewProp_NonSpatializedRadiusEnd_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode = { "NonSpatializedRadiusMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonSpatializedRadiusMode), Z_Construct_UEnum_Engine_ENonSpatializedRadiusSpeakerMapMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonSpatializedRadiusMode_MetaData), NewProp_NonSpatializedRadiusMode_MetaData) }; // 3764066908
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread = { "StereoSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, StereoSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StereoSpread_MetaData), NewProp_StereoSpread_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings = { "SpatializationPluginSettings", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationPluginSettings_DEPRECATED), Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatializationPluginSettings_MetaData), NewProp_SpatializationPluginSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin = { "RadiusMin", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMin_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusMin_MetaData), NewProp_RadiusMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax = { "RadiusMax", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMax_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusMax_MetaData), NewProp_RadiusMax_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin = { "LPFRadiusMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LPFRadiusMin_MetaData), NewProp_LPFRadiusMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax = { "LPFRadiusMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LPFRadiusMax_MetaData), NewProp_LPFRadiusMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin = { "LPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LPFFrequencyAtMin_MetaData), NewProp_LPFFrequencyAtMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax = { "LPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LPFFrequencyAtMax_MetaData), NewProp_LPFFrequencyAtMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin = { "HPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPFFrequencyAtMin_MetaData), NewProp_HPFFrequencyAtMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax = { "HPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPFFrequencyAtMax_MetaData), NewProp_HPFFrequencyAtMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth = { "FocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAzimuth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusAzimuth_MetaData), NewProp_FocusAzimuth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth = { "NonFocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusAzimuth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonFocusAzimuth_MetaData), NewProp_NonFocusAzimuth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale = { "FocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusDistanceScale_MetaData), NewProp_FocusDistanceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale = { "NonFocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonFocusDistanceScale_MetaData), NewProp_NonFocusDistanceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale = { "FocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusPriorityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusPriorityScale_MetaData), NewProp_FocusPriorityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale = { "NonFocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusPriorityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonFocusPriorityScale_MetaData), NewProp_NonFocusPriorityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation = { "FocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusVolumeAttenuation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusVolumeAttenuation_MetaData), NewProp_FocusVolumeAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation = { "NonFocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusVolumeAttenuation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonFocusVolumeAttenuation_MetaData), NewProp_NonFocusVolumeAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed = { "FocusAttackInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAttackInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusAttackInterpSpeed_MetaData), NewProp_FocusAttackInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed = { "FocusReleaseInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusReleaseInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusReleaseInterpSpeed_MetaData), NewProp_FocusReleaseInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency = { "OcclusionLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionLowPassFilterFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionLowPassFilterFrequency_MetaData), NewProp_OcclusionLowPassFilterFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation = { "OcclusionVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionVolumeAttenuation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionVolumeAttenuation_MetaData), NewProp_OcclusionVolumeAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime = { "OcclusionInterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionInterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionInterpolationTime_MetaData), NewProp_OcclusionInterpolationTime_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings = { "OcclusionPluginSettings", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionPluginSettings_DEPRECATED), Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionPluginSettings_MetaData), NewProp_OcclusionPluginSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings = { "ReverbPluginSettings", nullptr, (EPropertyFlags)0x0114000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbPluginSettings_DEPRECATED), Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbPluginSettings_MetaData), NewProp_ReverbPluginSettings_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin = { "ReverbWetLevelMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbWetLevelMin_MetaData), NewProp_ReverbWetLevelMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax = { "ReverbWetLevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbWetLevelMax_MetaData), NewProp_ReverbWetLevelMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin = { "ReverbDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbDistanceMin_MetaData), NewProp_ReverbDistanceMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax = { "ReverbDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbDistanceMax_MetaData), NewProp_ReverbDistanceMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel = { "ManualReverbSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ManualReverbSendLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualReverbSendLevel_MetaData), NewProp_ManualReverbSendLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMin = { "PriorityAttenuationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityAttenuationMin_MetaData), NewProp_PriorityAttenuationMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMax = { "PriorityAttenuationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityAttenuationMax_MetaData), NewProp_PriorityAttenuationMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin = { "PriorityAttenuationDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationDistanceMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityAttenuationDistanceMin_MetaData), NewProp_PriorityAttenuationDistanceMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax = { "PriorityAttenuationDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationDistanceMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityAttenuationDistanceMax_MetaData), NewProp_PriorityAttenuationDistanceMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation = { "ManualPriorityAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ManualPriorityAttenuation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualPriorityAttenuation_MetaData), NewProp_ManualPriorityAttenuation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve = { "CustomReverbSendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, CustomReverbSendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomReverbSendCurve_MetaData), NewProp_CustomReverbSendCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings_Inner = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings, METADATA_PARAMS(0, nullptr) }; // 750057123
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, SubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixSendSettings_MetaData), NewProp_SubmixSendSettings_MetaData) }; // 750057123
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve = { "CustomPriorityAttenuationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, CustomPriorityAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPriorityAttenuationCurve_MetaData), NewProp_CustomPriorityAttenuationCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings = { "PluginSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundAttenuationSettings, PluginSettings), Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginSettings_MetaData), NewProp_PluginSettings_MetaData) }; // 3863828214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AudioLinkSettingsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_BinauralRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonSpatializedRadiusMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FBaseAttenuationSettings,
	&NewStructOps,
	"SoundAttenuationSettings",
	Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers),
	sizeof(FSoundAttenuationSettings),
	alignof(FSoundAttenuationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.InnerSingleton;
}
// End ScriptStruct FSoundAttenuationSettings

// Begin Class USoundAttenuation
void USoundAttenuation::StaticRegisterNativesUSoundAttenuation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAttenuation);
UClass* Z_Construct_UClass_USoundAttenuation_NoRegister()
{
	return USoundAttenuation::StaticClass();
}
struct Z_Construct_UClass_USoundAttenuation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines how a sound changes volume with distance to the listener\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundAttenuation.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Defines how a sound changes volume with distance to the listener" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
		{ "Category", "Settings" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAttenuation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundAttenuation, Attenuation), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attenuation_MetaData), NewProp_Attenuation_MetaData) }; // 4035653401
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundAttenuation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAttenuation_Statics::ClassParams = {
	&USoundAttenuation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundAttenuation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundAttenuation()
{
	if (!Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton, Z_Construct_UClass_USoundAttenuation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundAttenuation>()
{
	return USoundAttenuation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAttenuation);
USoundAttenuation::~USoundAttenuation() {}
// End Class USoundAttenuation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESoundDistanceCalc_StaticEnum, TEXT("ESoundDistanceCalc"), &Z_Registration_Info_UEnum_ESoundDistanceCalc, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3071675131U) },
		{ ESoundSpatializationAlgorithm_StaticEnum, TEXT("ESoundSpatializationAlgorithm"), &Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3421118539U) },
		{ EAirAbsorptionMethod_StaticEnum, TEXT("EAirAbsorptionMethod"), &Z_Registration_Info_UEnum_EAirAbsorptionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3349293244U) },
		{ EReverbSendMethod_StaticEnum, TEXT("EReverbSendMethod"), &Z_Registration_Info_UEnum_EReverbSendMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4249716989U) },
		{ EPriorityAttenuationMethod_StaticEnum, TEXT("EPriorityAttenuationMethod"), &Z_Registration_Info_UEnum_EPriorityAttenuationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3229334839U) },
		{ ENonSpatializedRadiusSpeakerMapMode_StaticEnum, TEXT("ENonSpatializedRadiusSpeakerMapMode"), &Z_Registration_Info_UEnum_ENonSpatializedRadiusSpeakerMapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3764066908U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundAttenuationPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewStructOps, TEXT("SoundAttenuationPluginSettings"), &Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundAttenuationPluginSettings), 3863828214U) },
		{ FAttenuationSubmixSendSettings::StaticStruct, Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewStructOps, TEXT("AttenuationSubmixSendSettings"), &Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttenuationSubmixSendSettings), 750057123U) },
		{ FSoundAttenuationSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewStructOps, TEXT("SoundAttenuationSettings"), &Z_Registration_Info_UScriptStruct_SoundAttenuationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundAttenuationSettings), 4035653401U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundAttenuation, USoundAttenuation::StaticClass, TEXT("USoundAttenuation"), &Z_Registration_Info_UClass_USoundAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAttenuation), 1486487425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_3345962848(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
