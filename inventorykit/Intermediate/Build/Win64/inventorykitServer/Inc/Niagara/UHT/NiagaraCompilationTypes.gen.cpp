// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraCompilationTypes.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCompilationTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraScriptAsyncCompileData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData;
class UScriptStruct* FNiagaraScriptAsyncCompileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptAsyncCompileData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptAsyncCompileData>()
{
	return FNiagaraScriptAsyncCompileData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RapidIterationParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamedDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RapidIterationParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RapidIterationParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NamedDataInterfaces_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NamedDataInterfaces_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NamedDataInterfaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptAsyncCompileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters_Inner = { "RapidIterationParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters = { "RapidIterationParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptAsyncCompileData, RapidIterationParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RapidIterationParameters_MetaData), NewProp_RapidIterationParameters_MetaData) }; // 2475164134
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_ValueProp = { "NamedDataInterfaces", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_Key_KeyProp = { "NamedDataInterfaces_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces = { "NamedDataInterfaces", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptAsyncCompileData, NamedDataInterfaces), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamedDataInterfaces_MetaData), NewProp_NamedDataInterfaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraScriptAsyncCompileData",
	Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers),
	sizeof(FNiagaraScriptAsyncCompileData),
	alignof(FNiagaraScriptAsyncCompileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.InnerSingleton;
}
// End ScriptStruct FNiagaraScriptAsyncCompileData

// Begin ScriptStruct FNiagaraSystemAsyncCompileResults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults;
class UScriptStruct* FNiagaraSystemAsyncCompileResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemAsyncCompileResults"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemAsyncCompileResults>()
{
	return FNiagaraSystemAsyncCompileResults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExposedVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedVariables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemAsyncCompileResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects_Inner = { "RootObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects = { "RootObjects", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemAsyncCompileResults, RootObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootObjects_MetaData), NewProp_RootObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables_Inner = { "ExposedVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2475164134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables = { "ExposedVariables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemAsyncCompileResults, ExposedVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExposedVariables_MetaData), NewProp_ExposedVariables_MetaData) }; // 2475164134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSystemAsyncCompileResults",
	Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers),
	sizeof(FNiagaraSystemAsyncCompileResults),
	alignof(FNiagaraSystemAsyncCompileResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemAsyncCompileResults

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraScriptAsyncCompileData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewStructOps, TEXT("NiagaraScriptAsyncCompileData"), &Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptAsyncCompileData), 3690874071U) },
		{ FNiagaraSystemAsyncCompileResults::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewStructOps, TEXT("NiagaraSystemAsyncCompileResults"), &Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemAsyncCompileResults), 3851238404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_1649858567(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
