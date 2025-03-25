// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureObject
void UMaterialExpressionTextureObject::StaticRegisterNativesUMaterialExpressionTextureObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureObject);
UClass* Z_Construct_UClass_UMaterialExpressionTextureObject_NoRegister()
{
	return UMaterialExpressionTextureObject::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureObject.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureObject_Statics::ClassParams = {
	&UMaterialExpressionTextureObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureObject()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureObject.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureObject>()
{
	return UMaterialExpressionTextureObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureObject);
UMaterialExpressionTextureObject::~UMaterialExpressionTextureObject() {}
// End Class UMaterialExpressionTextureObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureObject, UMaterialExpressionTextureObject::StaticClass, TEXT("UMaterialExpressionTextureObject"), &Z_Registration_Info_UClass_UMaterialExpressionTextureObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureObject), 3658910349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_713662103(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
