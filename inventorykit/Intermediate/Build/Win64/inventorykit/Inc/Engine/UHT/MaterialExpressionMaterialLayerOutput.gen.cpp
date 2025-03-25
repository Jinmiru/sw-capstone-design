// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialLayerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialLayerOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionMaterialLayerOutput
void UMaterialExpressionMaterialLayerOutput::StaticRegisterNativesUMaterialExpressionMaterialLayerOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialLayerOutput);
UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister()
{
	return UMaterialExpressionMaterialLayerOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "object object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialLayerOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialLayerOutput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialLayerOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionFunctionOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::ClassParams = {
	&UMaterialExpressionMaterialLayerOutput::StaticClass,
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
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialLayerOutput>()
{
	return UMaterialExpressionMaterialLayerOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialLayerOutput);
UMaterialExpressionMaterialLayerOutput::~UMaterialExpressionMaterialLayerOutput() {}
// End Class UMaterialExpressionMaterialLayerOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput, UMaterialExpressionMaterialLayerOutput::StaticClass, TEXT("UMaterialExpressionMaterialLayerOutput"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialLayerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialLayerOutput), 1111274162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_347018116(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialLayerOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
