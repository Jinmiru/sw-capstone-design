// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArray() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNDIArraySimCacheData();
NIAGARA_API UClass* Z_Construct_UClass_UNDIArraySimCacheData_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceArray
void UNiagaraDataInterfaceArray::StaticRegisterNativesUNiagaraDataInterfaceArray()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArray);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray_NoRegister()
{
	return UNiagaraDataInterfaceArray::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceArray.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuSyncMode_MetaData[] = {
		{ "Category", "Array" },
		{ "Comment", "/** How to do we want to synchronize modifications to the array data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
		{ "ToolTip", "How to do we want to synchronize modifications to the array data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxElements_MetaData[] = {
		{ "Category", "Array" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When greater than 0 sets the maximum number of elements the array can hold, only relevant when using operations that modify the array size. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
		{ "ToolTip", "When greater than 0 sets the maximum number of elements the array can hold, only relevant when using operations that modify the array size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GpuSyncMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuSyncMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxElements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode = { "GpuSyncMode", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArray, GpuSyncMode), Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuSyncMode_MetaData), NewProp_GpuSyncMode_MetaData) }; // 3193981208
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements = { "MaxElements", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceArray, MaxElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxElements_MetaData), NewProp_MaxElements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_GpuSyncMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::NewProp_MaxElements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceArray, INiagaraSimCacheCustomStorageInterface), false },  // 2941118379
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::ClassParams = {
	&UNiagaraDataInterfaceArray::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceArray.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArray>()
{
	return UNiagaraDataInterfaceArray::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArray);
UNiagaraDataInterfaceArray::~UNiagaraDataInterfaceArray() {}
// End Class UNiagaraDataInterfaceArray

// Begin ScriptStruct FNDIArraySimCacheDataFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame;
class UScriptStruct* FNDIArraySimCacheDataFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIArraySimCacheDataFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIArraySimCacheDataFrame>()
{
	return FNDIArraySimCacheDataFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumElements_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumElements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIArraySimCacheDataFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::NewProp_NumElements = { "NumElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIArraySimCacheDataFrame, NumElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumElements_MetaData), NewProp_NumElements_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::NewProp_DataOffset = { "DataOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIArraySimCacheDataFrame, DataOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataOffset_MetaData), NewProp_DataOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::NewProp_NumElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::NewProp_DataOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NDIArraySimCacheDataFrame",
	Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::PropPointers),
	sizeof(FNDIArraySimCacheDataFrame),
	alignof(FNDIArraySimCacheDataFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame()
{
	if (!Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame.InnerSingleton, Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame.InnerSingleton;
}
// End ScriptStruct FNDIArraySimCacheDataFrame

// Begin Class UNDIArraySimCacheData
void UNDIArraySimCacheData::StaticRegisterNativesUNDIArraySimCacheData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIArraySimCacheData);
UClass* Z_Construct_UClass_UNDIArraySimCacheData_NoRegister()
{
	return UNDIArraySimCacheData::StaticClass();
}
struct Z_Construct_UClass_UNDIArraySimCacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDataInterfaceArray.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CpuFrameData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuFrameData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CpuFrameData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CpuFrameData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GpuFrameData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GpuFrameData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BufferData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BufferData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIArraySimCacheData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_CpuFrameData_Inner = { "CpuFrameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame, METADATA_PARAMS(0, nullptr) }; // 3757502383
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_CpuFrameData = { "CpuFrameData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIArraySimCacheData, CpuFrameData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CpuFrameData_MetaData), NewProp_CpuFrameData_MetaData) }; // 3757502383
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_GpuFrameData_Inner = { "GpuFrameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame, METADATA_PARAMS(0, nullptr) }; // 3757502383
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_GpuFrameData = { "GpuFrameData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIArraySimCacheData, GpuFrameData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuFrameData_MetaData), NewProp_GpuFrameData_MetaData) }; // 3757502383
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_BufferData_Inner = { "BufferData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_BufferData = { "BufferData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIArraySimCacheData, BufferData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferData_MetaData), NewProp_BufferData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIArraySimCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_CpuFrameData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_CpuFrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_GpuFrameData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_GpuFrameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_BufferData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIArraySimCacheData_Statics::NewProp_BufferData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIArraySimCacheData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIArraySimCacheData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIArraySimCacheData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIArraySimCacheData_Statics::ClassParams = {
	&UNDIArraySimCacheData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIArraySimCacheData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIArraySimCacheData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIArraySimCacheData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIArraySimCacheData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIArraySimCacheData()
{
	if (!Z_Registration_Info_UClass_UNDIArraySimCacheData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIArraySimCacheData.OuterSingleton, Z_Construct_UClass_UNDIArraySimCacheData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIArraySimCacheData.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNDIArraySimCacheData>()
{
	return UNDIArraySimCacheData::StaticClass();
}
UNDIArraySimCacheData::UNDIArraySimCacheData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIArraySimCacheData);
UNDIArraySimCacheData::~UNDIArraySimCacheData() {}
// End Class UNDIArraySimCacheData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIArraySimCacheDataFrame::StaticStruct, Z_Construct_UScriptStruct_FNDIArraySimCacheDataFrame_Statics::NewStructOps, TEXT("NDIArraySimCacheDataFrame"), &Z_Registration_Info_UScriptStruct_NDIArraySimCacheDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIArraySimCacheDataFrame), 3757502383U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceArray, UNiagaraDataInterfaceArray::StaticClass, TEXT("UNiagaraDataInterfaceArray"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArray), 3310783990U) },
		{ Z_Construct_UClass_UNDIArraySimCacheData, UNDIArraySimCacheData::StaticClass, TEXT("UNDIArraySimCacheData"), &Z_Registration_Info_UClass_UNDIArraySimCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIArraySimCacheData), 1453198651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_3978884057(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArray_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
