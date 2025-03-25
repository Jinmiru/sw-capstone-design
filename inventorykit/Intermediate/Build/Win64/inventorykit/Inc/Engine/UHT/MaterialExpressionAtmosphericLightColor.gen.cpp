// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionAtmosphericLightColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericLightColor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionAtmosphericLightColor
void UMaterialExpressionAtmosphericLightColor::StaticRegisterNativesUMaterialExpressionAtmosphericLightColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAtmosphericLightColor);
UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_NoRegister()
{
	return UMaterialExpressionAtmosphericLightColor::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Atmosphere Sun Light Illuminance On Ground" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAtmosphericLightColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericLightColor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAtmosphericLightColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::ClassParams = {
	&UMaterialExpressionAtmosphericLightColor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAtmosphericLightColor>()
{
	return UMaterialExpressionAtmosphericLightColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericLightColor);
UMaterialExpressionAtmosphericLightColor::~UMaterialExpressionAtmosphericLightColor() {}
// End Class UMaterialExpressionAtmosphericLightColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAtmosphericLightColor, UMaterialExpressionAtmosphericLightColor::StaticClass, TEXT("UMaterialExpressionAtmosphericLightColor"), &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAtmosphericLightColor), 1214060071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_817283559(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
