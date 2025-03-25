// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ImageWriteQueue/Public/ImageWriteTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageWriteTypes() {}

// Begin Cross Module References
IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
UPackage* Z_Construct_UPackage__Script_ImageWriteQueue();
// End Cross Module References

// Begin Enum EDesiredImageFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDesiredImageFormat;
static UEnum* EDesiredImageFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, (UObject*)Z_Construct_UPackage__Script_ImageWriteQueue(), TEXT("EDesiredImageFormat"));
	}
	return Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton;
}
template<> IMAGEWRITEQUEUE_API UEnum* StaticEnum<EDesiredImageFormat>()
{
	return EDesiredImageFormat_StaticEnum();
}
struct Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BMP.Name", "EDesiredImageFormat::BMP" },
		{ "EXR.Name", "EDesiredImageFormat::EXR" },
		{ "JPG.Name", "EDesiredImageFormat::JPG" },
		{ "ModuleRelativePath", "Public/ImageWriteTypes.h" },
		{ "PNG.Name", "EDesiredImageFormat::PNG" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDesiredImageFormat::PNG", (int64)EDesiredImageFormat::PNG },
		{ "EDesiredImageFormat::JPG", (int64)EDesiredImageFormat::JPG },
		{ "EDesiredImageFormat::BMP", (int64)EDesiredImageFormat::BMP },
		{ "EDesiredImageFormat::EXR", (int64)EDesiredImageFormat::EXR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ImageWriteQueue,
	nullptr,
	"EDesiredImageFormat",
	"EDesiredImageFormat",
	Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat()
{
	if (!Z_Registration_Info_UEnum_EDesiredImageFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDesiredImageFormat.InnerSingleton, Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDesiredImageFormat.InnerSingleton;
}
// End Enum EDesiredImageFormat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDesiredImageFormat_StaticEnum, TEXT("EDesiredImageFormat"), &Z_Registration_Info_UEnum_EDesiredImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3760367723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h_4261534577(TEXT("/Script/ImageWriteQueue"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
