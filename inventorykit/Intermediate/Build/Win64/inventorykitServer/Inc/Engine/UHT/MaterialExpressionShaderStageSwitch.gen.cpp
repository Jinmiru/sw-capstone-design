// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionShaderStageSwitch.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShaderStageSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionShaderStageSwitch
void UMaterialExpressionShaderStageSwitch::StaticRegisterNativesUMaterialExpressionShaderStageSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionShaderStageSwitch);
UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister()
{
	return UMaterialExpressionShaderStageSwitch::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelShader_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used in pixel (or compute) shader stages" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexShader_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be in vertex (or tessellation) shader stages" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelShader;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexShader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShaderStageSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader = { "PixelShader", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionShaderStageSwitch, PixelShader), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelShader_MetaData), NewProp_PixelShader_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader = { "VertexShader", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionShaderStageSwitch, VertexShader), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexShader_MetaData), NewProp_VertexShader_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::ClassParams = {
	&UMaterialExpressionShaderStageSwitch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShaderStageSwitch>()
{
	return UMaterialExpressionShaderStageSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShaderStageSwitch);
UMaterialExpressionShaderStageSwitch::~UMaterialExpressionShaderStageSwitch() {}
// End Class UMaterialExpressionShaderStageSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionShaderStageSwitch, UMaterialExpressionShaderStageSwitch::StaticClass, TEXT("UMaterialExpressionShaderStageSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionShaderStageSwitch), 1968542424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_1556173345(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
