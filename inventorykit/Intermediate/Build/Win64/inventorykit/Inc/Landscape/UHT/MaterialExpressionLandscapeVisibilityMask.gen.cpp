// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeVisibilityMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeVisibilityMask() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class UMaterialExpressionLandscapeVisibilityMask
void UMaterialExpressionLandscapeVisibilityMask::StaticRegisterNativesUMaterialExpressionLandscapeVisibilityMask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeVisibilityMask);
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister()
{
	return UMaterialExpressionLandscapeVisibilityMask::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeVisibilityMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeVisibilityMask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeVisibilityMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics::ClassParams = {
	&UMaterialExpressionLandscapeVisibilityMask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeVisibilityMask>()
{
	return UMaterialExpressionLandscapeVisibilityMask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeVisibilityMask);
UMaterialExpressionLandscapeVisibilityMask::~UMaterialExpressionLandscapeVisibilityMask() {}
// End Class UMaterialExpressionLandscapeVisibilityMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask, UMaterialExpressionLandscapeVisibilityMask::StaticClass, TEXT("UMaterialExpressionLandscapeVisibilityMask"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeVisibilityMask), 1454565597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_2373218491(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
