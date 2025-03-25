// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDecalDerivative.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalDerivative() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDecalDerivative
void UMaterialExpressionDecalDerivative::StaticRegisterNativesUMaterialExpressionDecalDerivative()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDecalDerivative);
UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative_NoRegister()
{
	return UMaterialExpressionDecalDerivative::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalDerivative.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalDerivative.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalDerivative>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::ClassParams = {
	&UMaterialExpressionDecalDerivative::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalDerivative>()
{
	return UMaterialExpressionDecalDerivative::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalDerivative);
UMaterialExpressionDecalDerivative::~UMaterialExpressionDecalDerivative() {}
// End Class UMaterialExpressionDecalDerivative

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDecalDerivative, UMaterialExpressionDecalDerivative::StaticClass, TEXT("UMaterialExpressionDecalDerivative"), &Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDecalDerivative), 2600812486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_3511378664(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
