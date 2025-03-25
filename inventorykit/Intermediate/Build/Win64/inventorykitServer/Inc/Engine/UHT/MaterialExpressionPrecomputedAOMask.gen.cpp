// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionPrecomputedAOMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPrecomputedAOMask() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionPrecomputedAOMask
void UMaterialExpressionPrecomputedAOMask::StaticRegisterNativesUMaterialExpressionPrecomputedAOMask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPrecomputedAOMask);
UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_NoRegister()
{
	return UMaterialExpressionPrecomputedAOMask::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPrecomputedAOMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPrecomputedAOMask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPrecomputedAOMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::ClassParams = {
	&UMaterialExpressionPrecomputedAOMask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPrecomputedAOMask>()
{
	return UMaterialExpressionPrecomputedAOMask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPrecomputedAOMask);
UMaterialExpressionPrecomputedAOMask::~UMaterialExpressionPrecomputedAOMask() {}
// End Class UMaterialExpressionPrecomputedAOMask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask, UMaterialExpressionPrecomputedAOMask::StaticClass, TEXT("UMaterialExpressionPrecomputedAOMask"), &Z_Registration_Info_UClass_UMaterialExpressionPrecomputedAOMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPrecomputedAOMask), 1731456904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_2431033431(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPrecomputedAOMask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
