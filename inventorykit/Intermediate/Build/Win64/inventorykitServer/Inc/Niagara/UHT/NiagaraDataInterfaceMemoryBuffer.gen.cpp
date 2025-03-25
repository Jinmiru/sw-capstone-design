// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMemoryBuffer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNDIMemoryBufferSimCacheData();
NIAGARA_API UClass* Z_Construct_UClass_UNDIMemoryBufferSimCacheData_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceMemoryBuffer
void UNiagaraDataInterfaceMemoryBuffer::StaticRegisterNativesUNiagaraDataInterfaceMemoryBuffer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceMemoryBuffer);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_NoRegister()
{
	return UNiagaraDataInterfaceMemoryBuffer::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Data Interface" },
		{ "Comment", "/**\nData interface used to access a memory buffer.\nThe user is responsible for how data is read / wrote.\nThe DI will ensure no out of bounds access but not that the elements are of the correct type (i.e. float or int)\nElements are considered to be 4 bytes in size.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Memory Buffer" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
		{ "ToolTip", "Data interface used to access a memory buffer.\nThe user is responsible for how data is read / wrote.\nThe DI will ensure no out of bounds access but not that the elements are of the correct type (i.e. float or int)\nElements are considered to be 4 bytes in size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNumElements_MetaData[] = {
		{ "Category", "Byte Buffer" },
		{ "Comment", "/** Default space we will allocate for the memory buffer. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
		{ "ToolTip", "Default space we will allocate for the memory buffer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuSyncMode_MetaData[] = {
		{ "Category", "Byte Buffer" },
		{ "Comment", "/** How should we synhronize the data between CPU and GPU memory. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
		{ "ToolTip", "How should we synhronize the data between CPU and GPU memory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultNumElements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GpuSyncMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuSyncMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceMemoryBuffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::NewProp_DefaultNumElements = { "DefaultNumElements", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceMemoryBuffer, DefaultNumElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNumElements_MetaData), NewProp_DefaultNumElements_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::NewProp_GpuSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::NewProp_GpuSyncMode = { "GpuSyncMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceMemoryBuffer, GpuSyncMode), Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuSyncMode_MetaData), NewProp_GpuSyncMode_MetaData) }; // 3193981208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::NewProp_DefaultNumElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::NewProp_GpuSyncMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::NewProp_GpuSyncMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceMemoryBuffer, INiagaraSimCacheCustomStorageInterface), false },  // 2941118379
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::ClassParams = {
	&UNiagaraDataInterfaceMemoryBuffer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceMemoryBuffer>()
{
	return UNiagaraDataInterfaceMemoryBuffer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceMemoryBuffer);
UNiagaraDataInterfaceMemoryBuffer::~UNiagaraDataInterfaceMemoryBuffer() {}
// End Class UNiagaraDataInterfaceMemoryBuffer

// Begin ScriptStruct FNDIMemoryBufferSimCacheDataFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame;
class UScriptStruct* FNDIMemoryBufferSimCacheDataFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIMemoryBufferSimCacheDataFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIMemoryBufferSimCacheDataFrame>()
{
	return FNDIMemoryBufferSimCacheDataFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CpuBufferSize_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CpuDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuBufferSize_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CpuBufferSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CpuDataOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GpuBufferSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GpuDataOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIMemoryBufferSimCacheDataFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_CpuBufferSize = { "CpuBufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMemoryBufferSimCacheDataFrame, CpuBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CpuBufferSize_MetaData), NewProp_CpuBufferSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_CpuDataOffset = { "CpuDataOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMemoryBufferSimCacheDataFrame, CpuDataOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CpuDataOffset_MetaData), NewProp_CpuDataOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_GpuBufferSize = { "GpuBufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMemoryBufferSimCacheDataFrame, GpuBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuBufferSize_MetaData), NewProp_GpuBufferSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_GpuDataOffset = { "GpuDataOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMemoryBufferSimCacheDataFrame, GpuDataOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuDataOffset_MetaData), NewProp_GpuDataOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_CpuBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_CpuDataOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_GpuBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewProp_GpuDataOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIMemoryBufferSimCacheDataFrame",
	Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::PropPointers),
	sizeof(FNDIMemoryBufferSimCacheDataFrame),
	alignof(FNDIMemoryBufferSimCacheDataFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame()
{
	if (!Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame.InnerSingleton, Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame.InnerSingleton;
}
// End ScriptStruct FNDIMemoryBufferSimCacheDataFrame

// Begin Class UNDIMemoryBufferSimCacheData
void UNDIMemoryBufferSimCacheData::StaticRegisterNativesUNDIMemoryBufferSimCacheData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMemoryBufferSimCacheData);
UClass* Z_Construct_UClass_UNDIMemoryBufferSimCacheData_NoRegister()
{
	return UNDIMemoryBufferSimCacheData::StaticClass();
}
struct Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceMemoryBuffer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameData;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_BufferData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BufferData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMemoryBufferSimCacheData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_FrameData_Inner = { "FrameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame, METADATA_PARAMS(0, nullptr) }; // 2487629676
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMemoryBufferSimCacheData, FrameData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameData_MetaData), NewProp_FrameData_MetaData) }; // 2487629676
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_BufferData_Inner = { "BufferData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_BufferData = { "BufferData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMemoryBufferSimCacheData, BufferData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferData_MetaData), NewProp_BufferData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_FrameData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_FrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_BufferData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::NewProp_BufferData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::ClassParams = {
	&UNDIMemoryBufferSimCacheData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMemoryBufferSimCacheData()
{
	if (!Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.OuterSingleton, Z_Construct_UClass_UNDIMemoryBufferSimCacheData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNDIMemoryBufferSimCacheData>()
{
	return UNDIMemoryBufferSimCacheData::StaticClass();
}
UNDIMemoryBufferSimCacheData::UNDIMemoryBufferSimCacheData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMemoryBufferSimCacheData);
UNDIMemoryBufferSimCacheData::~UNDIMemoryBufferSimCacheData() {}
// End Class UNDIMemoryBufferSimCacheData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIMemoryBufferSimCacheDataFrame::StaticStruct, Z_Construct_UScriptStruct_FNDIMemoryBufferSimCacheDataFrame_Statics::NewStructOps, TEXT("NDIMemoryBufferSimCacheDataFrame"), &Z_Registration_Info_UScriptStruct_NDIMemoryBufferSimCacheDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIMemoryBufferSimCacheDataFrame), 2487629676U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceMemoryBuffer, UNiagaraDataInterfaceMemoryBuffer::StaticClass, TEXT("UNiagaraDataInterfaceMemoryBuffer"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceMemoryBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceMemoryBuffer), 3458888840U) },
		{ Z_Construct_UClass_UNDIMemoryBufferSimCacheData, UNDIMemoryBufferSimCacheData::StaticClass, TEXT("UNDIMemoryBufferSimCacheData"), &Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMemoryBufferSimCacheData), 875684258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_3674811336(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceMemoryBuffer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
