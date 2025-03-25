// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPixelDepth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPixelDepth() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPixelDepth
void UMaterialExpressionPixelDepth::StaticRegisterNativesUMaterialExpressionPixelDepth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPixelDepth);
UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth_NoRegister()
{
	return UMaterialExpressionPixelDepth::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPixelDepth.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPixelDepth.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPixelDepth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::ClassParams = {
	&UMaterialExpressionPixelDepth::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPixelDepth()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPixelDepth.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPixelDepth>()
{
	return UMaterialExpressionPixelDepth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPixelDepth);
UMaterialExpressionPixelDepth::~UMaterialExpressionPixelDepth() {}
// End Class UMaterialExpressionPixelDepth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPixelDepth, UMaterialExpressionPixelDepth::StaticClass, TEXT("UMaterialExpressionPixelDepth"), &Z_Registration_Info_UClass_UMaterialExpressionPixelDepth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPixelDepth), 789174915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_808199386(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
