// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCloth/Private/ChaosCloth/ChaosWeightMapTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosWeightMapTarget() {}

// Begin Cross Module References
CHAOSCLOTH_API UEnum* Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget();
UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References

// Begin Enum EChaosWeightMapTarget
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosWeightMapTarget;
static UEnum* EChaosWeightMapTarget_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget, (UObject*)Z_Construct_UPackage__Script_ChaosCloth(), TEXT("EChaosWeightMapTarget"));
	}
	return Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton;
}
template<> CHAOSCLOTH_API UEnum* StaticEnum<EChaosWeightMapTarget>()
{
	return EChaosWeightMapTarget_StaticEnum();
}
struct Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimDriveDamping.Comment", "// Add Chaos specific maps below this line\n" },
		{ "AnimDriveDamping.Name", "EChaosWeightMapTarget::AnimDriveDamping" },
		{ "AnimDriveDamping.ToolTip", "Add Chaos specific maps below this line" },
		{ "AnimDriveStiffness.Name", "EChaosWeightMapTarget::AnimDriveStiffness" },
		{ "AreaStiffness.Name", "EChaosWeightMapTarget::AreaStiffness" },
		{ "BackstopDistance.Name", "EChaosWeightMapTarget::BackstopDistance" },
		{ "BackstopRadius.Name", "EChaosWeightMapTarget::BackstopRadius" },
		{ "BendingStiffness.Name", "EChaosWeightMapTarget::BendingStiffness" },
		{ "BucklingStiffness.Name", "EChaosWeightMapTarget::BucklingStiffness" },
		{ "Comment", "/** Targets for painted weight maps (aka masks). */" },
		{ "Drag.Name", "EChaosWeightMapTarget::Drag" },
		{ "EdgeStiffness.Name", "EChaosWeightMapTarget::EdgeStiffness" },
		{ "Lift.Name", "EChaosWeightMapTarget::Lift" },
		{ "MaxDistance.Name", "EChaosWeightMapTarget::MaxDistance" },
		{ "ModuleRelativePath", "Private/ChaosCloth/ChaosWeightMapTarget.h" },
		{ "None.Name", "EChaosWeightMapTarget::None" },
		{ "Pressure.Name", "EChaosWeightMapTarget::Pressure" },
		{ "TetherScale.Name", "EChaosWeightMapTarget::TetherScale" },
		{ "TetherStiffness.Name", "EChaosWeightMapTarget::TetherStiffness" },
		{ "ToolTip", "Targets for painted weight maps (aka masks)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosWeightMapTarget::None", (int64)EChaosWeightMapTarget::None },
		{ "EChaosWeightMapTarget::MaxDistance", (int64)EChaosWeightMapTarget::MaxDistance },
		{ "EChaosWeightMapTarget::BackstopDistance", (int64)EChaosWeightMapTarget::BackstopDistance },
		{ "EChaosWeightMapTarget::BackstopRadius", (int64)EChaosWeightMapTarget::BackstopRadius },
		{ "EChaosWeightMapTarget::AnimDriveStiffness", (int64)EChaosWeightMapTarget::AnimDriveStiffness },
		{ "EChaosWeightMapTarget::AnimDriveDamping", (int64)EChaosWeightMapTarget::AnimDriveDamping },
		{ "EChaosWeightMapTarget::TetherStiffness", (int64)EChaosWeightMapTarget::TetherStiffness },
		{ "EChaosWeightMapTarget::TetherScale", (int64)EChaosWeightMapTarget::TetherScale },
		{ "EChaosWeightMapTarget::Drag", (int64)EChaosWeightMapTarget::Drag },
		{ "EChaosWeightMapTarget::Lift", (int64)EChaosWeightMapTarget::Lift },
		{ "EChaosWeightMapTarget::EdgeStiffness", (int64)EChaosWeightMapTarget::EdgeStiffness },
		{ "EChaosWeightMapTarget::BendingStiffness", (int64)EChaosWeightMapTarget::BendingStiffness },
		{ "EChaosWeightMapTarget::AreaStiffness", (int64)EChaosWeightMapTarget::AreaStiffness },
		{ "EChaosWeightMapTarget::BucklingStiffness", (int64)EChaosWeightMapTarget::BucklingStiffness },
		{ "EChaosWeightMapTarget::Pressure", (int64)EChaosWeightMapTarget::Pressure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosCloth,
	nullptr,
	"EChaosWeightMapTarget",
	"EChaosWeightMapTarget",
	Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget()
{
	if (!Z_Registration_Info_UEnum_EChaosWeightMapTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosWeightMapTarget.InnerSingleton, Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosWeightMapTarget.InnerSingleton;
}
// End Enum EChaosWeightMapTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Private_ChaosCloth_ChaosWeightMapTarget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosWeightMapTarget_StaticEnum, TEXT("EChaosWeightMapTarget"), &Z_Registration_Info_UEnum_EChaosWeightMapTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2188073856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Private_ChaosCloth_ChaosWeightMapTarget_h_2215426891(TEXT("/Script/ChaosCloth"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Private_ChaosCloth_ChaosWeightMapTarget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Private_ChaosCloth_ChaosWeightMapTarget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
