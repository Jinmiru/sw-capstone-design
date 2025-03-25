// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionThinTranslucentMaterialOutput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionThinTranslucentMaterialOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionThinTranslucentMaterialOutput
void UMaterialExpressionThinTranslucentMaterialOutput::StaticRegisterNativesUMaterialExpressionThinTranslucentMaterialOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionThinTranslucentMaterialOutput);
UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister()
{
	return UMaterialExpressionThinTranslucentMaterialOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for setting absorption properties of thin translucent materials. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionThinTranslucentMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionThinTranslucentMaterialOutput.h" },
		{ "ToolTip", "Material output expression for setting absorption properties of thin translucent materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceColor_MetaData[] = {
		{ "Comment", "/** Input for the transmittance color for a view perpendicular to the surface. Valid range is [0,1]. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionThinTranslucentMaterialOutput.h" },
		{ "ToolTip", "Input for the transmittance color for a view perpendicular to the surface. Valid range is [0,1]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransmittanceColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionThinTranslucentMaterialOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::NewProp_TransmittanceColor = { "TransmittanceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionThinTranslucentMaterialOutput, TransmittanceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmittanceColor_MetaData), NewProp_TransmittanceColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::NewProp_TransmittanceColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::ClassParams = {
	&UMaterialExpressionThinTranslucentMaterialOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionThinTranslucentMaterialOutput>()
{
	return UMaterialExpressionThinTranslucentMaterialOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionThinTranslucentMaterialOutput);
UMaterialExpressionThinTranslucentMaterialOutput::~UMaterialExpressionThinTranslucentMaterialOutput() {}
// End Class UMaterialExpressionThinTranslucentMaterialOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput, UMaterialExpressionThinTranslucentMaterialOutput::StaticClass, TEXT("UMaterialExpressionThinTranslucentMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionThinTranslucentMaterialOutput), 2745283203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_3417291239(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
