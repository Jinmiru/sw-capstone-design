// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioCapture/Public/AudioCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureComponent() {}

// Begin Cross Module References
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureComponent();
AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureComponent_NoRegister();
AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
UPackage* Z_Construct_UPackage__Script_AudioCapture();
// End Cross Module References

// Begin Class UAudioCaptureComponent
void UAudioCaptureComponent::StaticRegisterNativesUAudioCaptureComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCaptureComponent);
UClass* Z_Construct_UClass_UAudioCaptureComponent_NoRegister()
{
	return UAudioCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UAudioCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "AudioCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/AudioCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JitterLatencyFrames_MetaData[] = {
		{ "Category", "Latency" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09*   Induced latency in audio frames to use to account for jitter between mic capture hardware and audio render hardware. \n\x09 *\x09Increasing this number will increase latency but reduce potential for underruns.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AudioCaptureComponent.h" },
		{ "ToolTip", "Induced latency in audio frames to use to account for jitter between mic capture hardware and audio render hardware.\n   Increasing this number will increase latency but reduce potential for underruns." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_JitterLatencyFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioCaptureComponent_Statics::NewProp_JitterLatencyFrames = { "JitterLatencyFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioCaptureComponent, JitterLatencyFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JitterLatencyFrames_MetaData), NewProp_JitterLatencyFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCaptureComponent_Statics::NewProp_JitterLatencyFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USynthComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureComponent_Statics::ClassParams = {
	&UAudioCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAudioCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton, Z_Construct_UClass_UAudioCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton;
}
template<> AUDIOCAPTURE_API UClass* StaticClass<UAudioCaptureComponent>()
{
	return UAudioCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureComponent);
UAudioCaptureComponent::~UAudioCaptureComponent() {}
// End Class UAudioCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCaptureComponent, UAudioCaptureComponent::StaticClass, TEXT("UAudioCaptureComponent"), &Z_Registration_Info_UClass_UAudioCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCaptureComponent), 3238162699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_2687503693(TEXT("/Script/AudioCapture"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
