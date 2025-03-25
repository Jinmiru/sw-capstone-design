// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionShadingModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShadingModel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingModel();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionShadingModel
void UMaterialExpressionShadingModel::StaticRegisterNativesUMaterialExpressionShadingModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionShadingModel);
UClass* Z_Construct_UClass_UMaterialExpressionShadingModel_NoRegister()
{
	return UMaterialExpressionShadingModel::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionShadingModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionShadingModel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadingModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[] = {
		{ "Category", "ShadingModel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadingModel.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ValidEnumValues", "MSM_DefaultLit, MSM_Subsurface, MSM_PreintegratedSkin, MSM_ClearCoat, MSM_SubsurfaceProfile, MSM_TwoSidedFoliage, MSM_Hair, MSM_Cloth, MSM_Eye" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShadingModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionShadingModel, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingModel_MetaData), NewProp_ShadingModel_MetaData) }; // 1797132865
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::NewProp_ShadingModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::ClassParams = {
	&UMaterialExpressionShadingModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionShadingModel()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionShadingModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionShadingModel.OuterSingleton, Z_Construct_UClass_UMaterialExpressionShadingModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionShadingModel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShadingModel>()
{
	return UMaterialExpressionShadingModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShadingModel);
UMaterialExpressionShadingModel::~UMaterialExpressionShadingModel() {}
// End Class UMaterialExpressionShadingModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionShadingModel, UMaterialExpressionShadingModel::StaticClass, TEXT("UMaterialExpressionShadingModel"), &Z_Registration_Info_UClass_UMaterialExpressionShadingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionShadingModel), 1345735475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_3674022772(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadingModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
