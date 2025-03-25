// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionClearCoatNormalCustomOutput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionClearCoatNormalCustomOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionClearCoatNormalCustomOutput
void UMaterialExpressionClearCoatNormalCustomOutput::StaticRegisterNativesUMaterialExpressionClearCoatNormalCustomOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionClearCoatNormalCustomOutput);
UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_NoRegister()
{
	return UMaterialExpressionClearCoatNormalCustomOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionClearCoatNormalCustomOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClearCoatNormalCustomOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClearCoatNormalCustomOutput.h" },
		{ "RequiredInput", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionClearCoatNormalCustomOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionClearCoatNormalCustomOutput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::ClassParams = {
	&UMaterialExpressionClearCoatNormalCustomOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionClearCoatNormalCustomOutput>()
{
	return UMaterialExpressionClearCoatNormalCustomOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionClearCoatNormalCustomOutput);
UMaterialExpressionClearCoatNormalCustomOutput::~UMaterialExpressionClearCoatNormalCustomOutput() {}
// End Class UMaterialExpressionClearCoatNormalCustomOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionClearCoatNormalCustomOutput, UMaterialExpressionClearCoatNormalCustomOutput::StaticClass, TEXT("UMaterialExpressionClearCoatNormalCustomOutput"), &Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionClearCoatNormalCustomOutput), 1987574094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_1484663939(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClearCoatNormalCustomOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
