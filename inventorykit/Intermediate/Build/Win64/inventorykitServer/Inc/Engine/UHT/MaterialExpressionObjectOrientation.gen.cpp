// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionObjectOrientation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectOrientation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionObjectOrientation
void UMaterialExpressionObjectOrientation::StaticRegisterNativesUMaterialExpressionObjectOrientation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectOrientation);
UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister()
{
	return UMaterialExpressionObjectOrientation::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectOrientation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectOrientation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectOrientation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::ClassParams = {
	&UMaterialExpressionObjectOrientation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectOrientation>()
{
	return UMaterialExpressionObjectOrientation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectOrientation);
UMaterialExpressionObjectOrientation::~UMaterialExpressionObjectOrientation() {}
// End Class UMaterialExpressionObjectOrientation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectOrientation, UMaterialExpressionObjectOrientation::StaticClass, TEXT("UMaterialExpressionObjectOrientation"), &Z_Registration_Info_UClass_UMaterialExpressionObjectOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectOrientation), 2378756447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_3604562909(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
