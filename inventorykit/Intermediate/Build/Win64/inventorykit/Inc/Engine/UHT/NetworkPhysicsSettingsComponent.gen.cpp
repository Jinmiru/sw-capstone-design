// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/NetworkPhysicsSettingsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPhysicsSettingsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent();
ENGINE_API UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsReplicationMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNetworkPhysicsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings;
class UScriptStruct* FNetworkPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettings>()
{
	return FNetworkPhysicsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSimProxyRepMode_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimProxyRepMode_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Override the EPhysicsReplicationMode if Actor is ENetRole::ROLE_SimulatedProxy and has EPhysicsReplicationMode::Resimulation set\n" },
		{ "EditCondition", "bOverrideSimProxyRepMode" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Override the EPhysicsReplicationMode if Actor is ENetRole::ROLE_SimulatedProxy and has EPhysicsReplicationMode::Resimulation set" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideSimProxyRepMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSimProxyRepMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SimProxyRepMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SimProxyRepMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode_SetBit(void* Obj)
{
	((FNetworkPhysicsSettings*)Obj)->bOverrideSimProxyRepMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode = { "bOverrideSimProxyRepMode", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettings), &Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSimProxyRepMode_MetaData), NewProp_bOverrideSimProxyRepMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode = { "SimProxyRepMode", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettings, SimProxyRepMode), Z_Construct_UEnum_Engine_EPhysicsReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimProxyRepMode_MetaData), NewProp_SimProxyRepMode_MetaData) }; // 1461121912
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_bOverrideSimProxyRepMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewProp_SimProxyRepMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettings",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettings),
	alignof(FNetworkPhysicsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettings

// Begin ScriptStruct FNetworkPhysicsSettingsPredictiveInterpolation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation;
class UScriptStruct* FNetworkPhysicsSettingsPredictiveInterpolation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettingsPredictiveInterpolation"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettingsPredictiveInterpolation>()
{
	return FNetworkPhysicsSettingsPredictiveInterpolation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.PosCorrectionTimeBase\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.PosCorrectionTimeBase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverridePosCorrectionTimeBase" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.PosCorrectionTimeMin\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.PosCorrectionTimeMin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverridePosCorrectionTimeMin" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.PosCorrectionTimeMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.PosCorrectionTimeMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverridePosCorrectionTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.RotCorrectionTimeBase\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.RotCorrectionTimeBase" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotCorrectionTimeBase_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRotCorrectionTimeBase" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.RotCorrectionTimeMin\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.RotCorrectionTimeMin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotCorrectionTimeMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRotCorrectionTimeMin" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.RotCorrectionTimeMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.RotCorrectionTimeMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotCorrectionTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRotCorrectionTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.InterpolationTimeMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.InterpolationTimeMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverridePosInterpolationTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.RotInterpolationTimeMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.RotInterpolationTimeMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotInterpolationTimeMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRotInterpolationTimeMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSoftSnapPosStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.SoftSnapPosStrength\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.SoftSnapPosStrength" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSnapPosStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideSoftSnapPosStrength" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSoftSnapRotStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.SoftSnapRotStrength\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.SoftSnapRotStrength" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftSnapRotStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideSoftSnapRotStrength" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSoftSnapToSource_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.SoftSnapToSource\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.SoftSnapToSource" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoftSnapToSource_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideSoftSnapToSource" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.SkipVelocityRepOnPosEarlyOut\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.SkipVelocityRepOnPosEarlyOut" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipVelocityRepOnPosEarlyOut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideSkipVelocityRepOnPosEarlyOut" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePostResimWaitForUpdate_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.PostResimWaitForUpdate\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.PostResimWaitForUpdate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPostResimWaitForUpdate_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverridePostResimWaitForUpdate" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDisableSoftSnap_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.PredictiveInterpolation.DisableSoftSnap\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.PredictiveInterpolation.DisableSoftSnap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSoftSnap_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideDisableSoftSnap" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverridePosCorrectionTimeBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosCorrectionTimeBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosCorrectionTimeBase;
	static void NewProp_bOverridePosCorrectionTimeMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosCorrectionTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosCorrectionTimeMin;
	static void NewProp_bOverridePosCorrectionTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosCorrectionTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosCorrectionTimeMultiplier;
	static void NewProp_bOverrideRotCorrectionTimeBase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotCorrectionTimeBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotCorrectionTimeBase;
	static void NewProp_bOverrideRotCorrectionTimeMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotCorrectionTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotCorrectionTimeMin;
	static void NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotCorrectionTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotCorrectionTimeMultiplier;
	static void NewProp_bOverridePosInterpolationTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosInterpolationTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosInterpolationTimeMultiplier;
	static void NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotInterpolationTimeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotInterpolationTimeMultiplier;
	static void NewProp_bOverrideSoftSnapPosStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSoftSnapPosStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftSnapPosStrength;
	static void NewProp_bOverrideSoftSnapRotStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSoftSnapRotStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftSnapRotStrength;
	static void NewProp_bOverrideSoftSnapToSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSoftSnapToSource;
	static void NewProp_bSoftSnapToSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftSnapToSource;
	static void NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSkipVelocityRepOnPosEarlyOut;
	static void NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipVelocityRepOnPosEarlyOut;
	static void NewProp_bOverridePostResimWaitForUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePostResimWaitForUpdate;
	static void NewProp_bPostResimWaitForUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostResimWaitForUpdate;
	static void NewProp_bOverrideDisableSoftSnap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDisableSoftSnap;
	static void NewProp_bDisableSoftSnap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSoftSnap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettingsPredictiveInterpolation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosCorrectionTimeBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase = { "bOverridePosCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosCorrectionTimeBase_MetaData), NewProp_bOverridePosCorrectionTimeBase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeBase = { "PosCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosCorrectionTimeBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosCorrectionTimeBase_MetaData), NewProp_PosCorrectionTimeBase_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosCorrectionTimeMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin = { "bOverridePosCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosCorrectionTimeMin_MetaData), NewProp_bOverridePosCorrectionTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMin = { "PosCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosCorrectionTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosCorrectionTimeMin_MetaData), NewProp_PosCorrectionTimeMin_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosCorrectionTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier = { "bOverridePosCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosCorrectionTimeMultiplier_MetaData), NewProp_bOverridePosCorrectionTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMultiplier = { "PosCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosCorrectionTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosCorrectionTimeMultiplier_MetaData), NewProp_PosCorrectionTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotCorrectionTimeBase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase = { "bOverrideRotCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotCorrectionTimeBase_MetaData), NewProp_bOverrideRotCorrectionTimeBase_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeBase = { "RotCorrectionTimeBase", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotCorrectionTimeBase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotCorrectionTimeBase_MetaData), NewProp_RotCorrectionTimeBase_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotCorrectionTimeMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin = { "bOverrideRotCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotCorrectionTimeMin_MetaData), NewProp_bOverrideRotCorrectionTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMin = { "RotCorrectionTimeMin", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotCorrectionTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotCorrectionTimeMin_MetaData), NewProp_RotCorrectionTimeMin_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotCorrectionTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier = { "bOverrideRotCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotCorrectionTimeMultiplier_MetaData), NewProp_bOverrideRotCorrectionTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMultiplier = { "RotCorrectionTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotCorrectionTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotCorrectionTimeMultiplier_MetaData), NewProp_RotCorrectionTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePosInterpolationTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier = { "bOverridePosInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosInterpolationTimeMultiplier_MetaData), NewProp_bOverridePosInterpolationTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosInterpolationTimeMultiplier = { "PosInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, PosInterpolationTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosInterpolationTimeMultiplier_MetaData), NewProp_PosInterpolationTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideRotInterpolationTimeMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier = { "bOverrideRotInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotInterpolationTimeMultiplier_MetaData), NewProp_bOverrideRotInterpolationTimeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotInterpolationTimeMultiplier = { "RotInterpolationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, RotInterpolationTimeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotInterpolationTimeMultiplier_MetaData), NewProp_RotInterpolationTimeMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSoftSnapPosStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength = { "bOverrideSoftSnapPosStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSoftSnapPosStrength_MetaData), NewProp_bOverrideSoftSnapPosStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapPosStrength = { "SoftSnapPosStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, SoftSnapPosStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSnapPosStrength_MetaData), NewProp_SoftSnapPosStrength_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSoftSnapRotStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength = { "bOverrideSoftSnapRotStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSoftSnapRotStrength_MetaData), NewProp_bOverrideSoftSnapRotStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapRotStrength = { "SoftSnapRotStrength", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsPredictiveInterpolation, SoftSnapRotStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftSnapRotStrength_MetaData), NewProp_SoftSnapRotStrength_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSoftSnapToSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource = { "bOverrideSoftSnapToSource", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSoftSnapToSource_MetaData), NewProp_bOverrideSoftSnapToSource_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bSoftSnapToSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource = { "bSoftSnapToSource", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoftSnapToSource_MetaData), NewProp_bSoftSnapToSource_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideSkipVelocityRepOnPosEarlyOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut = { "bOverrideSkipVelocityRepOnPosEarlyOut", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_MetaData), NewProp_bOverrideSkipVelocityRepOnPosEarlyOut_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bSkipVelocityRepOnPosEarlyOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut = { "bSkipVelocityRepOnPosEarlyOut", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipVelocityRepOnPosEarlyOut_MetaData), NewProp_bSkipVelocityRepOnPosEarlyOut_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverridePostResimWaitForUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate = { "bOverridePostResimWaitForUpdate", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePostResimWaitForUpdate_MetaData), NewProp_bOverridePostResimWaitForUpdate_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bPostResimWaitForUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate = { "bPostResimWaitForUpdate", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPostResimWaitForUpdate_MetaData), NewProp_bPostResimWaitForUpdate_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bOverrideDisableSoftSnap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap = { "bOverrideDisableSoftSnap", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDisableSoftSnap_MetaData), NewProp_bOverrideDisableSoftSnap_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsPredictiveInterpolation*)Obj)->bDisableSoftSnap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap = { "bDisableSoftSnap", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSoftSnap_MetaData), NewProp_bDisableSoftSnap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotCorrectionTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePosInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_PosInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideRotInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_RotInterpolationTimeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapPosStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapPosStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapRotStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_SoftSnapRotStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSoftSnapToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSoftSnapToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideSkipVelocityRepOnPosEarlyOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bSkipVelocityRepOnPosEarlyOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverridePostResimWaitForUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bPostResimWaitForUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bOverrideDisableSoftSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewProp_bDisableSoftSnap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettingsPredictiveInterpolation",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettingsPredictiveInterpolation),
	alignof(FNetworkPhysicsSettingsPredictiveInterpolation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettingsPredictiveInterpolation

// Begin ScriptStruct FNetworkPhysicsSettingsResimulation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation;
class UScriptStruct* FNetworkPhysicsSettingsResimulation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetworkPhysicsSettingsResimulation"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetworkPhysicsSettingsResimulation>()
{
	return FNetworkPhysicsSettingsResimulation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRedundantInputs_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Override how many inputs to synchronize each sync to cover packet loss.\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Override how many inputs to synchronize each sync to cover packet loss." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedundantInputs_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRedundantInputs" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRedundantStates_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Override how many states to synchronize each sync to cover packet loss.\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Override how many states to synchronize each sync to cover packet loss." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedundantStates_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRedundantStates" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRuntimeCorrectionEnabled_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.RuntimeCorrectionEnabled\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.RuntimeCorrectionEnabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRuntimeCorrectionEnabled_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRuntimeCorrectionEnabled" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRuntimeVelocityCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.RuntimeVelocityCorrection\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.RuntimeVelocityCorrection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRuntimeVelocityCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRuntimeVelocityCorrection" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePosStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.PosStabilityMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.PosStabilityMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverridePosStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRotStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.RotStabilityMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.RotStabilityMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideRotStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.VelStabilityMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.VelStabilityMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideVelStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngVelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.AngVelStabilityMultiplier\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.AngVelStabilityMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngVelStabilityMultiplier_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideAngVelStabilityMultiplier" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResimulationErrorThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Threshold\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "Project Settings -> Physics -> Replication -> Physics Prediction -> Resimulation Error Threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationErrorThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideResimulationErrorThreshold" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompareStateToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.CompareStateToTriggerRewind\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.CompareStateToTriggerRewind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompareStateToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideCompareStateToTriggerRewind" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompareInputToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "// np2.Resim.CompareInputToTriggerRewind\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "np2.Resim.CompareInputToTriggerRewind" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompareInputToTriggerRewind_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditCondition", "bOverrideCompareInputToTriggerRewind" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideRedundantInputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRedundantInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RedundantInputs;
	static void NewProp_bOverrideRedundantStates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRedundantStates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RedundantStates;
	static void NewProp_bOverrideRuntimeCorrectionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRuntimeCorrectionEnabled;
	static void NewProp_bRuntimeCorrectionEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRuntimeCorrectionEnabled;
	static void NewProp_bOverrideRuntimeVelocityCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRuntimeVelocityCorrection;
	static void NewProp_bRuntimeVelocityCorrection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRuntimeVelocityCorrection;
	static void NewProp_bOverridePosStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePosStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosStabilityMultiplier;
	static void NewProp_bOverrideRotStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRotStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotStabilityMultiplier;
	static void NewProp_bOverrideVelStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVelStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelStabilityMultiplier;
	static void NewProp_bOverrideAngVelStabilityMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngVelStabilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngVelStabilityMultiplier;
	static void NewProp_bOverrideResimulationErrorThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResimulationErrorThreshold;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ResimulationErrorThreshold;
	static void NewProp_bOverrideCompareStateToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompareStateToTriggerRewind;
	static void NewProp_bCompareStateToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompareStateToTriggerRewind;
	static void NewProp_bOverrideCompareInputToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompareInputToTriggerRewind;
	static void NewProp_bCompareInputToTriggerRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompareInputToTriggerRewind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPhysicsSettingsResimulation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantInputs_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRedundantInputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantInputs = { "bOverrideRedundantInputs", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantInputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRedundantInputs_MetaData), NewProp_bOverrideRedundantInputs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RedundantInputs = { "RedundantInputs", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, RedundantInputs), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedundantInputs_MetaData), NewProp_RedundantInputs_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantStates_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRedundantStates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantStates = { "bOverrideRedundantStates", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantStates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRedundantStates_MetaData), NewProp_bOverrideRedundantStates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RedundantStates = { "RedundantStates", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, RedundantStates), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedundantStates_MetaData), NewProp_RedundantStates_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRuntimeCorrectionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled = { "bOverrideRuntimeCorrectionEnabled", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRuntimeCorrectionEnabled_MetaData), NewProp_bOverrideRuntimeCorrectionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bRuntimeCorrectionEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled = { "bRuntimeCorrectionEnabled", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRuntimeCorrectionEnabled_MetaData), NewProp_bRuntimeCorrectionEnabled_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRuntimeVelocityCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection = { "bOverrideRuntimeVelocityCorrection", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRuntimeVelocityCorrection_MetaData), NewProp_bOverrideRuntimeVelocityCorrection_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bRuntimeVelocityCorrection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection = { "bRuntimeVelocityCorrection", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRuntimeVelocityCorrection_MetaData), NewProp_bRuntimeVelocityCorrection_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverridePosStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier = { "bOverridePosStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePosStabilityMultiplier_MetaData), NewProp_bOverridePosStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_PosStabilityMultiplier = { "PosStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, PosStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosStabilityMultiplier_MetaData), NewProp_PosStabilityMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideRotStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier = { "bOverrideRotStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideRotStabilityMultiplier_MetaData), NewProp_bOverrideRotStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RotStabilityMultiplier = { "RotStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, RotStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotStabilityMultiplier_MetaData), NewProp_RotStabilityMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideVelStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier = { "bOverrideVelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideVelStabilityMultiplier_MetaData), NewProp_bOverrideVelStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_VelStabilityMultiplier = { "VelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, VelStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelStabilityMultiplier_MetaData), NewProp_VelStabilityMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideAngVelStabilityMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier = { "bOverrideAngVelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAngVelStabilityMultiplier_MetaData), NewProp_bOverrideAngVelStabilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_AngVelStabilityMultiplier = { "AngVelStabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, AngVelStabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngVelStabilityMultiplier_MetaData), NewProp_AngVelStabilityMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorThreshold_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideResimulationErrorThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorThreshold = { "bOverrideResimulationErrorThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideResimulationErrorThreshold_MetaData), NewProp_bOverrideResimulationErrorThreshold_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorThreshold = { "ResimulationErrorThreshold", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetworkPhysicsSettingsResimulation, ResimulationErrorThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationErrorThreshold_MetaData), NewProp_ResimulationErrorThreshold_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareStateToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideCompareStateToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareStateToTriggerRewind = { "bOverrideCompareStateToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareStateToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCompareStateToTriggerRewind_MetaData), NewProp_bOverrideCompareStateToTriggerRewind_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareStateToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bCompareStateToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareStateToTriggerRewind = { "bCompareStateToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareStateToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompareStateToTriggerRewind_MetaData), NewProp_bCompareStateToTriggerRewind_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareInputToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bOverrideCompareInputToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareInputToTriggerRewind = { "bOverrideCompareInputToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareInputToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCompareInputToTriggerRewind_MetaData), NewProp_bOverrideCompareInputToTriggerRewind_MetaData) };
void Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareInputToTriggerRewind_SetBit(void* Obj)
{
	((FNetworkPhysicsSettingsResimulation*)Obj)->bCompareInputToTriggerRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareInputToTriggerRewind = { "bCompareInputToTriggerRewind", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNetworkPhysicsSettingsResimulation), &Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareInputToTriggerRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompareInputToTriggerRewind_MetaData), NewProp_bCompareInputToTriggerRewind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RedundantInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRedundantStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RedundantStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeCorrectionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeCorrectionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRuntimeVelocityCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bRuntimeVelocityCorrection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverridePosStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_PosStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideRotStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_RotStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideVelStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_VelStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideAngVelStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_AngVelStabilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideResimulationErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_ResimulationErrorThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareStateToTriggerRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareStateToTriggerRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bOverrideCompareInputToTriggerRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewProp_bCompareInputToTriggerRewind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NetworkPhysicsSettingsResimulation",
	Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::PropPointers),
	sizeof(FNetworkPhysicsSettingsResimulation),
	alignof(FNetworkPhysicsSettingsResimulation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation.InnerSingleton;
}
// End ScriptStruct FNetworkPhysicsSettingsResimulation

// Begin Class UNetworkPhysicsSettingsComponent
void UNetworkPhysicsSettingsComponent::StaticRegisterNativesUNetworkPhysicsSettingsComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPhysicsSettingsComponent);
UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent_NoRegister()
{
	return UNetworkPhysicsSettingsComponent::StaticClass();
}
struct Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nUSTRUCT()\nstruct FNetworkPhysicsSettingsRewindData\n{\n\x09GENERATED_BODY()\n};\n\nUSTRUCT()\nstruct FNetworkPhysicsSettingsRenderInterpolation\n{\n\x09GENERATED_BODY()\n};\n*/" },
		{ "IncludePath", "Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
		{ "ToolTip", "USTRUCT()\nstruct FNetworkPhysicsSettingsRewindData\n{\n       GENERATED_BODY()\n};\n\nUSTRUCT()\nstruct FNetworkPhysicsSettingsRenderInterpolation\n{\n       GENERATED_BODY()\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneralSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictiveInterpolationSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResimulationSettings_MetaData[] = {
		{ "Category", "Networked Physics Settings" },
		{ "ModuleRelativePath", "Public/Physics/NetworkPhysicsSettingsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneralSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictiveInterpolationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResimulationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPhysicsSettingsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_GeneralSettings = { "GeneralSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, GeneralSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneralSettings_MetaData), NewProp_GeneralSettings_MetaData) }; // 3215005311
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_PredictiveInterpolationSettings = { "PredictiveInterpolationSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, PredictiveInterpolationSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictiveInterpolationSettings_MetaData), NewProp_PredictiveInterpolationSettings_MetaData) }; // 1894437613
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_ResimulationSettings = { "ResimulationSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkPhysicsSettingsComponent, ResimulationSettings), Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResimulationSettings_MetaData), NewProp_ResimulationSettings_MetaData) }; // 2497981579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_GeneralSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_PredictiveInterpolationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::NewProp_ResimulationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::ClassParams = {
	&UNetworkPhysicsSettingsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkPhysicsSettingsComponent()
{
	if (!Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton, Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UNetworkPhysicsSettingsComponent>()
{
	return UNetworkPhysicsSettingsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPhysicsSettingsComponent);
UNetworkPhysicsSettingsComponent::~UNetworkPhysicsSettingsComponent() {}
// End Class UNetworkPhysicsSettingsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetworkPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics::NewStructOps, TEXT("NetworkPhysicsSettings"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettings), 3215005311U) },
		{ FNetworkPhysicsSettingsPredictiveInterpolation::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics::NewStructOps, TEXT("NetworkPhysicsSettingsPredictiveInterpolation"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsPredictiveInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettingsPredictiveInterpolation), 1894437613U) },
		{ FNetworkPhysicsSettingsResimulation::StaticStruct, Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics::NewStructOps, TEXT("NetworkPhysicsSettingsResimulation"), &Z_Registration_Info_UScriptStruct_NetworkPhysicsSettingsResimulation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPhysicsSettingsResimulation), 2497981579U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPhysicsSettingsComponent, UNetworkPhysicsSettingsComponent::StaticClass, TEXT("UNetworkPhysicsSettingsComponent"), &Z_Registration_Info_UClass_UNetworkPhysicsSettingsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPhysicsSettingsComponent), 2316211648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_3346323311(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
