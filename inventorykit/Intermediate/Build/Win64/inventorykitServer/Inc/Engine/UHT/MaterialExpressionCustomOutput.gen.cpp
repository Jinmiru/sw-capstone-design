// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionCustomOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCustomOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionCustomOutput
void UMaterialExpressionCustomOutput::StaticRegisterNativesUMaterialExpressionCustomOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCustomOutput);
UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput_NoRegister()
{
	return UMaterialExpressionCustomOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCustomOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCustomOutput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustomOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::ClassParams = {
	&UMaterialExpressionCustomOutput::StaticClass,
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
	0x000820B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCustomOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCustomOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCustomOutput>()
{
	return UMaterialExpressionCustomOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustomOutput);
UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput() {}
// End Class UMaterialExpressionCustomOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCustomOutput, UMaterialExpressionCustomOutput::StaticClass, TEXT("UMaterialExpressionCustomOutput"), &Z_Registration_Info_UClass_UMaterialExpressionCustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCustomOutput), 1551014943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_3809483784(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustomOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
