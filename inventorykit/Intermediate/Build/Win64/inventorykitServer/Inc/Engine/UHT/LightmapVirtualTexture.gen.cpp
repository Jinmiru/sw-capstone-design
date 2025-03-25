// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VT/LightmapVirtualTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmapVirtualTexture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture2D();
ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightMapVirtualTexture2D
void ULightMapVirtualTexture2D::StaticRegisterNativesULightMapVirtualTexture2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightMapVirtualTexture2D);
UClass* Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister()
{
	return ULightMapVirtualTexture2D::StaticClass();
}
struct Z_Construct_UClass_ULightMapVirtualTexture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/LightmapVirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/LightmapVirtualTexture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeToLayer_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "ModuleRelativePath", "Classes/VT/LightmapVirtualTexture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_TypeToLayer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TypeToLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTexture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_Inner = { "TypeToLayer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer = { "TypeToLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightMapVirtualTexture2D, TypeToLayer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeToLayer_MetaData), NewProp_TypeToLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::ClassParams = {
	&ULightMapVirtualTexture2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightMapVirtualTexture2D()
{
	if (!Z_Registration_Info_UClass_ULightMapVirtualTexture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightMapVirtualTexture2D.OuterSingleton, Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightMapVirtualTexture2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTexture2D>()
{
	return ULightMapVirtualTexture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTexture2D);
ULightMapVirtualTexture2D::~ULightMapVirtualTexture2D() {}
// End Class ULightMapVirtualTexture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightMapVirtualTexture2D, ULightMapVirtualTexture2D::StaticClass, TEXT("ULightMapVirtualTexture2D"), &Z_Registration_Info_UClass_ULightMapVirtualTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightMapVirtualTexture2D), 2417921047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_1425389417(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
