// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavDataGatheringMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavDataGatheringMode() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ENavDataGatheringMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavDataGatheringMode;
static UEnum* ENavDataGatheringMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavDataGatheringMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavDataGatheringMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavDataGatheringMode"));
	}
	return Z_Registration_Info_UEnum_ENavDataGatheringMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringMode>()
{
	return ENavDataGatheringMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Name", "ENavDataGatheringMode::Default" },
		{ "Instant.Name", "ENavDataGatheringMode::Instant" },
		{ "Lazy.Name", "ENavDataGatheringMode::Lazy" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavDataGatheringMode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavDataGatheringMode::Default", (int64)ENavDataGatheringMode::Default },
		{ "ENavDataGatheringMode::Instant", (int64)ENavDataGatheringMode::Instant },
		{ "ENavDataGatheringMode::Lazy", (int64)ENavDataGatheringMode::Lazy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENavDataGatheringMode",
	"ENavDataGatheringMode",
	Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode()
{
	if (!Z_Registration_Info_UEnum_ENavDataGatheringMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavDataGatheringMode.InnerSingleton, Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavDataGatheringMode.InnerSingleton;
}
// End Enum ENavDataGatheringMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavDataGatheringMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENavDataGatheringMode_StaticEnum, TEXT("ENavDataGatheringMode"), &Z_Registration_Info_UEnum_ENavDataGatheringMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4143279902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavDataGatheringMode_h_1067039466(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavDataGatheringMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavDataGatheringMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
