// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLightProfile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile();
ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureLightProfile
void UTextureLightProfile::StaticRegisterNativesUTextureLightProfile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureLightProfile);
UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister()
{
	return UTextureLightProfile::StaticClass();
}
struct Z_Construct_UClass_UTextureLightProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object CompositeTexture Texture2D Object" },
		{ "IncludePath", "Engine/TextureLightProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "TextureLightProfile" },
		{ "Comment", "/** Light brightness in Candelas, imported from IES profile, <= 0 if the profile is used for masking only. Use with InverseSquareFalloff. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
		{ "ToolTip", "Light brightness in Candelas, imported from IES profile, <= 0 if the profile is used for masking only. Use with InverseSquareFalloff." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureMultiplier_MetaData[] = {
		{ "Category", "TextureLightProfile" },
		{ "Comment", "/** Multiplier to map texture value to result to integrate over the sphere to 1.0f */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
		{ "ToolTip", "Multiplier to map texture value to result to integrate over the sphere to 1.0f" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureLightProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureLightProfile, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier = { "TextureMultiplier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureLightProfile, TextureMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureMultiplier_MetaData), NewProp_TextureMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureLightProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureLightProfile_Statics::ClassParams = {
	&UTextureLightProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureLightProfile()
{
	if (!Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton, Z_Construct_UClass_UTextureLightProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureLightProfile>()
{
	return UTextureLightProfile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLightProfile);
UTextureLightProfile::~UTextureLightProfile() {}
// End Class UTextureLightProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureLightProfile, UTextureLightProfile::StaticClass, TEXT("UTextureLightProfile"), &Z_Registration_Info_UClass_UTextureLightProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureLightProfile), 1872486848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_1461912433(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
