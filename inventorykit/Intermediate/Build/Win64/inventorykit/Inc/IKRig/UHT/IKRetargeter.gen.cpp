// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/IKRetargeter.h"
#include "IKRig/Public/Retargeter/IKRetargetProfile.h"
#include "IKRig/Public/Retargeter/IKRetargetSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargeter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetGlobalSettings();
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings();
IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_URetargetOpStack_NoRegister();
IKRIG_API UClass* Z_Construct_UClass_URetargetRootSettings();
IKRIG_API UClass* Z_Construct_UClass_URetargetRootSettings_NoRegister();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetRotationMode();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget();
IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetTranslationMode();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetPose();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetChainMap();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetGlobalSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetProfile();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainFKSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainIKSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings();
IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetRootSettings();
UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

// Begin ScriptStruct FRetargetChainMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RetargetChainMap;
class UScriptStruct* FRetargetChainMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetargetChainMap, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("RetargetChainMap"));
	}
	return Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FRetargetChainMap>()
{
	return FRetargetChainMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRetargetChainMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceChain_MetaData[] = {
		{ "Category", "Offsets" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChain_MetaData[] = {
		{ "Category", "Offsets" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceChain;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetargetChainMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain = { "SourceChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetChainMap, SourceChain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceChain_MetaData), NewProp_SourceChain_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain = { "TargetChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRetargetChainMap, TargetChain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChain_MetaData), NewProp_TargetChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"RetargetChainMap",
	Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers),
	sizeof(FRetargetChainMap),
	alignof(FRetargetChainMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRetargetChainMap()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton, Z_Construct_UScriptStruct_FRetargetChainMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton;
}
// End ScriptStruct FRetargetChainMap

// Begin Class URetargetChainSettings
void URetargetChainSettings::StaticRegisterNativesURetargetChainSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetargetChainSettings);
UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister()
{
	return URetargetChainSettings::StaticClass();
}
struct Z_Construct_UClass_URetargetChainSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceChain_MetaData[] = {
		{ "Category", "Chain Mapping" },
		{ "Comment", "// The chain on the Source IK Rig asset to copy animation FROM. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The chain on the Source IK Rig asset to copy animation FROM." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChain_MetaData[] = {
		{ "Category", "Chain Mapping" },
		{ "Comment", "// The chain on the Target IK Rig asset to copy animation TO. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The chain on the Target IK Rig asset to copy animation TO." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The settings used to control the motion on this target chain. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The settings used to control the motion on this target chain." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyPoseUsingFK_MetaData[] = {
		{ "Comment", "// Deprecated properties from before FTargetChainSettings / profile refactor  (July 2022)\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Deprecated properties from before FTargetChainSettings / profile refactor  (July 2022)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriveIKGoal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSourceWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticLocalOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticRotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSpeedCurveToPlantIK_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCurveName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnplantStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnplantCriticalDamping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceChain;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_EDITORONLY_DATA
	static void NewProp_CopyPoseUsingFK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CopyPoseUsingFK;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationAlpha;
	static void NewProp_DriveIKGoal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DriveIKGoal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendToSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendToSourceWeights;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticLocalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Extension;
	static void NewProp_UseSpeedCurveToPlantIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSpeedCurveToPlantIK;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeedCurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantCriticalDamping;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetargetChainSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain = { "SourceChain", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, SourceChain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceChain_MetaData), NewProp_SourceChain_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain = { "TargetChain", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, TargetChain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChain_MetaData), NewProp_TargetChain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, Settings), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1728474851
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_SetBit(void* Obj)
{
	((URetargetChainSettings*)Obj)->CopyPoseUsingFK_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK = { "CopyPoseUsingFK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyPoseUsingFK_MetaData), NewProp_CopyPoseUsingFK_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, RotationMode_DEPRECATED), Z_Construct_UEnum_IKRig_ERetargetRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 2391479171
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, RotationAlpha_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlpha_MetaData), NewProp_RotationAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, TranslationMode_DEPRECATED), Z_Construct_UEnum_IKRig_ERetargetTranslationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationMode_MetaData), NewProp_TranslationMode_MetaData) }; // 787230550
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha = { "TranslationAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, TranslationAlpha_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslationAlpha_MetaData), NewProp_TranslationAlpha_MetaData) };
void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_SetBit(void* Obj)
{
	((URetargetChainSettings*)Obj)->DriveIKGoal_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal = { "DriveIKGoal", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriveIKGoal_MetaData), NewProp_DriveIKGoal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource = { "BlendToSource", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, BlendToSource_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendToSource_MetaData), NewProp_BlendToSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights = { "BlendToSourceWeights", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, BlendToSourceWeights_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendToSourceWeights_MetaData), NewProp_BlendToSourceWeights_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset = { "StaticOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, StaticOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticOffset_MetaData), NewProp_StaticOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticLocalOffset = { "StaticLocalOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, StaticLocalOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticLocalOffset_MetaData), NewProp_StaticLocalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticRotationOffset = { "StaticRotationOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, StaticRotationOffset_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticRotationOffset_MetaData), NewProp_StaticRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, Extension_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extension_MetaData), NewProp_Extension_MetaData) };
void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_SetBit(void* Obj)
{
	((URetargetChainSettings*)Obj)->UseSpeedCurveToPlantIK_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK = { "UseSpeedCurveToPlantIK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSpeedCurveToPlantIK_MetaData), NewProp_UseSpeedCurveToPlantIK_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SpeedCurveName = { "SpeedCurveName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, SpeedCurveName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedCurveName_MetaData), NewProp_SpeedCurveName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold = { "VelocityThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, VelocityThreshold_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityThreshold_MetaData), NewProp_VelocityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantStiffness = { "UnplantStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, UnplantStiffness_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnplantStiffness_MetaData), NewProp_UnplantStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantCriticalDamping = { "UnplantCriticalDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetChainSettings, UnplantCriticalDamping_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnplantCriticalDamping_MetaData), NewProp_UnplantCriticalDamping_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Settings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticLocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SpeedCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantCriticalDamping,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URetargetChainSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URetargetChainSettings_Statics::ClassParams = {
	&URetargetChainSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URetargetChainSettings()
{
	if (!Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton, Z_Construct_UClass_URetargetChainSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<URetargetChainSettings>()
{
	return URetargetChainSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URetargetChainSettings);
URetargetChainSettings::~URetargetChainSettings() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetChainSettings)
// End Class URetargetChainSettings

// Begin Class URetargetRootSettings
void URetargetRootSettings::StaticRegisterNativesURetargetRootSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetargetRootSettings);
UClass* Z_Construct_UClass_URetargetRootSettings_NoRegister()
{
	return URetargetRootSettings::StaticClass();
}
struct Z_Construct_UClass_URetargetRootSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The settings used to control the motion of the target root bone. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The settings used to control the motion of the target root bone." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetRootTranslation_MetaData[] = {
		{ "Comment", "// Deprecated properties from before FTargetRootSettings / profile refactor \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Deprecated properties from before FTargetRootSettings / profile refactor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalScaleHorizontal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalScaleVertical_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticRotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_EDITORONLY_DATA
	static void NewProp_RetargetRootTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RetargetRootTranslation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalScaleHorizontal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalScaleVertical;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendToSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticRotationOffset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetargetRootSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetRootSettings, Settings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4047107988
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_SetBit(void* Obj)
{
	((URetargetRootSettings*)Obj)->RetargetRootTranslation_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation = { "RetargetRootTranslation", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URetargetRootSettings), &Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetRootTranslation_MetaData), NewProp_RetargetRootTranslation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleHorizontal = { "GlobalScaleHorizontal", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetRootSettings, GlobalScaleHorizontal_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalScaleHorizontal_MetaData), NewProp_GlobalScaleHorizontal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleVertical = { "GlobalScaleVertical", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetRootSettings, GlobalScaleVertical_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalScaleVertical_MetaData), NewProp_GlobalScaleVertical_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_BlendToSource = { "BlendToSource", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetRootSettings, BlendToSource_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendToSource_MetaData), NewProp_BlendToSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticOffset = { "StaticOffset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetRootSettings, StaticOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticOffset_MetaData), NewProp_StaticOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticRotationOffset = { "StaticRotationOffset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URetargetRootSettings, StaticRotationOffset_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticRotationOffset_MetaData), NewProp_StaticRotationOffset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetargetRootSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_Settings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleHorizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_BlendToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticRotationOffset,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URetargetRootSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URetargetRootSettings_Statics::ClassParams = {
	&URetargetRootSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URetargetRootSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URetargetRootSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URetargetRootSettings()
{
	if (!Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton, Z_Construct_UClass_URetargetRootSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<URetargetRootSettings>()
{
	return URetargetRootSettings::StaticClass();
}
URetargetRootSettings::URetargetRootSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URetargetRootSettings);
URetargetRootSettings::~URetargetRootSettings() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetRootSettings)
// End Class URetargetRootSettings

// Begin Class UIKRetargetGlobalSettings
void UIKRetargetGlobalSettings::StaticRegisterNativesUIKRetargetGlobalSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetGlobalSettings);
UClass* Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister()
{
	return UIKRetargetGlobalSettings::StaticClass();
}
struct Z_Construct_UClass_UIKRetargetGlobalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Global retargeter settings. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Global retargeter settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetGlobalSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargetGlobalSettings, Settings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2831607225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::ClassParams = {
	&UIKRetargetGlobalSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRetargetGlobalSettings()
{
	if (!Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton, Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRetargetGlobalSettings>()
{
	return UIKRetargetGlobalSettings::StaticClass();
}
UIKRetargetGlobalSettings::UIKRetargetGlobalSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetGlobalSettings);
UIKRetargetGlobalSettings::~UIKRetargetGlobalSettings() {}
// End Class UIKRetargetGlobalSettings

// Begin ScriptStruct FIKRetargetPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRetargetPose;
class UScriptStruct* FIKRetargetPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPose, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("IKRetargetPose"));
	}
	return Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FIKRetargetPose>()
{
	return FIKRetargetPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIKRetargetPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTranslationOffset_MetaData[] = {
		{ "Category", "RetargetPose" },
		{ "Comment", "// a translational delta in GLOBAL space, applied only to the retarget root bone\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "a translational delta in GLOBAL space, applied only to the retarget root bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneRotationOffsets_MetaData[] = {
		{ "Category", "RetargetPose" },
		{ "Comment", "// these are LOCAL-space rotation deltas to be applied to a bone to modify it's retarget pose\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "these are LOCAL-space rotation deltas to be applied to a bone to modify it's retarget pose" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTranslationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneRotationOffsets_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneRotationOffsets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneRotationOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRetargetPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset = { "RootTranslationOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRetargetPose, RootTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTranslationOffset_MetaData), NewProp_RootTranslationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_ValueProp = { "BoneRotationOffsets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_Key_KeyProp = { "BoneRotationOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets = { "BoneRotationOffsets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIKRetargetPose, BoneRotationOffsets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneRotationOffsets_MetaData), NewProp_BoneRotationOffsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	&NewStructOps,
	"IKRetargetPose",
	Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers),
	sizeof(FIKRetargetPose),
	alignof(FIKRetargetPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetPose()
{
	if (!Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton, Z_Construct_UScriptStruct_FIKRetargetPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton;
}
// End ScriptStruct FIKRetargetPose

// Begin Enum ERetargetSourceOrTarget
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERetargetSourceOrTarget;
static UEnum* ERetargetSourceOrTarget_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("ERetargetSourceOrTarget"));
	}
	return Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton;
}
template<> IKRIG_API UEnum* StaticEnum<ERetargetSourceOrTarget>()
{
	return ERetargetSourceOrTarget_StaticEnum();
}
struct Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// which skeleton are we referring to?\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "Source.Comment", "// the SOURCE skeleton (to copy FROM)\n" },
		{ "Source.Name", "ERetargetSourceOrTarget::Source" },
		{ "Source.ToolTip", "the SOURCE skeleton (to copy FROM)" },
		{ "Target.Comment", "// the TARGET skeleton (to copy TO)\n" },
		{ "Target.Name", "ERetargetSourceOrTarget::Target" },
		{ "Target.ToolTip", "the TARGET skeleton (to copy TO)" },
		{ "ToolTip", "which skeleton are we referring to?" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERetargetSourceOrTarget::Source", (int64)ERetargetSourceOrTarget::Source },
		{ "ERetargetSourceOrTarget::Target", (int64)ERetargetSourceOrTarget::Target },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
	nullptr,
	"ERetargetSourceOrTarget",
	"ERetargetSourceOrTarget",
	Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget()
{
	if (!Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton, Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton;
}
// End Enum ERetargetSourceOrTarget

// Begin Class UIKRetargeter Function GetChainSettingsFromRetargetAsset
struct Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics
{
	struct IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms
	{
		const UIKRetargeter* RetargetAsset;
		FName TargetChainName;
		FName OptionalProfileName;
		FTargetChainSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the chain settings associated with a given target chain in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the chain settings associated with a given target chain in an IK Retargeter Asset using the given profile name (optional)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalProfileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetAsset_MetaData), NewProp_RetargetAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, TargetChainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChainName_MetaData), NewProp_TargetChainName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName = { "OptionalProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, OptionalProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalProfileName_MetaData), NewProp_OptionalProfileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(0, nullptr) }; // 1728474851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_TargetChainName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetChainSettingsFromRetargetAsset", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execGetChainSettingsFromRetargetAsset)
{
	P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
	P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionalProfileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTargetChainSettings*)Z_Param__Result=UIKRetargeter::GetChainSettingsFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_TargetChainName,Z_Param_OptionalProfileName);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function GetChainSettingsFromRetargetAsset

// Begin Class UIKRetargeter Function GetChainSettingsFromRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics
{
	struct IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FName TargetChainName;
		FTargetChainSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns the chain settings associated with a given target chain in the supplied Retarget Profile. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the chain settings associated with a given target chain in the supplied Retarget Profile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChainName_MetaData), NewProp_TargetChainName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(0, nullptr) }; // 1728474851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_TargetChainName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetChainSettingsFromRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execGetChainSettingsFromRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTargetChainSettings*)Z_Param__Result=UIKRetargeter::GetChainSettingsFromRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_TargetChainName);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function GetChainSettingsFromRetargetProfile

// Begin Class UIKRetargeter Function GetChainUsingGoalFromRetargetAsset
struct Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics
{
	struct IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms
	{
		const UIKRetargeter* RetargetAsset;
		FName IKGoalName;
		FTargetChainSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the chain settings associated with a given Goal in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the chain settings associated with a given Goal in an IK Retargeter Asset using the given profile name (optional)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKGoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_IKGoalName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetAsset_MetaData), NewProp_RetargetAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_IKGoalName = { "IKGoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms, IKGoalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKGoalName_MetaData), NewProp_IKGoalName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(0, nullptr) }; // 1728474851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_RetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_IKGoalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetChainUsingGoalFromRetargetAsset", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execGetChainUsingGoalFromRetargetAsset)
{
	P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
	P_GET_PROPERTY(FNameProperty,Z_Param_IKGoalName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTargetChainSettings*)Z_Param__Result=UIKRetargeter::GetChainUsingGoalFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_IKGoalName);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function GetChainUsingGoalFromRetargetAsset

// Begin Class UIKRetargeter Function GetGlobalSettingsFromRetargetAsset
struct Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics
{
	struct IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms
	{
		const UIKRetargeter* RetargetAsset;
		FName OptionalProfileName;
		FRetargetGlobalSettings OutSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the global settings in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the global settings in an IK Retargeter Asset using the given profile name (optional)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutSettings_MetaData[] = {
		{ "DisplayName", "ReturnValue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalProfileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetAsset_MetaData), NewProp_RetargetAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName = { "OptionalProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms, OptionalProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalProfileName_MetaData), NewProp_OptionalProfileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms, OutSettings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutSettings_MetaData), NewProp_OutSettings_MetaData) }; // 2831607225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OutSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetGlobalSettingsFromRetargetAsset", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execGetGlobalSettingsFromRetargetAsset)
{
	P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionalProfileName);
	P_GET_STRUCT_REF(FRetargetGlobalSettings,Z_Param_Out_OutSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::GetGlobalSettingsFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_OptionalProfileName,Z_Param_Out_OutSettings);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function GetGlobalSettingsFromRetargetAsset

// Begin Class UIKRetargeter Function GetGlobalSettingsFromRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics
{
	struct IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FRetargetGlobalSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns the global settings in the supplied Retarget Profile. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the global settings in the supplied Retarget Profile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(0, nullptr) }; // 2831607225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetGlobalSettingsFromRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execGetGlobalSettingsFromRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRetargetGlobalSettings*)Z_Param__Result=UIKRetargeter::GetGlobalSettingsFromRetargetProfile(Z_Param_Out_RetargetProfile);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function GetGlobalSettingsFromRetargetProfile

// Begin Class UIKRetargeter Function GetRootSettingsFromRetargetAsset
struct Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics
{
	struct IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms
	{
		const UIKRetargeter* RetargetAsset;
		FName OptionalProfileName;
		FTargetRootSettings OutSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the root settings in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the root settings in an IK Retargeter Asset using the given profile name (optional)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutSettings_MetaData[] = {
		{ "DisplayName", "ReturnValue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalProfileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetAsset_MetaData), NewProp_RetargetAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName = { "OptionalProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms, OptionalProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalProfileName_MetaData), NewProp_OptionalProfileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms, OutSettings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutSettings_MetaData), NewProp_OutSettings_MetaData) }; // 4047107988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OutSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetRootSettingsFromRetargetAsset", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execGetRootSettingsFromRetargetAsset)
{
	P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
	P_GET_PROPERTY(FNameProperty,Z_Param_OptionalProfileName);
	P_GET_STRUCT_REF(FTargetRootSettings,Z_Param_Out_OutSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::GetRootSettingsFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_OptionalProfileName,Z_Param_Out_OutSettings);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function GetRootSettingsFromRetargetAsset

// Begin Class UIKRetargeter Function GetRootSettingsFromRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics
{
	struct IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FTargetRootSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns the root settings in the supplied Retarget Profile. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the root settings in the supplied Retarget Profile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(0, nullptr) }; // 4047107988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetRootSettingsFromRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execGetRootSettingsFromRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTargetRootSettings*)Z_Param__Result=UIKRetargeter::GetRootSettingsFromRetargetProfile(Z_Param_Out_RetargetProfile);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function GetRootSettingsFromRetargetProfile

// Begin Class UIKRetargeter Function HasSourceIKRig
struct Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics
{
	struct IKRetargeter_eventHasSourceIKRig_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns true if the source IK Rig has been assigned\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns true if the source IK Rig has been assigned" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IKRetargeter_eventHasSourceIKRig_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IKRetargeter_eventHasSourceIKRig_Parms), &Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "HasSourceIKRig", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::IKRetargeter_eventHasSourceIKRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::IKRetargeter_eventHasSourceIKRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execHasSourceIKRig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSourceIKRig();
	P_NATIVE_END;
}
// End Class UIKRetargeter Function HasSourceIKRig

// Begin Class UIKRetargeter Function HasTargetIKRig
struct Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics
{
	struct IKRetargeter_eventHasTargetIKRig_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns true if the target IK Rig has been assigned\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns true if the target IK Rig has been assigned" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IKRetargeter_eventHasTargetIKRig_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IKRetargeter_eventHasTargetIKRig_Parms), &Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "HasTargetIKRig", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::IKRetargeter_eventHasTargetIKRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::IKRetargeter_eventHasTargetIKRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execHasTargetIKRig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTargetIKRig();
	P_NATIVE_END;
}
// End Class UIKRetargeter Function HasTargetIKRig

// Begin Class UIKRetargeter Function SetChainFKSettingsInRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics
{
	struct IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FTargetChainFKSettings FKSettings;
		FName TargetChainName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain FK settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain FK settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FKSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FKSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_FKSettings = { "FKSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms, FKSettings), Z_Construct_UScriptStruct_FTargetChainFKSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FKSettings_MetaData), NewProp_FKSettings_MetaData) }; // 42226942
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChainName_MetaData), NewProp_TargetChainName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_FKSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainFKSettingsInRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execSetChainFKSettingsInRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_GET_STRUCT_REF(FTargetChainFKSettings,Z_Param_Out_FKSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::SetChainFKSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_FKSettings,Z_Param_TargetChainName);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function SetChainFKSettingsInRetargetProfile

// Begin Class UIKRetargeter Function SetChainIKSettingsInRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics
{
	struct IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FTargetChainIKSettings IKSettings;
		FName TargetChainName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain IK settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain IK settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IKSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IKSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_IKSettings = { "IKSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms, IKSettings), Z_Construct_UScriptStruct_FTargetChainIKSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IKSettings_MetaData), NewProp_IKSettings_MetaData) }; // 4005610105
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChainName_MetaData), NewProp_TargetChainName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_IKSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainIKSettingsInRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execSetChainIKSettingsInRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_GET_STRUCT_REF(FTargetChainIKSettings,Z_Param_Out_IKSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::SetChainIKSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_IKSettings,Z_Param_TargetChainName);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function SetChainIKSettingsInRetargetProfile

// Begin Class UIKRetargeter Function SetChainSettingsInRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics
{
	struct IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FTargetChainSettings ChainSettings;
		FName TargetChainName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChainSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_ChainSettings = { "ChainSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms, ChainSettings), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainSettings_MetaData), NewProp_ChainSettings_MetaData) }; // 1728474851
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChainName_MetaData), NewProp_TargetChainName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_ChainSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainSettingsInRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execSetChainSettingsInRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_GET_STRUCT_REF(FTargetChainSettings,Z_Param_Out_ChainSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::SetChainSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_ChainSettings,Z_Param_TargetChainName);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function SetChainSettingsInRetargetProfile

// Begin Class UIKRetargeter Function SetChainSpeedPlantSettingsInRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics
{
	struct IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FTargetChainSpeedPlantSettings SpeedPlantSettings;
		FName TargetChainName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain Speed Plant settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain Speed Plant settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedPlantSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedPlantSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_SpeedPlantSettings = { "SpeedPlantSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms, SpeedPlantSettings), Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedPlantSettings_MetaData), NewProp_SpeedPlantSettings_MetaData) }; // 2279172517
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetChainName_MetaData), NewProp_TargetChainName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_SpeedPlantSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainSpeedPlantSettingsInRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execSetChainSpeedPlantSettingsInRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_GET_STRUCT_REF(FTargetChainSpeedPlantSettings,Z_Param_Out_SpeedPlantSettings);
	P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_SpeedPlantSettings,Z_Param_TargetChainName);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function SetChainSpeedPlantSettingsInRetargetProfile

// Begin Class UIKRetargeter Function SetGlobalSettingsInRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics
{
	struct IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FRetargetGlobalSettings GlobalSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the global settings in a retarget profile (will set bApplyGlobalSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the global settings in a retarget profile (will set bApplyGlobalSettings to true)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms, GlobalSettings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSettings_MetaData), NewProp_GlobalSettings_MetaData) }; // 2831607225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_GlobalSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetGlobalSettingsInRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execSetGlobalSettingsInRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_GET_STRUCT_REF(FRetargetGlobalSettings,Z_Param_Out_GlobalSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::SetGlobalSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_GlobalSettings);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function SetGlobalSettingsInRetargetProfile

// Begin Class UIKRetargeter Function SetRootSettingsInRetargetProfile
struct Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics
{
	struct IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms
	{
		FRetargetProfile RetargetProfile;
		FTargetRootSettings RootSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the root settings in a retarget profile (will set bApplyRootSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the root settings in a retarget profile (will set bApplyRootSettings to true)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RootSettings = { "RootSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms, RootSettings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSettings_MetaData), NewProp_RootSettings_MetaData) }; // 4047107988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RootSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetRootSettingsInRetargetProfile", nullptr, nullptr, Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIKRetargeter::execSetRootSettingsInRetargetProfile)
{
	P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
	P_GET_STRUCT_REF(FTargetRootSettings,Z_Param_Out_RootSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIKRetargeter::SetRootSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_RootSettings);
	P_NATIVE_END;
}
// End Class UIKRetargeter Function SetRootSettingsInRetargetProfile

// Begin Class UIKRetargeter
void UIKRetargeter::StaticRegisterNativesUIKRetargeter()
{
	UClass* Class = UIKRetargeter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChainSettingsFromRetargetAsset", &UIKRetargeter::execGetChainSettingsFromRetargetAsset },
		{ "GetChainSettingsFromRetargetProfile", &UIKRetargeter::execGetChainSettingsFromRetargetProfile },
		{ "GetChainUsingGoalFromRetargetAsset", &UIKRetargeter::execGetChainUsingGoalFromRetargetAsset },
		{ "GetGlobalSettingsFromRetargetAsset", &UIKRetargeter::execGetGlobalSettingsFromRetargetAsset },
		{ "GetGlobalSettingsFromRetargetProfile", &UIKRetargeter::execGetGlobalSettingsFromRetargetProfile },
		{ "GetRootSettingsFromRetargetAsset", &UIKRetargeter::execGetRootSettingsFromRetargetAsset },
		{ "GetRootSettingsFromRetargetProfile", &UIKRetargeter::execGetRootSettingsFromRetargetProfile },
		{ "HasSourceIKRig", &UIKRetargeter::execHasSourceIKRig },
		{ "HasTargetIKRig", &UIKRetargeter::execHasTargetIKRig },
		{ "SetChainFKSettingsInRetargetProfile", &UIKRetargeter::execSetChainFKSettingsInRetargetProfile },
		{ "SetChainIKSettingsInRetargetProfile", &UIKRetargeter::execSetChainIKSettingsInRetargetProfile },
		{ "SetChainSettingsInRetargetProfile", &UIKRetargeter::execSetChainSettingsInRetargetProfile },
		{ "SetChainSpeedPlantSettingsInRetargetProfile", &UIKRetargeter::execSetChainSpeedPlantSettingsInRetargetProfile },
		{ "SetGlobalSettingsInRetargetProfile", &UIKRetargeter::execSetGlobalSettingsInRetargetProfile },
		{ "SetRootSettingsInRetargetProfile", &UIKRetargeter::execSetRootSettingsInRetargetProfile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargeter);
UClass* Z_Construct_UClass_UIKRetargeter_NoRegister()
{
	return UIKRetargeter::StaticClass();
}
struct Z_Construct_UClass_UIKRetargeter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Comment", "// incremented by any edits that require re-initialization\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "incremented by any edits that require re-initialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceIKRigAsset_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "// The rig to copy animation FROM.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The rig to copy animation FROM." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreviewMesh_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "// Optional. Override the Skeletal Mesh to copy animation from. Uses the preview mesh from the Source IK Rig asset by default. \n" },
		{ "EditCondition", "HasSourceIKRig" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Optional. Override the Skeletal Mesh to copy animation from. Uses the preview mesh from the Source IK Rig asset by default." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIKRigAsset_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// The rig to copy animation TO.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The rig to copy animation TO." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPreviewMesh_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Optional. Override the Skeletal Mesh to preview the retarget on. Uses the preview mesh from the Target IK Rig asset by default. \n" },
		{ "EditCondition", "HasTargetIKRig" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Optional. Override the Skeletal Mesh to preview the retarget on. Uses the preview mesh from the Target IK Rig asset by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetFK_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetIK_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshOffset_MetaData[] = {
		{ "Category", "PreviewSettings" },
		{ "Comment", "// The offset applied to the target mesh in the editor viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The offset applied to the target mesh in the editor viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshScale_MetaData[] = {
		{ "Category", "PreviewSettings" },
		{ "Comment", "// Scale the target mesh in the viewport for easier visualization next to the source.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Scale the target mesh in the viewport for easier visualization next to the source." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshOffset_MetaData[] = {
		{ "Category", "PreviewSettings" },
		{ "Comment", "// The offset applied to the source mesh in the editor viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The offset applied to the source mesh in the editor viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRootLockInPreview_MetaData[] = {
		{ "Category", "RootLockSettings" },
		{ "Comment", "// When true, animation sequences with \"Force Root Lock\" turned On will act as though it is Off.\n// This affects only the preview in the retarget editor. Use ExportRootLockMode to control exported animation behavior.\n// This setting has no effect on runtime retargeting where root motion is copied from the source component.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "When true, animation sequences with \"Force Root Lock\" turned On will act as though it is Off.\nThis affects only the preview in the retarget editor. Use ExportRootLockMode to control exported animation behavior.\nThis setting has no effect on runtime retargeting where root motion is copied from the source component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// Toggle debug drawing for retargeting in the viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Toggle debug drawing for retargeting in the viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFinalGoals_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// Draw final IK goal locations. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Draw final IK goal locations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSourceLocations_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// Draw goal locations from source skeleton. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Draw goal locations from source skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainDrawSize_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// The visual size of the IK goals in the viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The visual size of the IK goals in the viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainDrawThickness_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// The thickness of lines on the IK goals in the viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The thickness of lines on the IK goals in the viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneDrawSize_MetaData[] = {
		{ "Comment", "// The visual size of the bones in the viewport (saved between sessions). This is set from the viewport Character>Bones menu\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The visual size of the bones in the viewport (saved between sessions). This is set from the viewport Character>Bones menu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Comment", "// The controller responsible for managing this asset's data (all editor mutation goes through this)\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The controller responsible for managing this asset's data (all editor mutation goes through this)" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainMapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainSettings_MetaData[] = {
		{ "Comment", "// Settings for how to map source chains to target chains.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Settings for how to map source chains to target chains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSettings_MetaData[] = {
		{ "Comment", "// the retarget root settings \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "the retarget root settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[] = {
		{ "Comment", "// the retarget root settings \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "the retarget root settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpStack_MetaData[] = {
		{ "Comment", "// the stack of ops to run after the retarget\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "the stack of ops to run after the retarget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[] = {
		{ "Comment", "// settings profiles stored in this asset \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "settings profiles stored in this asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRetargetPoses_MetaData[] = {
		{ "Comment", "// The set of retarget poses for the SOURCE skeleton.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The set of retarget poses for the SOURCE skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRetargetPoses_MetaData[] = {
		{ "Comment", "// The set of retarget poses for the TARGET skeleton.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The set of retarget poses for the TARGET skeleton." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSourceRetargetPose_MetaData[] = {
		{ "Comment", "// The current retarget pose to use for the SOURCE.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The current retarget pose to use for the SOURCE." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetRetargetPose_MetaData[] = {
		{ "Comment", "// The current retarget pose to use for the TARGET.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The current retarget pose to use for the TARGET." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetPoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetPose_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceIKRigAsset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourcePreviewMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetIKRigAsset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetPreviewMesh;
	static void NewProp_bRetargetRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetRoot;
	static void NewProp_bRetargetFK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetFK;
	static void NewProp_bRetargetIK_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetIK;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetActorOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetActorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetMeshOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMeshOffset;
	static void NewProp_bIgnoreRootLockInPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRootLockInPreview;
	static void NewProp_bDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
	static void NewProp_bDrawFinalGoals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFinalGoals;
	static void NewProp_bDrawSourceLocations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSourceLocations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainDrawSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainDrawThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneDrawSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChainMapping_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChainMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChainSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChainSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpStack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Profiles_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Profiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Profiles;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRetargetPoses_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceRetargetPoses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SourceRetargetPoses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRetargetPoses_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRetargetPoses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetRetargetPoses;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentSourceRetargetPose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentTargetRetargetPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetPoses_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetPoses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RetargetPoses;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRetargetPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset, "GetChainSettingsFromRetargetAsset" }, // 2469489864
		{ &Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile, "GetChainSettingsFromRetargetProfile" }, // 86702719
		{ &Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset, "GetChainUsingGoalFromRetargetAsset" }, // 2778399303
		{ &Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset, "GetGlobalSettingsFromRetargetAsset" }, // 2574047748
		{ &Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile, "GetGlobalSettingsFromRetargetProfile" }, // 1552044306
		{ &Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset, "GetRootSettingsFromRetargetAsset" }, // 2440734758
		{ &Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile, "GetRootSettingsFromRetargetProfile" }, // 727357282
		{ &Z_Construct_UFunction_UIKRetargeter_HasSourceIKRig, "HasSourceIKRig" }, // 1150412517
		{ &Z_Construct_UFunction_UIKRetargeter_HasTargetIKRig, "HasTargetIKRig" }, // 795536068
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile, "SetChainFKSettingsInRetargetProfile" }, // 3820472719
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile, "SetChainIKSettingsInRetargetProfile" }, // 4028254755
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile, "SetChainSettingsInRetargetProfile" }, // 196909940
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, "SetChainSpeedPlantSettingsInRetargetProfile" }, // 2999792357
		{ &Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile, "SetGlobalSettingsInRetargetProfile" }, // 4150074221
		{ &Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile, "SetRootSettingsInRetargetProfile" }, // 2204394516
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargeter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset = { "SourceIKRigAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, SourceIKRigAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceIKRigAsset_MetaData), NewProp_SourceIKRigAsset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourcePreviewMesh = { "SourcePreviewMesh", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, SourcePreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePreviewMesh_MetaData), NewProp_SourcePreviewMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset = { "TargetIKRigAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, TargetIKRigAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIKRigAsset_MetaData), NewProp_TargetIKRigAsset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh = { "TargetPreviewMesh", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, TargetPreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPreviewMesh_MetaData), NewProp_TargetPreviewMesh_MetaData) };
void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_SetBit(void* Obj)
{
	((UIKRetargeter*)Obj)->bRetargetRoot_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot = { "bRetargetRoot", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetargetRoot_MetaData), NewProp_bRetargetRoot_MetaData) };
void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_SetBit(void* Obj)
{
	((UIKRetargeter*)Obj)->bRetargetFK_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK = { "bRetargetFK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetargetFK_MetaData), NewProp_bRetargetFK_MetaData) };
void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_SetBit(void* Obj)
{
	((UIKRetargeter*)Obj)->bRetargetIK_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK = { "bRetargetIK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetargetIK_MetaData), NewProp_bRetargetIK_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset = { "TargetActorOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, TargetActorOffset_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorOffset_MetaData), NewProp_TargetActorOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale = { "TargetActorScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, TargetActorScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorScale_MetaData), NewProp_TargetActorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshOffset = { "TargetMeshOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, TargetMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshOffset_MetaData), NewProp_TargetMeshOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshScale = { "TargetMeshScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, TargetMeshScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshScale_MetaData), NewProp_TargetMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceMeshOffset = { "SourceMeshOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, SourceMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMeshOffset_MetaData), NewProp_SourceMeshOffset_MetaData) };
void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bIgnoreRootLockInPreview_SetBit(void* Obj)
{
	((UIKRetargeter*)Obj)->bIgnoreRootLockInPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bIgnoreRootLockInPreview = { "bIgnoreRootLockInPreview", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bIgnoreRootLockInPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreRootLockInPreview_MetaData), NewProp_bIgnoreRootLockInPreview_MetaData) };
void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
{
	((UIKRetargeter*)Obj)->bDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDraw_MetaData), NewProp_bDebugDraw_MetaData) };
void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals_SetBit(void* Obj)
{
	((UIKRetargeter*)Obj)->bDrawFinalGoals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals = { "bDrawFinalGoals", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFinalGoals_MetaData), NewProp_bDrawFinalGoals_MetaData) };
void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations_SetBit(void* Obj)
{
	((UIKRetargeter*)Obj)->bDrawSourceLocations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations = { "bDrawSourceLocations", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSourceLocations_MetaData), NewProp_bDrawSourceLocations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawSize = { "ChainDrawSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, ChainDrawSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainDrawSize_MetaData), NewProp_ChainDrawSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawThickness = { "ChainDrawThickness", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, ChainDrawThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainDrawThickness_MetaData), NewProp_ChainDrawThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize = { "BoneDrawSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, BoneDrawSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneDrawSize_MetaData), NewProp_BoneDrawSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000c00202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, Controller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_Inner = { "ChainMapping", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRetargetChainMap, METADATA_PARAMS(0, nullptr) }; // 4138886755
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping = { "ChainMapping", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, ChainMapping_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainMapping_MetaData), NewProp_ChainMapping_MetaData) }; // 4138886755
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_Inner = { "ChainSettings", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URetargetChainSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings = { "ChainSettings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, ChainSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainSettings_MetaData), NewProp_ChainSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RootSettings = { "RootSettings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, RootSettings), Z_Construct_UClass_URetargetRootSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSettings_MetaData), NewProp_RootSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, GlobalSettings), Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalSettings_MetaData), NewProp_GlobalSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_OpStack = { "OpStack", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, OpStack), Z_Construct_UClass_URetargetOpStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpStack_MetaData), NewProp_OpStack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_ValueProp = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(0, nullptr) }; // 1037262547
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_Key_KeyProp = { "Profiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, Profiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profiles_MetaData), NewProp_Profiles_MetaData) }; // 1037262547
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentProfile = { "CurrentProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, CurrentProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProfile_MetaData), NewProp_CurrentProfile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_ValueProp = { "SourceRetargetPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(0, nullptr) }; // 2040105855
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_Key_KeyProp = { "SourceRetargetPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses = { "SourceRetargetPoses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, SourceRetargetPoses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRetargetPoses_MetaData), NewProp_SourceRetargetPoses_MetaData) }; // 2040105855
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_ValueProp = { "TargetRetargetPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(0, nullptr) }; // 2040105855
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_Key_KeyProp = { "TargetRetargetPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses = { "TargetRetargetPoses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, TargetRetargetPoses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRetargetPoses_MetaData), NewProp_TargetRetargetPoses_MetaData) }; // 2040105855
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentSourceRetargetPose = { "CurrentSourceRetargetPose", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, CurrentSourceRetargetPose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSourceRetargetPose_MetaData), NewProp_CurrentSourceRetargetPose_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentTargetRetargetPose = { "CurrentTargetRetargetPose", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, CurrentTargetRetargetPose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTargetRetargetPose_MetaData), NewProp_CurrentTargetRetargetPose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_ValueProp = { "RetargetPoses", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(0, nullptr) }; // 2040105855
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_Key_KeyProp = { "RetargetPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses = { "RetargetPoses", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, RetargetPoses_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetPoses_MetaData), NewProp_RetargetPoses_MetaData) }; // 2040105855
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose = { "CurrentRetargetPose", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIKRetargeter, CurrentRetargetPose_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRetargetPose_MetaData), NewProp_CurrentRetargetPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargeter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourcePreviewMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceMeshOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bIgnoreRootLockInPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RootSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_GlobalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_OpStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentSourceRetargetPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentTargetRetargetPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIKRetargeter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargeter_Statics::ClassParams = {
	&UIKRetargeter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIKRetargeter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams), Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIKRetargeter()
{
	if (!Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton, Z_Construct_UClass_UIKRetargeter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton;
}
template<> IKRIG_API UClass* StaticClass<UIKRetargeter>()
{
	return UIKRetargeter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargeter);
UIKRetargeter::~UIKRetargeter() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UIKRetargeter)
// End Class UIKRetargeter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERetargetSourceOrTarget_StaticEnum, TEXT("ERetargetSourceOrTarget"), &Z_Registration_Info_UEnum_ERetargetSourceOrTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2286967204U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRetargetChainMap::StaticStruct, Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewStructOps, TEXT("RetargetChainMap"), &Z_Registration_Info_UScriptStruct_RetargetChainMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRetargetChainMap), 4138886755U) },
		{ FIKRetargetPose::StaticStruct, Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewStructOps, TEXT("IKRetargetPose"), &Z_Registration_Info_UScriptStruct_IKRetargetPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRetargetPose), 2040105855U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URetargetChainSettings, URetargetChainSettings::StaticClass, TEXT("URetargetChainSettings"), &Z_Registration_Info_UClass_URetargetChainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetargetChainSettings), 2465941499U) },
		{ Z_Construct_UClass_URetargetRootSettings, URetargetRootSettings::StaticClass, TEXT("URetargetRootSettings"), &Z_Registration_Info_UClass_URetargetRootSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetargetRootSettings), 1086993538U) },
		{ Z_Construct_UClass_UIKRetargetGlobalSettings, UIKRetargetGlobalSettings::StaticClass, TEXT("UIKRetargetGlobalSettings"), &Z_Registration_Info_UClass_UIKRetargetGlobalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetGlobalSettings), 2720508004U) },
		{ Z_Construct_UClass_UIKRetargeter, UIKRetargeter::StaticClass, TEXT("UIKRetargeter"), &Z_Registration_Info_UClass_UIKRetargeter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargeter), 3851074343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_2791591652(TEXT("/Script/IKRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
