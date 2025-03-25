// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionRerouteBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRerouteBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionRerouteBase
void UMaterialExpressionRerouteBase::StaticRegisterNativesUMaterialExpressionRerouteBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRerouteBase);
UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase_NoRegister()
{
	return UMaterialExpressionRerouteBase::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRerouteBase.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRerouteBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRerouteBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::ClassParams = {
	&UMaterialExpressionRerouteBase::StaticClass,
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
	0x000800B1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionRerouteBase()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionRerouteBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRerouteBase>()
{
	return UMaterialExpressionRerouteBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRerouteBase);
UMaterialExpressionRerouteBase::~UMaterialExpressionRerouteBase() {}
// End Class UMaterialExpressionRerouteBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRerouteBase, UMaterialExpressionRerouteBase::StaticClass, TEXT("UMaterialExpressionRerouteBase"), &Z_Registration_Info_UClass_UMaterialExpressionRerouteBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRerouteBase), 1840151105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_3400548231(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
