// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionParticleSubUV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleSubUV() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionParticleSubUV
void UMaterialExpressionParticleSubUV::StaticRegisterNativesUMaterialExpressionParticleSubUV()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleSubUV);
UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV_NoRegister()
{
	return UMaterialExpressionParticleSubUV::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleSubUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSubUV.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlend_MetaData[] = {
		{ "Category", "MaterialExpressionParticleSubUV" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSubUV.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleSubUV>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend_SetBit(void* Obj)
{
	((UMaterialExpressionParticleSubUV*)Obj)->bBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend = { "bBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionParticleSubUV), &Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlend_MetaData), NewProp_bBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::NewProp_bBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSample,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::ClassParams = {
	&UMaterialExpressionParticleSubUV::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionParticleSubUV()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleSubUV_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleSubUV>()
{
	return UMaterialExpressionParticleSubUV::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleSubUV);
UMaterialExpressionParticleSubUV::~UMaterialExpressionParticleSubUV() {}
// End Class UMaterialExpressionParticleSubUV

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleSubUV, UMaterialExpressionParticleSubUV::StaticClass, TEXT("UMaterialExpressionParticleSubUV"), &Z_Registration_Info_UClass_UMaterialExpressionParticleSubUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleSubUV), 3678846525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_3639698456(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSubUV_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
