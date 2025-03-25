// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundEffectSourcePreset
void USoundEffectSourcePreset::StaticRegisterNativesUSoundEffectSourcePreset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectSourcePreset);
UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister()
{
	return USoundEffectSourcePreset::StaticClass();
}
struct Z_Construct_UClass_USoundEffectSourcePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Preset of a source effect that can be shared between chains. */" },
		{ "IncludePath", "Sound/SoundEffectSource.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Preset of a source effect that can be shared between chains." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSourcePreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoundEffectSourcePreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSourcePreset_Statics::ClassParams = {
	&USoundEffectSourcePreset::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundEffectSourcePreset()
{
	if (!Z_Registration_Info_UClass_USoundEffectSourcePreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectSourcePreset.OuterSingleton, Z_Construct_UClass_USoundEffectSourcePreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundEffectSourcePreset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundEffectSourcePreset>()
{
	return USoundEffectSourcePreset::StaticClass();
}
USoundEffectSourcePreset::USoundEffectSourcePreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSourcePreset);
USoundEffectSourcePreset::~USoundEffectSourcePreset() {}
// End Class USoundEffectSourcePreset

// Begin ScriptStruct FSourceEffectChainEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectChainEntry;
class UScriptStruct* FSourceEffectChainEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChainEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SourceEffectChainEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSourceEffectChainEntry>()
{
	return FSourceEffectChainEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static void NewProp_bBypass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChainEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSourceEffectChainEntry, Preset), Z_Construct_UClass_USoundEffectSourcePreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
void Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_SetBit(void* Obj)
{
	((FSourceEffectChainEntry*)Obj)->bBypass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSourceEffectChainEntry), &Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypass_MetaData), NewProp_bBypass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SourceEffectChainEntry",
	Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers),
	sizeof(FSourceEffectChainEntry),
	alignof(FSourceEffectChainEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChainEntry.InnerSingleton;
}
// End ScriptStruct FSourceEffectChainEntry

// Begin Class USoundEffectSourcePresetChain
void USoundEffectSourcePresetChain::StaticRegisterNativesUSoundEffectSourcePresetChain()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectSourcePresetChain);
UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister()
{
	return USoundEffectSourcePresetChain::StaticClass();
}
struct Z_Construct_UClass_USoundEffectSourcePresetChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Chain of source effect presets that can be shared between referencing sounds. */" },
		{ "IncludePath", "Sound/SoundEffectSource.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Chain of source effect presets that can be shared between referencing sounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "Comment", "/** Chain of source effects to use for this sound source. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Chain of source effects to use for this sound source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayEffectChainTails_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "/** Whether to keep the source alive for the duration of the effect chain tails. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Whether to keep the source alive for the duration of the effect chain tails." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Chain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Chain;
	static void NewProp_bPlayEffectChainTails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayEffectChainTails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSourcePresetChain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_Inner = { "Chain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSourceEffectChainEntry, METADATA_PARAMS(0, nullptr) }; // 492909729
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundEffectSourcePresetChain, Chain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chain_MetaData), NewProp_Chain_MetaData) }; // 492909729
void Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_SetBit(void* Obj)
{
	((USoundEffectSourcePresetChain*)Obj)->bPlayEffectChainTails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails = { "bPlayEffectChainTails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundEffectSourcePresetChain), &Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayEffectChainTails_MetaData), NewProp_bPlayEffectChainTails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::ClassParams = {
	&USoundEffectSourcePresetChain::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundEffectSourcePresetChain()
{
	if (!Z_Registration_Info_UClass_USoundEffectSourcePresetChain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectSourcePresetChain.OuterSingleton, Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundEffectSourcePresetChain.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundEffectSourcePresetChain>()
{
	return USoundEffectSourcePresetChain::StaticClass();
}
USoundEffectSourcePresetChain::USoundEffectSourcePresetChain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSourcePresetChain);
USoundEffectSourcePresetChain::~USoundEffectSourcePresetChain() {}
// End Class USoundEffectSourcePresetChain

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSourceEffectChainEntry::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewStructOps, TEXT("SourceEffectChainEntry"), &Z_Registration_Info_UScriptStruct_SourceEffectChainEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectChainEntry), 492909729U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundEffectSourcePreset, USoundEffectSourcePreset::StaticClass, TEXT("USoundEffectSourcePreset"), &Z_Registration_Info_UClass_USoundEffectSourcePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectSourcePreset), 3825465271U) },
		{ Z_Construct_UClass_USoundEffectSourcePresetChain, USoundEffectSourcePresetChain::StaticClass, TEXT("USoundEffectSourcePresetChain"), &Z_Registration_Info_UClass_USoundEffectSourcePresetChain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectSourcePresetChain), 513247510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_1806643365(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSource_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
