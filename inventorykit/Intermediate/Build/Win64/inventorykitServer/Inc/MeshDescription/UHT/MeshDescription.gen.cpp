// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MeshDescription/Public/MeshDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescription() {}

// Begin Cross Module References
MESHDESCRIPTION_API UEnum* Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions();
UPackage* Z_Construct_UPackage__Script_MeshDescription();
// End Cross Module References

// Begin Enum EComputeNTBsOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComputeNTBsOptions;
static UEnum* EComputeNTBsOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("EComputeNTBsOptions"));
	}
	return Z_Registration_Info_UEnum_EComputeNTBsOptions.OuterSingleton;
}
template<> MESHDESCRIPTION_API UEnum* StaticEnum<EComputeNTBsOptions>()
{
	return EComputeNTBsOptions_StaticEnum();
}
struct Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshDescription.h" },
		{ "None.Name", "EComputeNTBsOptions::None" },
		{ "Normals.Comment", "// No flags\n" },
		{ "Normals.Name", "EComputeNTBsOptions::Normals" },
		{ "Normals.ToolTip", "No flags" },
		{ "Tangents.Comment", "//Compute the normals\n" },
		{ "Tangents.Name", "EComputeNTBsOptions::Tangents" },
		{ "Tangents.ToolTip", "Compute the normals" },
		{ "WeightedNTBs.Comment", "//Compute the tangents\n" },
		{ "WeightedNTBs.Name", "EComputeNTBsOptions::WeightedNTBs" },
		{ "WeightedNTBs.ToolTip", "Compute the tangents" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComputeNTBsOptions::None", (int64)EComputeNTBsOptions::None },
		{ "EComputeNTBsOptions::Normals", (int64)EComputeNTBsOptions::Normals },
		{ "EComputeNTBsOptions::Tangents", (int64)EComputeNTBsOptions::Tangents },
		{ "EComputeNTBsOptions::WeightedNTBs", (int64)EComputeNTBsOptions::WeightedNTBs },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshDescription,
	nullptr,
	"EComputeNTBsOptions",
	"EComputeNTBsOptions",
	Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions()
{
	if (!Z_Registration_Info_UEnum_EComputeNTBsOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComputeNTBsOptions.InnerSingleton, Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComputeNTBsOptions.InnerSingleton;
}
// End Enum EComputeNTBsOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EComputeNTBsOptions_StaticEnum, TEXT("EComputeNTBsOptions"), &Z_Registration_Info_UEnum_EComputeNTBsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 667501607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_2258363100(TEXT("/Script/MeshDescription"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
