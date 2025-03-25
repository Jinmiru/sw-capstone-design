// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/PropertyValueMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueMaterial() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueMaterial();
VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueMaterial_NoRegister();
// End Cross Module References

// Begin Class UPropertyValueMaterial
void UPropertyValueMaterial::StaticRegisterNativesUPropertyValueMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValueMaterial);
UClass* Z_Construct_UClass_UPropertyValueMaterial_NoRegister()
{
	return UPropertyValueMaterial::StaticClass();
}
struct Z_Construct_UClass_UPropertyValueMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PropertyValueMaterial.h" },
		{ "ModuleRelativePath", "Public/PropertyValueMaterial.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPropertyValueMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPropertyValue,
	(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueMaterial_Statics::ClassParams = {
	&UPropertyValueMaterial::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPropertyValueMaterial()
{
	if (!Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton, Z_Construct_UClass_UPropertyValueMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton;
}
template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueMaterial>()
{
	return UPropertyValueMaterial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueMaterial);
UPropertyValueMaterial::~UPropertyValueMaterial() {}
// End Class UPropertyValueMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyValueMaterial, UPropertyValueMaterial::StaticClass, TEXT("UPropertyValueMaterial"), &Z_Registration_Info_UClass_UPropertyValueMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValueMaterial), 806549750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_3982873194(TEXT("/Script/VariantManagerContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
