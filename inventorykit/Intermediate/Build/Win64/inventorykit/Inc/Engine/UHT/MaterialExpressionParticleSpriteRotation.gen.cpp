// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionParticleSpriteRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleSpriteRotation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleSpriteRotation
void UMaterialExpressionParticleSpriteRotation::StaticRegisterNativesUMaterialExpressionParticleSpriteRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleSpriteRotation);
UClass* Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_NoRegister()
{
	return UMaterialExpressionParticleSpriteRotation::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleSpriteRotation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSpriteRotation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleSpriteRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_Statics::ClassParams = {
	&UMaterialExpressionParticleSpriteRotation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleSpriteRotation>()
{
	return UMaterialExpressionParticleSpriteRotation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleSpriteRotation);
UMaterialExpressionParticleSpriteRotation::~UMaterialExpressionParticleSpriteRotation() {}
// End Class UMaterialExpressionParticleSpriteRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpriteRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleSpriteRotation, UMaterialExpressionParticleSpriteRotation::StaticClass, TEXT("UMaterialExpressionParticleSpriteRotation"), &Z_Registration_Info_UClass_UMaterialExpressionParticleSpriteRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleSpriteRotation), 2484389315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpriteRotation_h_3873828689(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpriteRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpriteRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
