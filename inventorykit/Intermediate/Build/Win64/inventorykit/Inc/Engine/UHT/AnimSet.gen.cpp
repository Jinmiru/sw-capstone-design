// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSet();
ENGINE_API UClass* Z_Construct_UClass_UAnimSet_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimSetMeshLinkup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup;
class UScriptStruct* FAnimSetMeshLinkup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSetMeshLinkup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSetMeshLinkup"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSetMeshLinkup>()
{
	return FAnimSetMeshLinkup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneToTrackTable_MetaData[] = {
		{ "Comment", "/** \n\x09 * Mapping table. Size must be same as size of SkelMesh reference skeleton. \n\x09 * No index should be more than the number of tracks in this AnimSet.\n\x09 * -1 indicates no track for this bone - will use reference pose instead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Mapping table. Size must be same as size of SkelMesh reference skeleton.\nNo index should be more than the number of tracks in this AnimSet.\n-1 indicates no track for this bone - will use reference pose instead." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneToTrackTable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneToTrackTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSetMeshLinkup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_Inner = { "BoneToTrackTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable = { "BoneToTrackTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSetMeshLinkup, BoneToTrackTable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneToTrackTable_MetaData), NewProp_BoneToTrackTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewProp_BoneToTrackTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimSetMeshLinkup",
	Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::PropPointers),
	sizeof(FAnimSetMeshLinkup),
	alignof(FAnimSetMeshLinkup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSetMeshLinkup()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.InnerSingleton, Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup.InnerSingleton;
}
// End ScriptStruct FAnimSetMeshLinkup

// Begin Class UAnimSet
void UAnimSet::StaticRegisterNativesUAnimSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSet);
UClass* Z_Construct_UClass_UAnimSet_NoRegister()
{
	return UAnimSet::StaticClass();
}
struct Z_Construct_UClass_UAnimSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimSet.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimRotationOnly_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** \n\x09 *\x09Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose. \n\x09 *\x09Note that the root bone always takes translation from the animation, even if this flag is set.\n\x09 *\x09You can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Indicates that only the rotation should be taken from the animation sequence and the translation should come from the USkeletalMesh ref pose.\nNote that the root bone always takes translation from the animation, even if this flag is set.\nYou can use the UseTranslationBoneNames array to specify other bones that should use translation with this flag set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackBoneNames_MetaData[] = {
		{ "Comment", "/** Bone name that each track relates to. TrackBoneName.Num() == Number of tracks. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Bone name that each track relates to. TrackBoneName.Num() == Number of tracks." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
		{ "Comment", "/** Actual animation sequence information. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Actual animation sequence information." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkupCache_MetaData[] = {
		{ "Comment", "/** Non-serialised cache of linkups between different skeletal meshes and this AnimSet. */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Non-serialised cache of linkups between different skeletal meshes and this AnimSet. // Do not change private - they will go away" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneUseAnimTranslation_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton.\n\x09 *\x09This is basically a cooked down version of UseTranslationBoneNames for speed.\n\x09 *\x09Size matches the number of tracks.\n\x09 */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Array of booleans that indicate whether or not to read the translation of a bone from animation or ref skeleton.\nThis is basically a cooked down version of UseTranslationBoneNames for speed.\nSize matches the number of tracks.\n   // Do not change private - they will go away" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceUseMeshTranslation_MetaData[] = {
		{ "Comment", "/** Cooked down version of ForceMeshTranslationBoneNames */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Cooked down version of ForceMeshTranslationBoneNames // Do not change private - they will go away" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseTranslationBoneNames_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** Names of bones that should use translation from the animation, if bAnimRotationOnly is set. */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Names of bones that should use translation from the animation, if bAnimRotationOnly is set. // Do not change private - they will go away" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceMeshTranslationBoneNames_MetaData[] = {
		{ "Category", "AnimSet" },
		{ "Comment", "/** List of bones which are ALWAYS going to use their translation from the mesh and not the animation. */// Do not change private - they will go away\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "List of bones which are ALWAYS going to use their translation from the mesh and not the animation. // Do not change private - they will go away" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkelMeshName_MetaData[] = {
		{ "Comment", "/** In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "In the AnimSetEditor, when you switch to this AnimSet, it sees if this skeletal mesh is loaded and if so switches to it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestRatioSkelMeshName_MetaData[] = {
		{ "Comment", "/** Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSet.h" },
		{ "ToolTip", "Holds the name of the skeletal mesh whose reference skeleton best matches the TrackBoneName array." },
	};
#endif // WITH_METADATA
	static void NewProp_bAnimRotationOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimRotationOnly;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackBoneNames;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkupCache_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkupCache;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneUseAnimTranslation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneUseAnimTranslation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForceUseMeshTranslation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ForceUseMeshTranslation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UseTranslationBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UseTranslationBoneNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForceMeshTranslationBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ForceMeshTranslationBoneNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewSkelMeshName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BestRatioSkelMeshName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_SetBit(void* Obj)
{
	((UAnimSet*)Obj)->bAnimRotationOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly = { "bAnimRotationOnly", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UAnimSet), &Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimRotationOnly_MetaData), NewProp_bAnimRotationOnly_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_Inner = { "TrackBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames = { "TrackBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, TrackBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackBoneNames_MetaData), NewProp_TrackBoneNames_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequences_MetaData), NewProp_Sequences_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_Inner = { "LinkupCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimSetMeshLinkup, METADATA_PARAMS(0, nullptr) }; // 636578744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache = { "LinkupCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, LinkupCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkupCache_MetaData), NewProp_LinkupCache_MetaData) }; // 636578744
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_Inner = { "BoneUseAnimTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation = { "BoneUseAnimTranslation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, BoneUseAnimTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneUseAnimTranslation_MetaData), NewProp_BoneUseAnimTranslation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_Inner = { "ForceUseMeshTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation = { "ForceUseMeshTranslation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, ForceUseMeshTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceUseMeshTranslation_MetaData), NewProp_ForceUseMeshTranslation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_Inner = { "UseTranslationBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames = { "UseTranslationBoneNames", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, UseTranslationBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseTranslationBoneNames_MetaData), NewProp_UseTranslationBoneNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_Inner = { "ForceMeshTranslationBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames = { "ForceMeshTranslationBoneNames", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, ForceMeshTranslationBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceMeshTranslationBoneNames_MetaData), NewProp_ForceMeshTranslationBoneNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName = { "PreviewSkelMeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, PreviewSkelMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSkelMeshName_MetaData), NewProp_PreviewSkelMeshName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName = { "BestRatioSkelMeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimSet, BestRatioSkelMeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestRatioSkelMeshName_MetaData), NewProp_BestRatioSkelMeshName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_bAnimRotationOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_TrackBoneNames,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_Sequences,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_LinkupCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BoneUseAnimTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceUseMeshTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_UseTranslationBoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_ForceMeshTranslationBoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_PreviewSkelMeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSet_Statics::NewProp_BestRatioSkelMeshName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSet_Statics::ClassParams = {
	&UAnimSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimSet()
{
	if (!Z_Registration_Info_UClass_UAnimSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSet.OuterSingleton, Z_Construct_UClass_UAnimSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimSet.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimSet>()
{
	return UAnimSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSet);
UAnimSet::~UAnimSet() {}
// End Class UAnimSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimSetMeshLinkup::StaticStruct, Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics::NewStructOps, TEXT("AnimSetMeshLinkup"), &Z_Registration_Info_UScriptStruct_AnimSetMeshLinkup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSetMeshLinkup), 636578744U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSet, UAnimSet::StaticClass, TEXT("UAnimSet"), &Z_Registration_Info_UClass_UAnimSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSet), 3741101543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_1966997180(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
