// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundMix() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundMix();
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioEffectParameters();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioEQEffect();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassAdjuster();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAudioEffectParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioEffectParameters;
class UScriptStruct* FAudioEffectParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioEffectParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioEffectParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioEffectParameters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioEffectParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AudioEffectParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioEffectParameters>()
{
	return FAudioEffectParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioEffectParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioEffectParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioEffectParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AudioEffectParameters",
	nullptr,
	0,
	sizeof(FAudioEffectParameters),
	alignof(FAudioEffectParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEffectParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioEffectParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioEffectParameters()
{
	if (!Z_Registration_Info_UScriptStruct_AudioEffectParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioEffectParameters.InnerSingleton, Z_Construct_UScriptStruct_FAudioEffectParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioEffectParameters.InnerSingleton;
}
// End ScriptStruct FAudioEffectParameters

// Begin ScriptStruct FAudioEQEffect
static_assert(std::is_polymorphic<FAudioEQEffect>() == std::is_polymorphic<FAudioEffectParameters>(), "USTRUCT FAudioEQEffect cannot be polymorphic unless super FAudioEffectParameters is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioEQEffect;
class UScriptStruct* FAudioEQEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioEQEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioEQEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioEQEffect, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioEQEffect"));
	}
	return Z_Registration_Info_UScriptStruct_AudioEQEffect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioEQEffect>()
{
	return FAudioEQEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioEQEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter0_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Center frequency in Hz for band 0 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 0" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain0_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Boost/cut of band 0 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 0" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth0_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Bandwidth of band 0. Region is center frequency +/- Bandwidth /2 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 0. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter1_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Center frequency in Hz for band 1 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 1" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain1_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Boost/cut of band 1 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 1" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth1_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Bandwidth of band 1. Region is center frequency +/- Bandwidth /2 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 1. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter2_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Center frequency in Hz for band 2 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 2" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain2_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Boost/cut of band 2 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 2" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth2_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Bandwidth of band 2. Region is center frequency +/- Bandwidth /2 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 2. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyCenter3_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Center frequency in Hz for band 3 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Center frequency in Hz for band 3" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain3_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Boost/cut of band 3 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Boost/cut of band 3" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth3_MetaData[] = {
		{ "Category", "Band0" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Bandwidth of band 3. Region is center frequency +/- Bandwidth /2 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Bandwidth of band 3. Region is center frequency +/- Bandwidth /2" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bandwidth0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bandwidth1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bandwidth2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyCenter3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bandwidth3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioEQEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter0 = { "FrequencyCenter0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyCenter0_MetaData), NewProp_FrequencyCenter0_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain0 = { "Gain0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Gain0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain0_MetaData), NewProp_Gain0_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth0 = { "Bandwidth0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth0_MetaData), NewProp_Bandwidth0_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter1 = { "FrequencyCenter1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyCenter1_MetaData), NewProp_FrequencyCenter1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain1 = { "Gain1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Gain1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain1_MetaData), NewProp_Gain1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth1 = { "Bandwidth1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth1_MetaData), NewProp_Bandwidth1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter2 = { "FrequencyCenter2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyCenter2_MetaData), NewProp_FrequencyCenter2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain2 = { "Gain2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Gain2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain2_MetaData), NewProp_Gain2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth2 = { "Bandwidth2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth2_MetaData), NewProp_Bandwidth2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter3 = { "FrequencyCenter3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, FrequencyCenter3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrequencyCenter3_MetaData), NewProp_FrequencyCenter3_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain3 = { "Gain3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Gain3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain3_MetaData), NewProp_Gain3_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth3 = { "Bandwidth3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioEQEffect, Bandwidth3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth3_MetaData), NewProp_Bandwidth3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioEQEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_FrequencyCenter3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Gain3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewProp_Bandwidth3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioEQEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAudioEffectParameters,
	&NewStructOps,
	"AudioEQEffect",
	Z_Construct_UScriptStruct_FAudioEQEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::PropPointers),
	sizeof(FAudioEQEffect),
	alignof(FAudioEQEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioEQEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioEQEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioEQEffect()
{
	if (!Z_Registration_Info_UScriptStruct_AudioEQEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioEQEffect.InnerSingleton, Z_Construct_UScriptStruct_FAudioEQEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioEQEffect.InnerSingleton;
}
// End ScriptStruct FAudioEQEffect

// Begin ScriptStruct FSoundClassAdjuster
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundClassAdjuster;
class UScriptStruct* FSoundClassAdjuster::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassAdjuster.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundClassAdjuster.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassAdjuster, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassAdjuster"));
	}
	return Z_Registration_Info_UScriptStruct_SoundClassAdjuster.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassAdjuster>()
{
	return FSoundClassAdjuster::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Elements of data for sound group volume control\n */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Elements of data for sound group volume control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "Comment", "/* The sound class this adjuster affects. */" },
		{ "DisplayName", "Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "The sound class this adjuster affects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeAdjuster_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* A multiplier applied to the volume. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "A multiplier applied to the volume." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchAdjuster_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* A multiplier applied to the pitch. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "A multiplier applied to the pitch." },
		{ "UIMax", "8.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Lowpass filter cutoff frequency to apply to sound sources. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Lowpass filter cutoff frequency to apply to sound sources." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToChildren_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "Comment", "/* Set to true to apply this adjuster to all children of the sound class. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Set to true to apply this adjuster to all children of the sound class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolumeAdjuster_MetaData[] = {
		{ "Category", "SoundClassAdjuster" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* A multiplier applied to VoiceCenterChannelVolume. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "A multiplier applied to VoiceCenterChannelVolume." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClassObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeAdjuster;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchAdjuster;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
	static void NewProp_bApplyToChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolumeAdjuster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassAdjuster>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_SoundClassObject = { "SoundClassObject", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassAdjuster, SoundClassObject), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundClassObject_MetaData), NewProp_SoundClassObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VolumeAdjuster = { "VolumeAdjuster", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassAdjuster, VolumeAdjuster), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeAdjuster_MetaData), NewProp_VolumeAdjuster_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_PitchAdjuster = { "PitchAdjuster", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassAdjuster, PitchAdjuster), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchAdjuster_MetaData), NewProp_PitchAdjuster_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassAdjuster, LowPassFilterFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowPassFilterFrequency_MetaData), NewProp_LowPassFilterFrequency_MetaData) };
void Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_SetBit(void* Obj)
{
	((FSoundClassAdjuster*)Obj)->bApplyToChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren = { "bApplyToChildren", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSoundClassAdjuster), &Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyToChildren_MetaData), NewProp_bApplyToChildren_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VoiceCenterChannelVolumeAdjuster = { "VoiceCenterChannelVolumeAdjuster", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundClassAdjuster, VoiceCenterChannelVolumeAdjuster), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceCenterChannelVolumeAdjuster_MetaData), NewProp_VoiceCenterChannelVolumeAdjuster_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_SoundClassObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VolumeAdjuster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_PitchAdjuster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_LowPassFilterFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_bApplyToChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewProp_VoiceCenterChannelVolumeAdjuster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundClassAdjuster",
	Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::PropPointers),
	sizeof(FSoundClassAdjuster),
	alignof(FSoundClassAdjuster),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundClassAdjuster()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassAdjuster.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundClassAdjuster.InnerSingleton, Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundClassAdjuster.InnerSingleton;
}
// End ScriptStruct FSoundClassAdjuster

// Begin Class USoundMix
void USoundMix::StaticRegisterNativesUSoundMix()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundMix);
UClass* Z_Construct_UClass_USoundMix_NoRegister()
{
	return USoundMix::StaticClass();
}
struct Z_Construct_UClass_USoundMix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Sound/SoundMix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyEQ_MetaData[] = {
		{ "Category", "EQ" },
		{ "Comment", "/** Whether to apply the EQ effect */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Whether to apply the EQ effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EQPriority_MetaData[] = {
		{ "Category", "EQ" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EQSettings_MetaData[] = {
		{ "Category", "EQ" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassEffects_MetaData[] = {
		{ "Category", "SoundClasses" },
		{ "Comment", "/* Array of changes to be applied to groups. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Array of changes to be applied to groups." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialDelay_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "Comment", "/* Initial delay in seconds before the mix is applied. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Initial delay in seconds before the mix is applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "Comment", "/* Time taken in seconds for the mix to fade in. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Time taken in seconds for the mix to fade in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "Comment", "/* Duration of mix, negative means it will be applied until another mix is set. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Duration of mix, negative means it will be applied until another mix is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "SoundMix" },
		{ "Comment", "/* Time taken in seconds for the mix to fade out. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Time taken in seconds for the mix to fade out." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[] = {
		{ "Comment", "/** Transient property used to trigger real-time updates of the active EQ filter for editor previewing */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundMix.h" },
		{ "ToolTip", "Transient property used to trigger real-time updates of the active EQ filter for editor previewing" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bApplyEQ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyEQ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EQPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EQSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundClassEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundClassEffects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
#if WITH_EDITORONLY_DATA
	static void NewProp_bChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChanged;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundMix>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_SetBit(void* Obj)
{
	((USoundMix*)Obj)->bApplyEQ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ = { "bApplyEQ", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundMix), &Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyEQ_MetaData), NewProp_bApplyEQ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_EQPriority = { "EQPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundMix, EQPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EQPriority_MetaData), NewProp_EQPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_EQSettings = { "EQSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundMix, EQSettings), Z_Construct_UScriptStruct_FAudioEQEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EQSettings_MetaData), NewProp_EQSettings_MetaData) }; // 718146483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects_Inner = { "SoundClassEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoundClassAdjuster, METADATA_PARAMS(0, nullptr) }; // 3498227502
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects = { "SoundClassEffects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundMix, SoundClassEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundClassEffects_MetaData), NewProp_SoundClassEffects_MetaData) }; // 3498227502
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_InitialDelay = { "InitialDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundMix, InitialDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialDelay_MetaData), NewProp_InitialDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundMix, FadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInTime_MetaData), NewProp_FadeInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundMix, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundMix, FadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutTime_MetaData), NewProp_FadeOutTime_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged_SetBit(void* Obj)
{
	((USoundMix*)Obj)->bChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundMix), &Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChanged_MetaData), NewProp_bChanged_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundMix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_bApplyEQ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_EQPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_EQSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_SoundClassEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_InitialDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_FadeOutTime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundMix_Statics::NewProp_bChanged,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundMix_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundMix_Statics::ClassParams = {
	&USoundMix::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundMix_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundMix_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundMix_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundMix()
{
	if (!Z_Registration_Info_UClass_USoundMix.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundMix.OuterSingleton, Z_Construct_UClass_USoundMix_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundMix.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundMix>()
{
	return USoundMix::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundMix);
USoundMix::~USoundMix() {}
// End Class USoundMix

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioEffectParameters::StaticStruct, Z_Construct_UScriptStruct_FAudioEffectParameters_Statics::NewStructOps, TEXT("AudioEffectParameters"), &Z_Registration_Info_UScriptStruct_AudioEffectParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioEffectParameters), 1078457438U) },
		{ FAudioEQEffect::StaticStruct, Z_Construct_UScriptStruct_FAudioEQEffect_Statics::NewStructOps, TEXT("AudioEQEffect"), &Z_Registration_Info_UScriptStruct_AudioEQEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioEQEffect), 718146483U) },
		{ FSoundClassAdjuster::StaticStruct, Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics::NewStructOps, TEXT("SoundClassAdjuster"), &Z_Registration_Info_UScriptStruct_SoundClassAdjuster, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundClassAdjuster), 3498227502U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundMix, USoundMix::StaticClass, TEXT("USoundMix"), &Z_Registration_Info_UClass_USoundMix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundMix), 34296708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_3051288893(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
