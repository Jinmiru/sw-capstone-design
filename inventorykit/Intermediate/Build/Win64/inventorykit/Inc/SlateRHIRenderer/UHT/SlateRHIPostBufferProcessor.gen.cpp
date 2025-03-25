// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateRHIRenderer/Public/FX/SlateRHIPostBufferProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateRHIPostBufferProcessor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor();
SLATERHIRENDERER_API UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateRHIRenderer();
// End Cross Module References

// Begin Class USlateRHIPostBufferProcessor
void USlateRHIPostBufferProcessor::StaticRegisterNativesUSlateRHIPostBufferProcessor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateRHIPostBufferProcessor);
UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor_NoRegister()
{
	return USlateRHIPostBufferProcessor::StaticClass();
}
struct Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for types that can process the backbuffer scene into the slate post buffer.\n * \n * Implement 'PostProcess' in your derived class. Additionally, you need to create a renderthread proxy that derives from 'FSlateRHIPostBufferProcessorProxy'\n * For an example see: USlatePostBufferBlur.\n */" },
		{ "IncludePath", "FX/SlateRHIPostBufferProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FX/SlateRHIPostBufferProcessor.h" },
		{ "ToolTip", "Base class for types that can process the backbuffer scene into the slate post buffer.\n\nImplement 'PostProcess' in your derived class. Additionally, you need to create a renderthread proxy that derives from 'FSlateRHIPostBufferProcessorProxy'\nFor an example see: USlatePostBufferBlur." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateRHIPostBufferProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateRHIRenderer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics::ClassParams = {
	&USlateRHIPostBufferProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001020A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateRHIPostBufferProcessor()
{
	if (!Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.OuterSingleton, Z_Construct_UClass_USlateRHIPostBufferProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateRHIPostBufferProcessor.OuterSingleton;
}
template<> SLATERHIRENDERER_API UClass* StaticClass<USlateRHIPostBufferProcessor>()
{
	return USlateRHIPostBufferProcessor::StaticClass();
}
USlateRHIPostBufferProcessor::USlateRHIPostBufferProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateRHIPostBufferProcessor);
// End Class USlateRHIPostBufferProcessor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateRHIPostBufferProcessor, USlateRHIPostBufferProcessor::StaticClass, TEXT("USlateRHIPostBufferProcessor"), &Z_Registration_Info_UClass_USlateRHIPostBufferProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateRHIPostBufferProcessor), 2846428352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_2384567377(TEXT("/Script/SlateRHIRenderer"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateRHIRenderer_Public_FX_SlateRHIPostBufferProcessor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
