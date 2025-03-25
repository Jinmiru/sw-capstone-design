// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMotionController() {}

// Begin Cross Module References
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References

// Begin Enum ETrackingStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackingStatus;
static UEnum* ETrackingStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("ETrackingStatus"));
	}
	return Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ETrackingStatus>()
{
	return ETrackingStatus_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InertialOnly.Name", "ETrackingStatus::InertialOnly" },
		{ "ModuleRelativePath", "Public/IMotionController.h" },
		{ "NotTracked.Name", "ETrackingStatus::NotTracked" },
		{ "Tracked.Name", "ETrackingStatus::Tracked" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrackingStatus::NotTracked", (int64)ETrackingStatus::NotTracked },
		{ "ETrackingStatus::InertialOnly", (int64)ETrackingStatus::InertialOnly },
		{ "ETrackingStatus::Tracked", (int64)ETrackingStatus::Tracked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"ETrackingStatus",
	"ETrackingStatus",
	Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus()
{
	if (!Z_Registration_Info_UEnum_ETrackingStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackingStatus.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrackingStatus.InnerSingleton;
}
// End Enum ETrackingStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETrackingStatus_StaticEnum, TEXT("ETrackingStatus"), &Z_Registration_Info_UEnum_ETrackingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2366538105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h_1110382930(TEXT("/Script/HeadMountedDisplay"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
