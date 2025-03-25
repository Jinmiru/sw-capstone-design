// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionChannelMaskParameterColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionChannelMaskParameterColor() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EChannelMaskParameterColor
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChannelMaskParameterColor;
static UEnum* EChannelMaskParameterColor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EChannelMaskParameterColor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EChannelMaskParameterColor"));
	}
	return Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EChannelMaskParameterColor::Type>()
{
	return EChannelMaskParameterColor_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EChannelMaskParameterColor::Alpha" },
		{ "Blue.Name", "EChannelMaskParameterColor::Blue" },
		{ "Green.Name", "EChannelMaskParameterColor::Green" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameterColor.h" },
		{ "Red.Name", "EChannelMaskParameterColor::Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChannelMaskParameterColor::Red", (int64)EChannelMaskParameterColor::Red },
		{ "EChannelMaskParameterColor::Green", (int64)EChannelMaskParameterColor::Green },
		{ "EChannelMaskParameterColor::Blue", (int64)EChannelMaskParameterColor::Blue },
		{ "EChannelMaskParameterColor::Alpha", (int64)EChannelMaskParameterColor::Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EChannelMaskParameterColor",
	"EChannelMaskParameterColor::Type",
	Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor()
{
	if (!Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton, Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton;
}
// End Enum EChannelMaskParameterColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChannelMaskParameterColor_StaticEnum, TEXT("EChannelMaskParameterColor"), &Z_Registration_Info_UEnum_EChannelMaskParameterColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1474119628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_2038540992(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
