// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionDecalColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalColor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalColor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalColor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionDecalColor
void UMaterialExpressionDecalColor::StaticRegisterNativesUMaterialExpressionDecalColor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDecalColor);
UClass* Z_Construct_UClass_UMaterialExpressionDecalColor_NoRegister()
{
	return UMaterialExpressionDecalColor::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionDecalColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalColor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalColor_Statics::ClassParams = {
	&UMaterialExpressionDecalColor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionDecalColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionDecalColor()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionDecalColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDecalColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDecalColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionDecalColor.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalColor>()
{
	return UMaterialExpressionDecalColor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalColor);
UMaterialExpressionDecalColor::~UMaterialExpressionDecalColor() {}
// End Class UMaterialExpressionDecalColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalColor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDecalColor, UMaterialExpressionDecalColor::StaticClass, TEXT("UMaterialExpressionDecalColor"), &Z_Registration_Info_UClass_UMaterialExpressionDecalColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDecalColor), 645936200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalColor_h_1724237809(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalColor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
