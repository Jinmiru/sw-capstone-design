// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterSubUV() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureSampleParameterSubUV
void UMaterialExpressionTextureSampleParameterSubUV::StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameterSubUV);
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister()
{
	return UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlend_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSampleParameterSubUV" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterSubUV>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_SetBit(void* Obj)
{
	((UMaterialExpressionTextureSampleParameterSubUV*)Obj)->bBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend = { "bBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureSampleParameterSubUV), &Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlend_MetaData), NewProp_bBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::ClassParams = {
	&UMaterialExpressionTextureSampleParameterSubUV::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterSubUV>()
{
	return UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterSubUV);
UMaterialExpressionTextureSampleParameterSubUV::~UMaterialExpressionTextureSampleParameterSubUV() {}
// End Class UMaterialExpressionTextureSampleParameterSubUV

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV, UMaterialExpressionTextureSampleParameterSubUV::StaticClass, TEXT("UMaterialExpressionTextureSampleParameterSubUV"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameterSubUV), 1763580391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_3374060766(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterSubUV_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
