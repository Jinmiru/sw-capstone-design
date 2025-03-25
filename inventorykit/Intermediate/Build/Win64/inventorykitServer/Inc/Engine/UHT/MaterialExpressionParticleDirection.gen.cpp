// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionParticleDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleDirection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleDirection();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleDirection_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleDirection
void UMaterialExpressionParticleDirection::StaticRegisterNativesUMaterialExpressionParticleDirection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleDirection);
UClass* Z_Construct_UClass_UMaterialExpressionParticleDirection_NoRegister()
{
	return UMaterialExpressionParticleDirection::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleDirection.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleDirection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleDirection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics::ClassParams = {
	&UMaterialExpressionParticleDirection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleDirection()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleDirection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleDirection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleDirection>()
{
	return UMaterialExpressionParticleDirection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleDirection);
UMaterialExpressionParticleDirection::~UMaterialExpressionParticleDirection() {}
// End Class UMaterialExpressionParticleDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleDirection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleDirection, UMaterialExpressionParticleDirection::StaticClass, TEXT("UMaterialExpressionParticleDirection"), &Z_Registration_Info_UClass_UMaterialExpressionParticleDirection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleDirection), 2723445204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleDirection_h_3511756880(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleDirection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleDirection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
