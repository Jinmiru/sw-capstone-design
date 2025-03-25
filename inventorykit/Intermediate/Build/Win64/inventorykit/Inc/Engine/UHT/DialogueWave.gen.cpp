// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWave() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave();
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContextMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FDialogueContextMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueContextMapping;
class UScriptStruct* FDialogueContextMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueContextMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueContextMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContextMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DialogueContextMapping"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueContextMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueContextMapping>()
{
	return FDialogueContextMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueContextMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "Comment", "/** The context of the dialogue. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The context of the dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "Comment", "/** The soundwave to play for this dialogue. */" },
		{ "DisallowedClasses", "/Script/MetasoundEngine.MetaSoundSource, /Script/Engine.SoundSourceBus" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The soundwave to play for this dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationKeyFormat_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "Comment", "/**\n\x09 * The format string to use when generating the localization key for this context. This must be unique within the owner dialogue wave.\n\x09 * Available format markers:\n\x09 *   * {ContextHash} - A hash generated from the speaker and target voices.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The format string to use when generating the localization key for this context. This must be unique within the owner dialogue wave.\nAvailable format markers:\n  * {ContextHash} - A hash generated from the speaker and target voices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[] = {
		{ "Comment", "/** Cached object for playing the soundwave with subtitle information included. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Cached object for playing the soundwave with subtitle information included." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizationKeyFormat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueContextMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueContextMapping, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1415671134
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueContextMapping, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundWave_MetaData), NewProp_SoundWave_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat = { "LocalizationKeyFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueContextMapping, LocalizationKeyFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalizationKeyFormat_MetaData), NewProp_LocalizationKeyFormat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueContextMapping, Proxy), Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Proxy_MetaData), NewProp_Proxy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DialogueContextMapping",
	Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers),
	sizeof(FDialogueContextMapping),
	alignof(FDialogueContextMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueContextMapping()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueContextMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueContextMapping.InnerSingleton, Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueContextMapping.InnerSingleton;
}
// End ScriptStruct FDialogueContextMapping

// Begin Class UDialogueWave
void UDialogueWave::StaticRegisterNativesUDialogueWave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWave);
UClass* Z_Construct_UClass_UDialogueWave_NoRegister()
{
	return UDialogueWave::StaticClass();
}
struct Z_Construct_UClass_UDialogueWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueWave.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMature_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** true if this dialogue is considered to contain mature/adult content. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "true if this dialogue is considered to contain mature/adult content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SubtitleOverride_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A localized version of the text that is actually spoken phonetically in the audio. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "A localized version of the text that is actually spoken phonetically in the audio." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleOverride_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A localized version of the subtitle text that should be displayed for this audio. By default this will be the same as the Spoken Text. */" },
		{ "EditCondition", "bOverride_SubtitleOverride" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "A localized version of the subtitle text that should be displayed for this audio. By default this will be the same as the Spoken Text." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceActorDirection_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Provides general notes to the voice actor intended to direct their performance, as well as contextual information to the translator. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Provides general notes to the voice actor intended to direct their performance, as well as contextual information to the translator." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextMappings_MetaData[] = {
		{ "Category", "DialogueContexts" },
		{ "Comment", "/* Mappings between dialogue contexts and associated soundwaves. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Mappings between dialogue contexts and associated soundwaves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMature_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMature;
	static void NewProp_bOverride_SubtitleOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SubtitleOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpokenText;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SubtitleOverride;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceActorDirection;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizationGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_SetBit(void* Obj)
{
	((UDialogueWave*)Obj)->bMature = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature = { "bMature", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDialogueWave), &Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMature_MetaData), NewProp_bMature_MetaData) };
void Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_SetBit(void* Obj)
{
	((UDialogueWave*)Obj)->bOverride_SubtitleOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride = { "bOverride_SubtitleOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDialogueWave), &Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SubtitleOverride_MetaData), NewProp_bOverride_SubtitleOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText = { "SpokenText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWave, SpokenText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpokenText_MetaData), NewProp_SpokenText_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride = { "SubtitleOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWave, SubtitleOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleOverride_MetaData), NewProp_SubtitleOverride_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection = { "VoiceActorDirection", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWave, VoiceActorDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceActorDirection_MetaData), NewProp_VoiceActorDirection_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_Inner = { "ContextMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueContextMapping, METADATA_PARAMS(0, nullptr) }; // 1028967584
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings = { "ContextMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWave, ContextMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextMappings_MetaData), NewProp_ContextMappings_MetaData) }; // 1028967584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID = { "LocalizationGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWave, LocalizationGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalizationGUID_MetaData), NewProp_LocalizationGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWave_Statics::ClassParams = {
	&UDialogueWave::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueWave_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueWave()
{
	if (!Z_Registration_Info_UClass_UDialogueWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWave.OuterSingleton, Z_Construct_UClass_UDialogueWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueWave.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDialogueWave>()
{
	return UDialogueWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWave);
UDialogueWave::~UDialogueWave() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDialogueWave)
// End Class UDialogueWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueContextMapping::StaticStruct, Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewStructOps, TEXT("DialogueContextMapping"), &Z_Registration_Info_UScriptStruct_DialogueContextMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueContextMapping), 1028967584U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWave, UDialogueWave::StaticClass, TEXT("UDialogueWave"), &Z_Registration_Info_UClass_UDialogueWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWave), 2480866841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_3709277258(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
