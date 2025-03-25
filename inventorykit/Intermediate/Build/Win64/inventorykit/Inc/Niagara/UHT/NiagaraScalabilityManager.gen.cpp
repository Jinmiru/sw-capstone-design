// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraScalabilityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityManager() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityManager();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraScalabilityManager
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager;
class UScriptStruct* FNiagaraScalabilityManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScalabilityManager, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScalabilityManager"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScalabilityManager>()
{
	return FNiagaraScalabilityManager::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScalabilityManager>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScalabilityManager, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectType_MetaData), NewProp_EffectType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_Inner = { "ManagedComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents = { "ManagedComponents", nullptr, (EPropertyFlags)0x0114008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScalabilityManager, ManagedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedComponents_MetaData), NewProp_ManagedComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraScalabilityManager",
	Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers),
	sizeof(FNiagaraScalabilityManager),
	alignof(FNiagaraScalabilityManager),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityManager()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.InnerSingleton;
}
// End ScriptStruct FNiagaraScalabilityManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraScalabilityManager::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewStructOps, TEXT("NiagaraScalabilityManager"), &Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScalabilityManager), 3694155503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_1007279564(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
