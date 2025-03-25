// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCue() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase();
ENGINE_API UClass* Z_Construct_UClass_USoundCue();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundNodeEditorData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSoundNodeEditorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundNodeEditorData;
class UScriptStruct* FSoundNodeEditorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundNodeEditorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundNodeEditorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundNodeEditorData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundNodeEditorData"));
	}
	return Z_Registration_Info_UScriptStruct_SoundNodeEditorData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundNodeEditorData>()
{
	return FSoundNodeEditorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundNodeEditorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoundNodeEditorData",
	nullptr,
	0,
	sizeof(FSoundNodeEditorData),
	alignof(FSoundNodeEditorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundNodeEditorData()
{
	if (!Z_Registration_Info_UScriptStruct_SoundNodeEditorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundNodeEditorData.InnerSingleton, Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundNodeEditorData.InnerSingleton;
}
// End ScriptStruct FSoundNodeEditorData

// Begin Class USoundCue
void USoundCue::StaticRegisterNativesUSoundCue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCue);
UClass* Z_Construct_UClass_USoundCue_NoRegister()
{
	return USoundCue::StaticClass();
}
struct Z_Construct_UClass_USoundCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The behavior of audio playback is defined within Sound Cues.\n */" },
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Sound/SoundCue.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "The behavior of audio playback is defined within Sound Cues." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstNode_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/* Base volume multiplier */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Base volume multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/* Base pitch multiplier */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Base pitch multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* Attenuation settings to use if Override Attenuation is set to true */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Attenuation settings to use if Override Attenuation is set to true" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundCueGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Voice Management|Priority" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "Tooltip", "The priority of the subtitle.  Defaults to 10000.  Higher values will play instead of lower values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrimeOnLoad_MetaData[] = {
		{ "Category", "Memory" },
		{ "Comment", "/* Makes this sound cue automatically load any sound waves it can play into the cache when it is loaded. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Makes this sound cue automatically load any sound waves it can play into the cache when it is loaded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/* Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromRandomNodeBranchCulling_MetaData[] = {
		{ "Category", "Memory" },
		{ "Comment", "/* Ignore per-platform random node culling for memory purposes */" },
		{ "DisplayName", "Disable Random Branch Culling" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Ignore per-platform random node culling for memory purposes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPlayWhenSilent_MetaData[] = {
		{ "Comment", "/** Whether a sound has play when silent enabled (i.e. for a sound cue, if any sound wave player has it enabled). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Whether a sound has play when silent enabled (i.e. for a sound cue, if any sound wave player has it enabled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookedQualityIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundCueGraph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
	static void NewProp_bPrimeOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimeOnLoad;
	static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
	static void NewProp_bExcludeFromRandomNodeBranchCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromRandomNodeBranchCulling;
	static void NewProp_bHasPlayWhenSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPlayWhenSilent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CookedQualityIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_FirstNode = { "FirstNode", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, FirstNode), Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstNode_MetaData), NewProp_FirstNode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMultiplier_MetaData), NewProp_PitchMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData), NewProp_AttenuationOverrides_MetaData) }; // 4035653401
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNodes_MetaData), NewProp_AllNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_SoundCueGraph = { "SoundCueGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, SoundCueGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundCueGraph_MetaData), NewProp_SoundCueGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_SubtitlePriority = { "SubtitlePriority", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, SubtitlePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlePriority_MetaData), NewProp_SubtitlePriority_MetaData) };
void Z_Construct_UClass_USoundCue_Statics::NewProp_bPrimeOnLoad_SetBit(void* Obj)
{
	((USoundCue*)Obj)->bPrimeOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_bPrimeOnLoad = { "bPrimeOnLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundCue), &Z_Construct_UClass_USoundCue_Statics::NewProp_bPrimeOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrimeOnLoad_MetaData), NewProp_bPrimeOnLoad_MetaData) };
void Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
{
	((USoundCue*)Obj)->bOverrideAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundCue), &Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData), NewProp_bOverrideAttenuation_MetaData) };
void Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_SetBit(void* Obj)
{
	((USoundCue*)Obj)->bExcludeFromRandomNodeBranchCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling = { "bExcludeFromRandomNodeBranchCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundCue), &Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeFromRandomNodeBranchCulling_MetaData), NewProp_bExcludeFromRandomNodeBranchCulling_MetaData) };
void Z_Construct_UClass_USoundCue_Statics::NewProp_bHasPlayWhenSilent_SetBit(void* Obj)
{
	((USoundCue*)Obj)->bHasPlayWhenSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_bHasPlayWhenSilent = { "bHasPlayWhenSilent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundCue), &Z_Construct_UClass_USoundCue_Statics::NewProp_bHasPlayWhenSilent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPlayWhenSilent_MetaData), NewProp_bHasPlayWhenSilent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_CookedQualityIndex = { "CookedQualityIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundCue, CookedQualityIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookedQualityIndex_MetaData), NewProp_CookedQualityIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_FirstNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_PitchMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_AttenuationOverrides,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_SoundCueGraph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_SubtitlePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_bPrimeOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_bHasPlayWhenSilent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_CookedQualityIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundCue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCue_Statics::ClassParams = {
	&USoundCue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundCue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundCue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundCue()
{
	if (!Z_Registration_Info_UClass_USoundCue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCue.OuterSingleton, Z_Construct_UClass_USoundCue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundCue.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundCue>()
{
	return USoundCue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCue);
USoundCue::~USoundCue() {}
IMPLEMENT_FARCHIVE_SERIALIZER(USoundCue)
// End Class USoundCue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundNodeEditorData::StaticStruct, Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::NewStructOps, TEXT("SoundNodeEditorData"), &Z_Registration_Info_UScriptStruct_SoundNodeEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundNodeEditorData), 767476849U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundCue, USoundCue::StaticClass, TEXT("USoundCue"), &Z_Registration_Info_UClass_USoundCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCue), 1055207596U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_1604367665(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
