// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionScalarParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScalarParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionScalarParameter
void UMaterialExpressionScalarParameter::StaticRegisterNativesUMaterialExpressionScalarParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionScalarParameter);
UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter_NoRegister()
{
	return UMaterialExpressionScalarParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionScalarParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPrimitiveData_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveDataIndex_MetaData[] = {
		{ "Category", "CustomPrimitiveData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderMin_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "Comment", "/** \n\x09 * Sets the lower bound for the slider on this parameter in the material instance editor. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ToolTip", "Sets the lower bound for the slider on this parameter in the material instance editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderMax_MetaData[] = {
		{ "Category", "MaterialExpressionScalarParameter" },
		{ "Comment", "/** \n\x09 * Sets the upper bound for the slider on this parameter in the material instance editor. \n\x09 * The slider will be disabled if SliderMax <= SliderMin.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScalarParameter.h" },
		{ "ToolTip", "Sets the upper bound for the slider on this parameter in the material instance editor.\nThe slider will be disabled if SliderMax <= SliderMin." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static void NewProp_bUseCustomPrimitiveData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPrimitiveData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveDataIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionScalarParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit(void* Obj)
{
	((UMaterialExpressionScalarParameter*)Obj)->bUseCustomPrimitiveData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData = { "bUseCustomPrimitiveData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionScalarParameter), &Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomPrimitiveData_MetaData), NewProp_bUseCustomPrimitiveData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex = { "PrimitiveDataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, PrimitiveDataIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveDataIndex_MetaData), NewProp_PrimitiveDataIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin = { "SliderMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderMin_MetaData), NewProp_SliderMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax = { "SliderMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionScalarParameter, SliderMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderMax_MetaData), NewProp_SliderMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_bUseCustomPrimitiveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_PrimitiveDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::NewProp_SliderMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::ClassParams = {
	&UMaterialExpressionScalarParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionScalarParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionScalarParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionScalarParameter>()
{
	return UMaterialExpressionScalarParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionScalarParameter);
UMaterialExpressionScalarParameter::~UMaterialExpressionScalarParameter() {}
// End Class UMaterialExpressionScalarParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionScalarParameter, UMaterialExpressionScalarParameter::StaticClass, TEXT("UMaterialExpressionScalarParameter"), &Z_Registration_Info_UClass_UMaterialExpressionScalarParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionScalarParameter), 4188066157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_2495434341(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScalarParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
