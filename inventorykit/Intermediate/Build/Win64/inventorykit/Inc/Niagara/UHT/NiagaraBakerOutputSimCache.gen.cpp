// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraBakerOutputSimCache.h"
#include "Niagara/Classes/NiagaraSimCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutputSimCache() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraBakerOutputSimCache
void UNiagaraBakerOutputSimCache::StaticRegisterNativesUNiagaraBakerOutputSimCache()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutputSimCache);
UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache_NoRegister()
{
	return UNiagaraBakerOutputSimCache::StaticClass();
}
struct Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Simulation Cache Output (Experimental)" },
		{ "IncludePath", "NiagaraBakerOutputSimCache.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSimCache.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSimCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateParameters_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputSimCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SimCacheAssetPathFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutputSimCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_SimCacheAssetPathFormat = { "SimCacheAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputSimCache, SimCacheAssetPathFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimCacheAssetPathFormat_MetaData), NewProp_SimCacheAssetPathFormat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBakerOutputSimCache, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateParameters_MetaData), NewProp_CreateParameters_MetaData) }; // 4056509866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_SimCacheAssetPathFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::NewProp_CreateParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraBakerOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::ClassParams = {
	&UNiagaraBakerOutputSimCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraBakerOutputSimCache()
{
	if (!Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutputSimCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutputSimCache>()
{
	return UNiagaraBakerOutputSimCache::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutputSimCache);
UNiagaraBakerOutputSimCache::~UNiagaraBakerOutputSimCache() {}
// End Class UNiagaraBakerOutputSimCache

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutputSimCache, UNiagaraBakerOutputSimCache::StaticClass, TEXT("UNiagaraBakerOutputSimCache"), &Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutputSimCache), 3035858504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_1330460367(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputSimCache_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
