// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameterCubeArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterCubeArray() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureSampleParameterCubeArray
void UMaterialExpressionTextureSampleParameterCubeArray::StaticRegisterNativesUMaterialExpressionTextureSampleParameterCubeArray()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameterCubeArray);
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_NoRegister()
{
	return UMaterialExpressionTextureSampleParameterCubeArray::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterCubeArray.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterCubeArray.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterCubeArray>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics::ClassParams = {
	&UMaterialExpressionTextureSampleParameterCubeArray::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterCubeArray>()
{
	return UMaterialExpressionTextureSampleParameterCubeArray::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterCubeArray);
UMaterialExpressionTextureSampleParameterCubeArray::~UMaterialExpressionTextureSampleParameterCubeArray() {}
// End Class UMaterialExpressionTextureSampleParameterCubeArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCubeArray, UMaterialExpressionTextureSampleParameterCubeArray::StaticClass, TEXT("UMaterialExpressionTextureSampleParameterCubeArray"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCubeArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameterCubeArray), 3178981837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_421418311(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCubeArray_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
