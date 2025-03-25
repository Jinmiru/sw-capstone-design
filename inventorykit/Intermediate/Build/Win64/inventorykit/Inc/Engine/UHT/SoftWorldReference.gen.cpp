// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/SoftWorldReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoftWorldReference() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftWorldReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSoftWorldReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftWorldReference;
class UScriptStruct* FSoftWorldReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftWorldReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftWorldReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftWorldReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoftWorldReference"));
	}
	return Z_Registration_Info_UScriptStruct_SoftWorldReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoftWorldReference>()
{
	return FSoftWorldReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftWorldReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A simple wrapper type to enable content-defined structs to hold soft references to UWorld assets **/" },
		{ "ModuleRelativePath", "Classes/Engine/SoftWorldReference.h" },
		{ "ToolTip", "A simple wrapper type to enable content-defined structs to hold soft references to UWorld assets *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Engine/SoftWorldReference.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftWorldReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftWorldReference_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftWorldReference, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldAsset_MetaData), NewProp_WorldAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoftWorldReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftWorldReference_Statics::NewProp_WorldAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftWorldReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftWorldReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SoftWorldReference",
	Z_Construct_UScriptStruct_FSoftWorldReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftWorldReference_Statics::PropPointers),
	sizeof(FSoftWorldReference),
	alignof(FSoftWorldReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftWorldReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftWorldReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftWorldReference()
{
	if (!Z_Registration_Info_UScriptStruct_SoftWorldReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftWorldReference.InnerSingleton, Z_Construct_UScriptStruct_FSoftWorldReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftWorldReference.InnerSingleton;
}
// End ScriptStruct FSoftWorldReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SoftWorldReference_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoftWorldReference::StaticStruct, Z_Construct_UScriptStruct_FSoftWorldReference_Statics::NewStructOps, TEXT("SoftWorldReference"), &Z_Registration_Info_UScriptStruct_SoftWorldReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftWorldReference), 3378476157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SoftWorldReference_h_1517499625(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SoftWorldReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SoftWorldReference_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
