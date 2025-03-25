// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraUserRedirectionParameterStore.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraUserRedirectionParameterStore() {}

// Begin Cross Module References
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraUserRedirectionParameterStore
static_assert(std::is_polymorphic<FNiagaraUserRedirectionParameterStore>() == std::is_polymorphic<FNiagaraParameterStore>(), "USTRUCT FNiagaraUserRedirectionParameterStore cannot be polymorphic unless super FNiagaraParameterStore is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore;
class UScriptStruct* FNiagaraUserRedirectionParameterStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraUserRedirectionParameterStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraUserRedirectionParameterStore>()
{
	return FNiagaraUserRedirectionParameterStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Extension of the base parameter store to allow the user in the editor to use variable names without \n* the \"User.\" namespace prefix. The names without the prefix just redirect to the original variables, it is just done\n* for better usability.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraUserRedirectionParameterStore.h" },
		{ "ToolTip", "Extension of the base parameter store to allow the user in the editor to use variable names without\nthe \"User.\" namespace prefix. The names without the prefix just redirect to the original variables, it is just done\nfor better usability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserParameterRedirects_MetaData[] = {
		{ "Comment", "/** Map from the variables with shortened display names to the original variables with the full namespace */" },
		{ "ModuleRelativePath", "Public/NiagaraUserRedirectionParameterStore.h" },
		{ "ToolTip", "Map from the variables with shortened display names to the original variables with the full namespace" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserParameterRedirects_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserParameterRedirects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UserParameterRedirects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUserRedirectionParameterStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_ValueProp = { "UserParameterRedirects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_Key_KeyProp = { "UserParameterRedirects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects = { "UserParameterRedirects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraUserRedirectionParameterStore, UserParameterRedirects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserParameterRedirects_MetaData), NewProp_UserParameterRedirects_MetaData) }; // 2475164134 2475164134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewProp_UserParameterRedirects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraParameterStore,
	&NewStructOps,
	"NiagaraUserRedirectionParameterStore",
	Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::PropPointers),
	sizeof(FNiagaraUserRedirectionParameterStore),
	alignof(FNiagaraUserRedirectionParameterStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore.InnerSingleton;
}
// End ScriptStruct FNiagaraUserRedirectionParameterStore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraUserRedirectionParameterStore_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraUserRedirectionParameterStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewStructOps, TEXT("NiagaraUserRedirectionParameterStore"), &Z_Registration_Info_UScriptStruct_NiagaraUserRedirectionParameterStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraUserRedirectionParameterStore), 366734223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraUserRedirectionParameterStore_h_4103842512(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraUserRedirectionParameterStore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraUserRedirectionParameterStore_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
