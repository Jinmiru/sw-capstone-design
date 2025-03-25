// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SourceEffects/SourceEffectMidSideSpreader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectMidSideSpreader() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister();
SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoChannelMode();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin Enum EStereoChannelMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStereoChannelMode;
static UEnum* EStereoChannelMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoChannelMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EStereoChannelMode"));
	}
	return Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton;
}
template<> SYNTHESIS_API UEnum* StaticEnum<EStereoChannelMode>()
{
	return EStereoChannelMode_StaticEnum();
}
struct Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Stereo channel mode\n" },
		{ "count.Hidden", "" },
		{ "count.Name", "EStereoChannelMode::count" },
		{ "LeftRight.Name", "EStereoChannelMode::LeftRight" },
		{ "MidSide.Name", "EStereoChannelMode::MidSide" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Stereo channel mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStereoChannelMode::MidSide", (int64)EStereoChannelMode::MidSide },
		{ "EStereoChannelMode::LeftRight", (int64)EStereoChannelMode::LeftRight },
		{ "EStereoChannelMode::count", (int64)EStereoChannelMode::count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	"EStereoChannelMode",
	"EStereoChannelMode",
	Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Synthesis_EStereoChannelMode()
{
	if (!Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton, Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton;
}
// End Enum EStereoChannelMode

// Begin ScriptStruct FSourceEffectMidSideSpreaderSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings;
class UScriptStruct* FSourceEffectMidSideSpreaderSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectMidSideSpreaderSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectMidSideSpreaderSettings>()
{
	return FSourceEffectMidSideSpreaderSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSourceEffectMidSideSpreaderSettings\n// This is the source effect's setting struct. \n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "FSourceEffectMidSideSpreaderSettings\nThis is the source effect's setting struct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount of Mid/Side Spread. 0.0 is no spread, 1.0 is full wide. \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Amount of Mid/Side Spread. 0.0 is no spread, 1.0 is full wide." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate the channel mode of the input signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate the channel mode of the input signal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate the channel mode of the output signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate the channel mode of the output signal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEqualPower_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate whether an equal power relationship between the mid and side channels should be maintained\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate whether an equal power relationship between the mid and side channels should be maintained" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static void NewProp_bEqualPower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEqualPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectMidSideSpreaderSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount = { "SpreadAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, SpreadAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAmount_MetaData), NewProp_SpreadAmount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, InputMode), Z_Construct_UEnum_Synthesis_EStereoChannelMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMode_MetaData), NewProp_InputMode_MetaData) }; // 1827613923
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, OutputMode), Z_Construct_UEnum_Synthesis_EStereoChannelMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 1827613923
void Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_SetBit(void* Obj)
{
	((FSourceEffectMidSideSpreaderSettings*)Obj)->bEqualPower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower = { "bEqualPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSourceEffectMidSideSpreaderSettings), &Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEqualPower_MetaData), NewProp_bEqualPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SourceEffectMidSideSpreaderSettings",
	Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers),
	sizeof(FSourceEffectMidSideSpreaderSettings),
	alignof(FSourceEffectMidSideSpreaderSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.InnerSingleton;
}
// End ScriptStruct FSourceEffectMidSideSpreaderSettings

// Begin Class USourceEffectMidSideSpreaderPreset Function SetSettings
struct Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics
{
	struct SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms
	{
		FSourceEffectMidSideSpreaderSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Change settings of your effect from blueprints. Will broadcast changes to active instances.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Change settings of your effect from blueprints. Will broadcast changes to active instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 3402534292
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectMidSideSpreaderPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USourceEffectMidSideSpreaderPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSourceEffectMidSideSpreaderSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USourceEffectMidSideSpreaderPreset Function SetSettings

// Begin Class USourceEffectMidSideSpreaderPreset
void USourceEffectMidSideSpreaderPreset::StaticRegisterNativesUSourceEffectMidSideSpreaderPreset()
{
	UClass* Class = USourceEffectMidSideSpreaderPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSettings", &USourceEffectMidSideSpreaderPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectMidSideSpreaderPreset);
UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister()
{
	return USourceEffectMidSideSpreaderPreset::StaticClass();
}
struct Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "Comment", "// ========================================================================\n// USourceEffectMidSideSpreaderPreset\n// This code exposes your preset settings and effect class to the editor.\n// And allows for a handle to setting/updating effect settings dynamically.\n// ========================================================================\n" },
		{ "IncludePath", "SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "USourceEffectMidSideSpreaderPreset\nThis code exposes your preset settings and effect class to the editor.\nAnd allows for a handle to setting/updating effect settings dynamically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// The copy of the settings struct. Can't be written to in BP, but can be read.\n// Note that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "The copy of the settings struct. Can't be written to in BP, but can be read.\nNote that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings, "SetSettings" }, // 3683749374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectMidSideSpreaderPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USourceEffectMidSideSpreaderPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3402534292
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::ClassParams = {
	&USourceEffectMidSideSpreaderPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset()
{
	if (!Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton, Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USourceEffectMidSideSpreaderPreset>()
{
	return USourceEffectMidSideSpreaderPreset::StaticClass();
}
USourceEffectMidSideSpreaderPreset::USourceEffectMidSideSpreaderPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectMidSideSpreaderPreset);
USourceEffectMidSideSpreaderPreset::~USourceEffectMidSideSpreaderPreset() {}
// End Class USourceEffectMidSideSpreaderPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStereoChannelMode_StaticEnum, TEXT("EStereoChannelMode"), &Z_Registration_Info_UEnum_EStereoChannelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1827613923U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectMidSideSpreaderSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewStructOps, TEXT("SourceEffectMidSideSpreaderSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectMidSideSpreaderSettings), 3402534292U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectMidSideSpreaderPreset, USourceEffectMidSideSpreaderPreset::StaticClass, TEXT("USourceEffectMidSideSpreaderPreset"), &Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectMidSideSpreaderPreset), 933400484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_4025115526(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
