// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionObjectRadius.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectRadius() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionObjectRadius
void UMaterialExpressionObjectRadius::StaticRegisterNativesUMaterialExpressionObjectRadius()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectRadius);
UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius_NoRegister()
{
	return UMaterialExpressionObjectRadius::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectRadius.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectRadius.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectRadius>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::ClassParams = {
	&UMaterialExpressionObjectRadius::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectRadius>()
{
	return UMaterialExpressionObjectRadius::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectRadius);
UMaterialExpressionObjectRadius::~UMaterialExpressionObjectRadius() {}
// End Class UMaterialExpressionObjectRadius

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectRadius, UMaterialExpressionObjectRadius::StaticClass, TEXT("UMaterialExpressionObjectRadius"), &Z_Registration_Info_UClass_UMaterialExpressionObjectRadius, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectRadius), 1624538463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_3771949771(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
