// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synthesis/Classes/SubmixEffects/SubmixEffectDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectDelay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayPreset();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayStatics();
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectDelayStatics_NoRegister();
SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDelaySettings();
UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

// Begin ScriptStruct FSubmixEffectDelaySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings;
class UScriptStruct* FSubmixEffectDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectDelaySettings>()
{
	return FSubmixEffectDelaySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSubmixEffectDelaySettings\n// UStruct used to define user-exposed params for use with your effect.\n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "FSubmixEffectDelaySettings\nUStruct used to define user-exposed params for use with your effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDelayLength_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayLength_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Number of milliseconds of delay.  Caps at max delay at runtime.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Number of milliseconds of delay.  Caps at max delay at runtime." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDelaySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_MaximumDelayLength = { "MaximumDelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDelaySettings, MaximumDelayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDelayLength_MetaData), NewProp_MaximumDelayLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDelaySettings, InterpolationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationTime_MetaData), NewProp_InterpolationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_DelayLength = { "DelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectDelaySettings, DelayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayLength_MetaData), NewProp_DelayLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_MaximumDelayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_InterpolationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewProp_DelayLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	nullptr,
	&NewStructOps,
	"SubmixEffectDelaySettings",
	Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::PropPointers),
	sizeof(FSubmixEffectDelaySettings),
	alignof(FSubmixEffectDelaySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDelaySettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings.InnerSingleton;
}
// End ScriptStruct FSubmixEffectDelaySettings

// Begin Class USubmixEffectDelayStatics Function SetDelayLength
struct Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics
{
	struct SubmixEffectDelayStatics_eventSetDelayLength_Parms
	{
		FSubmixEffectDelaySettings DelaySettings;
		float DelayLength;
		FSubmixEffectDelaySettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelaySettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::NewProp_DelaySettings = { "DelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetDelayLength_Parms, DelaySettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(0, nullptr) }; // 2928008417
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::NewProp_DelayLength = { "DelayLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetDelayLength_Parms, DelayLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetDelayLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(0, nullptr) }; // 2928008417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::NewProp_DelaySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::NewProp_DelayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayStatics, nullptr, "SetDelayLength", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::SubmixEffectDelayStatics_eventSetDelayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::SubmixEffectDelayStatics_eventSetDelayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayStatics::execSetDelayLength)
{
	P_GET_STRUCT_REF(FSubmixEffectDelaySettings,Z_Param_Out_DelaySettings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubmixEffectDelaySettings*)Z_Param__Result=USubmixEffectDelayStatics::SetDelayLength(Z_Param_Out_DelaySettings,Z_Param_DelayLength);
	P_NATIVE_END;
}
// End Class USubmixEffectDelayStatics Function SetDelayLength

// Begin Class USubmixEffectDelayStatics Function SetInterpolationTime
struct Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics
{
	struct SubmixEffectDelayStatics_eventSetInterpolationTime_Parms
	{
		FSubmixEffectDelaySettings DelaySettings;
		float InterpolationTime;
		FSubmixEffectDelaySettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelaySettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::NewProp_DelaySettings = { "DelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetInterpolationTime_Parms, DelaySettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(0, nullptr) }; // 2928008417
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetInterpolationTime_Parms, InterpolationTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetInterpolationTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(0, nullptr) }; // 2928008417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::NewProp_DelaySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::NewProp_InterpolationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayStatics, nullptr, "SetInterpolationTime", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::SubmixEffectDelayStatics_eventSetInterpolationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::SubmixEffectDelayStatics_eventSetInterpolationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayStatics::execSetInterpolationTime)
{
	P_GET_STRUCT_REF(FSubmixEffectDelaySettings,Z_Param_Out_DelaySettings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolationTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubmixEffectDelaySettings*)Z_Param__Result=USubmixEffectDelayStatics::SetInterpolationTime(Z_Param_Out_DelaySettings,Z_Param_InterpolationTime);
	P_NATIVE_END;
}
// End Class USubmixEffectDelayStatics Function SetInterpolationTime

// Begin Class USubmixEffectDelayStatics Function SetMaximumDelayLength
struct Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics
{
	struct SubmixEffectDelayStatics_eventSetMaximumDelayLength_Parms
	{
		FSubmixEffectDelaySettings DelaySettings;
		float MaximumDelayLength;
		FSubmixEffectDelaySettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelaySettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::NewProp_DelaySettings = { "DelaySettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetMaximumDelayLength_Parms, DelaySettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(0, nullptr) }; // 2928008417
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::NewProp_MaximumDelayLength = { "MaximumDelayLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetMaximumDelayLength_Parms, MaximumDelayLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayStatics_eventSetMaximumDelayLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(0, nullptr) }; // 2928008417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::NewProp_DelaySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::NewProp_MaximumDelayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayStatics, nullptr, "SetMaximumDelayLength", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::SubmixEffectDelayStatics_eventSetMaximumDelayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::SubmixEffectDelayStatics_eventSetMaximumDelayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayStatics::execSetMaximumDelayLength)
{
	P_GET_STRUCT_REF(FSubmixEffectDelaySettings,Z_Param_Out_DelaySettings);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumDelayLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubmixEffectDelaySettings*)Z_Param__Result=USubmixEffectDelayStatics::SetMaximumDelayLength(Z_Param_Out_DelaySettings,Z_Param_MaximumDelayLength);
	P_NATIVE_END;
}
// End Class USubmixEffectDelayStatics Function SetMaximumDelayLength

// Begin Class USubmixEffectDelayStatics
void USubmixEffectDelayStatics::StaticRegisterNativesUSubmixEffectDelayStatics()
{
	UClass* Class = USubmixEffectDelayStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDelayLength", &USubmixEffectDelayStatics::execSetDelayLength },
		{ "SetInterpolationTime", &USubmixEffectDelayStatics::execSetInterpolationTime },
		{ "SetMaximumDelayLength", &USubmixEffectDelayStatics::execSetMaximumDelayLength },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectDelayStatics);
UClass* Z_Construct_UClass_USubmixEffectDelayStatics_NoRegister()
{
	return USubmixEffectDelayStatics::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectDelayStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SubmixEffects/SubmixEffectDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectDelayStatics_SetDelayLength, "SetDelayLength" }, // 2680543973
		{ &Z_Construct_UFunction_USubmixEffectDelayStatics_SetInterpolationTime, "SetInterpolationTime" }, // 1799385010
		{ &Z_Construct_UFunction_USubmixEffectDelayStatics_SetMaximumDelayLength, "SetMaximumDelayLength" }, // 2049421431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectDelayStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubmixEffectDelayStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectDelayStatics_Statics::ClassParams = {
	&USubmixEffectDelayStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectDelayStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectDelayStatics()
{
	if (!Z_Registration_Info_UClass_USubmixEffectDelayStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectDelayStatics.OuterSingleton, Z_Construct_UClass_USubmixEffectDelayStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectDelayStatics.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectDelayStatics>()
{
	return USubmixEffectDelayStatics::StaticClass();
}
USubmixEffectDelayStatics::USubmixEffectDelayStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDelayStatics);
USubmixEffectDelayStatics::~USubmixEffectDelayStatics() {}
// End Class USubmixEffectDelayStatics

// Begin Class USubmixEffectDelayPreset Function GetMaxDelayInMilliseconds
struct Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics
{
	struct SubmixEffectDelayPreset_eventGetMaxDelayInMilliseconds_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Get the maximum delay possible.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Get the maximum delay possible." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventGetMaxDelayInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "GetMaxDelayInMilliseconds", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::SubmixEffectDelayPreset_eventGetMaxDelayInMilliseconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::SubmixEffectDelayPreset_eventGetMaxDelayInMilliseconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayPreset::execGetMaxDelayInMilliseconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxDelayInMilliseconds();
	P_NATIVE_END;
}
// End Class USubmixEffectDelayPreset Function GetMaxDelayInMilliseconds

// Begin Class USubmixEffectDelayPreset Function SetDefaultSettings
struct Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics
{
	struct SubmixEffectDelayPreset_eventSetDefaultSettings_Parms
	{
		FSubmixEffectDelaySettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\n// as well as any dynamically set settings.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Sets object's default settings. This will update both the default UObject settings (and mark it as dirty),\nas well as any dynamically set settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventSetDefaultSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 2928008417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "SetDefaultSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::SubmixEffectDelayPreset_eventSetDefaultSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::SubmixEffectDelayPreset_eventSetDefaultSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayPreset::execSetDefaultSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectDelaySettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectDelayPreset Function SetDefaultSettings

// Begin Class USubmixEffectDelayPreset Function SetDelay
struct Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics
{
	struct SubmixEffectDelayPreset_eventSetDelay_Parms
	{
		float Length;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set how long the delay actually is, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Set how long the delay actually is, in milliseconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventSetDelay_Parms, Length), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::NewProp_Length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "SetDelay", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::SubmixEffectDelayPreset_eventSetDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::SubmixEffectDelayPreset_eventSetDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayPreset::execSetDelay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelay(Z_Param_Length);
	P_NATIVE_END;
}
// End Class USubmixEffectDelayPreset Function SetDelay

// Begin Class USubmixEffectDelayPreset Function SetInterpolationTime
struct Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics
{
	struct SubmixEffectDelayPreset_eventSetInterpolationTime_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set the time it takes to interpolate between parameters, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Set the time it takes to interpolate between parameters, in milliseconds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventSetInterpolationTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "SetInterpolationTime", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::SubmixEffectDelayPreset_eventSetInterpolationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::SubmixEffectDelayPreset_eventSetInterpolationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayPreset::execSetInterpolationTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInterpolationTime(Z_Param_Time);
	P_NATIVE_END;
}
// End Class USubmixEffectDelayPreset Function SetInterpolationTime

// Begin Class USubmixEffectDelayPreset Function SetSettings
struct Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics
{
	struct SubmixEffectDelayPreset_eventSetSettings_Parms
	{
		FSubmixEffectDelaySettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Sets runtime delay settings. This will replace any dynamically added or modified settings without modifying\n// the original UObject.\n" },
		{ "DisplayName", "Set Dynamic Settings" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "Sets runtime delay settings. This will replace any dynamically added or modified settings without modifying\nthe original UObject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubmixEffectDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 2928008417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDelayPreset, nullptr, "SetSettings", nullptr, nullptr, Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::SubmixEffectDelayPreset_eventSetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::SubmixEffectDelayPreset_eventSetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubmixEffectDelayPreset::execSetSettings)
{
	P_GET_STRUCT_REF(FSubmixEffectDelaySettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class USubmixEffectDelayPreset Function SetSettings

// Begin Class USubmixEffectDelayPreset
void USubmixEffectDelayPreset::StaticRegisterNativesUSubmixEffectDelayPreset()
{
	UClass* Class = USubmixEffectDelayPreset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaxDelayInMilliseconds", &USubmixEffectDelayPreset::execGetMaxDelayInMilliseconds },
		{ "SetDefaultSettings", &USubmixEffectDelayPreset::execSetDefaultSettings },
		{ "SetDelay", &USubmixEffectDelayPreset::execSetDelay },
		{ "SetInterpolationTime", &USubmixEffectDelayPreset::execSetInterpolationTime },
		{ "SetSettings", &USubmixEffectDelayPreset::execSetSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectDelayPreset);
UClass* Z_Construct_UClass_USubmixEffectDelayPreset_NoRegister()
{
	return USubmixEffectDelayPreset::StaticClass();
}
struct Z_Construct_UClass_USubmixEffectDelayPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USubmixEffectDelayPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ToolTip", "USubmixEffectDelayPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultSettings" },
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_GetMaxDelayInMilliseconds, "GetMaxDelayInMilliseconds" }, // 3142856159
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_SetDefaultSettings, "SetDefaultSettings" }, // 890000142
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_SetDelay, "SetDelay" }, // 4141704368
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_SetInterpolationTime, "SetInterpolationTime" }, // 788893734
		{ &Z_Construct_UFunction_USubmixEffectDelayPreset_SetSettings, "SetSettings" }, // 2149478994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectDelayPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectDelayPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2928008417
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_DynamicSettings = { "DynamicSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubmixEffectDelayPreset, DynamicSettings), Z_Construct_UScriptStruct_FSubmixEffectDelaySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSettings_MetaData), NewProp_DynamicSettings_MetaData) }; // 2928008417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectDelayPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDelayPreset_Statics::NewProp_DynamicSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubmixEffectDelayPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectDelayPreset_Statics::ClassParams = {
	&USubmixEffectDelayPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USubmixEffectDelayPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDelayPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USubmixEffectDelayPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubmixEffectDelayPreset()
{
	if (!Z_Registration_Info_UClass_USubmixEffectDelayPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectDelayPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectDelayPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubmixEffectDelayPreset.OuterSingleton;
}
template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectDelayPreset>()
{
	return USubmixEffectDelayPreset::StaticClass();
}
USubmixEffectDelayPreset::USubmixEffectDelayPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDelayPreset);
USubmixEffectDelayPreset::~USubmixEffectDelayPreset() {}
// End Class USubmixEffectDelayPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectDelaySettings_Statics::NewStructOps, TEXT("SubmixEffectDelaySettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectDelaySettings), 2928008417U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectDelayStatics, USubmixEffectDelayStatics::StaticClass, TEXT("USubmixEffectDelayStatics"), &Z_Registration_Info_UClass_USubmixEffectDelayStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectDelayStatics), 3326720692U) },
		{ Z_Construct_UClass_USubmixEffectDelayPreset, USubmixEffectDelayPreset::StaticClass, TEXT("USubmixEffectDelayPreset"), &Z_Registration_Info_UClass_USubmixEffectDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectDelayPreset), 4168854453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_565403160(TEXT("/Script/Synthesis"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectDelay_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
