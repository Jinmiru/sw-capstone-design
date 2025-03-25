// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateRHIRenderer/Public/FX/SlatePostBufferBlur.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlatePostBufferBlur() {}

// Begin Cross Module References
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlatePostBufferBlur();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlatePostBufferBlur_NoRegister();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor();
UPackage* Z_Construct_UPackage__Script_SlateRHIRenderer();
// End Cross Module References

// Begin Class USlatePostBufferBlur
void USlatePostBufferBlur::StaticRegisterNativesUSlatePostBufferBlur()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlatePostBufferBlur);
UClass* Z_Construct_UClass_USlatePostBufferBlur_NoRegister()
{
	return USlatePostBufferBlur::StaticClass();
}
struct Z_Construct_UClass_USlatePostBufferBlur_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Slate Post Buffer Processor that performs a simple gaussian blur to the backbuffer\n * \n * Create a new asset deriving from this class to use / modify settings.\n */" },
		{ "IncludePath", "FX/SlatePostBufferBlur.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FX/SlatePostBufferBlur.h" },
		{ "ToolTip", "Slate Post Buffer Processor that performs a simple gaussian blur to the backbuffer\n\nCreate a new asset deriving from this class to use / modify settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaussianBlurStrength_MetaData[] = {
		{ "Category", "GaussianBlur" },
		{ "ModuleRelativePath", "Public/FX/SlatePostBufferBlur.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GaussianBlurStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlatePostBufferBlur>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlatePostBufferBlur_Statics::NewProp_GaussianBlurStrength = { "GaussianBlurStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlatePostBufferBlur, GaussianBlurStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaussianBlurStrength_MetaData), NewProp_GaussianBlurStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlatePostBufferBlur_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlatePostBufferBlur_Statics::NewProp_GaussianBlurStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferBlur_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlatePostBufferBlur_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateRHIPostBufferProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateRHIRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferBlur_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlatePostBufferBlur_Statics::ClassParams = {
	&USlatePostBufferBlur::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlatePostBufferBlur_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferBlur_Statics::PropPointers),
	0,
	0x001020A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlatePostBufferBlur_Statics::Class_MetaDataParams), Z_Construct_UClass_USlatePostBufferBlur_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlatePostBufferBlur()
{
	if (!Z_Registration_Info_UClass_USlatePostBufferBlur.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlatePostBufferBlur.OuterSingleton, Z_Construct_UClass_USlatePostBufferBlur_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlatePostBufferBlur.OuterSingleton;
}
template<> SLATERHIRENDERER_API UClass* StaticClass<USlatePostBufferBlur>()
{
	return USlatePostBufferBlur::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlatePostBufferBlur);
// End Class USlatePostBufferBlur

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlatePostBufferBlur_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlatePostBufferBlur, USlatePostBufferBlur::StaticClass, TEXT("USlatePostBufferBlur"), &Z_Registration_Info_UClass_USlatePostBufferBlur, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlatePostBufferBlur), 378134201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlatePostBufferBlur_h_1606316609(TEXT("/Script/SlateRHIRenderer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlatePostBufferBlur_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlatePostBufferBlur_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
