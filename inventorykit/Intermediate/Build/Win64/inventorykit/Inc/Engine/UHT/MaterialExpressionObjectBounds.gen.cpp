// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionObjectBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectBounds() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionObjectBounds
void UMaterialExpressionObjectBounds::StaticRegisterNativesUMaterialExpressionObjectBounds()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectBounds);
UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds_NoRegister()
{
	return UMaterialExpressionObjectBounds::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectBounds.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectBounds.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::ClassParams = {
	&UMaterialExpressionObjectBounds::StaticClass,
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
	0x000020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectBounds>()
{
	return UMaterialExpressionObjectBounds::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectBounds);
UMaterialExpressionObjectBounds::~UMaterialExpressionObjectBounds() {}
// End Class UMaterialExpressionObjectBounds

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectBounds, UMaterialExpressionObjectBounds::StaticClass, TEXT("UMaterialExpressionObjectBounds"), &Z_Registration_Info_UClass_UMaterialExpressionObjectBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectBounds), 4094886327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_1590026347(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
