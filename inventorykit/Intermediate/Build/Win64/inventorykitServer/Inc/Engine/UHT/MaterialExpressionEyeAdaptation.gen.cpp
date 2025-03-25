// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionEyeAdaptation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionEyeAdaptation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionEyeAdaptation
void UMaterialExpressionEyeAdaptation::StaticRegisterNativesUMaterialExpressionEyeAdaptation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionEyeAdaptation);
UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister()
{
	return UMaterialExpressionEyeAdaptation::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides access to the EyeAdaptation render target.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionEyeAdaptation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionEyeAdaptation.h" },
		{ "ToolTip", "Provides access to the EyeAdaptation render target." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionEyeAdaptation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::ClassParams = {
	&UMaterialExpressionEyeAdaptation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionEyeAdaptation>()
{
	return UMaterialExpressionEyeAdaptation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionEyeAdaptation);
UMaterialExpressionEyeAdaptation::~UMaterialExpressionEyeAdaptation() {}
// End Class UMaterialExpressionEyeAdaptation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionEyeAdaptation, UMaterialExpressionEyeAdaptation::StaticClass, TEXT("UMaterialExpressionEyeAdaptation"), &Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionEyeAdaptation), 4033179864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_4098691547(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
