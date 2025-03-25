// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSkyAtmosphereViewLuminance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereViewLuminance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSkyAtmosphereViewLuminance
void UMaterialExpressionSkyAtmosphereViewLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereViewLuminance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereViewLuminance);
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_NoRegister()
{
	return UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereViewLuminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereViewLuminance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereViewLuminance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::ClassParams = {
	&UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass,
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
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereViewLuminance>()
{
	return UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereViewLuminance);
UMaterialExpressionSkyAtmosphereViewLuminance::~UMaterialExpressionSkyAtmosphereViewLuminance() {}
// End Class UMaterialExpressionSkyAtmosphereViewLuminance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereViewLuminance, UMaterialExpressionSkyAtmosphereViewLuminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereViewLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereViewLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereViewLuminance), 3817531925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_1356705773(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereViewLuminance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
