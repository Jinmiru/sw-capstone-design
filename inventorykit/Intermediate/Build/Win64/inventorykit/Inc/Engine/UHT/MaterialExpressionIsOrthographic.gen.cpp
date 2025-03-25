// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionIsOrthographic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionIsOrthographic() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIsOrthographic();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIsOrthographic_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionIsOrthographic
void UMaterialExpressionIsOrthographic::StaticRegisterNativesUMaterialExpressionIsOrthographic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionIsOrthographic);
UClass* Z_Construct_UClass_UMaterialExpressionIsOrthographic_NoRegister()
{
	return UMaterialExpressionIsOrthographic::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionIsOrthographic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionIsOrthographic.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIsOrthographic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionIsOrthographic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionIsOrthographic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIsOrthographic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionIsOrthographic_Statics::ClassParams = {
	&UMaterialExpressionIsOrthographic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIsOrthographic_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionIsOrthographic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionIsOrthographic()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.OuterSingleton, Z_Construct_UClass_UMaterialExpressionIsOrthographic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionIsOrthographic>()
{
	return UMaterialExpressionIsOrthographic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionIsOrthographic);
UMaterialExpressionIsOrthographic::~UMaterialExpressionIsOrthographic() {}
// End Class UMaterialExpressionIsOrthographic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIsOrthographic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionIsOrthographic, UMaterialExpressionIsOrthographic::StaticClass, TEXT("UMaterialExpressionIsOrthographic"), &Z_Registration_Info_UClass_UMaterialExpressionIsOrthographic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionIsOrthographic), 1708149452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIsOrthographic_h_1904174445(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIsOrthographic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIsOrthographic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
