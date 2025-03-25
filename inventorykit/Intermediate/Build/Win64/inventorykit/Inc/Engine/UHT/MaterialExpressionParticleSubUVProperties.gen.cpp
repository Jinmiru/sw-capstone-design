// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionParticleSubUVProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleSubUVProperties() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleSubUVProperties
void UMaterialExpressionParticleSubUVProperties::StaticRegisterNativesUMaterialExpressionParticleSubUVProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleSubUVProperties);
UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_NoRegister()
{
	return UMaterialExpressionParticleSubUVProperties::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleSubUVProperties.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSubUVProperties.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleSubUVProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_Statics::ClassParams = {
	&UMaterialExpressionParticleSubUVProperties::StaticClass,
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
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleSubUVProperties>()
{
	return UMaterialExpressionParticleSubUVProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleSubUVProperties);
UMaterialExpressionParticleSubUVProperties::~UMaterialExpressionParticleSubUVProperties() {}
// End Class UMaterialExpressionParticleSubUVProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUVProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleSubUVProperties, UMaterialExpressionParticleSubUVProperties::StaticClass, TEXT("UMaterialExpressionParticleSubUVProperties"), &Z_Registration_Info_UClass_UMaterialExpressionParticleSubUVProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleSubUVProperties), 461923697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUVProperties_h_447958283(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUVProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUVProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
