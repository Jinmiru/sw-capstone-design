// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioAnalyzer/Classes/AudioAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzer() {}

// Begin Cross Module References
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer_NoRegister();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerAssetBase();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSettings();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister();
AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
UPackage* Z_Construct_UPackage__Script_AudioAnalyzer();
// End Cross Module References

// Begin Class UAudioAnalyzerSettings
void UAudioAnalyzerSettings::StaticRegisterNativesUAudioAnalyzerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzerSettings);
UClass* Z_Construct_UClass_UAudioAnalyzerSettings_NoRegister()
{
	return UAudioAnalyzerSettings::StaticClass();
}
struct Z_Construct_UClass_UAudioAnalyzerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzerSettings\n *\n * UAudioAnalyzerSettings provides a way to store and reuse existing analyzer settings\n * across multiple analyzers. \n *\n */" },
		{ "IncludePath", "AudioAnalyzer.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "UAudioAnalyzerSettings\n\nUAudioAnalyzerSettings provides a way to store and reuse existing analyzer settings\nacross multiple analyzers." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioAnalyzerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerAssetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerSettings_Statics::ClassParams = {
	&UAudioAnalyzerSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioAnalyzerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioAnalyzerSettings()
{
	if (!Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton, Z_Construct_UClass_UAudioAnalyzerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioAnalyzerSettings.OuterSingleton;
}
template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerSettings>()
{
	return UAudioAnalyzerSettings::StaticClass();
}
UAudioAnalyzerSettings::UAudioAnalyzerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerSettings);
UAudioAnalyzerSettings::~UAudioAnalyzerSettings() {}
// End Class UAudioAnalyzerSettings

// Begin Class UAudioAnalyzer Function StartAnalyzing
struct Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics
{
	struct AudioAnalyzer_eventStartAnalyzing_Parms
	{
		const UObject* WorldContextObject;
		UAudioBus* AudioBusToAnalyze;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Starts analyzing audio from the given audio bus. Optionally override the audio bus desired to analyze. */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "Starts analyzing audio from the given audio bus. Optionally override the audio bus desired to analyze." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBusToAnalyze;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioAnalyzer_eventStartAnalyzing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_AudioBusToAnalyze = { "AudioBusToAnalyze", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioAnalyzer_eventStartAnalyzing_Parms, AudioBusToAnalyze), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::NewProp_AudioBusToAnalyze,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzer, nullptr, "StartAnalyzing", nullptr, nullptr, Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::AudioAnalyzer_eventStartAnalyzing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402040B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::AudioAnalyzer_eventStartAnalyzing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioAnalyzer::execStartAnalyzing)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAudioBus,Z_Param_AudioBusToAnalyze);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAnalyzing(Z_Param_WorldContextObject,Z_Param_AudioBusToAnalyze);
	P_NATIVE_END;
}
// End Class UAudioAnalyzer Function StartAnalyzing

// Begin Class UAudioAnalyzer Function StopAnalyzing
struct Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics
{
	struct AudioAnalyzer_eventStopAnalyzing_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Stops analyzing audio. */" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "Stops analyzing audio." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioAnalyzer_eventStopAnalyzing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzer, nullptr, "StopAnalyzing", nullptr, nullptr, Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::AudioAnalyzer_eventStopAnalyzing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402040B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::AudioAnalyzer_eventStopAnalyzing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioAnalyzer::execStopAnalyzing)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAnalyzing(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAudioAnalyzer Function StopAnalyzing

// Begin Class UAudioAnalyzer
void UAudioAnalyzer::StaticRegisterNativesUAudioAnalyzer()
{
	UClass* Class = UAudioAnalyzer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAnalyzing", &UAudioAnalyzer::execStartAnalyzing },
		{ "StopAnalyzing", &UAudioAnalyzer::execStopAnalyzing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioAnalyzer);
UClass* Z_Construct_UClass_UAudioAnalyzer_NoRegister()
{
	return UAudioAnalyzer::StaticClass();
}
struct Z_Construct_UClass_UAudioAnalyzer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioAnalyzer\n *\n * UAudioAnalyzer performs analysis on an audio bus using specific settings and exposes the results via blueprints.\n *\n * Subclasses of UAudioAnalyzer must implement GetAnalyzerFactoryName() to associate\n * the UAudioAnalyzer asset with an IAudioAnalyzerFactory implementation.\n *\n * To support blueprint access, subclasses can implement UFUNCTIONs to expose the data\n * returned by GetResult().\n */" },
		{ "IncludePath", "AudioAnalyzer.h" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "UAudioAnalyzer\n\nUAudioAnalyzer performs analysis on an audio bus using specific settings and exposes the results via blueprints.\n\nSubclasses of UAudioAnalyzer must implement GetAnalyzerFactoryName() to associate\nthe UAudioAnalyzer asset with an IAudioAnalyzerFactory implementation.\n\nTo support blueprint access, subclasses can implement UFUNCTIONs to expose the data\nreturned by GetResult()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[] = {
		{ "Comment", "/** The UAudioBus which is analyzed in real-time. */" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "The UAudioBus which is analyzed in real-time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioAnalyzerSubsystem_MetaData[] = {
		{ "Comment", "// Audio analysis subsystem used with this audio analyzer\n" },
		{ "ModuleRelativePath", "Classes/AudioAnalyzer.h" },
		{ "ToolTip", "Audio analysis subsystem used with this audio analyzer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioAnalyzerSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioAnalyzer_StartAnalyzing, "StartAnalyzing" }, // 2585290735
		{ &Z_Construct_UFunction_UAudioAnalyzer_StopAnalyzing, "StopAnalyzing" }, // 521854712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioAnalyzer, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioBus_MetaData), NewProp_AudioBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioAnalyzerSubsystem = { "AudioAnalyzerSubsystem", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioAnalyzer, AudioAnalyzerSubsystem), Z_Construct_UClass_UAudioAnalyzerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioAnalyzerSubsystem_MetaData), NewProp_AudioAnalyzerSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioAnalyzer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzer_Statics::NewProp_AudioAnalyzerSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioAnalyzer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioAnalyzer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzer_Statics::ClassParams = {
	&UAudioAnalyzer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioAnalyzer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioAnalyzer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioAnalyzer()
{
	if (!Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton, Z_Construct_UClass_UAudioAnalyzer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioAnalyzer.OuterSingleton;
}
template<> AUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzer>()
{
	return UAudioAnalyzer::StaticClass();
}
UAudioAnalyzer::UAudioAnalyzer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzer);
UAudioAnalyzer::~UAudioAnalyzer() {}
// End Class UAudioAnalyzer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioAnalyzerSettings, UAudioAnalyzerSettings::StaticClass, TEXT("UAudioAnalyzerSettings"), &Z_Registration_Info_UClass_UAudioAnalyzerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzerSettings), 281746030U) },
		{ Z_Construct_UClass_UAudioAnalyzer, UAudioAnalyzer::StaticClass, TEXT("UAudioAnalyzer"), &Z_Registration_Info_UClass_UAudioAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioAnalyzer), 400244453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_998712902(TEXT("/Script/AudioAnalyzer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
