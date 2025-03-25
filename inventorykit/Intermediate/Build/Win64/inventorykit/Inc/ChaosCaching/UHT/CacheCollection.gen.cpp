// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Public/Chaos/CacheCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCacheCollection() {}

// Begin Cross Module References
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCache_NoRegister();
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCacheCollection();
CHAOSCACHING_API UClass* Z_Construct_UClass_UChaosCacheCollection_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin Class UChaosCacheCollection
void UChaosCacheCollection::StaticRegisterNativesUChaosCacheCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosCacheCollection);
UClass* Z_Construct_UClass_UChaosCacheCollection_NoRegister()
{
	return UChaosCacheCollection::StaticClass();
}
struct Z_Construct_UClass_UChaosCacheCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Chaos/CacheCollection.h" },
		{ "ModuleRelativePath", "Public/Chaos/CacheCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caches_Inner_MetaData[] = {
		{ "Category", "Caching" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/CacheCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Caches_MetaData[] = {
		{ "Category", "Caching" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/CacheCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Caches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Caches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosCacheCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_Inner = { "Caches", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChaosCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caches_Inner_MetaData), NewProp_Caches_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches = { "Caches", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChaosCacheCollection, Caches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Caches_MetaData), NewProp_Caches_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosCacheCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosCacheCollection_Statics::NewProp_Caches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChaosCacheCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosCacheCollection_Statics::ClassParams = {
	&UChaosCacheCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChaosCacheCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChaosCacheCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UChaosCacheCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChaosCacheCollection()
{
	if (!Z_Registration_Info_UClass_UChaosCacheCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosCacheCollection.OuterSingleton, Z_Construct_UClass_UChaosCacheCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChaosCacheCollection.OuterSingleton;
}
template<> CHAOSCACHING_API UClass* StaticClass<UChaosCacheCollection>()
{
	return UChaosCacheCollection::StaticClass();
}
UChaosCacheCollection::UChaosCacheCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosCacheCollection);
UChaosCacheCollection::~UChaosCacheCollection() {}
// End Class UChaosCacheCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChaosCacheCollection, UChaosCacheCollection::StaticClass, TEXT("UChaosCacheCollection"), &Z_Registration_Info_UClass_UChaosCacheCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosCacheCollection), 2755585645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_3906939101(TEXT("/Script/ChaosCaching"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
