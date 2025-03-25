// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionObjectLocalBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectLocalBounds() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionObjectLocalBounds
void UMaterialExpressionObjectLocalBounds::StaticRegisterNativesUMaterialExpressionObjectLocalBounds()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectLocalBounds);
UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_NoRegister()
{
	return UMaterialExpressionObjectLocalBounds::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectLocalBounds.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectLocalBounds.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectLocalBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::ClassParams = {
	&UMaterialExpressionObjectLocalBounds::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectLocalBounds>()
{
	return UMaterialExpressionObjectLocalBounds::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectLocalBounds);
UMaterialExpressionObjectLocalBounds::~UMaterialExpressionObjectLocalBounds() {}
// End Class UMaterialExpressionObjectLocalBounds

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectLocalBounds, UMaterialExpressionObjectLocalBounds::StaticClass, TEXT("UMaterialExpressionObjectLocalBounds"), &Z_Registration_Info_UClass_UMaterialExpressionObjectLocalBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectLocalBounds), 71727314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_3325801969(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
