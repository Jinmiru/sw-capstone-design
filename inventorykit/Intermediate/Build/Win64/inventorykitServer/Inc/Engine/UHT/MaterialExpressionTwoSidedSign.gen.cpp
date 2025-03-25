// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTwoSidedSign.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTwoSidedSign() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTwoSidedSign();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTwoSidedSign_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTwoSidedSign
void UMaterialExpressionTwoSidedSign::StaticRegisterNativesUMaterialExpressionTwoSidedSign()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTwoSidedSign);
UClass* Z_Construct_UClass_UMaterialExpressionTwoSidedSign_NoRegister()
{
	return UMaterialExpressionTwoSidedSign::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTwoSidedSign_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTwoSidedSign.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTwoSidedSign.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTwoSidedSign>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionTwoSidedSign_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTwoSidedSign_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTwoSidedSign_Statics::ClassParams = {
	&UMaterialExpressionTwoSidedSign::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTwoSidedSign_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTwoSidedSign_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTwoSidedSign()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTwoSidedSign_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTwoSidedSign>()
{
	return UMaterialExpressionTwoSidedSign::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTwoSidedSign);
UMaterialExpressionTwoSidedSign::~UMaterialExpressionTwoSidedSign() {}
// End Class UMaterialExpressionTwoSidedSign

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTwoSidedSign_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTwoSidedSign, UMaterialExpressionTwoSidedSign::StaticClass, TEXT("UMaterialExpressionTwoSidedSign"), &Z_Registration_Info_UClass_UMaterialExpressionTwoSidedSign, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTwoSidedSign), 3409506440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTwoSidedSign_h_4250087052(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTwoSidedSign_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTwoSidedSign_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
