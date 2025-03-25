// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionLogarithm10.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLogarithm10() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionLogarithm10
void UMaterialExpressionLogarithm10::StaticRegisterNativesUMaterialExpressionLogarithm10()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLogarithm10);
UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10_NoRegister()
{
	return UMaterialExpressionLogarithm10::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLogarithm10.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm10.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm10.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_X;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLogarithm10>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLogarithm10, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::NewProp_X,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::ClassParams = {
	&UMaterialExpressionLogarithm10::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLogarithm10()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLogarithm10_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLogarithm10.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionLogarithm10>()
{
	return UMaterialExpressionLogarithm10::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLogarithm10);
UMaterialExpressionLogarithm10::~UMaterialExpressionLogarithm10() {}
// End Class UMaterialExpressionLogarithm10

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm10_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLogarithm10, UMaterialExpressionLogarithm10::StaticClass, TEXT("UMaterialExpressionLogarithm10"), &Z_Registration_Info_UClass_UMaterialExpressionLogarithm10, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLogarithm10), 315468731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm10_h_958693672(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm10_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm10_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
