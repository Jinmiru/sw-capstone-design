// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFresnel.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFresnel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionFresnel
void UMaterialExpressionFresnel::StaticRegisterNativesUMaterialExpressionFresnel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFresnel);
UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister()
{
	return UMaterialExpressionFresnel::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionFresnel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFresnel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExponentIn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'Exponent' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[] = {
		{ "Category", "MaterialExpressionFresnel" },
		{ "Comment", "/** The exponent to pass into the pow() function */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "OverridingInputProperty", "ExponentIn" },
		{ "ToolTip", "The exponent to pass into the pow() function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFractionIn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'BaseReflectFraction' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFraction_MetaData[] = {
		{ "Category", "MaterialExpressionFresnel" },
		{ "Comment", "/** \n\x09 * Specifies the fraction of specular reflection when the surfaces is viewed from straight on.\n\x09 * A value of 1 effectively disables Fresnel.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "OverridingInputProperty", "BaseReflectFractionIn" },
		{ "ToolTip", "Specifies the fraction of specular reflection when the surfaces is viewed from straight on.\nA value of 1 effectively disables Fresnel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Pixel World Normal if not specified" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExponentIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Exponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseReflectFractionIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseReflectFraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFresnel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn = { "ExponentIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, ExponentIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExponentIn_MetaData), NewProp_ExponentIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, Exponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exponent_MetaData), NewProp_Exponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn = { "BaseReflectFractionIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFractionIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseReflectFractionIn_MetaData), NewProp_BaseReflectFractionIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction = { "BaseReflectFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseReflectFraction_MetaData), NewProp_BaseReflectFraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionFresnel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::ClassParams = {
	&UMaterialExpressionFresnel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionFresnel()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionFresnel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFresnel.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFresnel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionFresnel.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFresnel>()
{
	return UMaterialExpressionFresnel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFresnel);
UMaterialExpressionFresnel::~UMaterialExpressionFresnel() {}
// End Class UMaterialExpressionFresnel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFresnel, UMaterialExpressionFresnel::StaticClass, TEXT("UMaterialExpressionFresnel"), &Z_Registration_Info_UClass_UMaterialExpressionFresnel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFresnel), 2582375392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_3579102183(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
