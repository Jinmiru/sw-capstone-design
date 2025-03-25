// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreOnline/Private/Online/CoreOnlinePrivate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnlinePrivate() {}

// Begin Cross Module References
COREONLINE_API UEnum* Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy();
UPackage* Z_Construct_UPackage__Script_CoreOnline();
// End Cross Module References

// Begin Enum ECoreOnlineDummy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoreOnlineDummy;
static UEnum* ECoreOnlineDummy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy, (UObject*)Z_Construct_UPackage__Script_CoreOnline(), TEXT("ECoreOnlineDummy"));
	}
	return Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton;
}
template<> COREONLINE_API UEnum* StaticEnum<ECoreOnlineDummy>()
{
	return ECoreOnlineDummy_StaticEnum();
}
struct Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This exists purely to guarantee a package is created, or the engine will not boot.\n" },
		{ "Dummy.Name", "ECoreOnlineDummy::Dummy" },
		{ "ModuleRelativePath", "Private/Online/CoreOnlinePrivate.h" },
		{ "ToolTip", "This exists purely to guarantee a package is created, or the engine will not boot." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECoreOnlineDummy::Dummy", (int64)ECoreOnlineDummy::Dummy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreOnline,
	nullptr,
	"ECoreOnlineDummy",
	"ECoreOnlineDummy",
	Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy()
{
	if (!Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton, Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton;
}
// End Enum ECoreOnlineDummy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECoreOnlineDummy_StaticEnum, TEXT("ECoreOnlineDummy"), &Z_Registration_Info_UEnum_ECoreOnlineDummy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4188782215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_2205071319(TEXT("/Script/CoreOnline"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
