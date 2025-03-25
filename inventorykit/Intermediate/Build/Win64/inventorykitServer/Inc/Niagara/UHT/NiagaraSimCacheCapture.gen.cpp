// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraSimCacheCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheCapture() {}

// Begin Cross Module References
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraSimCacheCaptureParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters;
class UScriptStruct* FNiagaraSimCacheCaptureParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheCaptureParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheCaptureParameters>()
{
	return FNiagaraSimCacheCaptureParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAppendToSimCache_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/** When enabled we will append to the existing simulation cache rather than destroying the existing contents. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "When enabled we will append to the existing simulation cache rather than destroying the existing contents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureFixedNumberOfFrames_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/** When enabled we capture NumFrames number of frames, otherwise the capture will continue until cancelled or the simulation is complete. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "When enabled we capture NumFrames number of frames, otherwise the capture will continue until cancelled or the simulation is complete." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[] = {
		{ "Category", "SimCache" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 The max number of frames to capture. The capture will stop when the simulation completes or we have rendered this many frames, whichever happens first.\n\x09 Set to 0 to capture until simulation completes.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "The max number of frames to capture. The capture will stop when the simulation completes or we have rendered this many frames, whichever happens first.\nSet to 0 to capture until simulation completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureRate_MetaData[] = {
		{ "Category", "SimCache" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Allows for reducing the frequency of captured frames in relation to the simulation's frames. The ratio is 1 / CaptureRate, so a CaptureRate of 2 would captures frames 0, 2, 4, etc. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "Allows for reducing the frequency of captured frames in relation to the simulation's frames. The ratio is 1 / CaptureRate, so a CaptureRate of 2 would captures frames 0, 2, 4, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimeout_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/** When enabled the capture will time out if we reach the defined number of frames without anything new to capture. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "When enabled the capture will time out if we reach the defined number of frames without anything new to capture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutFrameCount_MetaData[] = {
		{ "Category", "SimCache" },
		{ "ClampMin", "1" },
		{ "Comment", "/** When we fail to capture a new frame after this many frames the capture will complete automatically. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "When we fail to capture a new frame after this many frames the capture will complete automatically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAllFramesImmediatly_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09When enabled we will capture all the requested frames immediatly.\n\x09This will capture the simulation outside of the main work tick, i.e. if you request a 10 frame capture we will loop capturing 10 frames on the capture call rather than over 10 world ticks.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "When enabled we will capture all the requested frames immediatly.\nThis will capture the simulation outside of the main work tick, i.e. if you request a 10 frame capture we will loop capturing 10 frames on the capture call rather than over 10 world ticks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImmediateCaptureDeltaTime_MetaData[] = {
		{ "Category", "SimCache" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** The delta time in seconds to use when manually advancing the simulation.Defaults to 1 / 60th of a second(0.01666). */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCapture.h" },
		{ "ToolTip", "The delta time in seconds to use when manually advancing the simulation.Defaults to 1 / 60th of a second(0.01666)." },
	};
#endif // WITH_METADATA
	static void NewProp_bAppendToSimCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendToSimCache;
	static void NewProp_bCaptureFixedNumberOfFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureFixedNumberOfFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureRate;
	static void NewProp_bUseTimeout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeoutFrameCount;
	static void NewProp_bCaptureAllFramesImmediatly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAllFramesImmediatly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImmediateCaptureDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheCaptureParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bAppendToSimCache_SetBit(void* Obj)
{
	((FNiagaraSimCacheCaptureParameters*)Obj)->bAppendToSimCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bAppendToSimCache = { "bAppendToSimCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSimCacheCaptureParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bAppendToSimCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAppendToSimCache_MetaData), NewProp_bAppendToSimCache_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureFixedNumberOfFrames_SetBit(void* Obj)
{
	((FNiagaraSimCacheCaptureParameters*)Obj)->bCaptureFixedNumberOfFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureFixedNumberOfFrames = { "bCaptureFixedNumberOfFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSimCacheCaptureParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureFixedNumberOfFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureFixedNumberOfFrames_MetaData), NewProp_bCaptureFixedNumberOfFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimCacheCaptureParameters, NumFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFrames_MetaData), NewProp_NumFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_CaptureRate = { "CaptureRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimCacheCaptureParameters, CaptureRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureRate_MetaData), NewProp_CaptureRate_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bUseTimeout_SetBit(void* Obj)
{
	((FNiagaraSimCacheCaptureParameters*)Obj)->bUseTimeout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bUseTimeout = { "bUseTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSimCacheCaptureParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bUseTimeout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTimeout_MetaData), NewProp_bUseTimeout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_TimeoutFrameCount = { "TimeoutFrameCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimCacheCaptureParameters, TimeoutFrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutFrameCount_MetaData), NewProp_TimeoutFrameCount_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureAllFramesImmediatly_SetBit(void* Obj)
{
	((FNiagaraSimCacheCaptureParameters*)Obj)->bCaptureAllFramesImmediatly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureAllFramesImmediatly = { "bCaptureAllFramesImmediatly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraSimCacheCaptureParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureAllFramesImmediatly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureAllFramesImmediatly_MetaData), NewProp_bCaptureAllFramesImmediatly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_ImmediateCaptureDeltaTime = { "ImmediateCaptureDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSimCacheCaptureParameters, ImmediateCaptureDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImmediateCaptureDeltaTime_MetaData), NewProp_ImmediateCaptureDeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bAppendToSimCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureFixedNumberOfFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_NumFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_CaptureRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bUseTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_TimeoutFrameCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_bCaptureAllFramesImmediatly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewProp_ImmediateCaptureDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSimCacheCaptureParameters",
	Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::PropPointers),
	sizeof(FNiagaraSimCacheCaptureParameters),
	alignof(FNiagaraSimCacheCaptureParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters.InnerSingleton;
}
// End ScriptStruct FNiagaraSimCacheCaptureParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraSimCacheCaptureParameters::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheCaptureParameters_Statics::NewStructOps, TEXT("NiagaraSimCacheCaptureParameters"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheCaptureParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheCaptureParameters), 3137908210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_1456326227(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCapture_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
