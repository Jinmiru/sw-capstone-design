// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureObjectParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureObjectParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureObjectParameter
void UMaterialExpressionTextureObjectParameter::StaticRegisterNativesUMaterialExpressionTextureObjectParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureObjectParameter);
UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_NoRegister()
{
	return UMaterialExpressionTextureObjectParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionTextureSample Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureObjectParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureObjectParameter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureObjectParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics::ClassParams = {
	&UMaterialExpressionTextureObjectParameter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureObjectParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureObjectParameter>()
{
	return UMaterialExpressionTextureObjectParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureObjectParameter);
UMaterialExpressionTextureObjectParameter::~UMaterialExpressionTextureObjectParameter() {}
// End Class UMaterialExpressionTextureObjectParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureObjectParameter, UMaterialExpressionTextureObjectParameter::StaticClass, TEXT("UMaterialExpressionTextureObjectParameter"), &Z_Registration_Info_UClass_UMaterialExpressionTextureObjectParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureObjectParameter), 2893440182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_2403780709(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
