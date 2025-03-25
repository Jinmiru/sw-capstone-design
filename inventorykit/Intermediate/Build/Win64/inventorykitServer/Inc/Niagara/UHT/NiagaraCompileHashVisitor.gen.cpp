// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraCompileHashVisitor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCompileHashVisitor() {}

// Begin Cross Module References
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraCompileHashVisitorDebugInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo;
class UScriptStruct* FNiagaraCompileHashVisitorDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCompileHashVisitorDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCompileHashVisitorDebugInfo>()
{
	return FNiagaraCompileHashVisitorDebugInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHashVisitor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHashVisitor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHashVisitor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHashVisitor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyKeys;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileHashVisitorDebugInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, Object), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_Inner = { "PropertyKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys = { "PropertyKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyKeys_MetaData), NewProp_PropertyKeys_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_Inner = { "PropertyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues = { "PropertyValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraCompileHashVisitorDebugInfo, PropertyValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValues_MetaData), NewProp_PropertyValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewProp_PropertyValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraCompileHashVisitorDebugInfo",
	Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::PropPointers),
	sizeof(FNiagaraCompileHashVisitorDebugInfo),
	alignof(FNiagaraCompileHashVisitorDebugInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraCompileHashVisitorDebugInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompileHashVisitor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraCompileHashVisitorDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompileHashVisitorDebugInfo_Statics::NewStructOps, TEXT("NiagaraCompileHashVisitorDebugInfo"), &Z_Registration_Info_UScriptStruct_NiagaraCompileHashVisitorDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompileHashVisitorDebugInfo), 3537400407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompileHashVisitor_h_1319942765(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompileHashVisitor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompileHashVisitor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
