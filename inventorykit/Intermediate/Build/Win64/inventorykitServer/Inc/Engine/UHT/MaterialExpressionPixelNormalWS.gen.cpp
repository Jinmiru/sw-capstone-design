// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPixelNormalWS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPixelNormalWS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelNormalWS();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPixelNormalWS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPixelNormalWS
void UMaterialExpressionPixelNormalWS::StaticRegisterNativesUMaterialExpressionPixelNormalWS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPixelNormalWS);
UClass* Z_Construct_UClass_UMaterialExpressionPixelNormalWS_NoRegister()
{
	return UMaterialExpressionPixelNormalWS::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPixelNormalWS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPixelNormalWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPixelNormalWS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPixelNormalWS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionPixelNormalWS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPixelNormalWS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPixelNormalWS_Statics::ClassParams = {
	&UMaterialExpressionPixelNormalWS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPixelNormalWS_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPixelNormalWS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPixelNormalWS()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPixelNormalWS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPixelNormalWS>()
{
	return UMaterialExpressionPixelNormalWS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPixelNormalWS);
UMaterialExpressionPixelNormalWS::~UMaterialExpressionPixelNormalWS() {}
// End Class UMaterialExpressionPixelNormalWS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelNormalWS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPixelNormalWS, UMaterialExpressionPixelNormalWS::StaticClass, TEXT("UMaterialExpressionPixelNormalWS"), &Z_Registration_Info_UClass_UMaterialExpressionPixelNormalWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPixelNormalWS), 3646782643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelNormalWS_h_1736889554(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelNormalWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelNormalWS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
