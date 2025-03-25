// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Public/PerQualityLevelProperties.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshLODSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneFilterActionOption();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneFilter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EBoneFilterActionOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneFilterActionOption;
static UEnum* EBoneFilterActionOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoneFilterActionOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoneFilterActionOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneFilterActionOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneFilterActionOption"));
	}
	return Z_Registration_Info_UEnum_EBoneFilterActionOption.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EBoneFilterActionOption>()
{
	return EBoneFilterActionOption_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Comment", "/** Invalid*/" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EBoneFilterActionOption::Invalid" },
		{ "Invalid.ToolTip", "Invalid" },
		{ "Keep.Comment", "/** Only keep the joints specified and parents. All the other joints will be removed. */" },
		{ "Keep.DisplayName", "Only keep the joints specified and parents" },
		{ "Keep.Name", "EBoneFilterActionOption::Keep" },
		{ "Keep.ToolTip", "Only keep the joints specified and parents. All the other joints will be removed." },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "Remove.Comment", "/** Remove list of joints specified and children. All the other joints will be kept. */" },
		{ "Remove.DisplayName", "Remove the joints specified and children" },
		{ "Remove.Name", "EBoneFilterActionOption::Remove" },
		{ "Remove.ToolTip", "Remove list of joints specified and children. All the other joints will be kept." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBoneFilterActionOption::Remove", (int64)EBoneFilterActionOption::Remove },
		{ "EBoneFilterActionOption::Keep", (int64)EBoneFilterActionOption::Keep },
		{ "EBoneFilterActionOption::Invalid", (int64)EBoneFilterActionOption::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EBoneFilterActionOption",
	"EBoneFilterActionOption",
	Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EBoneFilterActionOption()
{
	if (!Z_Registration_Info_UEnum_EBoneFilterActionOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneFilterActionOption.InnerSingleton, Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoneFilterActionOption.InnerSingleton;
}
// End Enum EBoneFilterActionOption

// Begin ScriptStruct FBoneFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneFilter;
class UScriptStruct* FBoneFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BoneFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneFilter>()
{
	return FBoneFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoneFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeSelf_MetaData[] = {
		{ "Category", "FBoneFilter" },
		{ "Comment", "/*\n\x09 * Do not include the joint specified\n\x09 *\n\x09 * This option will work differently based on EBoneFilterActionOption\n\x09 * If EBoneFilterActionOption is Remove, it will exclude itself and only remove children\n\x09 * For example, if you specify hand, it will only include children of hand(all fingers), \n\x09 * not the hand itself if this is true\n\x09 * \n\x09 * But if the EBoneFilterActionOption is Keep, it will exclude itself but include all parents of it \n\x09 * You can't remove joint without children removed, and you can't keep without your parents \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "* Do not include the joint specified\n*\n* This option will work differently based on EBoneFilterActionOption\n* If EBoneFilterActionOption is Remove, it will exclude itself and only remove children\n* For example, if you specify hand, it will only include children of hand(all fingers),\n* not the hand itself if this is true\n*\n* But if the EBoneFilterActionOption is Keep, it will exclude itself but include all parents of it\n* You can't remove joint without children removed, and you can't keep without your parents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "FBoneFilter" },
		{ "Comment", "/* Name of Bone Name */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Name of Bone Name" },
	};
#endif // WITH_METADATA
	static void NewProp_bExcludeSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeSelf;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_SetBit(void* Obj)
{
	((FBoneFilter*)Obj)->bExcludeSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf = { "bExcludeSelf", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoneFilter), &Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeSelf_MetaData), NewProp_bExcludeSelf_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneFilter, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BoneFilter",
	Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers),
	sizeof(FBoneFilter),
	alignof(FBoneFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneFilter()
{
	if (!Z_Registration_Info_UScriptStruct_BoneFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneFilter.InnerSingleton, Z_Construct_UScriptStruct_FBoneFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoneFilter.InnerSingleton;
}
// End ScriptStruct FBoneFilter

// Begin ScriptStruct FSkeletalMeshLODGroupSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings;
class UScriptStruct* FSkeletalMeshLODGroupSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshLODGroupSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshLODGroupSettings>()
{
	return FSkeletalMeshLODGroupSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "LODSetting" },
		{ "Comment", "/** The screen sizes to use for the respective LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "The screen sizes to use for the respective LOD level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODHysteresis_MetaData[] = {
		{ "Category", "LODSetting" },
		{ "Comment", "/**\x09Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneFilterActionOption_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneList_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesToPrioritize_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionsToPrioritize_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Sections which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Sections which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightOfPrioritization_MetaData[] = {
		{ "Category", "Reduction" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to consideration to give BonesToPrioritize and SectionsToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "How much to consideration to give BonesToPrioritize and SectionsToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** The optimization settings to use for the respective LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "The optimization settings to use for the respective LOD level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMeshDeformer_MetaData[] = {
		{ "Category", "LODSetting" },
		{ "Comment", "/** Whether a Mesh Deformer applied to the mesh asset or Skinned Mesh Component should be used on this LOD or not */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Whether a Mesh Deformer applied to the mesh asset or Skinned Mesh Component should be used on this LOD or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODHysteresis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneFilterActionOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneFilterActionOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneList;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BonesToPrioritize_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToPrioritize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionsToPrioritize_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionsToPrioritize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightOfPrioritization;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
	static void NewProp_bAllowMeshDeformer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMeshDeformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshLODGroupSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) }; // 50753708
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis = { "LODHysteresis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, LODHysteresis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODHysteresis_MetaData), NewProp_LODHysteresis_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption = { "BoneFilterActionOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BoneFilterActionOption), Z_Construct_UEnum_Engine_EBoneFilterActionOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneFilterActionOption_MetaData), NewProp_BoneFilterActionOption_MetaData) }; // 2689075387
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_Inner = { "BoneList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneFilter, METADATA_PARAMS(0, nullptr) }; // 658216895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList = { "BoneList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BoneList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneList_MetaData), NewProp_BoneList_MetaData) }; // 658216895
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_Inner = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BonesToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesToPrioritize_MetaData), NewProp_BonesToPrioritize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize_Inner = { "SectionsToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize = { "SectionsToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, SectionsToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionsToPrioritize_MetaData), NewProp_SectionsToPrioritize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization = { "WeightOfPrioritization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, WeightOfPrioritization), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightOfPrioritization_MetaData), NewProp_WeightOfPrioritization_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose = { "BakePose", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BakePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakePose_MetaData), NewProp_BakePose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ReductionSettings), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReductionSettings_MetaData), NewProp_ReductionSettings_MetaData) }; // 3903286612
void Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_bAllowMeshDeformer_SetBit(void* Obj)
{
	((FSkeletalMeshLODGroupSettings*)Obj)->bAllowMeshDeformer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_bAllowMeshDeformer = { "bAllowMeshDeformer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkeletalMeshLODGroupSettings), &Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_bAllowMeshDeformer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMeshDeformer_MetaData), NewProp_bAllowMeshDeformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_bAllowMeshDeformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SkeletalMeshLODGroupSettings",
	Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers),
	sizeof(FSkeletalMeshLODGroupSettings),
	alignof(FSkeletalMeshLODGroupSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshLODGroupSettings

// Begin Class USkeletalMeshLODSettings
void USkeletalMeshLODSettings::StaticRegisterNativesUSkeletalMeshLODSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshLODSettings);
UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister()
{
	return USkeletalMeshLODSettings::StaticClass();
}
struct Z_Construct_UClass_USkeletalMeshLODSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/SkeletalMeshLODSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinQualityLevelLod_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Minimum Quality Level LOD to render. Can be overridden per mesh as well as set here for all mesh instances */" },
		{ "DisplayName", "Quality Level Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Minimum Quality Level LOD to render. Can be overridden per mesh as well as set here for all mesh instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLod_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Minimum LOD to render. Can be overridden per mesh as well as set here for all mesh instances */" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Minimum LOD to render. Can be overridden per mesh as well as set here for all mesh instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** When true LODs below MinLod will not be stripped during cook. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "When true LODs below MinLod will not be stripped during cook." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODStreamingSettings_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Whether meshes in this group override default LOD streaming settings. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Whether meshes in this group override default LOD streaming settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLODStreaming_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Whether meshes in this group stream LODs by default */" },
		{ "DisplayName", "Stream LODs" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Whether meshes in this group stream LODs by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumStreamedLODs_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Default maximum number of streamed LODs for meshes in this group */" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Default maximum number of streamed LODs for meshes in this group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOptionalLODs_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Default maximum number of optional LODs for meshes in this group (currently, need to be either 0 or > num of LODs below MinLod) */" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Default maximum number of optional LODs for meshes in this group (currently, need to be either 0 or > num of LODs below MinLod)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODGroups_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinQualityLevelLod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinLod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
	static void NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODStreamingSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bSupportLODStreaming;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumStreamedLODs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumOptionalLODs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshLODSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinQualityLevelLod = { "MinQualityLevelLod", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, MinQualityLevelLod), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinQualityLevelLod_MetaData), NewProp_MinQualityLevelLod_MetaData) }; // 178663833
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod = { "MinLod", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, MinLod), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLod_MetaData), NewProp_MinLod_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableBelowMinLodStripping_MetaData), NewProp_DisableBelowMinLodStripping_MetaData) }; // 846681800
void Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj)
{
	((USkeletalMeshLODSettings*)Obj)->bOverrideLODStreamingSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings = { "bOverrideLODStreamingSettings", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkeletalMeshLODSettings), &Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLODStreamingSettings_MetaData), NewProp_bOverrideLODStreamingSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming = { "bSupportLODStreaming", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, bSupportLODStreaming), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLODStreaming_MetaData), NewProp_bSupportLODStreaming_MetaData) }; // 846681800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs = { "MaxNumStreamedLODs", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, MaxNumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumStreamedLODs_MetaData), NewProp_MaxNumStreamedLODs_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs = { "MaxNumOptionalLODs", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, MaxNumOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumOptionalLODs_MetaData), NewProp_MaxNumOptionalLODs_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_Inner = { "LODGroups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, METADATA_PARAMS(0, nullptr) }; // 2419662094
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups = { "LODGroups", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkeletalMeshLODSettings, LODGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODGroups_MetaData), NewProp_LODGroups_MetaData) }; // 2419662094
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinQualityLevelLod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkeletalMeshLODSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::ClassParams = {
	&USkeletalMeshLODSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkeletalMeshLODSettings()
{
	if (!Z_Registration_Info_UClass_USkeletalMeshLODSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshLODSettings.OuterSingleton, Z_Construct_UClass_USkeletalMeshLODSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkeletalMeshLODSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkeletalMeshLODSettings>()
{
	return USkeletalMeshLODSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshLODSettings);
USkeletalMeshLODSettings::~USkeletalMeshLODSettings() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshLODSettings)
// End Class USkeletalMeshLODSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBoneFilterActionOption_StaticEnum, TEXT("EBoneFilterActionOption"), &Z_Registration_Info_UEnum_EBoneFilterActionOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2689075387U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoneFilter::StaticStruct, Z_Construct_UScriptStruct_FBoneFilter_Statics::NewStructOps, TEXT("BoneFilter"), &Z_Registration_Info_UScriptStruct_BoneFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneFilter), 658216895U) },
		{ FSkeletalMeshLODGroupSettings::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewStructOps, TEXT("SkeletalMeshLODGroupSettings"), &Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshLODGroupSettings), 2419662094U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshLODSettings, USkeletalMeshLODSettings::StaticClass, TEXT("USkeletalMeshLODSettings"), &Z_Registration_Info_UClass_USkeletalMeshLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshLODSettings), 948584742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_437123747(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
