// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundSource.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocument.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocument();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Class UMetaSoundSource
void UMetaSoundSource::StaticRegisterNativesUMetaSoundSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSource);
UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister()
{
	return UMetaSoundSource::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This Metasound type can be played as an audio source.\n */" },
		{ "HideCategories", "object Object Object" },
		{ "IncludePath", "MetasoundSource.h" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This Metasound type can be played as an audio source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMetasoundDocument_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceAssetClassCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[] = {
		{ "Category", "Metasound" },
		{ "Comment", "// The output audio format of the metasound source.\n" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ToolTip", "The output audio format of the metasound source." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualitySetting_MetaData[] = {
		{ "Category", "Metasound" },
		{ "Comment", "// The Quality this Metasound will use. These are defined in the MetaSounds project settings.\n" },
		{ "GetOptions", "MetasoundEngine.MetaSoundQualityHelper.GetQualityList" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ToolTip", "The Quality this Metasound will use. These are defined in the MetaSounds project settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualitySettingGuid_MetaData[] = {
		{ "Comment", "// This a editor only look up for the Quality Setting above. Preventing orphaning of the original name.\n" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ToolTip", "This a editor only look up for the Quality Setting above. Preventing orphaning of the original name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockRateOverride_MetaData[] = {
		{ "Category", "Metasound" },
		{ "Comment", "// Override the BlockRate for this Sound (overrides Quality). NOTE: A Zero value will have no effect and use either the Quality setting (if set), or the defaults.\n" },
		{ "DisplayAfter", "OutputFormat" },
		{ "DisplayName", "Override Block Rate (in Hz)" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ToolTip", "Override the BlockRate for this Sound (overrides Quality). NOTE: A Zero value will have no effect and use either the Quality setting (if set), or the defaults." },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRateOverride_MetaData[] = {
		{ "Category", "Metasound" },
		{ "Comment", "// Override the SampleRate for this Sound (overrides Quality). NOTE: A Zero value will have no effect and use either the Quality setting (if set), or the Device Rate\n" },
		{ "DisplayName", "Override Sample Rate (in Hz)" },
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
		{ "ToolTip", "Override the SampleRate for this Sound (overrides Quality). NOTE: A Zero value will have no effect and use either the Quality setting (if set), or the Device Rate" },
		{ "UIMax", "96000" },
		{ "UIMin", "0" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClassID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryInputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryOutputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMajor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMinor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSource.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMetasoundDocument;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedAssetClassKeys_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassKeys;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencedAssetClassObjects_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceAssetClassCache_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReferenceAssetClassCache;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputFormat;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QualitySetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualitySettingGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockRateOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleRateOverride;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetClassID;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegistryInputTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RegistryOutputTypes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegistryVersionMajor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RegistryVersionMinor;
	static void NewProp_bIsPreset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RootMetasoundDocument = { "RootMetasoundDocument", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RootMetasoundDocument), Z_Construct_UScriptStruct_FMetasoundFrontendDocument, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMetasoundDocument_MetaData), NewProp_RootMetasoundDocument_MetaData) }; // 2494560277
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys_ElementProp = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, ReferencedAssetClassKeys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedAssetClassKeys_MetaData), NewProp_ReferencedAssetClassKeys_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects_ElementProp = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, ReferencedAssetClassObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedAssetClassObjects_MetaData), NewProp_ReferencedAssetClassObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache_ElementProp = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FSoftObjectPath>, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, ReferenceAssetClassCache), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceAssetClassCache_MetaData), NewProp_ReferenceAssetClassCache_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, Graph), Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, OutputFormat), Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFormat_MetaData), NewProp_OutputFormat_MetaData) }; // 528543909
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_QualitySetting = { "QualitySetting", nullptr, (EPropertyFlags)0x0010000800004005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, QualitySetting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualitySetting_MetaData), NewProp_QualitySetting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_QualitySettingGuid = { "QualitySettingGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, QualitySettingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualitySettingGuid_MetaData), NewProp_QualitySettingGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_BlockRateOverride = { "BlockRateOverride", nullptr, (EPropertyFlags)0x0010040800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, BlockRateOverride), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockRateOverride_MetaData), NewProp_BlockRateOverride_MetaData) }; // 50753708
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_SampleRateOverride = { "SampleRateOverride", nullptr, (EPropertyFlags)0x0010040800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, SampleRateOverride), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRateOverride_MetaData), NewProp_SampleRateOverride_MetaData) }; // 1262733314
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_AssetClassID = { "AssetClassID", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, AssetClassID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClassID_MetaData), NewProp_AssetClassID_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryInputTypes = { "RegistryInputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryInputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryInputTypes_MetaData), NewProp_RegistryInputTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryOutputTypes = { "RegistryOutputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryOutputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryOutputTypes_MetaData), NewProp_RegistryOutputTypes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMajor = { "RegistryVersionMajor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryVersionMajor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryVersionMajor_MetaData), NewProp_RegistryVersionMajor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMinor = { "RegistryVersionMinor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSource, RegistryVersionMinor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryVersionMinor_MetaData), NewProp_RegistryVersionMinor_MetaData) };
void Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset_SetBit(void* Obj)
{
	((UMetaSoundSource*)Obj)->bIsPreset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset = { "bIsPreset", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundSource), &Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPreset_MetaData), NewProp_bIsPreset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RootMetasoundDocument,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferencedAssetClassObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_ReferenceAssetClassCache,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_Graph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_OutputFormat,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_QualitySetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_QualitySettingGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_BlockRateOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_SampleRateOverride,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_AssetClassID,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryInputTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryOutputTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMajor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_RegistryVersionMinor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSource_Statics::NewProp_bIsPreset,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMetaSoundSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, (int32)VTABLE_OFFSET(UMetaSoundSource, IMetaSoundDocumentInterface), false },  // 467103172
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSource_Statics::ClassParams = {
	&UMetaSoundSource::StaticClass,
	"Metasound",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009010A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundSource()
{
	if (!Z_Registration_Info_UClass_UMetaSoundSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSource.OuterSingleton, Z_Construct_UClass_UMetaSoundSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundSource.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundSource>()
{
	return UMetaSoundSource::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSource);
UMetaSoundSource::~UMetaSoundSource() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundSource)
// End Class UMetaSoundSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundSource, UMetaSoundSource::StaticClass, TEXT("UMetaSoundSource"), &Z_Registration_Info_UClass_UMetaSoundSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSource), 3831459410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_3652414682(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
