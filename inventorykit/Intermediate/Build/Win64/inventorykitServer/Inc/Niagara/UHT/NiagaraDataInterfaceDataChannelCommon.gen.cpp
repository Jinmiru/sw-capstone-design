// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h"
#include "Niagara/Public/NiagaraTypes.h"
#include "NiagaraCore/Public/NiagaraCompileHash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelCommon() {}

// Begin Cross Module References
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraDataChannelAllocationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode;
static UEnum* ENiagaraDataChannelAllocationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDataChannelAllocationMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataChannelAllocationMode>()
{
	return ENiagaraDataChannelAllocationMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
		{ "Static.Comment", "/** Fixed number of elements available to write per frame. */" },
		{ "Static.Name", "ENiagaraDataChannelAllocationMode::Static" },
		{ "Static.ToolTip", "Fixed number of elements available to write per frame." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraDataChannelAllocationMode::Static", (int64)ENiagaraDataChannelAllocationMode::Static },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraDataChannelAllocationMode",
	"ENiagaraDataChannelAllocationMode",
	Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode.InnerSingleton;
}
// End Enum ENiagaraDataChannelAllocationMode

// Begin ScriptStruct FNDIDataChannelFunctionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo;
class UScriptStruct* FNDIDataChannelFunctionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIDataChannelFunctionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIDataChannelFunctionInfo>()
{
	return FNDIDataChannelFunctionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \nStores info for a function called on a DataChannel DI.\nDescribes a function call which is used when generating binding information between the data and the VM & GPU scripts.\n*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
		{ "ToolTip", "Stores info for a function called on a DataChannel DI.\nDescribes a function call which is used when generating binding information between the data and the VM & GPU scripts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIDataChannelFunctionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelFunctionInfo, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionName_MetaData), NewProp_FunctionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelFunctionInfo, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 2955719795
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelFunctionInfo, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 2955719795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_FunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Inputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewProp_Outputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIDataChannelFunctionInfo",
	Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::PropPointers),
	sizeof(FNDIDataChannelFunctionInfo),
	alignof(FNDIDataChannelFunctionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo.InnerSingleton, Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo.InnerSingleton;
}
// End ScriptStruct FNDIDataChannelFunctionInfo

// Begin ScriptStruct FNDIDataChannel_GPUScriptParameterAccessInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo;
class UScriptStruct* FNDIDataChannel_GPUScriptParameterAccessInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIDataChannel_GPUScriptParameterAccessInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIDataChannel_GPUScriptParameterAccessInfo>()
{
	return FNDIDataChannel_GPUScriptParameterAccessInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A sorted table of parameters accessed by each GPU script */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
		{ "ToolTip", "A sorted table of parameters accessed by each GPU script" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortedParameters_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SortedParameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIDataChannel_GPUScriptParameterAccessInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::NewProp_SortedParameters_Inner = { "SortedParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 2955719795
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::NewProp_SortedParameters = { "SortedParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannel_GPUScriptParameterAccessInfo, SortedParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortedParameters_MetaData), NewProp_SortedParameters_MetaData) }; // 2955719795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::NewProp_SortedParameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::NewProp_SortedParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIDataChannel_GPUScriptParameterAccessInfo",
	Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::PropPointers),
	sizeof(FNDIDataChannel_GPUScriptParameterAccessInfo),
	alignof(FNDIDataChannel_GPUScriptParameterAccessInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo.InnerSingleton, Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo.InnerSingleton;
}
// End ScriptStruct FNDIDataChannel_GPUScriptParameterAccessInfo

// Begin ScriptStruct FNDIDataChannelCompiledData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData;
class UScriptStruct* FNDIDataChannelCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIDataChannelCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIDataChannelCompiledData>()
{
	return FNDIDataChannelCompiledData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \nCompile time data used by Data Channel interfaces.\n*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
		{ "ToolTip", "Compile time data used by Data Channel interfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionInfo_MetaData[] = {
		{ "Comment", "/**\n\x09""Data describing every function call for this DI in VM scripts. \n\x09VM Access to data channels uses a binding from script to DataSet per function call (de-duped by layout).\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
		{ "ToolTip", "Data describing every function call for this DI in VM scripts.\nVM Access to data channels uses a binding from script to DataSet per function call (de-duped by layout)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUScriptParameterInfos_MetaData[] = {
		{ "Comment", "/** \n\x09Info about which parameters are accessed for each GPU script. \n\x09GPU access to data channels uses a binding from script to DataSet per script via a mapping of param<-->data set offsets.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
		{ "ToolTip", "Info about which parameters are accessed for each GPU script.\nGPU access to data channels uses a binding from script to DataSet per script via a mapping of param<-->data set offsets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalParams_MetaData[] = {
		{ "Comment", "/** Total param count across all scripts. Allows easy pre-allocation for the buffers at runtime. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
		{ "ToolTip", "Total param count across all scripts. Allows easy pre-allocation for the buffers at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedByCPU_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedByGPU_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsSpawnDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUScriptParameterInfos_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GPUScriptParameterInfos_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GPUScriptParameterInfos;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalParams;
	static void NewProp_bUsedByCPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedByCPU;
	static void NewProp_bUsedByGPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedByGPU;
	static void NewProp_bNeedsSpawnDataTable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsSpawnDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIDataChannelCompiledData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_FunctionInfo_Inner = { "FunctionInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo, METADATA_PARAMS(0, nullptr) }; // 3983934193
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_FunctionInfo = { "FunctionInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelCompiledData, FunctionInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionInfo_MetaData), NewProp_FunctionInfo_MetaData) }; // 3983934193
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_GPUScriptParameterInfos_ValueProp = { "GPUScriptParameterInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo, METADATA_PARAMS(0, nullptr) }; // 963637530
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_GPUScriptParameterInfos_Key_KeyProp = { "GPUScriptParameterInfos_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(0, nullptr) }; // 314894840
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_GPUScriptParameterInfos = { "GPUScriptParameterInfos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelCompiledData, GPUScriptParameterInfos), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUScriptParameterInfos_MetaData), NewProp_GPUScriptParameterInfos_MetaData) }; // 314894840 963637530
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_TotalParams = { "TotalParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelCompiledData, TotalParams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalParams_MetaData), NewProp_TotalParams_MetaData) };
void Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByCPU_SetBit(void* Obj)
{
	((FNDIDataChannelCompiledData*)Obj)->bUsedByCPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByCPU = { "bUsedByCPU", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIDataChannelCompiledData), &Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByCPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedByCPU_MetaData), NewProp_bUsedByCPU_MetaData) };
void Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByGPU_SetBit(void* Obj)
{
	((FNDIDataChannelCompiledData*)Obj)->bUsedByGPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByGPU = { "bUsedByGPU", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIDataChannelCompiledData), &Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByGPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedByGPU_MetaData), NewProp_bUsedByGPU_MetaData) };
void Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bNeedsSpawnDataTable_SetBit(void* Obj)
{
	((FNDIDataChannelCompiledData*)Obj)->bNeedsSpawnDataTable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bNeedsSpawnDataTable = { "bNeedsSpawnDataTable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIDataChannelCompiledData), &Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bNeedsSpawnDataTable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsSpawnDataTable_MetaData), NewProp_bNeedsSpawnDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_FunctionInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_FunctionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_GPUScriptParameterInfos_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_GPUScriptParameterInfos_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_GPUScriptParameterInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_TotalParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByCPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bUsedByGPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewProp_bNeedsSpawnDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIDataChannelCompiledData",
	Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::PropPointers),
	sizeof(FNDIDataChannelCompiledData),
	alignof(FNDIDataChannelCompiledData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelCompiledData()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData.InnerSingleton;
}
// End ScriptStruct FNDIDataChannelCompiledData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraDataChannelAllocationMode_StaticEnum, TEXT("ENiagaraDataChannelAllocationMode"), &Z_Registration_Info_UEnum_ENiagaraDataChannelAllocationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3662447681U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIDataChannelFunctionInfo::StaticStruct, Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo_Statics::NewStructOps, TEXT("NDIDataChannelFunctionInfo"), &Z_Registration_Info_UScriptStruct_NDIDataChannelFunctionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIDataChannelFunctionInfo), 3983934193U) },
		{ FNDIDataChannel_GPUScriptParameterAccessInfo::StaticStruct, Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo_Statics::NewStructOps, TEXT("NDIDataChannel_GPUScriptParameterAccessInfo"), &Z_Registration_Info_UScriptStruct_NDIDataChannel_GPUScriptParameterAccessInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIDataChannel_GPUScriptParameterAccessInfo), 963637530U) },
		{ FNDIDataChannelCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNDIDataChannelCompiledData_Statics::NewStructOps, TEXT("NDIDataChannelCompiledData"), &Z_Registration_Info_UScriptStruct_NDIDataChannelCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIDataChannelCompiledData), 3473991821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_2118438272(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
