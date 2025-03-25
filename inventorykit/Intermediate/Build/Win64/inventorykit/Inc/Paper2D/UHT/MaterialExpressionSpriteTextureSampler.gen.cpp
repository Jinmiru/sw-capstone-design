// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Public/MaterialExpressionSpriteTextureSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpriteTextureSampler() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
PAPER2D_API UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler();
PAPER2D_API UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_NoRegister();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Class UMaterialExpressionSpriteTextureSampler
void UMaterialExpressionSpriteTextureSampler::StaticRegisterNativesUMaterialExpressionSpriteTextureSampler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSpriteTextureSampler);
UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_NoRegister()
{
	return UMaterialExpressionSpriteTextureSampler::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// This is a texture sampler 2D with a special automatically defined parameter name. The texture specified here will be replaced by the SourceTexture or an AdditionalSourceTextures entry of a Paper2D sprite if this material is used on a sprite.\n" },
		{ "HideCategories", "MaterialExpressionTextureSampleParameter MaterialExpressionSpriteTextureSampler Object Object Object Object Object" },
		{ "IncludePath", "MaterialExpressionSpriteTextureSampler.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "This is a texture sampler 2D with a special automatically defined parameter name. The texture specified here will be replaced by the SourceTexture or an AdditionalSourceTextures entry of a Paper2D sprite if this material is used on a sprite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSampleAdditionalTextures_MetaData[] = {
		{ "Category", "Paper2D" },
		{ "Comment", "// Is this a sampler for the default SourceTexture or the AdditionalSourceTextures list?\n" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "Is this a sampler for the default SourceTexture or the AdditionalSourceTextures list?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSlotIndex_MetaData[] = {
		{ "Category", "Paper2D" },
		{ "Comment", "// This is the slot index into the AdditionalSourceTextures array\n" },
		{ "EditCondition", "bSampleAdditionalTextures" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "This is the slot index into the AdditionalSourceTextures array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotDisplayName_MetaData[] = {
		{ "Category", "Paper2D" },
		{ "Comment", "// Friendly label for the texture slot, displayed in the Sprite Editor if not empty\n" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "Friendly label for the texture slot, displayed in the Sprite Editor if not empty" },
	};
#endif // WITH_METADATA
	static void NewProp_bSampleAdditionalTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleAdditionalTextures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdditionalSlotIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SlotDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSpriteTextureSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures_SetBit(void* Obj)
{
	((UMaterialExpressionSpriteTextureSampler*)Obj)->bSampleAdditionalTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures = { "bSampleAdditionalTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionSpriteTextureSampler), &Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSampleAdditionalTextures_MetaData), NewProp_bSampleAdditionalTextures_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_AdditionalSlotIndex = { "AdditionalSlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpriteTextureSampler, AdditionalSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSlotIndex_MetaData), NewProp_AdditionalSlotIndex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_SlotDisplayName = { "SlotDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionSpriteTextureSampler, SlotDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotDisplayName_MetaData), NewProp_SlotDisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_AdditionalSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_SlotDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::ClassParams = {
	&UMaterialExpressionSpriteTextureSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::PropPointers),
	0,
	0x001020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UMaterialExpressionSpriteTextureSampler>()
{
	return UMaterialExpressionSpriteTextureSampler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSpriteTextureSampler);
UMaterialExpressionSpriteTextureSampler::~UMaterialExpressionSpriteTextureSampler() {}
// End Class UMaterialExpressionSpriteTextureSampler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler, UMaterialExpressionSpriteTextureSampler::StaticClass, TEXT("UMaterialExpressionSpriteTextureSampler"), &Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSpriteTextureSampler), 338392060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_3604518010(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
