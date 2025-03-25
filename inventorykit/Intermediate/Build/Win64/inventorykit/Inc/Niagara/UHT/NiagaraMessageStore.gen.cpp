// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraMessageStore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMessageStore() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMessageStore();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraMessageStore
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMessageStore;
class UScriptStruct* FNiagaraMessageStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMessageStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMessageStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMessageStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMessageStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMessageStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMessageStore>()
{
	return FNiagaraMessageStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessageStore.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageKeyToMessageMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessageStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismissedMessageKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessageStore.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageKeyToMessageMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageKeyToMessageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MessageKeyToMessageMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DismissedMessageKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DismissedMessageKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMessageStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_ValueProp = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp = { "MessageKeyToMessageMap_Key", nullptr, (EPropertyFlags)0x0100000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMessageStore, MessageKeyToMessageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageKeyToMessageMap_MetaData), NewProp_MessageKeyToMessageMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys_Inner = { "DismissedMessageKeys", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys = { "DismissedMessageKeys", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMessageStore, DismissedMessageKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismissedMessageKeys_MetaData), NewProp_DismissedMessageKeys_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_MessageKeyToMessageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewProp_DismissedMessageKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraMessageStore",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::PropPointers), 0),
	sizeof(FNiagaraMessageStore),
	alignof(FNiagaraMessageStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMessageStore()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMessageStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMessageStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMessageStore.InnerSingleton;
}
// End ScriptStruct FNiagaraMessageStore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraMessageStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMessageStore_Statics::NewStructOps, TEXT("NiagaraMessageStore"), &Z_Registration_Info_UScriptStruct_NiagaraMessageStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMessageStore), 30379371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_3890169274(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMessageStore_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
