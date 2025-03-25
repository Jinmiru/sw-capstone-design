// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameterVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureSampleParameterVolume
void UMaterialExpressionTextureSampleParameterVolume::StaticRegisterNativesUMaterialExpressionTextureSampleParameterVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameterVolume);
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_NoRegister()
{
	return UMaterialExpressionTextureSampleParameterVolume::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterVolume.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterVolume.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::ClassParams = {
	&UMaterialExpressionTextureSampleParameterVolume::StaticClass,
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
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterVolume>()
{
	return UMaterialExpressionTextureSampleParameterVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterVolume);
UMaterialExpressionTextureSampleParameterVolume::~UMaterialExpressionTextureSampleParameterVolume() {}
// End Class UMaterialExpressionTextureSampleParameterVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume, UMaterialExpressionTextureSampleParameterVolume::StaticClass, TEXT("UMaterialExpressionTextureSampleParameterVolume"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameterVolume), 1458422429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_3583090529(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
