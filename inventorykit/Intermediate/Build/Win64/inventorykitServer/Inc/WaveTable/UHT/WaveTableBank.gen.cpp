// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTable/Public/WaveTableBank.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WaveTable/Public/WaveTableTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableBank() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_WaveTable();
WAVETABLE_API UClass* Z_Construct_UClass_UWaveTableBank();
WAVETABLE_API UClass* Z_Construct_UClass_UWaveTableBank_NoRegister();
WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableResolution();
WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode();
WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableBankEntry();
WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableTransform();
// End Cross Module References

// Begin ScriptStruct FWaveTableBankEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveTableBankEntry;
class UScriptStruct* FWaveTableBankEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableBankEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveTableBankEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableBankEntry, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("WaveTableBankEntry"));
	}
	return Z_Registration_Info_UScriptStruct_WaveTableBankEntry.OuterSingleton;
}
template<> WAVETABLE_API UScriptStruct* StaticStruct<FWaveTableBankEntry>()
{
	return FWaveTableBankEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Table" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveTableBankEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableBankEntry, Transform), Z_Construct_UScriptStruct_FWaveTableTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) }; // 3143390815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
	nullptr,
	&NewStructOps,
	"WaveTableBankEntry",
	Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::PropPointers),
	sizeof(FWaveTableBankEntry),
	alignof(FWaveTableBankEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveTableBankEntry()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableBankEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveTableBankEntry.InnerSingleton, Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WaveTableBankEntry.InnerSingleton;
}
// End ScriptStruct FWaveTableBankEntry

// Begin Class UWaveTableBank
void UWaveTableBank::StaticRegisterNativesUWaveTableBank()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveTableBank);
UClass* Z_Construct_UClass_UWaveTableBank_NoRegister()
{
	return UWaveTableBank::StaticClass();
}
struct Z_Construct_UClass_UWaveTableBank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WaveTableBank.h" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Sampling mode used for the bank.\n" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Sampling mode used for the bank." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Number of samples cached for each entry in the given bank.\n" },
		{ "EditCondition", "SampleMode == EWaveTableSamplingMode::FixedResolution" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Number of samples cached for each entry in the given bank." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "48000" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of samples cached for each entry in the given bank.\n" },
		{ "EditCondition", "SampleMode == EWaveTableSamplingMode::FixedSampleRate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Number of samples cached for each entry in the given bank." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBipolar_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Determines if output from curve/wavetable are to be clamped between \n// [-1.0f, 1.0f] (i.e. for waveform generation, oscillation, etc.)\n// or [0.0f, 1.0f] (i.e. for enveloping) when sampling curve/wavetable\n" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Determines if output from curve/wavetable are to be clamped between\n[-1.0f, 1.0f] (i.e. for waveform generation, oscillation, etc.)\nor [0.0f, 1.0f] (i.e. for enveloping) when sampling curve/wavetable" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveTableSizeMB_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Sum total size of all WaveTable data within the given bank\n" },
		{ "DisplayName", "WaveTable Size (MB)" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Sum total size of all WaveTable data within the given bank" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static void NewProp_bBipolar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBipolar;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveTableSizeMB;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveTableBank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_SampleMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_SampleMode = { "SampleMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveTableBank, SampleMode), Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleMode_MetaData), NewProp_SampleMode_MetaData) }; // 4256205651
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveTableBank, Resolution), Z_Construct_UEnum_WaveTable_EWaveTableResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) }; // 398511730
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveTableBank, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) };
void Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_SetBit(void* Obj)
{
	((UWaveTableBank*)Obj)->bBipolar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar = { "bBipolar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWaveTableBank), &Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBipolar_MetaData), NewProp_bBipolar_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableSizeMB = { "WaveTableSizeMB", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveTableBank, WaveTableSizeMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveTableSizeMB_MetaData), NewProp_WaveTableSizeMB_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWaveTableBankEntry, METADATA_PARAMS(0, nullptr) }; // 377170925
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaveTableBank, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 377170925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveTableBank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_SampleMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_SampleMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableSizeMB,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWaveTableBank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveTableBank_Statics::ClassParams = {
	&UWaveTableBank::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWaveTableBank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaveTableBank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWaveTableBank()
{
	if (!Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton, Z_Construct_UClass_UWaveTableBank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton;
}
template<> WAVETABLE_API UClass* StaticClass<UWaveTableBank>()
{
	return UWaveTableBank::StaticClass();
}
UWaveTableBank::UWaveTableBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveTableBank);
UWaveTableBank::~UWaveTableBank() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWaveTableBank)
// End Class UWaveTableBank

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaveTableBankEntry::StaticStruct, Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewStructOps, TEXT("WaveTableBankEntry"), &Z_Registration_Info_UScriptStruct_WaveTableBankEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveTableBankEntry), 377170925U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWaveTableBank, UWaveTableBank::StaticClass, TEXT("UWaveTableBank"), &Z_Registration_Info_UClass_UWaveTableBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveTableBank), 572349407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_1243909939(TEXT("/Script/WaveTable"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
