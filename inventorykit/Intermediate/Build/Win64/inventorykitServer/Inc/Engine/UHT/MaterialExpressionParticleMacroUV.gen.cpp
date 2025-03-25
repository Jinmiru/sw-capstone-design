// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionParticleMacroUV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleMacroUV() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMacroUV();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMacroUV_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleMacroUV
void UMaterialExpressionParticleMacroUV::StaticRegisterNativesUMaterialExpressionParticleMacroUV()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleMacroUV);
UClass* Z_Construct_UClass_UMaterialExpressionParticleMacroUV_NoRegister()
{
	return UMaterialExpressionParticleMacroUV::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleMacroUV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleMacroUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleMacroUV.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleMacroUV>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleMacroUV_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleMacroUV_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleMacroUV_Statics::ClassParams = {
	&UMaterialExpressionParticleMacroUV::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleMacroUV_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleMacroUV_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleMacroUV()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleMacroUV_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleMacroUV>()
{
	return UMaterialExpressionParticleMacroUV::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleMacroUV);
UMaterialExpressionParticleMacroUV::~UMaterialExpressionParticleMacroUV() {}
// End Class UMaterialExpressionParticleMacroUV

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMacroUV_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleMacroUV, UMaterialExpressionParticleMacroUV::StaticClass, TEXT("UMaterialExpressionParticleMacroUV"), &Z_Registration_Info_UClass_UMaterialExpressionParticleMacroUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleMacroUV), 393637618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMacroUV_h_993769310(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMacroUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMacroUV_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
