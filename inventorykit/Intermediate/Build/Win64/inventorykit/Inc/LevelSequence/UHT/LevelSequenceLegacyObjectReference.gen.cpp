// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Public/LevelSequenceLegacyObjectReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceLegacyObjectReference() {}

// Begin Cross Module References
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin ScriptStruct FLevelSequenceLegacyObjectReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference;
class UScriptStruct* FLevelSequenceLegacyObjectReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceLegacyObjectReference"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceLegacyObjectReference>()
{
	return FLevelSequenceLegacyObjectReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
		{ "ToolTip", "Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceLegacyObjectReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceLegacyObjectReference",
	nullptr,
	0,
	sizeof(FLevelSequenceLegacyObjectReference),
	alignof(FLevelSequenceLegacyObjectReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.InnerSingleton;
}
// End ScriptStruct FLevelSequenceLegacyObjectReference

// Begin ScriptStruct FLevelSequenceObjectReferenceMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap;
class UScriptStruct* FLevelSequenceObjectReferenceMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObjectReferenceMap"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceObjectReferenceMap>()
{
	return FLevelSequenceObjectReferenceMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObjectReferenceMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LevelSequenceObjectReferenceMap",
	nullptr,
	0,
	sizeof(FLevelSequenceObjectReferenceMap),
	alignof(FLevelSequenceObjectReferenceMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.InnerSingleton;
}
// End ScriptStruct FLevelSequenceObjectReferenceMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLevelSequenceLegacyObjectReference::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::NewStructOps, TEXT("LevelSequenceLegacyObjectReference"), &Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceLegacyObjectReference), 2116073420U) },
		{ FLevelSequenceObjectReferenceMap::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::NewStructOps, TEXT("LevelSequenceObjectReferenceMap"), &Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceObjectReferenceMap), 1775958285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_3786411646(TEXT("/Script/LevelSequence"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
