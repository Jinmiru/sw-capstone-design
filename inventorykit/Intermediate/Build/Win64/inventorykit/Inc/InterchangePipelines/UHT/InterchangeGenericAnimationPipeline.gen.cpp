// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeGenericAnimationPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericAnimationPipeline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Enum EInterchangeAnimationRange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeAnimationRange;
static UEnum* EInterchangeAnimationRange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeAnimationRange"));
	}
	return Z_Registration_Info_UEnum_EInterchangeAnimationRange.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeAnimationRange>()
{
	return EInterchangeAnimationRange_StaticEnum();
}
struct Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Animated.Comment", "/** This option imports the range of frames that have animation. */" },
		{ "Animated.DisplayName", "Animated Time" },
		{ "Animated.Name", "EInterchangeAnimationRange::Animated" },
		{ "Animated.ToolTip", "This option imports the range of frames that have animation." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Animation length type when importing. */" },
		{ "MAX.Name", "EInterchangeAnimationRange::MAX" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SetRange.Comment", "/** This option imports the range of frames specified by \"FrameImportRange\". */" },
		{ "SetRange.DisplayName", "Set Range" },
		{ "SetRange.Name", "EInterchangeAnimationRange::SetRange" },
		{ "SetRange.ToolTip", "This option imports the range of frames specified by \"FrameImportRange\"." },
		{ "Timeline.Comment", "/** This option imports the range of frames based on timeline definition in the source. */" },
		{ "Timeline.DisplayName", "Source Timeline" },
		{ "Timeline.Name", "EInterchangeAnimationRange::Timeline" },
		{ "Timeline.ToolTip", "This option imports the range of frames based on timeline definition in the source." },
		{ "ToolTip", "Animation length type when importing." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeAnimationRange::Timeline", (int64)EInterchangeAnimationRange::Timeline },
		{ "EInterchangeAnimationRange::Animated", (int64)EInterchangeAnimationRange::Animated },
		{ "EInterchangeAnimationRange::SetRange", (int64)EInterchangeAnimationRange::SetRange },
		{ "EInterchangeAnimationRange::MAX", (int64)EInterchangeAnimationRange::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
	nullptr,
	"EInterchangeAnimationRange",
	"EInterchangeAnimationRange",
	Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange()
{
	if (!Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeAnimationRange.InnerSingleton;
}
// End Enum EInterchangeAnimationRange

// Begin Class UInterchangeGenericAnimationPipeline
void UInterchangeGenericAnimationPipeline::StaticRegisterNativesUInterchangeGenericAnimationPipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericAnimationPipeline);
UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister()
{
	return UInterchangeGenericAnimationPipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericAnimationPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[] = {
		{ "Comment", "//Common SkeletalMeshes And Animations Properties Settings Pointer\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Common SkeletalMeshes And Animations Properties Settings Pointer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonMeshesProperties_MetaData[] = {
		{ "Comment", "//Common Meshes Properties Settings Pointer\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Common Meshes Properties Settings Pointer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAnimations_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enabled, import all animation assets found in the source. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If enabled, import all animation assets found in the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportBoneTracks_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Import bone transform tracks. If false, this will discard any bone transform tracks.*/" },
		{ "EditCondition", "bImportAnimations" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Import bone transform tracks. If false, this will discard any bone transform tracks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationRange_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Determines which animation range to import: the range defined at export, the range of frames with animation, or a manually defined range. */" },
		{ "DisplayName", "Animation Length" },
		{ "EditCondition", "bImportAnimations && bImportBoneTracks" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Determines which animation range to import: the range defined at export, the range of frames with animation, or a manually defined range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameImportRange_MetaData[] = {
		{ "Category", "Animations" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The frame range used when the Animation Length setting is set to Set Range. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "The frame range used when the Animation Length setting is set to Set Range." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUse30HzToBakeBoneAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "EditCondition", "bImportAnimations && bImportBoneTracks" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If enabled, samples all animation curves to 30 FPS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomBoneAnimationSampleRate_MetaData[] = {
		{ "Category", "Animations" },
		{ "ClampMax", "48000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bImportAnimations && bImportBoneTracks && !bUse30HzToBakeBoneAnimation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Sample fbx animation data at the specified sample rate, 0 find automaticaly the best sample rate" },
		{ "UIMax", "60" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToClosestFrameBoundary_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enabled, snaps the animation to the closest frame boundary using the import sampling rate. */" },
		{ "EditCondition", "bImportAnimations && bImportBoneTracks" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "If enabled, snaps the animation to the closest frame boundary using the import sampling rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportCustomAttribute_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enabled, import node attributes as either Animation Curves or Animation Attributes. */" },
		{ "DisplayName", "Import Attributes as Curves or Animation Attributes" },
		{ "EditCondition", "bImportAnimations" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "If enabled, import node attributes as either Animation Curves or Animation Attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddCurveMetadataToSkeleton_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Determines whether to automatically add curve metadata to an animation's skeleton. If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves. */" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "Determines whether to automatically add curve metadata to an animation's skeleton. If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Set the material curve type for all custom attributes. */" },
		{ "DisplayName", "Set Material Curve Type" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "Set the material curve type for all custom attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixes_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** Set the Material Curve Type for custom attributes that have the specified suffixes. This setting is not used if the Set Material Curve Type setting is enabled.  */" },
		{ "DisplayName", "Material Curve Suffixes" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute && bSetMaterialDriveParameterOnCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "Set the Material Curve Type for custom attributes that have the specified suffixes. This setting is not used if the Set Material Curve Type setting is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveCurveRedundantKeys_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** When importing custom attributes as curves, remove redundant keys. */" },
		{ "DisplayName", "Remove Redundant Keys" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "When importing custom attributes as curves, remove redundant keys." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotImportCurveWithZero_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** When importing a custom attribute or morph target as a curve, only import if it has a value other than zero. This avoids adding extra curves to evaluate. */" },
		{ "DisplayName", "Do not import curves with only 0 values" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "When importing a custom attribute or morph target as a curve, only import if it has a value other than zero. This avoids adding extra curves to evaluate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enabled, all previous node attributes imported as Animation Attributes will be deleted when doing a reimport. */" },
		{ "DisplayName", "Delete existing Animation Attributes" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "If enabled, all previous node attributes imported as Animation Attributes will be deleted when doing a reimport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingCustomAttributeCurves_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enabled, all previous node attributes imported as Animation Curves will be deleted when doing a reimport. */" },
		{ "DisplayName", "Delete existing Animation Curves" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "If enabled, all previous node attributes imported as Animation Curves will be deleted when doing a reimport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingMorphTargetCurves_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** If enabled, all previous morph target curves will be deleted when doing a reimport. */" },
		{ "DisplayName", "Delete existing Morph Target Curves" },
		{ "EditCondition", "bImportAnimations && bImportCustomAttribute" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "SubCategory", "Curves" },
		{ "ToolTip", "If enabled, all previous morph target curves will be deleted when doing a reimport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimationName_MetaData[] = {
		{ "Comment", "/** Name of the source animation that was imported. This is used to reimport correct animation from the translated source. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Name of the source animation that was imported. This is used to reimport correct animation from the translated source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSceneImport_MetaData[] = {
		{ "Comment", "// Set as a property to carry this value over during a duplicate\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAnimationPipeline.h" },
		{ "ToolTip", "Set as a property to carry this value over during a duplicate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CommonSkeletalMeshesAndAnimationsProperties;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CommonMeshesProperties;
	static void NewProp_bImportAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAnimations;
	static void NewProp_bImportBoneTracks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportBoneTracks;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationRange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameImportRange;
	static void NewProp_bUse30HzToBakeBoneAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse30HzToBakeBoneAnimation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomBoneAnimationSampleRate;
	static void NewProp_bSnapToClosestFrameBoundary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToClosestFrameBoundary;
	static void NewProp_bImportCustomAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCustomAttribute;
	static void NewProp_bAddCurveMetadataToSkeleton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddCurveMetadataToSkeleton;
	static void NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetMaterialDriveParameterOnCustomAttribute;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialCurveSuffixes;
	static void NewProp_bRemoveCurveRedundantKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveCurveRedundantKeys;
	static void NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotImportCurveWithZero;
	static void NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingNonCurveCustomAttributes;
	static void NewProp_bDeleteExistingCustomAttributeCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingCustomAttributeCurves;
	static void NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingMorphTargetCurves;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceAnimationName;
	static void NewProp_bSceneImport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSceneImport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericAnimationPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties = { "CommonSkeletalMeshesAndAnimationsProperties", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, CommonSkeletalMeshesAndAnimationsProperties), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData), NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonMeshesProperties = { "CommonMeshesProperties", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, CommonMeshesProperties), Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonMeshesProperties_MetaData), NewProp_CommonMeshesProperties_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bImportAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations = { "bImportAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAnimations_MetaData), NewProp_bImportAnimations_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bImportBoneTracks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks = { "bImportBoneTracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportBoneTracks_MetaData), NewProp_bImportBoneTracks_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange = { "AnimationRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, AnimationRange), Z_Construct_UEnum_InterchangePipelines_EInterchangeAnimationRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationRange_MetaData), NewProp_AnimationRange_MetaData) }; // 2096288024
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_FrameImportRange = { "FrameImportRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, FrameImportRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameImportRange_MetaData), NewProp_FrameImportRange_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bUse30HzToBakeBoneAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation = { "bUse30HzToBakeBoneAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUse30HzToBakeBoneAnimation_MetaData), NewProp_bUse30HzToBakeBoneAnimation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CustomBoneAnimationSampleRate = { "CustomBoneAnimationSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, CustomBoneAnimationSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomBoneAnimationSampleRate_MetaData), NewProp_CustomBoneAnimationSampleRate_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bSnapToClosestFrameBoundary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary = { "bSnapToClosestFrameBoundary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToClosestFrameBoundary_MetaData), NewProp_bSnapToClosestFrameBoundary_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bImportCustomAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute = { "bImportCustomAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportCustomAttribute_MetaData), NewProp_bImportCustomAttribute_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bAddCurveMetadataToSkeleton_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bAddCurveMetadataToSkeleton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bAddCurveMetadataToSkeleton = { "bAddCurveMetadataToSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bAddCurveMetadataToSkeleton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddCurveMetadataToSkeleton_MetaData), NewProp_bAddCurveMetadataToSkeleton_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bSetMaterialDriveParameterOnCustomAttribute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute = { "bSetMaterialDriveParameterOnCustomAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData), NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes_Inner = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, MaterialCurveSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCurveSuffixes_MetaData), NewProp_MaterialCurveSuffixes_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bRemoveCurveRedundantKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys = { "bRemoveCurveRedundantKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveCurveRedundantKeys_MetaData), NewProp_bRemoveCurveRedundantKeys_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bDoNotImportCurveWithZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero = { "bDoNotImportCurveWithZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotImportCurveWithZero_MetaData), NewProp_bDoNotImportCurveWithZero_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bDeleteExistingNonCurveCustomAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes = { "bDeleteExistingNonCurveCustomAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData), NewProp_bDeleteExistingNonCurveCustomAttributes_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bDeleteExistingCustomAttributeCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves = { "bDeleteExistingCustomAttributeCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeleteExistingCustomAttributeCurves_MetaData), NewProp_bDeleteExistingCustomAttributeCurves_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bDeleteExistingMorphTargetCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves = { "bDeleteExistingMorphTargetCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeleteExistingMorphTargetCurves_MetaData), NewProp_bDeleteExistingMorphTargetCurves_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_SourceAnimationName = { "SourceAnimationName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeGenericAnimationPipeline, SourceAnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAnimationName_MetaData), NewProp_SourceAnimationName_MetaData) };
void Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSceneImport_SetBit(void* Obj)
{
	((UInterchangeGenericAnimationPipeline*)Obj)->bSceneImport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSceneImport = { "bSceneImport", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterchangeGenericAnimationPipeline), &Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSceneImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSceneImport_MetaData), NewProp_bSceneImport_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CommonMeshesProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportBoneTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_AnimationRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_FrameImportRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bUse30HzToBakeBoneAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_CustomBoneAnimationSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSnapToClosestFrameBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bImportCustomAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bAddCurveMetadataToSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_MaterialCurveSuffixes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bRemoveCurveRedundantKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDoNotImportCurveWithZero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingNonCurveCustomAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingCustomAttributeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bDeleteExistingMorphTargetCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_SourceAnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::NewProp_bSceneImport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::ClassParams = {
	&UInterchangeGenericAnimationPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::PropPointers),
	0,
	0x041010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericAnimationPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericAnimationPipeline>()
{
	return UInterchangeGenericAnimationPipeline::StaticClass();
}
UInterchangeGenericAnimationPipeline::UInterchangeGenericAnimationPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericAnimationPipeline);
UInterchangeGenericAnimationPipeline::~UInterchangeGenericAnimationPipeline() {}
// End Class UInterchangeGenericAnimationPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeAnimationRange_StaticEnum, TEXT("EInterchangeAnimationRange"), &Z_Registration_Info_UEnum_EInterchangeAnimationRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2096288024U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericAnimationPipeline, UInterchangeGenericAnimationPipeline::StaticClass, TEXT("UInterchangeGenericAnimationPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericAnimationPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericAnimationPipeline), 1671924408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_1914942417(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAnimationPipeline_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
