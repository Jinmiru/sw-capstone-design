// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBus() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus();
ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESourceBusChannels
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceBusChannels;
static UEnum* ESourceBusChannels_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusChannels, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESourceBusChannels"));
	}
	return Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESourceBusChannels>()
{
	return ESourceBusChannels_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESourceBusChannels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The number of channels to mix audio into the source bus\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "Mono.Name", "ESourceBusChannels::Mono" },
		{ "Stereo.Name", "ESourceBusChannels::Stereo" },
		{ "ToolTip", "The number of channels to mix audio into the source bus" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceBusChannels::Mono", (int64)ESourceBusChannels::Mono },
		{ "ESourceBusChannels::Stereo", (int64)ESourceBusChannels::Stereo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESourceBusChannels",
	"ESourceBusChannels",
	Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels()
{
	if (!Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton, Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton;
}
// End Enum ESourceBusChannels

// Begin Class USoundSourceBus
void USoundSourceBus::StaticRegisterNativesUSoundSourceBus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSourceBus);
UClass* Z_Construct_UClass_USoundSourceBus_NoRegister()
{
	return USoundSourceBus::StaticClass();
}
struct Z_Construct_UClass_USoundSourceBus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "Comment", "// A source bus is a type of USoundBase and can be \"played\" like any sound.\n" },
		{ "HideCategories", "Compression SoundWave Streaming Subtitles Analysis Format Loading Info ImportSettings Object Object" },
		{ "IncludePath", "Sound/SoundSourceBus.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "A source bus is a type of USoundBase and can be \"played\" like any sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** How many channels to use for the source bus if the audio bus is not specified, otherwise it will use the audio bus object's channel count. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "How many channels to use for the source bus if the audio bus is not specified, otherwise it will use the audio bus object's channel count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBusDuration_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely." },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** Audio bus to use as audio for this source bus. This source bus will sonify the audio from the audio bus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Audio bus to use as audio for this source bus. This source bus will sonify the audio from the audio bus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivateWhenSilent_MetaData[] = {
		{ "Comment", "/** Stop the source bus when the volume goes to zero. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Stop the source bus when the volume goes to zero." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceBusChannels_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceBusChannels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceBusDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static void NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivateWhenSilent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceBus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels = { "SourceBusChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSourceBus, SourceBusChannels), Z_Construct_UEnum_Engine_ESourceBusChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBusChannels_MetaData), NewProp_SourceBusChannels_MetaData) }; // 387125201
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration = { "SourceBusDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSourceBus, SourceBusDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBusDuration_MetaData), NewProp_SourceBusDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundSourceBus, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBus_MetaData), NewProp_AudioBus_MetaData) };
void Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj)
{
	((USoundSourceBus*)Obj)->bAutoDeactivateWhenSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent = { "bAutoDeactivateWhenSilent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundSourceBus), &Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDeactivateWhenSilent_MetaData), NewProp_bAutoDeactivateWhenSilent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSourceBus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundSourceBus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWave,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceBus_Statics::ClassParams = {
	&USoundSourceBus::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundSourceBus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::PropPointers),
	0,
	0x008810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundSourceBus()
{
	if (!Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton, Z_Construct_UClass_USoundSourceBus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundSourceBus>()
{
	return USoundSourceBus::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceBus);
USoundSourceBus::~USoundSourceBus() {}
// End Class USoundSourceBus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESourceBusChannels_StaticEnum, TEXT("ESourceBusChannels"), &Z_Registration_Info_UEnum_ESourceBusChannels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 387125201U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundSourceBus, USoundSourceBus::StaticClass, TEXT("USoundSourceBus"), &Z_Registration_Info_UClass_USoundSourceBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSourceBus), 1881170420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_520142918(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
