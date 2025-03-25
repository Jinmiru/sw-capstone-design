// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaTextureTracker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTextureTracker() {}

// Begin Cross Module References
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Enum EMediaTextureVisibleMipsTiles
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles;
static UEnum* EMediaTextureVisibleMipsTiles_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaTextureVisibleMipsTiles"));
	}
	return Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.OuterSingleton;
}
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaTextureVisibleMipsTiles>()
{
	return EMediaTextureVisibleMipsTiles_StaticEnum();
}
struct Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaTextureTracker.h" },
		{ "None.Name", "EMediaTextureVisibleMipsTiles::None" },
		{ "Plane.Name", "EMediaTextureVisibleMipsTiles::Plane" },
		{ "Sphere.Name", "EMediaTextureVisibleMipsTiles::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaTextureVisibleMipsTiles::None", (int64)EMediaTextureVisibleMipsTiles::None },
		{ "EMediaTextureVisibleMipsTiles::Plane", (int64)EMediaTextureVisibleMipsTiles::Plane },
		{ "EMediaTextureVisibleMipsTiles::Sphere", (int64)EMediaTextureVisibleMipsTiles::Sphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
	nullptr,
	"EMediaTextureVisibleMipsTiles",
	"EMediaTextureVisibleMipsTiles",
	Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles()
{
	if (!Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton, Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles.InnerSingleton;
}
// End Enum EMediaTextureVisibleMipsTiles

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMediaTextureVisibleMipsTiles_StaticEnum, TEXT("EMediaTextureVisibleMipsTiles"), &Z_Registration_Info_UEnum_EMediaTextureVisibleMipsTiles, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3464178668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_1355220650(TEXT("/Script/MediaAssets"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
