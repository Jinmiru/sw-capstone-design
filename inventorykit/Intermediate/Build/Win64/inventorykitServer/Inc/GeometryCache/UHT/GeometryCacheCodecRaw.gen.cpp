// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheCodecRaw.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecRaw() {}

// Begin Cross Module References
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecRaw();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin Class UGeometryCacheCodecRaw
void UGeometryCacheCodecRaw::StaticRegisterNativesUGeometryCacheCodecRaw()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheCodecRaw);
UClass* Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister()
{
	return UGeometryCacheCodecRaw::StaticClass();
}
struct Z_Construct_UClass_UGeometryCacheCodecRaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheCodecRaw.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecRaw.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DummyProperty_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecRaw.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DummyProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheCodecRaw>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::NewProp_DummyProperty = { "DummyProperty", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCacheCodecRaw, DummyProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DummyProperty_MetaData), NewProp_DummyProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::NewProp_DummyProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeometryCacheCodecBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::ClassParams = {
	&UGeometryCacheCodecRaw::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCacheCodecRaw()
{
	if (!Z_Registration_Info_UClass_UGeometryCacheCodecRaw.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheCodecRaw.OuterSingleton, Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCacheCodecRaw.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheCodecRaw>()
{
	return UGeometryCacheCodecRaw::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheCodecRaw);
UGeometryCacheCodecRaw::~UGeometryCacheCodecRaw() {}
// End Class UGeometryCacheCodecRaw

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheCodecRaw, UGeometryCacheCodecRaw::StaticClass, TEXT("UGeometryCacheCodecRaw"), &Z_Registration_Info_UClass_UGeometryCacheCodecRaw, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheCodecRaw), 3743832832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_3002346246(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
