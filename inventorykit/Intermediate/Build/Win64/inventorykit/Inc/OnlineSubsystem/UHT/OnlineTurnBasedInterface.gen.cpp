// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Interfaces/OnlineTurnBasedInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineTurnBasedInterface() {}

// Begin Cross Module References
ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
// End Cross Module References

// Begin Enum EMPMatchOutcome
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMPMatchOutcome;
static UEnum* EMPMatchOutcome_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMPMatchOutcome.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMPMatchOutcome.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("EMPMatchOutcome"));
	}
	return Z_Registration_Info_UEnum_EMPMatchOutcome.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UEnum* StaticEnum<EMPMatchOutcome::Outcome>()
{
	return EMPMatchOutcome_StaticEnum();
}
struct Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* EMPMatchOutcome represents all the possible outcomes for this player in a match\n*/" },
		{ "First.Name", "EMPMatchOutcome::First" },
		{ "Fourth.Name", "EMPMatchOutcome::Fourth" },
		{ "Lost.Name", "EMPMatchOutcome::Lost" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineTurnBasedInterface.h" },
		{ "None.Name", "EMPMatchOutcome::None" },
		{ "Quit.Name", "EMPMatchOutcome::Quit" },
		{ "Second.Name", "EMPMatchOutcome::Second" },
		{ "Third.Name", "EMPMatchOutcome::Third" },
		{ "Tied.Name", "EMPMatchOutcome::Tied" },
		{ "TimeExpired.Name", "EMPMatchOutcome::TimeExpired" },
		{ "ToolTip", "EMPMatchOutcome represents all the possible outcomes for this player in a match" },
		{ "Won.Name", "EMPMatchOutcome::Won" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMPMatchOutcome::None", (int64)EMPMatchOutcome::None },
		{ "EMPMatchOutcome::Quit", (int64)EMPMatchOutcome::Quit },
		{ "EMPMatchOutcome::Won", (int64)EMPMatchOutcome::Won },
		{ "EMPMatchOutcome::Lost", (int64)EMPMatchOutcome::Lost },
		{ "EMPMatchOutcome::Tied", (int64)EMPMatchOutcome::Tied },
		{ "EMPMatchOutcome::TimeExpired", (int64)EMPMatchOutcome::TimeExpired },
		{ "EMPMatchOutcome::First", (int64)EMPMatchOutcome::First },
		{ "EMPMatchOutcome::Second", (int64)EMPMatchOutcome::Second },
		{ "EMPMatchOutcome::Third", (int64)EMPMatchOutcome::Third },
		{ "EMPMatchOutcome::Fourth", (int64)EMPMatchOutcome::Fourth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystem,
	nullptr,
	"EMPMatchOutcome",
	"EMPMatchOutcome::Outcome",
	Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome()
{
	if (!Z_Registration_Info_UEnum_EMPMatchOutcome.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMPMatchOutcome.InnerSingleton, Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMPMatchOutcome.InnerSingleton;
}
// End Enum EMPMatchOutcome

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineTurnBasedInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMPMatchOutcome_StaticEnum, TEXT("EMPMatchOutcome"), &Z_Registration_Info_UEnum_EMPMatchOutcome, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2296874311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineTurnBasedInterface_h_714034155(TEXT("/Script/OnlineSubsystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineTurnBasedInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineTurnBasedInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
