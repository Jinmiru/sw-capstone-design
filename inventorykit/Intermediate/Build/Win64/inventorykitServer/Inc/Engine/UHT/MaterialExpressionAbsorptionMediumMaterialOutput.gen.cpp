// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionAbsorptionMediumMaterialOutput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAbsorptionMediumMaterialOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialExpressionAbsorptionMediumMaterialOutput
void UMaterialExpressionAbsorptionMediumMaterialOutput::StaticRegisterNativesUMaterialExpressionAbsorptionMediumMaterialOutput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAbsorptionMediumMaterialOutput);
UClass* Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_NoRegister()
{
	return UMaterialExpressionAbsorptionMediumMaterialOutput::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for setting absorption properties of solid refractive glass (for the Path Tracer Only). */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAbsorptionMediumMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAbsorptionMediumMaterialOutput.h" },
		{ "ToolTip", "Material output expression for setting absorption properties of solid refractive glass (for the Path Tracer Only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceColor_MetaData[] = {
		{ "Comment", "/** Input for the transmittance color seen after travelling a distance of 100 units into the object. Valid range is [0,1]. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAbsorptionMediumMaterialOutput.h" },
		{ "ToolTip", "Input for the transmittance color seen after travelling a distance of 100 units into the object. Valid range is [0,1]." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransmittanceColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAbsorptionMediumMaterialOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::NewProp_TransmittanceColor = { "TransmittanceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionAbsorptionMediumMaterialOutput, TransmittanceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmittanceColor_MetaData), NewProp_TransmittanceColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::NewProp_TransmittanceColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::ClassParams = {
	&UMaterialExpressionAbsorptionMediumMaterialOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAbsorptionMediumMaterialOutput>()
{
	return UMaterialExpressionAbsorptionMediumMaterialOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAbsorptionMediumMaterialOutput);
UMaterialExpressionAbsorptionMediumMaterialOutput::~UMaterialExpressionAbsorptionMediumMaterialOutput() {}
// End Class UMaterialExpressionAbsorptionMediumMaterialOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbsorptionMediumMaterialOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput, UMaterialExpressionAbsorptionMediumMaterialOutput::StaticClass, TEXT("UMaterialExpressionAbsorptionMediumMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionAbsorptionMediumMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAbsorptionMediumMaterialOutput), 361697851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbsorptionMediumMaterialOutput_h_2881505413(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbsorptionMediumMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbsorptionMediumMaterialOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
