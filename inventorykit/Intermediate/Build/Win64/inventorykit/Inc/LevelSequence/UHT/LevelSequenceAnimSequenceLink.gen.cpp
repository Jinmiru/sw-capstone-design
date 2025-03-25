// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceAnimSequenceLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceAnimSequenceLink() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin ScriptStruct FLevelSequenceAnimSequenceLinkItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem;
class UScriptStruct* FLevelSequenceAnimSequenceLinkItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceAnimSequenceLinkItem"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceAnimSequenceLinkItem>()
{
	return FLevelSequenceAnimSequenceLinkItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Link To Anim Sequence that we are linked too.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Anim Sequence that we are linked too." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkelTrackGuid_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathToAnimSequence_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportTransforms_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "//From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically\n" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMorphTargets_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportAttributeCurves_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialCurves_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveInterpolation_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordInWorldSpace_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateAllSkeletalMeshComponents_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkelTrackGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathToAnimSequence;
	static void NewProp_bExportTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportTransforms;
	static void NewProp_bExportMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMorphTargets;
	static void NewProp_bExportAttributeCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportAttributeCurves;
	static void NewProp_bExportMaterialCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialCurves;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveInterpolation;
	static void NewProp_bRecordInWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordInWorldSpace;
	static void NewProp_bEvaluateAllSkeletalMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateAllSkeletalMeshComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceAnimSequenceLinkItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid = { "SkelTrackGuid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkelTrackGuid_MetaData), NewProp_SkelTrackGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence = { "PathToAnimSequence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathToAnimSequence_MetaData), NewProp_PathToAnimSequence_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms = { "bExportTransforms", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportTransforms_MetaData), NewProp_bExportTransforms_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets = { "bExportMorphTargets", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMorphTargets_MetaData), NewProp_bExportMorphTargets_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportAttributeCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves = { "bExportAttributeCurves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportAttributeCurves_MetaData), NewProp_bExportAttributeCurves_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportMaterialCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves = { "bExportMaterialCurves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportMaterialCurves_MetaData), NewProp_bExportMaterialCurves_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, Interpolation), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 1943220743
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CurveInterpolation = { "CurveInterpolation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, CurveInterpolation), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveInterpolation_MetaData), NewProp_CurveInterpolation_MetaData) }; // 294528593
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bRecordInWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace = { "bRecordInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordInWorldSpace_MetaData), NewProp_bRecordInWorldSpace_MetaData) };
void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_SetBit(void* Obj)
{
	((FLevelSequenceAnimSequenceLinkItem*)Obj)->bEvaluateAllSkeletalMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents = { "bEvaluateAllSkeletalMeshComponents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateAllSkeletalMeshComponents_MetaData), NewProp_bEvaluateAllSkeletalMeshComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_CurveInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bEvaluateAllSkeletalMeshComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceAnimSequenceLinkItem",
	Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers),
	sizeof(FLevelSequenceAnimSequenceLinkItem),
	alignof(FLevelSequenceAnimSequenceLinkItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton;
}
// End ScriptStruct FLevelSequenceAnimSequenceLinkItem

// Begin Class ULevelSequenceAnimSequenceLink
void ULevelSequenceAnimSequenceLink::StaticRegisterNativesULevelSequenceAnimSequenceLink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceAnimSequenceLink);
UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister()
{
	return ULevelSequenceAnimSequenceLink::StaticClass();
}
struct Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Link To Set of Anim Sequences that we may be linked to.*/" },
		{ "IncludePath", "LevelSequenceAnimSequenceLink.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Set of Anim Sequences that we may be linked to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceLinks_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequenceLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceLinks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceAnimSequenceLink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, METADATA_PARAMS(0, nullptr) }; // 3766473445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceAnimSequenceLink, AnimSequenceLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequenceLinks_MetaData), NewProp_AnimSequenceLinks_MetaData) }; // 3766473445
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams = {
	&ULevelSequenceAnimSequenceLink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink()
{
	if (!Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton, Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceAnimSequenceLink>()
{
	return ULevelSequenceAnimSequenceLink::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceAnimSequenceLink);
ULevelSequenceAnimSequenceLink::~ULevelSequenceAnimSequenceLink() {}
// End Class ULevelSequenceAnimSequenceLink

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelSequenceAnimSequenceLinkItem::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewStructOps, TEXT("LevelSequenceAnimSequenceLinkItem"), &Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceAnimSequenceLinkItem), 3766473445U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceAnimSequenceLink, ULevelSequenceAnimSequenceLink::StaticClass, TEXT("ULevelSequenceAnimSequenceLink"), &Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceAnimSequenceLink), 2766440656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_3028481298(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
