// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationInvokerPriority.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationInvokerPriority() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationInvokerPriority();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ENavigationInvokerPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationInvokerPriority;
static UEnum* ENavigationInvokerPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENavigationInvokerPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENavigationInvokerPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationInvokerPriority, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationInvokerPriority"));
	}
	return Z_Registration_Info_UEnum_ENavigationInvokerPriority.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENavigationInvokerPriority>()
{
	return ENavigationInvokerPriority_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENavigationInvokerPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.Name", "ENavigationInvokerPriority::Default" },
		{ "High.Name", "ENavigationInvokerPriority::High" },
		{ "Low.Name", "ENavigationInvokerPriority::Low" },
		{ "MAX.Name", "ENavigationInvokerPriority::MAX" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationInvokerPriority.h" },
		{ "VeryHigh.Name", "ENavigationInvokerPriority::VeryHigh" },
		{ "VeryLow.Comment", "// Enum values are used (keep in ascending order)\n" },
		{ "VeryLow.Name", "ENavigationInvokerPriority::VeryLow" },
		{ "VeryLow.ToolTip", "Enum values are used (keep in ascending order)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENavigationInvokerPriority::VeryLow", (int64)ENavigationInvokerPriority::VeryLow },
		{ "ENavigationInvokerPriority::Low", (int64)ENavigationInvokerPriority::Low },
		{ "ENavigationInvokerPriority::Default", (int64)ENavigationInvokerPriority::Default },
		{ "ENavigationInvokerPriority::High", (int64)ENavigationInvokerPriority::High },
		{ "ENavigationInvokerPriority::VeryHigh", (int64)ENavigationInvokerPriority::VeryHigh },
		{ "ENavigationInvokerPriority::MAX", (int64)ENavigationInvokerPriority::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavigationInvokerPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENavigationInvokerPriority",
	"ENavigationInvokerPriority",
	Z_Construct_UEnum_Engine_ENavigationInvokerPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationInvokerPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationInvokerPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENavigationInvokerPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENavigationInvokerPriority()
{
	if (!Z_Registration_Info_UEnum_ENavigationInvokerPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationInvokerPriority.InnerSingleton, Z_Construct_UEnum_Engine_ENavigationInvokerPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENavigationInvokerPriority.InnerSingleton;
}
// End Enum ENavigationInvokerPriority

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerPriority_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENavigationInvokerPriority_StaticEnum, TEXT("ENavigationInvokerPriority"), &Z_Registration_Info_UEnum_ENavigationInvokerPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3258851762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerPriority_h_3979994880(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerPriority_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationInvokerPriority_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
