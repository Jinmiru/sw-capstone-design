// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraScriptExecutionParameterStore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptExecutionParameterStore() {}

// Begin Cross Module References
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraScriptExecutionPaddingInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo;
class UScriptStruct* FNiagaraScriptExecutionPaddingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptExecutionPaddingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptExecutionPaddingInfo>()
{
	return FNiagaraScriptExecutionPaddingInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_SrcOffset;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_DestOffset;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_SrcSize;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_DestSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionPaddingInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset = { "SrcOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, SrcOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcOffset_MetaData), NewProp_SrcOffset_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset = { "DestOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, DestOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestOffset_MetaData), NewProp_DestOffset_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize = { "SrcSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, SrcSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcSize_MetaData), NewProp_SrcSize_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize = { "DestSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, DestSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestSize_MetaData), NewProp_DestSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraScriptExecutionPaddingInfo",
	Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers),
	sizeof(FNiagaraScriptExecutionPaddingInfo),
	alignof(FNiagaraScriptExecutionPaddingInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraScriptExecutionPaddingInfo

// Begin ScriptStruct FNiagaraScriptExecutionParameterStore
static_assert(std::is_polymorphic<FNiagaraScriptExecutionParameterStore>() == std::is_polymorphic<FNiagaraParameterStore>(), "USTRUCT FNiagaraScriptExecutionParameterStore cannot be polymorphic unless super FNiagaraParameterStore is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore;
class UScriptStruct* FNiagaraScriptExecutionParameterStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptExecutionParameterStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptExecutionParameterStore>()
{
	return FNiagaraScriptExecutionParameterStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\nStorage class containing actual runtime buffers to be used by the VM and the GPU.\nIs not the actual source for any parameter data, rather just the final place it's gathered from various other places ready for execution.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "Storage class containing actual runtime buffers to be used by the VM and the GPU.\nIs not the actual source for any parameter data, rather just the final place it's gathered from various other places ready for execution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSize_MetaData[] = {
		{ "Comment", "/** Size of the parameter data not including prev frame values or internal constants. Allows copying into previous parameter values for interpolated spawn scripts. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "Size of the parameter data not including prev frame values or internal constants. Allows copying into previous parameter values for interpolated spawn scripts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterSize;
	static void NewProp_bInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionParameterStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize = { "ParameterSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptExecutionParameterStore, ParameterSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterSize_MetaData), NewProp_ParameterSize_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_SetBit(void* Obj)
{
	((FNiagaraScriptExecutionParameterStore*)Obj)->bInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraScriptExecutionParameterStore), &Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialized_MetaData), NewProp_bInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraParameterStore,
	&NewStructOps,
	"NiagaraScriptExecutionParameterStore",
	Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers),
	sizeof(FNiagaraScriptExecutionParameterStore),
	alignof(FNiagaraScriptExecutionParameterStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.InnerSingleton;
}
// End ScriptStruct FNiagaraScriptExecutionParameterStore

// Begin ScriptStruct FNiagaraScriptInstanceParameterStore
static_assert(std::is_polymorphic<FNiagaraScriptInstanceParameterStore>() == std::is_polymorphic<FNiagaraParameterStore>(), "USTRUCT FNiagaraScriptInstanceParameterStore cannot be polymorphic unless super FNiagaraParameterStore is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore;
class UScriptStruct* FNiagaraScriptInstanceParameterStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptInstanceParameterStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptInstanceParameterStore>()
{
	return FNiagaraScriptInstanceParameterStore::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// FNiagaraScriptInstanceParameterStore\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "FNiagaraScriptInstanceParameterStore" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptInstanceParameterStore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraParameterStore,
	&NewStructOps,
	"NiagaraScriptInstanceParameterStore",
	nullptr,
	0,
	sizeof(FNiagaraScriptInstanceParameterStore),
	alignof(FNiagaraScriptInstanceParameterStore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.InnerSingleton;
}
// End ScriptStruct FNiagaraScriptInstanceParameterStore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraScriptExecutionPaddingInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewStructOps, TEXT("NiagaraScriptExecutionPaddingInfo"), &Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptExecutionPaddingInfo), 2807555710U) },
		{ FNiagaraScriptExecutionParameterStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewStructOps, TEXT("NiagaraScriptExecutionParameterStore"), &Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptExecutionParameterStore), 3272560127U) },
		{ FNiagaraScriptInstanceParameterStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::NewStructOps, TEXT("NiagaraScriptInstanceParameterStore"), &Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptInstanceParameterStore), 1973792439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_445307054(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
