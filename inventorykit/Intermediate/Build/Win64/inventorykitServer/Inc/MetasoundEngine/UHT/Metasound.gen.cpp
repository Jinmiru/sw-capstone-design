// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/Metasound.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocument.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasound() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundEditorGraphBase();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatch();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatch_NoRegister();
METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocument();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Class UMetasoundEditorGraphBase
void UMetasoundEditorGraphBase::StaticRegisterNativesUMetasoundEditorGraphBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphBase);
UClass* Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister()
{
	return UMetasoundEditorGraphBase::StaticClass();
}
struct Z_Construct_UClass_UMetasoundEditorGraphBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Metasound.h" },
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::ClassParams = {
	&UMetasoundEditorGraphBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetasoundEditorGraphBase()
{
	if (!Z_Registration_Info_UClass_UMetasoundEditorGraphBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphBase.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetasoundEditorGraphBase.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetasoundEditorGraphBase>()
{
	return UMetasoundEditorGraphBase::StaticClass();
}
UMetasoundEditorGraphBase::UMetasoundEditorGraphBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphBase);
UMetasoundEditorGraphBase::~UMetasoundEditorGraphBase() {}
// End Class UMetasoundEditorGraphBase

// Begin Class UMetaSoundPatch
void UMetaSoundPatch::StaticRegisterNativesUMetaSoundPatch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundPatch);
UClass* Z_Construct_UClass_UMetaSoundPatch_NoRegister()
{
	return UMetaSoundPatch::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundPatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This asset type is used for Metasound assets that can only be used as nodes in other Metasound graphs.\n * Because of this, they contain no required inputs or outputs.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Metasound.h" },
		{ "ModuleRelativePath", "Public/Metasound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This asset type is used for Metasound assets that can only be used as nodes in other Metasound graphs.\nBecause of this, they contain no required inputs or outputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootMetaSoundDocument_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceAssetClassCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClassID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryInputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryOutputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMajor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMinor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootMetaSoundDocument;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedAssetClassKeys_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassKeys;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencedAssetClassObjects_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceAssetClassCache_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReferenceAssetClassCache;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
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
		TCppClassTypeTraits<UMetaSoundPatch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RootMetaSoundDocument = { "RootMetaSoundDocument", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, RootMetaSoundDocument), Z_Construct_UScriptStruct_FMetasoundFrontendDocument, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootMetaSoundDocument_MetaData), NewProp_RootMetaSoundDocument_MetaData) }; // 2494560277
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys_ElementProp = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, ReferencedAssetClassKeys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedAssetClassKeys_MetaData), NewProp_ReferencedAssetClassKeys_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects_ElementProp = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, ReferencedAssetClassObjects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedAssetClassObjects_MetaData), NewProp_ReferencedAssetClassObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache_ElementProp = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FSoftObjectPath>, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, ReferenceAssetClassCache), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceAssetClassCache_MetaData), NewProp_ReferenceAssetClassCache_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, Graph), Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_AssetClassID = { "AssetClassID", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, AssetClassID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClassID_MetaData), NewProp_AssetClassID_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryInputTypes = { "RegistryInputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, RegistryInputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryInputTypes_MetaData), NewProp_RegistryInputTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryOutputTypes = { "RegistryOutputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, RegistryOutputTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryOutputTypes_MetaData), NewProp_RegistryOutputTypes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMajor = { "RegistryVersionMajor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, RegistryVersionMajor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryVersionMajor_MetaData), NewProp_RegistryVersionMajor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMinor = { "RegistryVersionMinor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundPatch, RegistryVersionMinor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegistryVersionMinor_MetaData), NewProp_RegistryVersionMinor_MetaData) };
void Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset_SetBit(void* Obj)
{
	((UMetaSoundPatch*)Obj)->bIsPreset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset = { "bIsPreset", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundPatch), &Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPreset_MetaData), NewProp_bIsPreset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundPatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RootMetaSoundDocument,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_Graph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_AssetClassID,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryInputTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryOutputTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMajor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMinor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundPatch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMetaSoundPatch_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMetaSoundDocumentInterface_NoRegister, (int32)VTABLE_OFFSET(UMetaSoundPatch, IMetaSoundDocumentInterface), false },  // 467103172
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundPatch_Statics::ClassParams = {
	&UMetaSoundPatch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetaSoundPatch_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundPatch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundPatch()
{
	if (!Z_Registration_Info_UClass_UMetaSoundPatch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundPatch.OuterSingleton, Z_Construct_UClass_UMetaSoundPatch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundPatch.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundPatch>()
{
	return UMetaSoundPatch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundPatch);
UMetaSoundPatch::~UMetaSoundPatch() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundPatch)
// End Class UMetaSoundPatch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundEditorGraphBase, UMetasoundEditorGraphBase::StaticClass, TEXT("UMetasoundEditorGraphBase"), &Z_Registration_Info_UClass_UMetasoundEditorGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphBase), 3280361075U) },
		{ Z_Construct_UClass_UMetaSoundPatch, UMetaSoundPatch::StaticClass, TEXT("UMetaSoundPatch"), &Z_Registration_Info_UClass_UMetaSoundPatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundPatch), 1179531294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_103569596(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
