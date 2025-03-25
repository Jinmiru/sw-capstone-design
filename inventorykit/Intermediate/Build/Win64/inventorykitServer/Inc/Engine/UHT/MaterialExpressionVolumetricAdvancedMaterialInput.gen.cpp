// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVolumetricAdvancedMaterialInput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionVolumetricAdvancedMaterialInput
void UMaterialExpressionVolumetricAdvancedMaterialInput::StaticRegisterNativesUMaterialExpressionVolumetricAdvancedMaterialInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVolumetricAdvancedMaterialInput);
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_NoRegister()
{
	return UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVolumetricAdvancedMaterialInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::ClassParams = {
	&UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass,
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
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVolumetricAdvancedMaterialInput>()
{
	return UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVolumetricAdvancedMaterialInput);
UMaterialExpressionVolumetricAdvancedMaterialInput::~UMaterialExpressionVolumetricAdvancedMaterialInput() {}
// End Class UMaterialExpressionVolumetricAdvancedMaterialInput

// Begin Class UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput
void UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput::StaticRegisterNativesUMaterialExpressionVolumetricCloudEmptySpaceSkippingInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput);
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_NoRegister()
{
	return UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialInput.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_Statics::ClassParams = {
	&UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput::StaticClass,
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
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput>()
{
	return UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput);
UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput::~UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput() {}
// End Class UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput, UMaterialExpressionVolumetricAdvancedMaterialInput::StaticClass, TEXT("UMaterialExpressionVolumetricAdvancedMaterialInput"), &Z_Registration_Info_UClass_UMaterialExpressionVolumetricAdvancedMaterialInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVolumetricAdvancedMaterialInput), 1678990208U) },
		{ Z_Construct_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput, UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput::StaticClass, TEXT("UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput"), &Z_Registration_Info_UClass_UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVolumetricCloudEmptySpaceSkippingInput), 1625408994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_793307602(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVolumetricAdvancedMaterialInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
