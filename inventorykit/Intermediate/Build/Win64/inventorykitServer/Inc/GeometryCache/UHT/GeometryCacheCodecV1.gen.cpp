// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheCodecV1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecV1() {}

// Begin Cross Module References
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecBase();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecV1();
GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References

// Begin Class UGeometryCacheCodecV1
void UGeometryCacheCodecV1::StaticRegisterNativesUGeometryCacheCodecV1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheCodecV1);
UClass* Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister()
{
	return UGeometryCacheCodecV1::StaticClass();
}
struct Z_Construct_UClass_UGeometryCacheCodecV1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheCodecV1.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheCodecV1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheCodecV1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometryCacheCodecV1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGeometryCacheCodecBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecV1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheCodecV1_Statics::ClassParams = {
	&UGeometryCacheCodecV1::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheCodecV1_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCacheCodecV1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCacheCodecV1()
{
	if (!Z_Registration_Info_UClass_UGeometryCacheCodecV1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheCodecV1.OuterSingleton, Z_Construct_UClass_UGeometryCacheCodecV1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCacheCodecV1.OuterSingleton;
}
template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheCodecV1>()
{
	return UGeometryCacheCodecV1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheCodecV1);
// End Class UGeometryCacheCodecV1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheCodecV1, UGeometryCacheCodecV1::StaticClass, TEXT("UGeometryCacheCodecV1"), &Z_Registration_Info_UClass_UGeometryCacheCodecV1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheCodecV1), 4151542665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_2474132796(TEXT("/Script/GeometryCache"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
