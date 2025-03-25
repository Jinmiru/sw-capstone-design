// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Private/LegacyLazyObjectPtrFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyLazyObjectPtrFragment() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin ScriptStruct FLegacyLazyObjectPtrFragment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment;
class UScriptStruct* FLegacyLazyObjectPtrFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LegacyLazyObjectPtrFragment"));
	}
	return Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLegacyLazyObjectPtrFragment>()
{
	return FLegacyLazyObjectPtrFragment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LegacyLazyObjectPtrFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LazyObjectId_MetaData[] = {
		{ "ModuleRelativePath", "Private/LegacyLazyObjectPtrFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LazyObjectId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacyLazyObjectPtrFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::NewProp_LazyObjectId = { "LazyObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLegacyLazyObjectPtrFragment, LazyObjectId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LazyObjectId_MetaData), NewProp_LazyObjectId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::NewProp_LazyObjectId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	nullptr,
	&NewStructOps,
	"LegacyLazyObjectPtrFragment",
	Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::PropPointers),
	sizeof(FLegacyLazyObjectPtrFragment),
	alignof(FLegacyLazyObjectPtrFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment()
{
	if (!Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment.InnerSingleton, Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment.InnerSingleton;
}
// End ScriptStruct FLegacyLazyObjectPtrFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LegacyLazyObjectPtrFragment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLegacyLazyObjectPtrFragment::StaticStruct, Z_Construct_UScriptStruct_FLegacyLazyObjectPtrFragment_Statics::NewStructOps, TEXT("LegacyLazyObjectPtrFragment"), &Z_Registration_Info_UScriptStruct_LegacyLazyObjectPtrFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLegacyLazyObjectPtrFragment), 407796977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LegacyLazyObjectPtrFragment_h_472080098(TEXT("/Script/LevelSequence"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LegacyLazyObjectPtrFragment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LegacyLazyObjectPtrFragment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
