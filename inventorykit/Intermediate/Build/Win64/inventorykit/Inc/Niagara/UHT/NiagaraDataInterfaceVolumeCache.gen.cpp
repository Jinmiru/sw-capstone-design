// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceVolumeCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVolumeCache() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UVolumeCache_NoRegister();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDataInterfaceVolumeCache
void UNiagaraDataInterfaceVolumeCache::StaticRegisterNativesUNiagaraDataInterfaceVolumeCache()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceVolumeCache);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_NoRegister()
{
	return UNiagaraDataInterfaceVolumeCache::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "DisplayName", "Volume Cache" },
		{ "IncludePath", "NiagaraDataInterfaceVolumeCache.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVolumeCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeCache_MetaData[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVolumeCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVolumeCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::NewProp_VolumeCache = { "VolumeCache", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceVolumeCache, VolumeCache), Z_Construct_UClass_UVolumeCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeCache_MetaData), NewProp_VolumeCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::NewProp_VolumeCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::ClassParams = {
	&UNiagaraDataInterfaceVolumeCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::PropPointers),
	0,
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceVolumeCache>()
{
	return UNiagaraDataInterfaceVolumeCache::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVolumeCache);
UNiagaraDataInterfaceVolumeCache::~UNiagaraDataInterfaceVolumeCache() {}
// End Class UNiagaraDataInterfaceVolumeCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeCache_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceVolumeCache, UNiagaraDataInterfaceVolumeCache::StaticClass, TEXT("UNiagaraDataInterfaceVolumeCache"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceVolumeCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceVolumeCache), 1702815204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeCache_h_652632258(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVolumeCache_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
