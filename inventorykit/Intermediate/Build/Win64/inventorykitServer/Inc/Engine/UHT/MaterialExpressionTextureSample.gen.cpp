// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionTextureSample.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSample() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESamplerSourceMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipValueMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionTextureSample
void UMaterialExpressionTextureSample::StaticRegisterNativesUMaterialExpressionTextureSample()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSample);
UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister()
{
	return UMaterialExpressionTextureSample::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionTextureSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'Texture' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'AutomaticViewMipBias' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Coordinates derivative over the X axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Coordinates derivative over the Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticViewMipBiasValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipValueMode_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** Defines how the MipValue property is applied to the texture lookup */" },
		{ "DisplayName", "MipValueMode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Defines how the MipValue property is applied to the texture lookup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplerSource_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** \n\x09 * Controls where the sampler for this texture lookup will come from.  \n\x09 * Choose 'from texture asset' to make use of the UTexture addressing settings,\n\x09 * Otherwise use one of the global samplers, which will not consume a sampler slot.\n\x09 * This allows materials to use more than 16 unique textures on SM5 platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Controls where the sampler for this texture lookup will come from.\nChoose 'from texture asset' to make use of the UTexture addressing settings,\nOtherwise use one of the global samplers, which will not consume a sampler slot.\nThis allows materials to use more than 16 unique textures on SM5 platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticViewMipBias_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** Whether the texture should be sampled with per view mip biasing for sharper output with Temporal AA. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "Whether the texture should be sampled with per view mip biasing for sharper output with Temporal AA." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** only used if Coordinates is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "OverridingInputProperty", "Coordinates" },
		{ "ToolTip", "only used if Coordinates is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstMipValue_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** only used if MipValue is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "only used if MipValue is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MipValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinatesDX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinatesDY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutomaticViewMipBiasValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipValueMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerSource;
	static void NewProp_AutomaticViewMipBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutomaticViewMipBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstCoordinate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ConstMipValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject = { "TextureObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureObject_MetaData), NewProp_TextureObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue = { "MipValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipValue_MetaData), NewProp_MipValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX = { "CoordinatesDX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDX), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordinatesDX_MetaData), NewProp_CoordinatesDX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY = { "CoordinatesDY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDY), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordinatesDY_MetaData), NewProp_CoordinatesDY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue = { "AutomaticViewMipBiasValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, AutomaticViewMipBiasValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomaticViewMipBiasValue_MetaData), NewProp_AutomaticViewMipBiasValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode = { "MipValueMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValueMode), Z_Construct_UEnum_Engine_ETextureMipValueMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipValueMode_MetaData), NewProp_MipValueMode_MetaData) }; // 1780463716
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource = { "SamplerSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, SamplerSource), Z_Construct_UEnum_Engine_ESamplerSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplerSource_MetaData), NewProp_SamplerSource_MetaData) }; // 1758857573
void Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_SetBit(void* Obj)
{
	((UMaterialExpressionTextureSample*)Obj)->AutomaticViewMipBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias = { "AutomaticViewMipBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureSample), &Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomaticViewMipBias_MetaData), NewProp_AutomaticViewMipBias_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstCoordinate), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstCoordinate_MetaData), NewProp_ConstCoordinate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue = { "ConstMipValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstMipValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstMipValue_MetaData), NewProp_ConstMipValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::ClassParams = {
	&UMaterialExpressionTextureSample::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionTextureSample()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionTextureSample.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSample>()
{
	return UMaterialExpressionTextureSample::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSample);
UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample() {}
// End Class UMaterialExpressionTextureSample

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSample, UMaterialExpressionTextureSample::StaticClass, TEXT("UMaterialExpressionTextureSample"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSample), 4055889819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_258067888(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
