// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionVertexNormalWS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVertexNormalWS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexNormalWS();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexNormalWS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionVertexNormalWS
void UMaterialExpressionVertexNormalWS::StaticRegisterNativesUMaterialExpressionVertexNormalWS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVertexNormalWS);
UClass* Z_Construct_UClass_UMaterialExpressionVertexNormalWS_NoRegister()
{
	return UMaterialExpressionVertexNormalWS::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVertexNormalWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVertexNormalWS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVertexNormalWS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics::ClassParams = {
	&UMaterialExpressionVertexNormalWS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVertexNormalWS()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVertexNormalWS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVertexNormalWS>()
{
	return UMaterialExpressionVertexNormalWS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVertexNormalWS);
UMaterialExpressionVertexNormalWS::~UMaterialExpressionVertexNormalWS() {}
// End Class UMaterialExpressionVertexNormalWS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexNormalWS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVertexNormalWS, UMaterialExpressionVertexNormalWS::StaticClass, TEXT("UMaterialExpressionVertexNormalWS"), &Z_Registration_Info_UClass_UMaterialExpressionVertexNormalWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVertexNormalWS), 414599212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexNormalWS_h_1869349577(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexNormalWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexNormalWS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
