// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionParticleMotionBlurFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleMotionBlurFade() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleMotionBlurFade
void UMaterialExpressionParticleMotionBlurFade::StaticRegisterNativesUMaterialExpressionParticleMotionBlurFade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleMotionBlurFade);
UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_NoRegister()
{
	return UMaterialExpressionParticleMotionBlurFade::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleMotionBlurFade.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleMotionBlurFade.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleMotionBlurFade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::ClassParams = {
	&UMaterialExpressionParticleMotionBlurFade::StaticClass,
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
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleMotionBlurFade>()
{
	return UMaterialExpressionParticleMotionBlurFade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleMotionBlurFade);
UMaterialExpressionParticleMotionBlurFade::~UMaterialExpressionParticleMotionBlurFade() {}
// End Class UMaterialExpressionParticleMotionBlurFade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade, UMaterialExpressionParticleMotionBlurFade::StaticClass, TEXT("UMaterialExpressionParticleMotionBlurFade"), &Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleMotionBlurFade), 2036679036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_2543394195(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
