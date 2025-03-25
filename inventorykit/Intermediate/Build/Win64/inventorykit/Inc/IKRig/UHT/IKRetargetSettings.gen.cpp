// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/IKRetargetSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_EBasicAxis();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetRotationMode();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetTranslationMode();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_EWarpingDirectionSource();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetGlobalSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainFKSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainIKSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetRootSettings();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin Enum ERetargetTranslationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERetargetTranslationMode;
static UEnum* ERetargetTranslationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetTranslationMode, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("ERetargetTranslationMode"));
	}
	return Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<ERetargetTranslationMode>()
{
	return ERetargetTranslationMode_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.DisplayName", "Absolute" },
		{ "Absolute.Name", "ERetargetTranslationMode::Absolute" },
		{ "BlueprintType", "true" },
		{ "GloballyScaled.DisplayName", "Globally Scaled" },
		{ "GloballyScaled.Name", "ERetargetTranslationMode::GloballyScaled" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ERetargetTranslationMode::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERetargetTranslationMode::None", (int64)ERetargetTranslationMode::None },
		{ "ERetargetTranslationMode::GloballyScaled", (int64)ERetargetTranslationMode::GloballyScaled },
		{ "ERetargetTranslationMode::Absolute", (int64)ERetargetTranslationMode::Absolute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"ERetargetTranslationMode",
	"ERetargetTranslationMode",
	Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_ERetargetTranslationMode()
{
	if (!Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton, Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton;
}
// End Enum ERetargetTranslationMode

// Begin Enum ERetargetRotationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERetargetRotationMode;
static UEnum* ERetargetRotationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetRotationMode, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("ERetargetRotationMode"));
	}
	return Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<ERetargetRotationMode>()
{
	return ERetargetRotationMode_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Interpolated.DisplayName", "Interpolated" },
		{ "Interpolated.Name", "ERetargetRotationMode::Interpolated" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ERetargetRotationMode::None" },
		{ "OneToOne.DisplayName", "One to One" },
		{ "OneToOne.Name", "ERetargetRotationMode::OneToOne" },
		{ "OneToOneReversed.DisplayName", "One to One Reversed" },
		{ "OneToOneReversed.Name", "ERetargetRotationMode::OneToOneReversed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERetargetRotationMode::Interpolated", (int64)ERetargetRotationMode::Interpolated },
		{ "ERetargetRotationMode::OneToOne", (int64)ERetargetRotationMode::OneToOne },
		{ "ERetargetRotationMode::OneToOneReversed", (int64)ERetargetRotationMode::OneToOneReversed },
		{ "ERetargetRotationMode::None", (int64)ERetargetRotationMode::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"ERetargetRotationMode",
	"ERetargetRotationMode",
	Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_ERetargetRotationMode()
{
	if (!Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton, Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton;
}
// End Enum ERetargetRotationMode

// Begin ScriptStruct FTargetChainSpeedPlantSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings;
class UScriptStruct* FTargetChainSpeedPlantSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("TargetChainSpeedPlantSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FTargetChainSpeedPlantSettings>()
{
	return FTargetChainSpeedPlantSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSpeedPlanting_MetaData[] = {
		{ "Category", "Plant IK by Speed" },
		{ "Comment", "/** The name of the curve on the source animation that contains the speed of the end effector bone.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "The name of the curve on the source animation that contains the speed of the end effector bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCurveName_MetaData[] = {
		{ "Category", "Plant IK by Speed" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The name of the curve on the source animation that contains the speed of the end effector bone.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "The name of the curve on the source animation that contains the speed of the end effector bone." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedThreshold_MetaData[] = {
		{ "Category", "Plant IK by Speed" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 100. Default 15. The maximum speed a source bone can be moving while being considered 'planted'.\n\x09*  The target IK goal will not be allowed to move whenever the source bone speed drops below this threshold speed. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 100. Default 15. The maximum speed a source bone can be moving while being considered 'planted'.\nThe target IK goal will not be allowed to move whenever the source bone speed drops below this threshold speed." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnplantStiffness_MetaData[] = {
		{ "Category", "Plant IK by Speed" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How stiff the spring model is that smoothly pulls the IK position after unplanting (more stiffness means more oscillation around the target value)\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "How stiff the spring model is that smoothly pulls the IK position after unplanting (more stiffness means more oscillation around the target value)" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnplantCriticalDamping_MetaData[] = {
		{ "Category", "Plant IK by Speed" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much damping to apply to the spring (0 means no damping, 1 means critically damped which means no oscillation)\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "How much damping to apply to the spring (0 means no damping, 1 means critically damped which means no oscillation)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableSpeedPlanting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSpeedPlanting;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeedCurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantCriticalDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetChainSpeedPlantSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_EnableSpeedPlanting_SetBit(void* Obj)
{
	((FTargetChainSpeedPlantSettings*)Obj)->EnableSpeedPlanting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_EnableSpeedPlanting = { "EnableSpeedPlanting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTargetChainSpeedPlantSettings), &Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_EnableSpeedPlanting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSpeedPlanting_MetaData), NewProp_EnableSpeedPlanting_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_SpeedCurveName = { "SpeedCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainSpeedPlantSettings, SpeedCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedCurveName_MetaData), NewProp_SpeedCurveName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_SpeedThreshold = { "SpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainSpeedPlantSettings, SpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedThreshold_MetaData), NewProp_SpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_UnplantStiffness = { "UnplantStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainSpeedPlantSettings, UnplantStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnplantStiffness_MetaData), NewProp_UnplantStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_UnplantCriticalDamping = { "UnplantCriticalDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainSpeedPlantSettings, UnplantCriticalDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnplantCriticalDamping_MetaData), NewProp_UnplantCriticalDamping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_EnableSpeedPlanting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_SpeedCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_SpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_UnplantStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewProp_UnplantCriticalDamping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"TargetChainSpeedPlantSettings",
	Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::PropPointers),
	sizeof(FTargetChainSpeedPlantSettings),
	alignof(FTargetChainSpeedPlantSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings.InnerSingleton, Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings.InnerSingleton;
}
// End ScriptStruct FTargetChainSpeedPlantSettings

// Begin ScriptStruct FTargetChainFKSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetChainFKSettings;
class UScriptStruct* FTargetChainFKSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainFKSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetChainFKSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetChainFKSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("TargetChainFKSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TargetChainFKSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FTargetChainFKSettings>()
{
	return FTargetChainFKSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableFK_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Whether to copy the shape of the chain from the source skeleton using the Rotation and Translation modes. Default is true.\n\x09* NOTE: All FK operations run before the IK pass to copy the shape of the FK chain from the source skeleton. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Whether to copy the shape of the chain from the source skeleton using the Rotation and Translation modes. Default is true.\nNOTE: All FK operations run before the IK pass to copy the shape of the FK chain from the source skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Determines how rotation is copied from the source chain to the target chain. Default is Interpolated.\n\x09* Interpolated: Source and target chains are normalized by their length, then each target bone rotation is generated by finding the rotation at the same normalized distance on the source chain and interpolating between the neighboring bones.\n\x09* One to One: Each target bone rotation is copied from the equivalent bone in the source chain, based on the order in the chain, starting at the root of the chain. If the target chain has more bones than the source, the extra bones will remain at their reference pose.\n\x09* One to One Reversed: Same as One-to-One, but starting from the tip of the chain.\n\x09* None: The rotation of each target bone in the chain is left at the reference pose. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Determines how rotation is copied from the source chain to the target chain. Default is Interpolated.\nInterpolated: Source and target chains are normalized by their length, then each target bone rotation is generated by finding the rotation at the same normalized distance on the source chain and interpolating between the neighboring bones.\nOne to One: Each target bone rotation is copied from the equivalent bone in the source chain, based on the order in the chain, starting at the root of the chain. If the target chain has more bones than the source, the extra bones will remain at their reference pose.\nOne to One Reversed: Same as One-to-One, but starting from the tip of the chain.\nNone: The rotation of each target bone in the chain is left at the reference pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Range +/- infinity. Default 1. Scales the amount of rotation that is applied.\n\x09*  If Rotation Mode is None this parameter has no effect.\n\x09*  Otherwise, this parameter blends the rotation of each bone in the chain from the base retarget pose (0) to the retargeted pose (1).*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range +/- infinity. Default 1. Scales the amount of rotation that is applied.\nIf Rotation Mode is None this parameter has no effect.\nOtherwise, this parameter blends the rotation of each bone in the chain from the base retarget pose (0) to the retargeted pose (1)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Determines how translation is copied from the source chain to the target chain. Default is None.\n\x09* None: Translation of target bones are left unmodified from the retarget pose.\n\x09* Globally Scaled: Translation of target bone is set to the source bone offset multiplied by the global scale of the skeleton (determined by the relative height difference between retarget root bones).\n\x09* Absolute: Translation of target bone is set to the absolute position of the source bone. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Determines how translation is copied from the source chain to the target chain. Default is None.\nNone: Translation of target bones are left unmodified from the retarget pose.\nGlobally Scaled: Translation of target bone is set to the source bone offset multiplied by the global scale of the skeleton (determined by the relative height difference between retarget root bones).\nAbsolute: Translation of target bone is set to the absolute position of the source bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAlpha_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Range +/- infinity. Default 1. Scales the amount of translation that is applied. Exact behavior depends on the Translation Mode.\n\x09*  In None Mode, this parameter has no effect.\n\x09*  In Globally Scaled and Absolute modes, the translation offset is scaled by this parameter.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range +/- infinity. Default 1. Scales the amount of translation that is applied. Exact behavior depends on the Translation Mode.\nIn None Mode, this parameter has no effect.\nIn Globally Scaled and Absolute modes, the translation offset is scaled by this parameter." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorMatching_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 1. Matches the twist angle of this chain (along the Pole direction) to the source chain.\n\x09*  At 0, the chain's pole vector direction will be left alon\n\x09*  At 1, the root bone of the chain will be twist-rotated in the pole direction to match the orientation of the source chain.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 1. Matches the twist angle of this chain (along the Pole direction) to the source chain.\nAt 0, the chain's pole vector direction will be left alon\nAt 1, the root bone of the chain will be twist-rotated in the pole direction to match the orientation of the source chain." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorMaintainOffset_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Default is False. When true, the original offset between the source/target pole vectors will be maintained when using Pole Vector Matching. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Default is False. When true, the original offset between the source/target pole vectors will be maintained when using Pole Vector Matching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorOffset_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "/** Range +/- 180. Default 0. An angular offset, in degrees, for the pole direction of the chain. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range +/- 180. Default 0. An angular offset, in degrees, for the pole direction of the chain." },
		{ "UIMax", "180.0" },
		{ "UIMin", "-180.0" },
	};
#endif // WITH_METADATA
	static void NewProp_EnableFK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableFK;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoleVectorMatching;
	static void NewProp_PoleVectorMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PoleVectorMaintainOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoleVectorOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetChainFKSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_EnableFK_SetBit(void* Obj)
{
	((FTargetChainFKSettings*)Obj)->EnableFK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_EnableFK = { "EnableFK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTargetChainFKSettings), &Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_EnableFK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableFK_MetaData), NewProp_EnableFK_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainFKSettings, RotationMode), Z_Construct_UEnum_IKRig_ERetargetRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 2391479171
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainFKSettings, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_TranslationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainFKSettings, TranslationMode), Z_Construct_UEnum_IKRig_ERetargetTranslationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationMode_MetaData), NewProp_TranslationMode_MetaData) }; // 787230550
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_TranslationAlpha = { "TranslationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainFKSettings, TranslationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationAlpha_MetaData), NewProp_TranslationAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorMatching = { "PoleVectorMatching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainFKSettings, PoleVectorMatching), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorMatching_MetaData), NewProp_PoleVectorMatching_MetaData) };
void Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorMaintainOffset_SetBit(void* Obj)
{
	((FTargetChainFKSettings*)Obj)->PoleVectorMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorMaintainOffset = { "PoleVectorMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTargetChainFKSettings), &Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorMaintainOffset_MetaData), NewProp_PoleVectorMaintainOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorOffset = { "PoleVectorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainFKSettings, PoleVectorOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVectorOffset_MetaData), NewProp_PoleVectorOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_EnableFK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_RotationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_TranslationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_TranslationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_TranslationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorMatching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewProp_PoleVectorOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"TargetChainFKSettings",
	Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::PropPointers),
	sizeof(FTargetChainFKSettings),
	alignof(FTargetChainFKSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTargetChainFKSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainFKSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetChainFKSettings.InnerSingleton, Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TargetChainFKSettings.InnerSingleton;
}
// End ScriptStruct FTargetChainFKSettings

// Begin ScriptStruct FTargetChainIKSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetChainIKSettings;
class UScriptStruct* FTargetChainIKSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainIKSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetChainIKSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetChainIKSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("TargetChainIKSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TargetChainIKSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FTargetChainIKSettings>()
{
	return FTargetChainIKSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableIK_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "Comment", "/** Whether to modify the location of the IK goal on this chain. Default is true.\n\x09 * NOTE: This only has an effect if the chain has an IK Goal assigned to it in the Target IK Rig asset.\n\x09 * NOTE: If off, and this chain has an IK Goal, the IK will still be evaluated, but the Goal is set to the input bone location (from the FK pass).*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Whether to modify the location of the IK goal on this chain. Default is true.\nNOTE: This only has an effect if the chain has an IK Goal assigned to it in the Target IK Rig asset.\nNOTE: If off, and this chain has an IK Goal, the IK will still be evaluated, but the Goal is set to the input bone location (from the FK pass)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSource_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 0. Blends IK goal position from retargeted location (0) to source bone location (1).\n\x09*  At 0 the goal is placed at the retargeted location.\n\x09*  At 1 the goal is placed at the location of the source chain's end bone. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 0. Blends IK goal position from retargeted location (0) to source bone location (1).\nAt 0 the goal is placed at the retargeted location.\nAt 1 the goal is placed at the location of the source chain's end bone." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSourceWeights_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 1. Weight each axis separately when using Blend To Source.\n\x09*  At 0 the goal is placed at the retargeted location.\n\x09*  At 1 the goal is placed at the location of the source chain's end bone. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 1. Weight each axis separately when using Blend To Source.\nAt 0 the goal is placed at the retargeted location.\nAt 1 the goal is placed at the location of the source chain's end bone." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticOffset_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "Comment", "/** Default 0, 0, 0. Apply a static global-space offset to IK goal position. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Default 0, 0, 0. Apply a static global-space offset to IK goal position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticLocalOffset_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "Comment", "/** Default 0, 0, 0. Apply a static local-space offset to IK goal position. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Default 0, 0, 0. Apply a static local-space offset to IK goal position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticRotationOffset_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "Comment", "/** Default 0, 0, 0. Apply a static local-space offset to IK goal rotation. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Default 0, 0, 0. Apply a static local-space offset to IK goal rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleVertical_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "Comment", "/** Range +-Infinity. Default 1. Scales the vertical component of the IK goal's position.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range +-Infinity. Default 1. Scales the vertical component of the IK goal's position." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 5. Default 1. Brings IK goal closer (0) or further (1+) from origin of chain.\n\x09*  At 0 the effector is placed at the origin of the chain (ie Shoulder, Hip etc).\n\x09*  At 1 the effector is left at the end of the chain (ie Wrist, Foot etc)\n\x09*  Values in-between 0-1 will slide the effector along the vector from the start to the end of the chain.\n\x09*  Values greater than 1 will stretch the chain beyond the retargeted length. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 5. Default 1. Brings IK goal closer (0) or further (1+) from origin of chain.\nAt 0 the effector is placed at the origin of the chain (ie Shoulder, Hip etc).\nAt 1 the effector is left at the end of the chain (ie Wrist, Foot etc)\nValues in-between 0-1 will slide the effector along the vector from the start to the end of the chain.\nValues greater than 1 will stretch the chain beyond the retargeted length." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedByIKWarping_MetaData[] = {
		{ "Category", "Warping" },
		{ "Comment", "/** Is this IK goal affected by the stride warping (in Global Settings). Typically this is true for all feet, but not for hands.  */" },
		{ "DisplayName", "Affected by IK Warping" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Is this IK goal affected by the stride warping (in Global Settings). Typically this is true for all feet, but not for hands." },
	};
#endif // WITH_METADATA
	static void NewProp_EnableIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableIK;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendToSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendToSourceWeights;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticLocalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleVertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Extension;
	static void NewProp_bAffectedByIKWarping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedByIKWarping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetChainIKSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_EnableIK_SetBit(void* Obj)
{
	((FTargetChainIKSettings*)Obj)->EnableIK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_EnableIK = { "EnableIK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTargetChainIKSettings), &Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_EnableIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableIK_MetaData), NewProp_EnableIK_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_BlendToSource = { "BlendToSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainIKSettings, BlendToSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendToSource_MetaData), NewProp_BlendToSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_BlendToSourceWeights = { "BlendToSourceWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainIKSettings, BlendToSourceWeights), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendToSourceWeights_MetaData), NewProp_BlendToSourceWeights_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_StaticOffset = { "StaticOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainIKSettings, StaticOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticOffset_MetaData), NewProp_StaticOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_StaticLocalOffset = { "StaticLocalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainIKSettings, StaticLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticLocalOffset_MetaData), NewProp_StaticLocalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_StaticRotationOffset = { "StaticRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainIKSettings, StaticRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticRotationOffset_MetaData), NewProp_StaticRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_ScaleVertical = { "ScaleVertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainIKSettings, ScaleVertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleVertical_MetaData), NewProp_ScaleVertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainIKSettings, Extension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extension_MetaData), NewProp_Extension_MetaData) };
void Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_bAffectedByIKWarping_SetBit(void* Obj)
{
	((FTargetChainIKSettings*)Obj)->bAffectedByIKWarping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_bAffectedByIKWarping = { "bAffectedByIKWarping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTargetChainIKSettings), &Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_bAffectedByIKWarping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectedByIKWarping_MetaData), NewProp_bAffectedByIKWarping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_EnableIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_BlendToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_BlendToSourceWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_StaticOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_StaticLocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_StaticRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_ScaleVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_Extension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewProp_bAffectedByIKWarping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"TargetChainIKSettings",
	Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::PropPointers),
	sizeof(FTargetChainIKSettings),
	alignof(FTargetChainIKSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTargetChainIKSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainIKSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetChainIKSettings.InnerSingleton, Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TargetChainIKSettings.InnerSingleton;
}
// End ScriptStruct FTargetChainIKSettings

// Begin ScriptStruct FTargetChainSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetChainSettings;
class UScriptStruct* FTargetChainSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetChainSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetChainSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("TargetChainSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TargetChainSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FTargetChainSettings>()
{
	return FTargetChainSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTargetChainSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FK_MetaData[] = {
		{ "Category", "FK" },
		{ "Comment", "/** All settings for FK retargeting of this chain.\n\x09 *FK retargeting runs before the IK pass. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "All settings for FK retargeting of this chain.\nFK retargeting runs before the IK pass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IK_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** All settings controlling the IK Goal assigned to this chain.\n\x09 *The IK pass runs AFTER the FK pass and can be used to fix contacts. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "All settings controlling the IK Goal assigned to this chain.\nThe IK pass runs AFTER the FK pass and can be used to fix contacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedPlanting_MetaData[] = {
		{ "Category", "Speed Planting" },
		{ "Comment", "/** All settings associated with planting IK goals based on the speed of the source.\n\x09 *Speed planting will pin the IK goal to the location determined by the IK settings above. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "All settings associated with planting IK goals based on the speed of the source.\nSpeed planting will pin the IK goal to the location determined by the IK settings above." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FK;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IK;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedPlanting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetChainSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewProp_FK = { "FK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainSettings, FK), Z_Construct_UScriptStruct_FTargetChainFKSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FK_MetaData), NewProp_FK_MetaData) }; // 42226942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewProp_IK = { "IK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainSettings, IK), Z_Construct_UScriptStruct_FTargetChainIKSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IK_MetaData), NewProp_IK_MetaData) }; // 4005610105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewProp_SpeedPlanting = { "SpeedPlanting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetChainSettings, SpeedPlanting), Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedPlanting_MetaData), NewProp_SpeedPlanting_MetaData) }; // 2279172517
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetChainSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewProp_FK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewProp_IK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewProp_SpeedPlanting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetChainSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"TargetChainSettings",
	Z_Construct_UScriptStruct_FTargetChainSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainSettings_Statics::PropPointers),
	sizeof(FTargetChainSettings),
	alignof(FTargetChainSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetChainSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTargetChainSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TargetChainSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetChainSettings.InnerSingleton, Z_Construct_UScriptStruct_FTargetChainSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TargetChainSettings.InnerSingleton;
}
// End ScriptStruct FTargetChainSettings

// Begin ScriptStruct FTargetRootSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetRootSettings;
class UScriptStruct* FTargetRootSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetRootSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetRootSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetRootSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("TargetRootSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TargetRootSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FTargetRootSettings>()
{
	return FTargetRootSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTargetRootSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 1. Blends the amount of retargeted root rotation to apply.\n\x09*  At 0 the root is left at the rotation from the retarget pose.\n\x09*  At 1 the root is rotated fully to match the source root rotation. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 1. Blends the amount of retargeted root rotation to apply.\nAt 0 the root is left at the rotation from the retarget pose.\nAt 1 the root is rotated fully to match the source root rotation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAlpha_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 1. Blends the amount of retargeted root translation to apply.\n\x09*  At 0 the root is left at the position from the retarget pose.\n\x09*  At 1 the root will follow the source motion according to the behavior defined in the subsequent settings. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 1. Blends the amount of retargeted root translation to apply.\nAt 0 the root is left at the position from the retarget pose.\nAt 1 the root will follow the source motion according to the behavior defined in the subsequent settings." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSource_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 0. Blends the retarget root's translation to the exact source location.\n\x09*  At 0 the root is placed at the retargeted location.\n\x09*  At 1 the root is placed at the location of the source's retarget root bone.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 0. Blends the retarget root's translation to the exact source location.\nAt 0 the root is placed at the retargeted location.\nAt 1 the root is placed at the location of the source's retarget root bone." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSourceWeights_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Per-axis weights for the Blend to Source. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Per-axis weights for the Blend to Source." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleHorizontal_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "Comment", "/** Default 1. Scales the motion of the root position in the horizontal plane (X,Y). */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Default 1. Scales the motion of the root position in the horizontal plane (X,Y)." },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleVertical_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "Comment", "/** Default 1. Scales the motion of the root position in the vertical direction (Z). */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Default 1. Scales the motion of the root position in the vertical direction (Z)." },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationOffset_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "Comment", "/** Applies a static component-space translation offset to the retarget root.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Applies a static component-space translation offset to the retarget root." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "/** Applies a static local-space rotation offset to the retarget root.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Applies a static local-space rotation offset to the retarget root." },
		{ "UIMax", "180.0" },
		{ "UIMin", "-180.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectIKHorizontal_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 1. Control whether modifications made to the root will affect the horizontal component of IK positions.\n\x09*  At 0 the IK positions are independent of the root modifications.\n\x09*  At 1 the IK positions are calculated relative to the modified root location.*/" },
		{ "DisplayName", "Affect IK Horizontal" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 1. Control whether modifications made to the root will affect the horizontal component of IK positions.\nAt 0 the IK positions are independent of the root modifications.\nAt 1 the IK positions are calculated relative to the modified root location." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectIKVertical_MetaData[] = {
		{ "Category", "Root Retarget Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 0. Control whether modifications made to the root will affect the vertical component of IK positions.\n\x09*  At 0 the IK positions are independent of the root modifications.\n\x09*  At 1 the IK positions are calculated relative to the modified root location.*/" },
		{ "DisplayName", "Affect IK Vertical" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to 1. Default 0. Control whether modifications made to the root will affect the vertical component of IK positions.\nAt 0 the IK positions are independent of the root modifications.\nAt 1 the IK positions are calculated relative to the modified root location." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendToSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendToSourceWeights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHorizontal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleVertical;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AffectIKHorizontal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AffectIKVertical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetRootSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, RotationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_TranslationAlpha = { "TranslationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, TranslationAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationAlpha_MetaData), NewProp_TranslationAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_BlendToSource = { "BlendToSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, BlendToSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendToSource_MetaData), NewProp_BlendToSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_BlendToSourceWeights = { "BlendToSourceWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, BlendToSourceWeights), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendToSourceWeights_MetaData), NewProp_BlendToSourceWeights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_ScaleHorizontal = { "ScaleHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, ScaleHorizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleHorizontal_MetaData), NewProp_ScaleHorizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_ScaleVertical = { "ScaleVertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, ScaleVertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleVertical_MetaData), NewProp_ScaleVertical_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_TranslationOffset = { "TranslationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, TranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationOffset_MetaData), NewProp_TranslationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_AffectIKHorizontal = { "AffectIKHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, AffectIKHorizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectIKHorizontal_MetaData), NewProp_AffectIKHorizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_AffectIKVertical = { "AffectIKVertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTargetRootSettings, AffectIKVertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectIKVertical_MetaData), NewProp_AffectIKVertical_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetRootSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_RotationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_TranslationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_BlendToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_BlendToSourceWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_ScaleHorizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_ScaleVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_TranslationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_AffectIKHorizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewProp_AffectIKVertical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetRootSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetRootSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"TargetRootSettings",
	Z_Construct_UScriptStruct_FTargetRootSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetRootSettings_Statics::PropPointers),
	sizeof(FTargetRootSettings),
	alignof(FTargetRootSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetRootSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTargetRootSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTargetRootSettings()
{
	if (!Z_Registration_Info_UScriptStruct_TargetRootSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetRootSettings.InnerSingleton, Z_Construct_UScriptStruct_FTargetRootSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TargetRootSettings.InnerSingleton;
}
// End ScriptStruct FTargetRootSettings

// Begin Enum EBasicAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBasicAxis;
static UEnum* EBasicAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_EBasicAxis, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("EBasicAxis"));
	}
	return Z_Registration_Info_UEnum_EBasicAxis.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<EBasicAxis>()
{
	return EBasicAxis_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_EBasicAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "NegX.Name", "EBasicAxis::NegX" },
		{ "NegY.Name", "EBasicAxis::NegY" },
		{ "NegZ.Name", "EBasicAxis::NegZ" },
		{ "X.Name", "EBasicAxis::X" },
		{ "Y.Name", "EBasicAxis::Y" },
		{ "Z.Name", "EBasicAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBasicAxis::X", (int64)EBasicAxis::X },
		{ "EBasicAxis::Y", (int64)EBasicAxis::Y },
		{ "EBasicAxis::Z", (int64)EBasicAxis::Z },
		{ "EBasicAxis::NegX", (int64)EBasicAxis::NegX },
		{ "EBasicAxis::NegY", (int64)EBasicAxis::NegY },
		{ "EBasicAxis::NegZ", (int64)EBasicAxis::NegZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_EBasicAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"EBasicAxis",
	"EBasicAxis",
	Z_Construct_UEnum_IKRig_EBasicAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EBasicAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EBasicAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_EBasicAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_EBasicAxis()
{
	if (!Z_Registration_Info_UEnum_EBasicAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBasicAxis.InnerSingleton, Z_Construct_UEnum_IKRig_EBasicAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBasicAxis.InnerSingleton;
}
// End Enum EBasicAxis

// Begin Enum EWarpingDirectionSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarpingDirectionSource;
static UEnum* EWarpingDirectionSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_EWarpingDirectionSource, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("EWarpingDirectionSource"));
	}
	return Z_Registration_Info_UEnum_EWarpingDirectionSource.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<EWarpingDirectionSource>()
{
	return EWarpingDirectionSource_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Chain.Name", "EWarpingDirectionSource::Chain" },
		{ "Goals.Name", "EWarpingDirectionSource::Goals" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "RootBone.Name", "EWarpingDirectionSource::RootBone" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarpingDirectionSource::Goals", (int64)EWarpingDirectionSource::Goals },
		{ "EWarpingDirectionSource::Chain", (int64)EWarpingDirectionSource::Chain },
		{ "EWarpingDirectionSource::RootBone", (int64)EWarpingDirectionSource::RootBone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"EWarpingDirectionSource",
	"EWarpingDirectionSource",
	Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_EWarpingDirectionSource()
{
	if (!Z_Registration_Info_UEnum_EWarpingDirectionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarpingDirectionSource.InnerSingleton, Z_Construct_UEnum_IKRig_EWarpingDirectionSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarpingDirectionSource.InnerSingleton;
}
// End Enum EWarpingDirectionSource

// Begin ScriptStruct FRetargetGlobalSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RetargetGlobalSettings;
class UScriptStruct* FRetargetGlobalSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetGlobalSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RetargetGlobalSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetargetGlobalSettings, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("RetargetGlobalSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RetargetGlobalSettings.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FRetargetGlobalSettings>()
{
	return FRetargetGlobalSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoot_MetaData[] = {
		{ "Category", "RetargetPhases" },
		{ "Comment", "/** When false, the motion of the Retarget Root bone is not copied from the source. Useful for debugging issues with the root settings.\n\x09* Note: the retargeting order is: Root > FK > IK > Post\n\x09 */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "When false, the motion of the Retarget Root bone is not copied from the source. Useful for debugging issues with the root settings.\nNote: the retargeting order is: Root > FK > IK > Post" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFK_MetaData[] = {
		{ "Category", "RetargetPhases" },
		{ "Comment", "/** When false, limbs are not copied via FK. Useful for debugging limb issues suspected to be caused by FK chain settings.\n\x09* Note: the retargeting order is: Root > FK > IK > Post\n\x09 */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "When false, limbs are not copied via FK. Useful for debugging limb issues suspected to be caused by FK chain settings.\nNote: the retargeting order is: Root > FK > IK > Post" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIK_MetaData[] = {
		{ "Category", "RetargetPhases" },
		{ "Comment", "/** When false, IK is not applied as part of retargeter. Useful for debugging limb issues suspected to be caused by IK.\n\x09* Note: the retargeting order is: Root > FK > IK > Post\n\x09 */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "When false, IK is not applied as part of retargeter. Useful for debugging limb issues suspected to be caused by IK.\nNote: the retargeting order is: Root > FK > IK > Post" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePost_MetaData[] = {
		{ "Category", "RetargetPhases" },
		{ "Comment", "/** When false, Post operations are not applied as part of retargeter. Useful for debugging issues suspected to be caused by the post phase.\n\x09 * Note: the retargeting order is: Root > FK > IK > Post\n\x09 */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "When false, Post operations are not applied as part of retargeter. Useful for debugging issues suspected to be caused by the post phase.\nNote: the retargeting order is: Root > FK > IK > Post" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarping_MetaData[] = {
		{ "Category", "Warping" },
		{ "Comment", "/** Enable IK Warping.\n\x09 * These options allow for global modifications to all IK Goals that have \"Affected by IK Warping\" turned on (the default).\n\x09 * \"Affected by IK Warping\" can be found in the IK settings of a retarget chain. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Enable IK Warping.\nThese options allow for global modifications to all IK Goals that have \"Affected by IK Warping\" turned on (the default).\n\"Affected by IK Warping\" can be found in the IK settings of a retarget chain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionSource_MetaData[] = {
		{ "Category", "Warping" },
		{ "Comment", "/** Defines the source used to determine the forward direction as the character animates in world space. Default is \"Goals\".\n\x09 * This method uses various positions on the character to create a \"best fit\" global rotation that approximates the facing direction of the character over time.\n\x09 * This global rotation is used to define the forward and sideways directions used when warping goals along those axes.\n\x09 * The options are:\n\x09 * Goals: uses the positions of the IK goals to approximate the facing direction. This is best used on characters with a vertical spine, like bipeds.\n\x09 * Chain: uses the positions of the bones in a retarget chain to approximate the facing direction. This is best when used with the spine chain for characters with a horizontal spine, like quadrupeds.\n\x09 * Root Bone: uses the rotation of the root bone of the skeleton. This is most robust, but character must have correct root motion with yaw rotation in movement direction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Defines the source used to determine the forward direction as the character animates in world space. Default is \"Goals\".\nThis method uses various positions on the character to create a \"best fit\" global rotation that approximates the facing direction of the character over time.\nThis global rotation is used to define the forward and sideways directions used when warping goals along those axes.\nThe options are:\nGoals: uses the positions of the IK goals to approximate the facing direction. This is best used on characters with a vertical spine, like bipeds.\nChain: uses the positions of the bones in a retarget chain to approximate the facing direction. This is best when used with the spine chain for characters with a horizontal spine, like quadrupeds.\nRoot Bone: uses the rotation of the root bone of the skeleton. This is most robust, but character must have correct root motion with yaw rotation in movement direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardDirection_MetaData[] = {
		{ "Category", "Warping" },
		{ "Comment", "/** The world space axis that represents the forward facing direction for your character. By default, in Unreal, this is +Y.  */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "The world space axis that represents the forward facing direction for your character. By default, in Unreal, this is +Y." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionChain_MetaData[] = {
		{ "Category", "Warping" },
		{ "Comment", "/** When using the \"Chain\" option as a Direction Source, this defines the chain to use to determine the facing direction of the character.\n\x09 * Typically this would be the chain that contains the Spine bones. */" },
		{ "EditCondition", "DirectionSource == EWarpingDirectionSource::Chain" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "When using the \"Chain\" option as a Direction Source, this defines the chain to use to determine the facing direction of the character.\nTypically this would be the chain that contains the Spine bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpForwards_MetaData[] = {
		{ "Category", "Warping" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to Inf. Default 1. Warps IK goal positions in the forward direction. Useful for stride warping.\n\x09 * Values below 1 will create smaller, squashed strides. Values greater than 1 will create stretched, longer strides.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to Inf. Default 1. Warps IK goal positions in the forward direction. Useful for stride warping.\nValues below 1 will create smaller, squashed strides. Values greater than 1 will create stretched, longer strides." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewaysOffset_MetaData[] = {
		{ "Category", "Warping" },
		{ "Comment", "/** Range -+Inf. Default is 0. A static offset in world units to move the IK goals perpendicular to the forward direction.\n\x09 * Values less than zero will move the goals towards the center-line of the character. Values greater than zero push the goals outwards.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range -+Inf. Default is 0. A static offset in world units to move the IK goals perpendicular to the forward direction.\nValues less than zero will move the goals towards the center-line of the character. Values greater than zero push the goals outwards." },
		{ "UIMax", "100.0" },
		{ "UIMin", "-10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpSplay_MetaData[] = {
		{ "Category", "Warping" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to +Inf. Default is 1.0f.\n\x09 * Values below 1 pull all the goals towards the average of all the goals (towards each other).\n\x09 * Values greater than 1 push the goals apart.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetSettings.h" },
		{ "ToolTip", "Range 0 to +Inf. Default is 1.0f.\nValues below 1 pull all the goals towards the average of all the goals (towards each other).\nValues greater than 1 push the goals apart." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoot;
	static void NewProp_bEnableFK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFK;
	static void NewProp_bEnableIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIK;
	static void NewProp_bEnablePost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePost;
	static void NewProp_bWarping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionSource;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForwardDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForwardDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionChain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpForwards;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidewaysOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpSplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetargetGlobalSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableRoot_SetBit(void* Obj)
{
	((FRetargetGlobalSettings*)Obj)->bEnableRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableRoot = { "bEnableRoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetGlobalSettings), &Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoot_MetaData), NewProp_bEnableRoot_MetaData) };
void Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableFK_SetBit(void* Obj)
{
	((FRetargetGlobalSettings*)Obj)->bEnableFK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableFK = { "bEnableFK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetGlobalSettings), &Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableFK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFK_MetaData), NewProp_bEnableFK_MetaData) };
void Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableIK_SetBit(void* Obj)
{
	((FRetargetGlobalSettings*)Obj)->bEnableIK = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableIK = { "bEnableIK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetGlobalSettings), &Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableIK_MetaData), NewProp_bEnableIK_MetaData) };
void Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnablePost_SetBit(void* Obj)
{
	((FRetargetGlobalSettings*)Obj)->bEnablePost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnablePost = { "bEnablePost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetGlobalSettings), &Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnablePost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePost_MetaData), NewProp_bEnablePost_MetaData) };
void Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bWarping_SetBit(void* Obj)
{
	((FRetargetGlobalSettings*)Obj)->bWarping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bWarping = { "bWarping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRetargetGlobalSettings), &Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bWarping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarping_MetaData), NewProp_bWarping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_DirectionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_DirectionSource = { "DirectionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetGlobalSettings, DirectionSource), Z_Construct_UEnum_IKRig_EWarpingDirectionSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionSource_MetaData), NewProp_DirectionSource_MetaData) }; // 146725776
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_ForwardDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_ForwardDirection = { "ForwardDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetGlobalSettings, ForwardDirection), Z_Construct_UEnum_IKRig_EBasicAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardDirection_MetaData), NewProp_ForwardDirection_MetaData) }; // 4077897627
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_DirectionChain = { "DirectionChain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetGlobalSettings, DirectionChain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionChain_MetaData), NewProp_DirectionChain_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_WarpForwards = { "WarpForwards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetGlobalSettings, WarpForwards), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpForwards_MetaData), NewProp_WarpForwards_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_SidewaysOffset = { "SidewaysOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetGlobalSettings, SidewaysOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewaysOffset_MetaData), NewProp_SidewaysOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_WarpSplay = { "WarpSplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetGlobalSettings, WarpSplay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpSplay_MetaData), NewProp_WarpSplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableFK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnableIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bEnablePost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_bWarping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_DirectionSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_DirectionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_ForwardDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_ForwardDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_DirectionChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_WarpForwards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_SidewaysOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewProp_WarpSplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"RetargetGlobalSettings",
	Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::PropPointers),
	sizeof(FRetargetGlobalSettings),
	alignof(FRetargetGlobalSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRetargetGlobalSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetGlobalSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RetargetGlobalSettings.InnerSingleton, Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RetargetGlobalSettings.InnerSingleton;
}
// End ScriptStruct FRetargetGlobalSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERetargetTranslationMode_StaticEnum, TEXT("ERetargetTranslationMode"), &Z_Registration_Info_UEnum_ERetargetTranslationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 787230550U) },
		{ ERetargetRotationMode_StaticEnum, TEXT("ERetargetRotationMode"), &Z_Registration_Info_UEnum_ERetargetRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2391479171U) },
		{ EBasicAxis_StaticEnum, TEXT("EBasicAxis"), &Z_Registration_Info_UEnum_EBasicAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4077897627U) },
		{ EWarpingDirectionSource_StaticEnum, TEXT("EWarpingDirectionSource"), &Z_Registration_Info_UEnum_EWarpingDirectionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 146725776U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTargetChainSpeedPlantSettings::StaticStruct, Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics::NewStructOps, TEXT("TargetChainSpeedPlantSettings"), &Z_Registration_Info_UScriptStruct_TargetChainSpeedPlantSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetChainSpeedPlantSettings), 2279172517U) },
		{ FTargetChainFKSettings::StaticStruct, Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics::NewStructOps, TEXT("TargetChainFKSettings"), &Z_Registration_Info_UScriptStruct_TargetChainFKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetChainFKSettings), 42226942U) },
		{ FTargetChainIKSettings::StaticStruct, Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics::NewStructOps, TEXT("TargetChainIKSettings"), &Z_Registration_Info_UScriptStruct_TargetChainIKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetChainIKSettings), 4005610105U) },
		{ FTargetChainSettings::StaticStruct, Z_Construct_UScriptStruct_FTargetChainSettings_Statics::NewStructOps, TEXT("TargetChainSettings"), &Z_Registration_Info_UScriptStruct_TargetChainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetChainSettings), 1728474851U) },
		{ FTargetRootSettings::StaticStruct, Z_Construct_UScriptStruct_FTargetRootSettings_Statics::NewStructOps, TEXT("TargetRootSettings"), &Z_Registration_Info_UScriptStruct_TargetRootSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetRootSettings), 4047107988U) },
		{ FRetargetGlobalSettings::StaticStruct, Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics::NewStructOps, TEXT("RetargetGlobalSettings"), &Z_Registration_Info_UScriptStruct_RetargetGlobalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRetargetGlobalSettings), 2831607225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_1771875986(TEXT("/Script/IKRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
