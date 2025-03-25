// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraParameterDefinitionsSubscriber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsSubscriber() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FParameterDefinitionsSubscription
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription;
class UScriptStruct* FParameterDefinitionsSubscription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ParameterDefinitionsSubscription"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FParameterDefinitionsSubscription>()
{
	return FParameterDefinitionsSubscription::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionsId_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedChangeIdHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Definitions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefinitionsId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedChangeIdHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterDefinitionsSubscription>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterDefinitionsSubscription, Definitions), Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definitions_MetaData), NewProp_Definitions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId = { "DefinitionsId", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterDefinitionsSubscription, DefinitionsId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefinitionsId_MetaData), NewProp_DefinitionsId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash = { "CachedChangeIdHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterDefinitionsSubscription, CachedChangeIdHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedChangeIdHash_MetaData), NewProp_CachedChangeIdHash_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_Definitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"ParameterDefinitionsSubscription",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers), 0),
	sizeof(FParameterDefinitionsSubscription),
	alignof(FParameterDefinitionsSubscription),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.InnerSingleton, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.InnerSingleton;
}
// End ScriptStruct FParameterDefinitionsSubscription

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParameterDefinitionsSubscription::StaticStruct, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewStructOps, TEXT("ParameterDefinitionsSubscription"), &Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterDefinitionsSubscription), 2160028313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_130882260(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
