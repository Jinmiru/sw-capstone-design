// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionVertexTangentWS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVertexTangentWS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionVertexTangentWS
void UMaterialExpressionVertexTangentWS::StaticRegisterNativesUMaterialExpressionVertexTangentWS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVertexTangentWS);
UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS_NoRegister()
{
	return UMaterialExpressionVertexTangentWS::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVertexTangentWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVertexTangentWS.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVertexTangentWS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::ClassParams = {
	&UMaterialExpressionVertexTangentWS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVertexTangentWS()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVertexTangentWS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVertexTangentWS>()
{
	return UMaterialExpressionVertexTangentWS::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVertexTangentWS);
UMaterialExpressionVertexTangentWS::~UMaterialExpressionVertexTangentWS() {}
// End Class UMaterialExpressionVertexTangentWS

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVertexTangentWS, UMaterialExpressionVertexTangentWS::StaticClass, TEXT("UMaterialExpressionVertexTangentWS"), &Z_Registration_Info_UClass_UMaterialExpressionVertexTangentWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVertexTangentWS), 2752884859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_2629721302(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexTangentWS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
