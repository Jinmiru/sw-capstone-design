// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionSparseVolumeTextureObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSparseVolumeTextureObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionSparseVolumeTextureObject
void UMaterialExpressionSparseVolumeTextureObject::StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSparseVolumeTextureObject);
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_NoRegister()
{
	return UMaterialExpressionSparseVolumeTextureObject::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSparseVolumeTextureObject.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSparseVolumeTextureObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_Statics::ClassParams = {
	&UMaterialExpressionSparseVolumeTextureObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSparseVolumeTextureObject>()
{
	return UMaterialExpressionSparseVolumeTextureObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSparseVolumeTextureObject);
UMaterialExpressionSparseVolumeTextureObject::~UMaterialExpressionSparseVolumeTextureObject() {}
// End Class UMaterialExpressionSparseVolumeTextureObject

// Begin Class UMaterialExpressionSparseVolumeTextureObjectParameter
void UMaterialExpressionSparseVolumeTextureObjectParameter::StaticRegisterNativesUMaterialExpressionSparseVolumeTextureObjectParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSparseVolumeTextureObjectParameter);
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_NoRegister()
{
	return UMaterialExpressionSparseVolumeTextureObjectParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionTextureSample Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSparseVolumeTextureObject.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSparseVolumeTextureObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSparseVolumeTextureObjectParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureSampleParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_Statics::ClassParams = {
	&UMaterialExpressionSparseVolumeTextureObjectParameter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSparseVolumeTextureObjectParameter>()
{
	return UMaterialExpressionSparseVolumeTextureObjectParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSparseVolumeTextureObjectParameter);
UMaterialExpressionSparseVolumeTextureObjectParameter::~UMaterialExpressionSparseVolumeTextureObjectParameter() {}
// End Class UMaterialExpressionSparseVolumeTextureObjectParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObject, UMaterialExpressionSparseVolumeTextureObject::StaticClass, TEXT("UMaterialExpressionSparseVolumeTextureObject"), &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSparseVolumeTextureObject), 438888954U) },
		{ Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter, UMaterialExpressionSparseVolumeTextureObjectParameter::StaticClass, TEXT("UMaterialExpressionSparseVolumeTextureObjectParameter"), &Z_Registration_Info_UClass_UMaterialExpressionSparseVolumeTextureObjectParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSparseVolumeTextureObjectParameter), 2211159790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureObject_h_1477275792(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
