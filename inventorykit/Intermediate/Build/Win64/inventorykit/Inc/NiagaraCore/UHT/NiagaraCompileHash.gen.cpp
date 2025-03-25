// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCore/Public/NiagaraCompileHash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCompileHash() {}

// Begin Cross Module References
NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References

// Begin ScriptStruct FNiagaraCompileHash
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompileHash;
class UScriptStruct* FNiagaraCompileHash::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileHash.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompileHash.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileHash, (UObject*)Z_Construct_UPackage__Script_NiagaraCore(), TEXT("NiagaraCompileHash"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileHash.OuterSingleton;
}
template<> NIAGARACORE_API UScriptStruct* StaticStruct<FNiagaraCompileHash>()
{
	return FNiagaraCompileHash::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHash.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHash.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataHash_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileHash>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_Inner = { "DataHash", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash = { "DataHash", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileHash, DataHash), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataHash_MetaData), NewProp_DataHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
	nullptr,
	&NewStructOps,
	"NiagaraCompileHash",
	Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers),
	sizeof(FNiagaraCompileHash),
	alignof(FNiagaraCompileHash),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileHash.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompileHash.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileHash.InnerSingleton;
}
// End ScriptStruct FNiagaraCompileHash

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraCompileHash::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewStructOps, TEXT("NiagaraCompileHash"), &Z_Registration_Info_UScriptStruct_NiagaraCompileHash, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompileHash), 314894840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_4174924716(TEXT("/Script/NiagaraCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
