// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioOutputTarget() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EAudioOutputTarget
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioOutputTarget;
static UEnum* EAudioOutputTarget_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioOutputTarget.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioOutputTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioOutputTarget, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioOutputTarget"));
	}
	return Z_Registration_Info_UEnum_EAudioOutputTarget.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAudioOutputTarget::Type>()
{
	return EAudioOutputTarget_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAudioOutputTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Controller.Name", "EAudioOutputTarget::Controller" },
		{ "Controller.ToolTip", "Sound plays only from controller if present." },
		{ "ControllerFallbackToSpeaker.Name", "EAudioOutputTarget::ControllerFallbackToSpeaker" },
		{ "ControllerFallbackToSpeaker.ToolTip", "Sound plays on the controller if present. If not present, it plays from speakers." },
		{ "ModuleRelativePath", "Classes/Sound/AudioOutputTarget.h" },
		{ "Speaker.Name", "EAudioOutputTarget::Speaker" },
		{ "Speaker.ToolTip", "Sound plays only from speakers." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioOutputTarget::Speaker", (int64)EAudioOutputTarget::Speaker },
		{ "EAudioOutputTarget::Controller", (int64)EAudioOutputTarget::Controller },
		{ "EAudioOutputTarget::ControllerFallbackToSpeaker", (int64)EAudioOutputTarget::ControllerFallbackToSpeaker },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioOutputTarget_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAudioOutputTarget",
	"EAudioOutputTarget::Type",
	Z_Construct_UEnum_Engine_EAudioOutputTarget_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioOutputTarget_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioOutputTarget_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAudioOutputTarget_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget()
{
	if (!Z_Registration_Info_UEnum_EAudioOutputTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioOutputTarget.InnerSingleton, Z_Construct_UEnum_Engine_EAudioOutputTarget_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioOutputTarget.InnerSingleton;
}
// End Enum EAudioOutputTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioOutputTarget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioOutputTarget_StaticEnum, TEXT("EAudioOutputTarget"), &Z_Registration_Info_UEnum_EAudioOutputTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 946213142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioOutputTarget_h_4199718467(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioOutputTarget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioOutputTarget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
