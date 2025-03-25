// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSimpleCounter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NIAGARA_API UClass* Z_Construct_UClass_UNDISimpleCounterSimCacheData();
NIAGARA_API UClass* Z_Construct_UClass_UNDISimpleCounterSimCacheData_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceSimpleCounter
void UNiagaraDataInterfaceSimpleCounter::StaticRegisterNativesUNiagaraDataInterfaceSimpleCounter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSimpleCounter);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_NoRegister()
{
	return UNiagaraDataInterfaceSimpleCounter::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Counting" },
		{ "Comment", "/**\nThread safe counter starts at the initial value on start / reset.\nWhen operating between CPU & GPU ensure you set the appropriate sync mode.\n*/" },
		{ "DisplayName", "Simple Counter" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ToolTip", "Thread safe counter starts at the initial value on start / reset.\nWhen operating between CPU & GPU ensure you set the appropriate sync mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuSyncMode_MetaData[] = {
		{ "Category", "Simple Counter" },
		{ "Comment", "/** Select how we should synchronize the counter between Cpu & Gpu */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ToolTip", "Select how we should synchronize the counter between Cpu & Gpu" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[] = {
		{ "Category", "Simple Counter" },
		{ "Comment", "/** This is the value the counter will have when the instance is reset / created. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ToolTip", "This is the value the counter will have when the instance is reset / created." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GpuSyncMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuSyncMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSimpleCounter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode = { "GpuSyncMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSimpleCounter, GpuSyncMode), Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuSyncMode_MetaData), NewProp_GpuSyncMode_MetaData) }; // 3193981208
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSimpleCounter, InitialValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialValue_MetaData), NewProp_InitialValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_GpuSyncMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::NewProp_InitialValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceSimpleCounter, INiagaraSimCacheCustomStorageInterface), false },  // 2941118379
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::ClassParams = {
	&UNiagaraDataInterfaceSimpleCounter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSimpleCounter>()
{
	return UNiagaraDataInterfaceSimpleCounter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSimpleCounter);
UNiagaraDataInterfaceSimpleCounter::~UNiagaraDataInterfaceSimpleCounter() {}
// End Class UNiagaraDataInterfaceSimpleCounter

// Begin Class UNDISimpleCounterSimCacheData
void UNDISimpleCounterSimCacheData::StaticRegisterNativesUNDISimpleCounterSimCacheData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDISimpleCounterSimCacheData);
UClass* Z_Construct_UClass_UNDISimpleCounterSimCacheData_NoRegister()
{
	return UNDISimpleCounterSimCacheData::StaticClass();
}
struct Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSimpleCounter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDISimpleCounterSimCacheData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDISimpleCounterSimCacheData, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::ClassParams = {
	&UNDISimpleCounterSimCacheData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDISimpleCounterSimCacheData()
{
	if (!Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.OuterSingleton, Z_Construct_UClass_UNDISimpleCounterSimCacheData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNDISimpleCounterSimCacheData>()
{
	return UNDISimpleCounterSimCacheData::StaticClass();
}
UNDISimpleCounterSimCacheData::UNDISimpleCounterSimCacheData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDISimpleCounterSimCacheData);
UNDISimpleCounterSimCacheData::~UNDISimpleCounterSimCacheData() {}
// End Class UNDISimpleCounterSimCacheData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSimpleCounter, UNiagaraDataInterfaceSimpleCounter::StaticClass, TEXT("UNiagaraDataInterfaceSimpleCounter"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSimpleCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSimpleCounter), 2920394339U) },
		{ Z_Construct_UClass_UNDISimpleCounterSimCacheData, UNDISimpleCounterSimCacheData::StaticClass, TEXT("UNDISimpleCounterSimCacheData"), &Z_Registration_Info_UClass_UNDISimpleCounterSimCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDISimpleCounterSimCacheData), 1135547537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_2758088067(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSimpleCounter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
