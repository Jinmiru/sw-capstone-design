// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleStatus() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EContentBundleStatus();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EContentBundleStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBundleStatus;
static UEnum* EContentBundleStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EContentBundleStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EContentBundleStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EContentBundleStatus"));
	}
	return Z_Registration_Info_UEnum_EContentBundleStatus.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EContentBundleStatus>()
{
	return EContentBundleStatus_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EContentBundleStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ContentInjected.Name", "EContentBundleStatus::ContentInjected" },
		{ "FailedToInject.Name", "EContentBundleStatus::FailedToInject" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleStatus.h" },
		{ "ReadyToInject.Name", "EContentBundleStatus::ReadyToInject" },
		{ "Registered.Name", "EContentBundleStatus::Registered" },
		{ "Unknown.Name", "EContentBundleStatus::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EContentBundleStatus::Registered", (int64)EContentBundleStatus::Registered },
		{ "EContentBundleStatus::ReadyToInject", (int64)EContentBundleStatus::ReadyToInject },
		{ "EContentBundleStatus::FailedToInject", (int64)EContentBundleStatus::FailedToInject },
		{ "EContentBundleStatus::ContentInjected", (int64)EContentBundleStatus::ContentInjected },
		{ "EContentBundleStatus::Unknown", (int64)EContentBundleStatus::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EContentBundleStatus",
	"EContentBundleStatus",
	Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EContentBundleStatus()
{
	if (!Z_Registration_Info_UEnum_EContentBundleStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBundleStatus.InnerSingleton, Z_Construct_UEnum_Engine_EContentBundleStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EContentBundleStatus.InnerSingleton;
}
// End Enum EContentBundleStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EContentBundleStatus_StaticEnum, TEXT("EContentBundleStatus"), &Z_Registration_Info_UEnum_EContentBundleStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1554406449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_4205738672(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleStatus_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
