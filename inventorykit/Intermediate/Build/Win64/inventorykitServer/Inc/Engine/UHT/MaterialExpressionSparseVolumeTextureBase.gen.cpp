// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSparseVolumeTextureBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSparseVolumeTextureBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSparseVolumeTextureBase
void UMaterialExpressionSparseVolumeTextureBase::StaticRegisterNativesUMaterialExpressionSparseVolumeTextureBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSparseVolumeTextureBase);
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_NoRegister()
{
	return UMaterialExpressionSparseVolumeTextureBase::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSparseVolumeTextureBase.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTexture_MetaData[] = {
		{ "Category", "SparseVolumeTexture" },
		{ "Comment", "/** The Sparse Virtual Texture to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureBase.h" },
		{ "ToolTip", "The Sparse Virtual Texture to sample." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SparseVolumeTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSparseVolumeTextureBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::NewProp_SparseVolumeTexture = { "SparseVolumeTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSparseVolumeTextureBase, SparseVolumeTexture), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTexture_MetaData), NewProp_SparseVolumeTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::NewProp_SparseVolumeTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::ClassParams = {
	&UMaterialExpressionSparseVolumeTextureBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::PropPointers),
	0,
	0x000800B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSparseVolumeTextureBase>()
{
	return UMaterialExpressionSparseVolumeTextureBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSparseVolumeTextureBase);
UMaterialExpressionSparseVolumeTextureBase::~UMaterialExpressionSparseVolumeTextureBase() {}
// End Class UMaterialExpressionSparseVolumeTextureBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase, UMaterialExpressionSparseVolumeTextureBase::StaticClass, TEXT("UMaterialExpressionSparseVolumeTextureBase"), &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSparseVolumeTextureBase), 2012937141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_2130223783(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
