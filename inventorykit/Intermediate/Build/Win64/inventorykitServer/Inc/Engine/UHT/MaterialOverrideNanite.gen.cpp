// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialOverrideNanite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialOverrideNanite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverrideNanite();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMaterialOverrideNanite
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialOverrideNanite;
class UScriptStruct* FMaterialOverrideNanite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialOverrideNanite, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialOverrideNanite"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialOverrideNanite>()
{
	return FMaterialOverrideNanite::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Storage for nanite material override.\n * An override material can be selected, and the override material can be used according to the current settings.\n * We handle removing the override material and its dependencies from the cook on platforms where we can determine \n * that the override material can never be used.\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "Storage for nanite material override.\nAn override material can be selected, and the override material can be used according to the current settings.\nWe handle removing the override material and its dependencies from the cook on platforms where we can determine\nthat the override material can never be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverride_MetaData[] = {
		{ "Comment", "/** \n\x09 * Stored flag to set whether we apply this override.  \n\x09 * This is useful when evaluating an override along a hierachy of settings.\n\x09 * We default to true to always override.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "Stored flag to set whether we apply this override.\nThis is useful when evaluating an override along a hierachy of settings.\nWe default to true to always override." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialEditor_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/** \n\x09 * EditorOnly version of the OverrideMaterial reference.\n\x09 * This is a hard reference, but is editoronly. We rely on -skiponlyeditoronly to avoid pulling this editoronly hard reference into the cook.\n\x09 */" },
		{ "DisplayName", "Nanite Override Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "EditorOnly version of the OverrideMaterial reference.\nThis is a hard reference, but is editoronly. We rely on -skiponlyeditoronly to avoid pulling this editoronly hard reference into the cook." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[] = {
		{ "Comment", "/** \n\x09 * Reference to our override material.\n\x09 * This is only non-null in cooked packages, and is only non-null for cooked platforms that support nanite.\x09\n\x09 * Note that we skip default serialization and use special logic inside Serialize().\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "Reference to our override material.\nThis is only non-null in cooked packages, and is only non-null for cooked platforms that support nanite.\nNote that we skip default serialization and use special logic inside Serialize()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialRef_MetaData[] = {
		{ "Comment", "/** Legacy editor soft reference that has been replaced by OverrideMaterialEditor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialOverrideNanite.h" },
		{ "ToolTip", "Legacy editor soft reference that has been replaced by OverrideMaterialEditor." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverride;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterialEditor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideMaterialRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialOverrideNanite>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_SetBit(void* Obj)
{
	((FMaterialOverrideNanite*)Obj)->bEnableOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride = { "bEnableOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialOverrideNanite), &Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOverride_MetaData), NewProp_bEnableOverride_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialEditor = { "OverrideMaterialEditor", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialOverrideNanite, OverrideMaterialEditor), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterialEditor_MetaData), NewProp_OverrideMaterialEditor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x01a4080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialOverrideNanite, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterial_MetaData), NewProp_OverrideMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialRef = { "OverrideMaterialRef", nullptr, (EPropertyFlags)0x00a4080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialOverrideNanite, OverrideMaterialRef), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterialRef_MetaData), NewProp_OverrideMaterialRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_bEnableOverride,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialEditor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewProp_OverrideMaterialRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialOverrideNanite",
	Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::PropPointers),
	sizeof(FMaterialOverrideNanite),
	alignof(FMaterialOverrideNanite),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverrideNanite()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.InnerSingleton, Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialOverrideNanite.InnerSingleton;
}
// End ScriptStruct FMaterialOverrideNanite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialOverrideNanite::StaticStruct, Z_Construct_UScriptStruct_FMaterialOverrideNanite_Statics::NewStructOps, TEXT("MaterialOverrideNanite"), &Z_Registration_Info_UScriptStruct_MaterialOverrideNanite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialOverrideNanite), 3962272721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_1516041328(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialOverrideNanite_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
