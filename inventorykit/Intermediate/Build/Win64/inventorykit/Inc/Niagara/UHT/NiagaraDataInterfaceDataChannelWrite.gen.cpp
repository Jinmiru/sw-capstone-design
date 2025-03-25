// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h"
#include "Niagara/Classes/NiagaraDataSetCompiledData.h"
#include "Niagara/Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelWrite() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
NIAGARA_API UClass* Z_Construct_UClass_UNDIDataChannelWriteSimCacheData();
NIAGARA_API UClass* Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNDIDataChannelWriteCompiledData
static_assert(std::is_polymorphic<FNDIDataChannelWriteCompiledData>() == std::is_polymorphic<FNDIDataChannelCompiledData>(), "USTRUCT FNDIDataChannelWriteCompiledData cannot be polymorphic unless super FNDIDataChannelCompiledData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData;
class UScriptStruct* FNDIDataChannelWriteCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIDataChannelWriteCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIDataChannelWriteCompiledData>()
{
	return FNDIDataChannelWriteCompiledData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Additional compile time information used by the Write DI. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Additional compile time information used by the Write DI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayout_MetaData[] = {
		{ "Comment", "/** Internal buffer layout. Contains only the data actually written by this DI. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Internal buffer layout. Contains only the data actually written by this DI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIDataChannelWriteCompiledData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewProp_DataLayout = { "DataLayout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelWriteCompiledData, DataLayout), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayout_MetaData), NewProp_DataLayout_MetaData) }; // 3790253218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewProp_DataLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNDIDataChannelCompiledData,
	&NewStructOps,
	"NDIDataChannelWriteCompiledData",
	Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::PropPointers),
	sizeof(FNDIDataChannelWriteCompiledData),
	alignof(FNDIDataChannelWriteCompiledData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.InnerSingleton;
}
// End ScriptStruct FNDIDataChannelWriteCompiledData

// Begin ScriptStruct FNDIDataChannelWriteSimCacheFrameBuffer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer;
class UScriptStruct* FNDIDataChannelWriteSimCacheFrameBuffer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIDataChannelWriteSimCacheFrameBuffer"));
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIDataChannelWriteSimCacheFrameBuffer>()
{
	return FNDIDataChannelWriteSimCacheFrameBuffer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceVar_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceVar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIDataChannelWriteSimCacheFrameBuffer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelWriteSimCacheFrameBuffer, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelWriteSimCacheFrameBuffer, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_SourceVar = { "SourceVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelWriteSimCacheFrameBuffer, SourceVar), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceVar_MetaData), NewProp_SourceVar_MetaData) }; // 2955719795
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewProp_SourceVar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIDataChannelWriteSimCacheFrameBuffer",
	Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::PropPointers),
	sizeof(FNDIDataChannelWriteSimCacheFrameBuffer),
	alignof(FNDIDataChannelWriteSimCacheFrameBuffer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer.InnerSingleton, Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer.InnerSingleton;
}
// End ScriptStruct FNDIDataChannelWriteSimCacheFrameBuffer

// Begin ScriptStruct FNDIDataChannelWriteSimCacheFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame;
class UScriptStruct* FNDIDataChannelWriteSimCacheFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIDataChannelWriteSimCacheFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIDataChannelWriteSimCacheFrame>()
{
	return FNDIDataChannelWriteSimCacheFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumElements_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleToGame_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleToCPUSims_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleToGPUSims_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumElements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VariableData;
	static void NewProp_bVisibleToGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGame;
	static void NewProp_bVisibleToCPUSims_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToCPUSims;
	static void NewProp_bVisibleToGPUSims_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGPUSims;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIDataChannelWriteSimCacheFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_NumElements = { "NumElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelWriteSimCacheFrame, NumElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumElements_MetaData), NewProp_NumElements_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_VariableData_Inner = { "VariableData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer, METADATA_PARAMS(0, nullptr) }; // 1144856598
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_VariableData = { "VariableData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIDataChannelWriteSimCacheFrame, VariableData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableData_MetaData), NewProp_VariableData_MetaData) }; // 1144856598
void Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGame_SetBit(void* Obj)
{
	((FNDIDataChannelWriteSimCacheFrame*)Obj)->bVisibleToGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGame = { "bVisibleToGame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIDataChannelWriteSimCacheFrame), &Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleToGame_MetaData), NewProp_bVisibleToGame_MetaData) };
void Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToCPUSims_SetBit(void* Obj)
{
	((FNDIDataChannelWriteSimCacheFrame*)Obj)->bVisibleToCPUSims = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToCPUSims = { "bVisibleToCPUSims", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIDataChannelWriteSimCacheFrame), &Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToCPUSims_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleToCPUSims_MetaData), NewProp_bVisibleToCPUSims_MetaData) };
void Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGPUSims_SetBit(void* Obj)
{
	((FNDIDataChannelWriteSimCacheFrame*)Obj)->bVisibleToGPUSims = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGPUSims = { "bVisibleToGPUSims", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIDataChannelWriteSimCacheFrame), &Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGPUSims_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleToGPUSims_MetaData), NewProp_bVisibleToGPUSims_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_NumElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_VariableData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_VariableData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToCPUSims,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewProp_bVisibleToGPUSims,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIDataChannelWriteSimCacheFrame",
	Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::PropPointers),
	sizeof(FNDIDataChannelWriteSimCacheFrame),
	alignof(FNDIDataChannelWriteSimCacheFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame.InnerSingleton, Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame.InnerSingleton;
}
// End ScriptStruct FNDIDataChannelWriteSimCacheFrame

// Begin Class UNDIDataChannelWriteSimCacheData
void UNDIDataChannelWriteSimCacheData::StaticRegisterNativesUNDIDataChannelWriteSimCacheData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIDataChannelWriteSimCacheData);
UClass* Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_NoRegister()
{
	return UNDIDataChannelWriteSimCacheData::StaticClass();
}
struct Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataChannelReference_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataChannelReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIDataChannelWriteSimCacheData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::NewProp_FrameData_Inner = { "FrameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame, METADATA_PARAMS(0, nullptr) }; // 1931184131
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIDataChannelWriteSimCacheData, FrameData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 1931184131
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::NewProp_DataChannelReference = { "DataChannelReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIDataChannelWriteSimCacheData, DataChannelReference), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataChannelReference_MetaData), NewProp_DataChannelReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::NewProp_FrameData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::NewProp_FrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::NewProp_DataChannelReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::ClassParams = {
	&UNDIDataChannelWriteSimCacheData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIDataChannelWriteSimCacheData()
{
	if (!Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.OuterSingleton, Z_Construct_UClass_UNDIDataChannelWriteSimCacheData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNDIDataChannelWriteSimCacheData>()
{
	return UNDIDataChannelWriteSimCacheData::StaticClass();
}
UNDIDataChannelWriteSimCacheData::UNDIDataChannelWriteSimCacheData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIDataChannelWriteSimCacheData);
UNDIDataChannelWriteSimCacheData::~UNDIDataChannelWriteSimCacheData() {}
// End Class UNDIDataChannelWriteSimCacheData

// Begin Class UNiagaraDataInterfaceDataChannelWrite
void UNiagaraDataInterfaceDataChannelWrite::StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDataChannelWrite);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister()
{
	return UNiagaraDataInterfaceDataChannelWrite::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Data Channels" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Data Channel Writer" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocationMode_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** How should we allocate the buffer into which we write data. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "How should we allocate the buffer into which we write data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllocationCount_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** How many elements to allocate for writing per frame? Usage is defendant on AllocationMode. TODO: Allow allocation count to be controlled dynamically from script? */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "How many elements to allocate for writing per frame? Usage is defendant on AllocationMode. TODO: Allow allocation count to be controlled dynamically from script?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPublishToGame_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** Whether the data generated by this DI should be published to the world game data channel. This is require to allow game BP and C++ to read this data. */" },
		{ "DisplayName", "Visible to Blueprint" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Whether the data generated by this DI should be published to the world game data channel. This is require to allow game BP and C++ to read this data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPublishToCPU_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** Whether the data generated by this DI should be published to CPU emitters in other Niagara systems. */" },
		{ "DisplayName", "Visible to CPU systems" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Whether the data generated by this DI should be published to CPU emitters in other Niagara systems." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPublishToGPU_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** Whether the data generated by this DI should be published to GPU emitters in other Niagara systems.  */" },
		{ "DisplayName", "Visible to GPU systems" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Whether the data generated by this DI should be published to GPU emitters in other Niagara systems." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateDestinationDataEveryTick_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/**\n\x09Whether this DI should request updated destination data from the Data Channel each tick.\n\x09Some Data Channels have multiple separate data elements for things such as spacial subdivision. \n\x09""Each DI will request the correct one for it's owning system instance from the data channel. \n\x09""Depending on the data channel this could be an expensive search so we should avoid doing this every tick if possible.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Whether this DI should request updated destination data from the Data Channel each tick.\nSome Data Channels have multiple separate data elements for things such as spacial subdivision.\nEach DI will request the correct one for it's owning system instance from the data channel.\nDepending on the data channel this could be an expensive search so we should avoid doing this every tick if possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** The data channel to write to. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "The data channel to write to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllocationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllocationMode;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AllocationCount;
	static void NewProp_bPublishToGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublishToGame;
	static void NewProp_bPublishToCPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublishToCPU;
	static void NewProp_bPublishToGPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublishToGPU;
	static void NewProp_bUpdateDestinationDataEveryTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateDestinationDataEveryTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDataChannelWrite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode = { "AllocationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, AllocationMode), Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocationMode_MetaData), NewProp_AllocationMode_MetaData) }; // 3662447681
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationCount = { "AllocationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, AllocationCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllocationCount_MetaData), NewProp_AllocationCount_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDataChannelWrite*)Obj)->bPublishToGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame = { "bPublishToGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelWrite), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPublishToGame_MetaData), NewProp_bPublishToGame_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDataChannelWrite*)Obj)->bPublishToCPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU = { "bPublishToCPU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelWrite), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPublishToCPU_MetaData), NewProp_bPublishToCPU_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDataChannelWrite*)Obj)->bPublishToGPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU = { "bPublishToGPU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelWrite), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPublishToGPU_MetaData), NewProp_bPublishToGPU_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bUpdateDestinationDataEveryTick_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDataChannelWrite*)Obj)->bUpdateDestinationDataEveryTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bUpdateDestinationDataEveryTick = { "bUpdateDestinationDataEveryTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelWrite), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bUpdateDestinationDataEveryTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateDestinationDataEveryTick_MetaData), NewProp_bUpdateDestinationDataEveryTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, CompiledData), Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompiledData_MetaData), NewProp_CompiledData_MetaData) }; // 3738449323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bUpdateDestinationDataEveryTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_CompiledData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceDataChannelWrite, INiagaraSimCacheCustomStorageInterface), false },  // 2941118379
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::ClassParams = {
	&UNiagaraDataInterfaceDataChannelWrite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDataChannelWrite>()
{
	return UNiagaraDataInterfaceDataChannelWrite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDataChannelWrite);
UNiagaraDataInterfaceDataChannelWrite::~UNiagaraDataInterfaceDataChannelWrite() {}
// End Class UNiagaraDataInterfaceDataChannelWrite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIDataChannelWriteCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewStructOps, TEXT("NDIDataChannelWriteCompiledData"), &Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIDataChannelWriteCompiledData), 3738449323U) },
		{ FNDIDataChannelWriteSimCacheFrameBuffer::StaticStruct, Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrameBuffer_Statics::NewStructOps, TEXT("NDIDataChannelWriteSimCacheFrameBuffer"), &Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrameBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIDataChannelWriteSimCacheFrameBuffer), 1144856598U) },
		{ FNDIDataChannelWriteSimCacheFrame::StaticStruct, Z_Construct_UScriptStruct_FNDIDataChannelWriteSimCacheFrame_Statics::NewStructOps, TEXT("NDIDataChannelWriteSimCacheFrame"), &Z_Registration_Info_UScriptStruct_NDIDataChannelWriteSimCacheFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIDataChannelWriteSimCacheFrame), 1931184131U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIDataChannelWriteSimCacheData, UNDIDataChannelWriteSimCacheData::StaticClass, TEXT("UNDIDataChannelWriteSimCacheData"), &Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIDataChannelWriteSimCacheData), 3034441365U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite, UNiagaraDataInterfaceDataChannelWrite::StaticClass, TEXT("UNiagaraDataInterfaceDataChannelWrite"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDataChannelWrite), 1948896882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_3092303288(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
