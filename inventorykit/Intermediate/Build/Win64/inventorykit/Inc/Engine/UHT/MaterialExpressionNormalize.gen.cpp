// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionNormalize.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNormalize() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionNormalize
void UMaterialExpressionNormalize::StaticRegisterNativesUMaterialExpressionNormalize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNormalize);
UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister()
{
	return UMaterialExpressionNormalize::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionNormalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNormalize.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNormalize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput = { "VectorInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNormalize, VectorInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorInput_MetaData), NewProp_VectorInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionNormalize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNormalize_Statics::ClassParams = {
	&UMaterialExpressionNormalize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionNormalize()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionNormalize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNormalize.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNormalize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionNormalize.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNormalize>()
{
	return UMaterialExpressionNormalize::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNormalize);
UMaterialExpressionNormalize::~UMaterialExpressionNormalize() {}
// End Class UMaterialExpressionNormalize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNormalize, UMaterialExpressionNormalize::StaticClass, TEXT("UMaterialExpressionNormalize"), &Z_Registration_Info_UClass_UMaterialExpressionNormalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNormalize), 1061057679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_3689551483(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
