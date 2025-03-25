// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureRenderTarget
void UTextureRenderTarget::StaticRegisterNativesUTextureRenderTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTarget);
UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister()
{
	return UTextureRenderTarget::StaticClass();
}
struct Z_Construct_UClass_UTextureRenderTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TextureRenderTarget.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGamma_MetaData[] = {
		{ "Category", "TextureRenderTarget" },
		{ "Comment", "/** Will override FTextureRenderTarget2DResource::GetDisplayGamma if > 0. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget.h" },
		{ "ToolTip", "Will override FTextureRenderTarget2DResource::GetDisplayGamma if > 0." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureRenderTarget_Statics::NewProp_TargetGamma = { "TargetGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget, TargetGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGamma_MetaData), NewProp_TargetGamma_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget_Statics::NewProp_TargetGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureRenderTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget_Statics::ClassParams = {
	&UTextureRenderTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureRenderTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget_Statics::PropPointers),
	0,
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureRenderTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureRenderTarget()
{
	if (!Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton, Z_Construct_UClass_UTextureRenderTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureRenderTarget>()
{
	return UTextureRenderTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget);
UTextureRenderTarget::~UTextureRenderTarget() {}
// End Class UTextureRenderTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTarget, UTextureRenderTarget::StaticClass, TEXT("UTextureRenderTarget"), &Z_Registration_Info_UClass_UTextureRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTarget), 3724395705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_1192367111(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
