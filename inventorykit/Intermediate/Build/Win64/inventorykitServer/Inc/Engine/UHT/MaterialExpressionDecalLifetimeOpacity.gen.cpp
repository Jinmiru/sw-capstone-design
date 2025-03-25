// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDecalLifetimeOpacity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalLifetimeOpacity() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDecalLifetimeOpacity
void UMaterialExpressionDecalLifetimeOpacity::StaticRegisterNativesUMaterialExpressionDecalLifetimeOpacity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDecalLifetimeOpacity);
UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_NoRegister()
{
	return UMaterialExpressionDecalLifetimeOpacity::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalLifetimeOpacity.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalLifetimeOpacity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalLifetimeOpacity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::ClassParams = {
	&UMaterialExpressionDecalLifetimeOpacity::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalLifetimeOpacity>()
{
	return UMaterialExpressionDecalLifetimeOpacity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalLifetimeOpacity);
UMaterialExpressionDecalLifetimeOpacity::~UMaterialExpressionDecalLifetimeOpacity() {}
// End Class UMaterialExpressionDecalLifetimeOpacity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity, UMaterialExpressionDecalLifetimeOpacity::StaticClass, TEXT("UMaterialExpressionDecalLifetimeOpacity"), &Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDecalLifetimeOpacity), 1417252930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_3757756386(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
