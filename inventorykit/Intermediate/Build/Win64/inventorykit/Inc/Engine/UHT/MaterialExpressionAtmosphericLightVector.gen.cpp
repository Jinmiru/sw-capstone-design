// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionAtmosphericLightVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericLightVector() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionAtmosphericLightVector
void UMaterialExpressionAtmosphericLightVector::StaticRegisterNativesUMaterialExpressionAtmosphericLightVector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAtmosphericLightVector);
UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_NoRegister()
{
	return UMaterialExpressionAtmosphericLightVector::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Atmosphere Sun Light Vector" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAtmosphericLightVector.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericLightVector.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAtmosphericLightVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::ClassParams = {
	&UMaterialExpressionAtmosphericLightVector::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAtmosphericLightVector>()
{
	return UMaterialExpressionAtmosphericLightVector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericLightVector);
UMaterialExpressionAtmosphericLightVector::~UMaterialExpressionAtmosphericLightVector() {}
// End Class UMaterialExpressionAtmosphericLightVector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector, UMaterialExpressionAtmosphericLightVector::StaticClass, TEXT("UMaterialExpressionAtmosphericLightVector"), &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAtmosphericLightVector), 4247069762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_3773329909(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
