// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionCloudLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCloudLayer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionCloudSampleAttribute
void UMaterialExpressionCloudSampleAttribute::StaticRegisterNativesUMaterialExpressionCloudSampleAttribute()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCloudSampleAttribute);
UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister()
{
	return UMaterialExpressionCloudSampleAttribute::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionCloudLayer.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCloudLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCloudSampleAttribute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::ClassParams = {
	&UMaterialExpressionCloudSampleAttribute::StaticClass,
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
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCloudSampleAttribute>()
{
	return UMaterialExpressionCloudSampleAttribute::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCloudSampleAttribute);
UMaterialExpressionCloudSampleAttribute::~UMaterialExpressionCloudSampleAttribute() {}
// End Class UMaterialExpressionCloudSampleAttribute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute, UMaterialExpressionCloudSampleAttribute::StaticClass, TEXT("UMaterialExpressionCloudSampleAttribute"), &Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCloudSampleAttribute), 3283475619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_982940806(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
