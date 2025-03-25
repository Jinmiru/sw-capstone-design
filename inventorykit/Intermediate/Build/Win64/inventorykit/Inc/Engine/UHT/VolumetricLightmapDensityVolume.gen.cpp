// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Lightmass/VolumetricLightmapDensityVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricLightmapDensityVolume() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume();
ENGINE_API UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AVolumetricLightmapDensityVolume
void AVolumetricLightmapDensityVolume::StaticRegisterNativesAVolumetricLightmapDensityVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVolumetricLightmapDensityVolume);
UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume_NoRegister()
{
	return AVolumetricLightmapDensityVolume::StaticClass();
}
struct Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Provides local control over volumetric lightmap density.  Only convex shapes supported. */" },
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Lightmass/VolumetricLightmapDensityVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/VolumetricLightmapDensityVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Provides local control over volumetric lightmap density.  Only convex shapes supported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMipLevelRange_MetaData[] = {
		{ "Category", "VolumetricLightmapDensityVolume" },
		{ "Comment", "/**\n\x09 * The Volumetric Lightmap has 3 mipmaps, where the highest density mipmap (mip0) corresponds to VolumetricLightmapDetailCellSize.\n\x09 * mip0: DetailCellSize\n\x09 * mip1: DetailCellSize * 4\n\x09 * mip2: DetailCellSize * 16\n\x09 * \n\x09 * By default, highest density will be placed around static geometry and static lights, but AllowedMipLevelRange can be used to override this behavior. \n\x09 * Examples:\n\x09 * [0, 3] = Volume does nothing\n\x09 * [1, 3] = Volume removes highest density mip, even near static geometry, which can be useful to save memory ('stat MapBuildData')\n\x09 * [0, 0] = Volume forces highest density.  Warning: using this on a large area can greatly increase memory and build times!\n\x09 * When multiple volumes overlap, the smallest (highest density) values will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Lightmass/VolumetricLightmapDensityVolume.h" },
		{ "ToolTip", "The Volumetric Lightmap has 3 mipmaps, where the highest density mipmap (mip0) corresponds to VolumetricLightmapDetailCellSize.\nmip0: DetailCellSize\nmip1: DetailCellSize * 4\nmip2: DetailCellSize * 16\n\nBy default, highest density will be placed around static geometry and static lights, but AllowedMipLevelRange can be used to override this behavior.\nExamples:\n[0, 3] = Volume does nothing\n[1, 3] = Volume removes highest density mip, even near static geometry, which can be useful to save memory ('stat MapBuildData')\n[0, 0] = Volume forces highest density.  Warning: using this on a large area can greatly increase memory and build times!\nWhen multiple volumes overlap, the smallest (highest density) values will be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedMipLevelRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolumetricLightmapDensityVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::NewProp_AllowedMipLevelRange = { "AllowedMipLevelRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolumetricLightmapDensityVolume, AllowedMipLevelRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedMipLevelRange_MetaData), NewProp_AllowedMipLevelRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::NewProp_AllowedMipLevelRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::ClassParams = {
	&AVolumetricLightmapDensityVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume()
{
	if (!Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.OuterSingleton, Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AVolumetricLightmapDensityVolume>()
{
	return AVolumetricLightmapDensityVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumetricLightmapDensityVolume);
AVolumetricLightmapDensityVolume::~AVolumetricLightmapDensityVolume() {}
// End Class AVolumetricLightmapDensityVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVolumetricLightmapDensityVolume, AVolumetricLightmapDensityVolume::StaticClass, TEXT("AVolumetricLightmapDensityVolume"), &Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVolumetricLightmapDensityVolume), 2903721214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_2554352791(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
