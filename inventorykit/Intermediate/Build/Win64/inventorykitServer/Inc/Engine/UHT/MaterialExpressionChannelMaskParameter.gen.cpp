// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionChannelMaskParameter.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionChannelMaskParameter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionChannelMaskParameter
void UMaterialExpressionChannelMaskParameter::StaticRegisterNativesUMaterialExpressionChannelMaskParameter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionChannelMaskParameter);
UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister()
{
	return UMaterialExpressionChannelMaskParameter::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionVectorParameter Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionChannelMaskParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskChannel_MetaData[] = {
		{ "Category", "MaterialExpressionChannelMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaskChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionChannelMaskParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel = { "MaskChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, MaskChannel), Z_Construct_UEnum_Engine_EChannelMaskParameterColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskChannel_MetaData), NewProp_MaskChannel_MetaData) }; // 1474119628
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionVectorParameter,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams = {
	&UMaterialExpressionChannelMaskParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionChannelMaskParameter>()
{
	return UMaterialExpressionChannelMaskParameter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionChannelMaskParameter);
UMaterialExpressionChannelMaskParameter::~UMaterialExpressionChannelMaskParameter() {}
// End Class UMaterialExpressionChannelMaskParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionChannelMaskParameter, UMaterialExpressionChannelMaskParameter::StaticClass, TEXT("UMaterialExpressionChannelMaskParameter"), &Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionChannelMaskParameter), 900925170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_1393488499(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
