// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeEditTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditTypes() {}

// Begin Cross Module References
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeToolTargetType();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum ELandscapeToolTargetType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeToolTargetType;
static UEnum* ELandscapeToolTargetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeToolTargetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeToolTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeToolTargetType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeToolTargetType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeToolTargetType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeToolTargetType>()
{
	return ELandscapeToolTargetType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeToolTargetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Heightmap.Name", "ELandscapeToolTargetType::Heightmap" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ELandscapeToolTargetType::Invalid" },
		{ "ModuleRelativePath", "Public/LandscapeEditTypes.h" },
		{ "Visibility.Name", "ELandscapeToolTargetType::Visibility" },
		{ "Weightmap.Name", "ELandscapeToolTargetType::Weightmap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeToolTargetType::Heightmap", (int64)ELandscapeToolTargetType::Heightmap },
		{ "ELandscapeToolTargetType::Weightmap", (int64)ELandscapeToolTargetType::Weightmap },
		{ "ELandscapeToolTargetType::Visibility", (int64)ELandscapeToolTargetType::Visibility },
		{ "ELandscapeToolTargetType::Invalid", (int64)ELandscapeToolTargetType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeToolTargetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeToolTargetType",
	"ELandscapeToolTargetType",
	Z_Construct_UEnum_Landscape_ELandscapeToolTargetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeToolTargetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeToolTargetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeToolTargetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeToolTargetType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeToolTargetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeToolTargetType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeToolTargetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeToolTargetType.InnerSingleton;
}
// End Enum ELandscapeToolTargetType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeToolTargetType_StaticEnum, TEXT("ELandscapeToolTargetType"), &Z_Registration_Info_UEnum_ELandscapeToolTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2122393641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditTypes_h_3530264118(TEXT("/Script/Landscape"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeEditTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
