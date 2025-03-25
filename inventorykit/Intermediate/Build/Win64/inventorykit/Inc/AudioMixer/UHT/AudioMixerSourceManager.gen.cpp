// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioMixer/Private/AudioMixerSourceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSourceManager() {}

// Begin Cross Module References
AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase();
UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References

// Begin Enum ESourceManagerRenderThreadPhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase;
static UEnum* ESourceManagerRenderThreadPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESourceManagerRenderThreadPhase"));
	}
	return Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.OuterSingleton;
}
template<> AUDIOMIXER_API UEnum* StaticEnum<ESourceManagerRenderThreadPhase>()
{
	return ESourceManagerRenderThreadPhase_StaticEnum();
}
struct Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Begin.Name", "Begin" },
		{ "Comment", "// For diagnostics, keep track of what phase of updating the Source manager is in currently.\n" },
		{ "ComputeBusses.Name", "ComputeBusses" },
		{ "Finished.Name", "Finished" },
		{ "GenerateSrcAudio_WithBusses.Name", "GenerateSrcAudio_WithBusses" },
		{ "GenerateSrcAudio_WithoutBusses.Name", "GenerateSrcAudio_WithoutBusses" },
		{ "ModuleRelativePath", "Private/AudioMixerSourceManager.h" },
		{ "ProcessModulators.Name", "ProcessModulators" },
		{ "PumpCmds.Name", "PumpCmds" },
		{ "PumpMpscCmds.Name", "PumpMpscCmds" },
		{ "SourceDataOverride_OnAllSourcesProcessed.Name", "SourceDataOverride_OnAllSourcesProcessed" },
		{ "SpatialInterface_OnAllSourcesProcessed.Name", "SpatialInterface_OnAllSourcesProcessed" },
		{ "ToolTip", "For diagnostics, keep track of what phase of updating the Source manager is in currently." },
		{ "UpdateBusses.Name", "UpdateBusses" },
		{ "UpdateGameThreadCopies.Name", "UpdateGameThreadCopies" },
		{ "UpdatePendingReleaseData.Name", "UpdatePendingReleaseData" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Begin", (int64)Begin },
		{ "PumpMpscCmds", (int64)PumpMpscCmds },
		{ "PumpCmds", (int64)PumpCmds },
		{ "ProcessModulators", (int64)ProcessModulators },
		{ "UpdatePendingReleaseData", (int64)UpdatePendingReleaseData },
		{ "GenerateSrcAudio_WithBusses", (int64)GenerateSrcAudio_WithBusses },
		{ "ComputeBusses", (int64)ComputeBusses },
		{ "GenerateSrcAudio_WithoutBusses", (int64)GenerateSrcAudio_WithoutBusses },
		{ "UpdateBusses", (int64)UpdateBusses },
		{ "SpatialInterface_OnAllSourcesProcessed", (int64)SpatialInterface_OnAllSourcesProcessed },
		{ "SourceDataOverride_OnAllSourcesProcessed", (int64)SourceDataOverride_OnAllSourcesProcessed },
		{ "UpdateGameThreadCopies", (int64)UpdateGameThreadCopies },
		{ "Finished", (int64)Finished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
	nullptr,
	"ESourceManagerRenderThreadPhase",
	"ESourceManagerRenderThreadPhase",
	Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase()
{
	if (!Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESourceManagerRenderThreadPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase.InnerSingleton;
}
// End Enum ESourceManagerRenderThreadPhase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESourceManagerRenderThreadPhase_StaticEnum, TEXT("ESourceManagerRenderThreadPhase"), &Z_Registration_Info_UEnum_ESourceManagerRenderThreadPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1122126302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h_3037890327(TEXT("/Script/AudioMixer"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Private_AudioMixerSourceManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
