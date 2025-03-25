// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/PrimaryAssetLabel.h"
#include "Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryAssetLabel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UPrimaryAssetLabel
void UPrimaryAssetLabel::StaticRegisterNativesUPrimaryAssetLabel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimaryAssetLabel);
UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister()
{
	return UPrimaryAssetLabel::StaticClass();
}
struct Z_Construct_UClass_UPrimaryAssetLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** A seed file that is created to mark referenced assets as part of this primary asset */" },
		{ "IncludePath", "Engine/PrimaryAssetLabel.h" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "A seed file that is created to mark referenced assets as part of this primary asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Management rules for this specific asset, if set it will override the type rules */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Management rules for this specific asset, if set it will override the type rules" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLabelAssetsInMyDirectory_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** True to Label everything in this directory and sub directories */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "True to Label everything in this directory and sub directories" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRuntimeLabel_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** Set to true if the label asset itself should be cooked and available at runtime. This does not affect the assets that are labeled, they are set with cook rule */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "Set to true if the label asset itself should be cooked and available at runtime. This does not affect the assets that are labeled, they are set with cook rule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeRedirectors_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** If true, redirectors found by the AssetLabel's explicit assets or directory will be labeled. If false, redirectors will be skipped. */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "If true, redirectors found by the AssetLabel's explicit assets or directory will be labeled. If false, redirectors will be skipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitAssets_MetaData[] = {
		{ "AssetBundles", "Explicit" },
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** List of manually specified assets to label */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "List of manually specified assets to label" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitBlueprints_MetaData[] = {
		{ "AssetBundles", "Explicit" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** List of manually specified blueprint assets to label */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "List of manually specified blueprint assets to label" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCollection_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** Collection to load asset references out of */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "Collection to load asset references out of" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules;
	static void NewProp_bLabelAssetsInMyDirectory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLabelAssetsInMyDirectory;
	static void NewProp_bIsRuntimeLabel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRuntimeLabel;
	static void NewProp_bIncludeRedirectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeRedirectors;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExplicitAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplicitAssets;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ExplicitBlueprints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplicitBlueprints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryAssetLabel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPrimaryAssetLabel, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 2861211718
void Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_SetBit(void* Obj)
{
	((UPrimaryAssetLabel*)Obj)->bLabelAssetsInMyDirectory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory = { "bLabelAssetsInMyDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPrimaryAssetLabel), &Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLabelAssetsInMyDirectory_MetaData), NewProp_bLabelAssetsInMyDirectory_MetaData) };
void Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_SetBit(void* Obj)
{
	((UPrimaryAssetLabel*)Obj)->bIsRuntimeLabel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel = { "bIsRuntimeLabel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPrimaryAssetLabel), &Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRuntimeLabel_MetaData), NewProp_bIsRuntimeLabel_MetaData) };
void Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIncludeRedirectors_SetBit(void* Obj)
{
	((UPrimaryAssetLabel*)Obj)->bIncludeRedirectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIncludeRedirectors = { "bIncludeRedirectors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPrimaryAssetLabel), &Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIncludeRedirectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeRedirectors_MetaData), NewProp_bIncludeRedirectors_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_Inner = { "ExplicitAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets = { "ExplicitAssets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitAssets_MetaData), NewProp_ExplicitAssets_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_Inner = { "ExplicitBlueprints", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints = { "ExplicitBlueprints", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitBlueprints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitBlueprints_MetaData), NewProp_ExplicitBlueprints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection = { "AssetCollection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPrimaryAssetLabel, AssetCollection), Z_Construct_UScriptStruct_FCollectionReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCollection_MetaData), NewProp_AssetCollection_MetaData) }; // 178448018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIncludeRedirectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPrimaryAssetLabel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::ClassParams = {
	&UPrimaryAssetLabel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPrimaryAssetLabel()
{
	if (!Z_Registration_Info_UClass_UPrimaryAssetLabel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimaryAssetLabel.OuterSingleton, Z_Construct_UClass_UPrimaryAssetLabel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPrimaryAssetLabel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UPrimaryAssetLabel>()
{
	return UPrimaryAssetLabel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryAssetLabel);
UPrimaryAssetLabel::~UPrimaryAssetLabel() {}
// End Class UPrimaryAssetLabel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPrimaryAssetLabel, UPrimaryAssetLabel::StaticClass, TEXT("UPrimaryAssetLabel"), &Z_Registration_Info_UClass_UPrimaryAssetLabel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimaryAssetLabel), 4096411338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_3934099218(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
