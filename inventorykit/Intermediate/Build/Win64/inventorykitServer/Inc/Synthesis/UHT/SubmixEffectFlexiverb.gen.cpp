// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectFlexiverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectFlexiverb() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSubmixEffectFlexiverbSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings;
class UScriptStruct* FSubmixEffectFlexiverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectFlexiverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectFlexiverbSettings>()
{
	return FSubmixEffectFlexiverbSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreDelay_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "30" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** PreDelay - 0.01 < 10.0 < 40.0 - Amount of delay to the first echo in milliseconds. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "PreDelay - 0.01 < 10.0 < 40.0 - Amount of delay to the first echo in milliseconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.4" },
		{ "Comment", "/** Time in seconds it will take for the impulse response to decay to -60 dB. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "Time in seconds it will take for the impulse response to decay to -60 dB." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomDampening_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "12000.0" },
		{ "ClampMin", "60.0" },
		{ "Comment", "/** Room Dampening - 0.0 < 0.85 < 1.0 - Frequency at which the room dampens.*/" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ToolTip", "Room Dampening - 0.0 < 0.85 < 1.0 - Frequency at which the room dampens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Complexity_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "6" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomDampening;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Complexity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectFlexiverbSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay = { "PreDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, PreDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreDelay_MetaData), NewProp_PreDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, DecayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecayTime_MetaData), NewProp_DecayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening = { "RoomDampening", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, RoomDampening), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDampening_MetaData), NewProp_RoomDampening_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity = { "Complexity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectFlexiverbSettings, Complexity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Complexity_MetaData), NewProp_Complexity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_PreDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_DecayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_RoomDampening,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewProp_Complexity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SubmixEffectFlexiverbSettings",
	Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::PropPointers),
	sizeof(FSubmixEffectFlexiverbSettings),
	alignof(FSubmixEffectFlexiverbSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectFlexiverbSettings

// Begin Class USubmixEffectFlexiverbPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics
{
	struct SubmixEffectFlexiverbPreset_eventSetSettings_Parms
	{
		FSubmixEffectFlexiverbSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectFlexiverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 3543740735
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFlexiverbPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::SubmixEffectFlexiverbPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::SubmixEffectFlexiverbPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectFlexiverbPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectFlexiverbSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectFlexiverbPreset Function SetSettings

// Begin Class USubmixEffectFlexiverbPreset
void USubmixEffectFlexiverbPreset::StaticRegisterNativesUSubmixEffectFlexiverbPreset()
{
	UClass* Class = USubmixEffectFlexiverbPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USubmixEffectFlexiverbPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectFlexiverbPreset);
UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset_NoRegister()
{
	return USubmixEffectFlexiverbPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectFlexiverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFlexiverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectFlexiverbPreset_SetSettings, "SetSettings" }, // 2954987255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectFlexiverbPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectFlexiverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3543740735
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::ClassParams = {
	&USubmixEffectFlexiverbPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectFlexiverbPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectFlexiverbPreset>()
{
	return USubmixEffectFlexiverbPreset::StaticClass();
}
USubmixEffectFlexiverbPreset::USubmixEffectFlexiverbPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectFlexiverbPreset);
USubmixEffectFlexiverbPreset::~USubmixEffectFlexiverbPreset() {}
// End Class USubmixEffectFlexiverbPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectFlexiverbSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectFlexiverbSettings_Statics::NewStructOps, TEXT("SubmixEffectFlexiverbSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectFlexiverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectFlexiverbSettings), 3543740735U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectFlexiverbPreset, USubmixEffectFlexiverbPreset::StaticClass, TEXT("USubmixEffectFlexiverbPreset"), &Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectFlexiverbPreset), 1924467816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_1788696363(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFlexiverb_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
