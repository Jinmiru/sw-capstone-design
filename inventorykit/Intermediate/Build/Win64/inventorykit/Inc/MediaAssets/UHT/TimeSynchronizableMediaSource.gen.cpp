// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/TimeSynchronizableMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeSynchronizableMediaSource() {}

// Begin Cross Module References
MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Class UTimeSynchronizableMediaSource
void UTimeSynchronizableMediaSource::StaticRegisterNativesUTimeSynchronizableMediaSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeSynchronizableMediaSource);
UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister()
{
	return UTimeSynchronizableMediaSource::StaticClass();
}
struct Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for media sources that can be synchronized with the engine's timecode.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "TimeSynchronizableMediaSource.h" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "Base class for media sources that can be synchronized with the engine's timecode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimeSynchronization_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Synchronize the media with the engine's timecode.\n\x09 * The media player has be able to read timecode.\n\x09 * The media player will try to play the corresponding frame, base on the frame's timecode value.\n\x09 */" },
		{ "DisplayName", "Time Synchronization" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "Synchronize the media with the engine's timecode.\nThe media player has be able to read timecode.\nThe media player will try to play the corresponding frame, base on the frame's timecode value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** When using Time Synchronization, how many frame back should it read. */" },
		{ "EditCondition", "bUseTimeSynchronization" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "When using Time Synchronization, how many frame back should it read." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDelay_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** When not using Time Synchronization, how far back it time should it read. */" },
		{ "EditCondition", "!bUseTimeSynchronization" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "When not using Time Synchronization, how far back it time should it read." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectInput_MetaData[] = {
		{ "Comment", "/** Whether to autodetect the input or not. */" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "Whether to autodetect the input or not." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseTimeSynchronization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimeSynchronization;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameDelay;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeDelay;
	static void NewProp_bAutoDetectInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeSynchronizableMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_SetBit(void* Obj)
{
	((UTimeSynchronizableMediaSource*)Obj)->bUseTimeSynchronization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization = { "bUseTimeSynchronization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTimeSynchronizableMediaSource), &Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTimeSynchronization_MetaData), NewProp_bUseTimeSynchronization_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeSynchronizableMediaSource, FrameDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDelay_MetaData), NewProp_FrameDelay_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_TimeDelay = { "TimeDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeSynchronizableMediaSource, TimeDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDelay_MetaData), NewProp_TimeDelay_MetaData) };
void Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_SetBit(void* Obj)
{
	((UTimeSynchronizableMediaSource*)Obj)->bAutoDetectInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput = { "bAutoDetectInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTimeSynchronizableMediaSource), &Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDetectInput_MetaData), NewProp_bAutoDetectInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_FrameDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_TimeDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::ClassParams = {
	&UTimeSynchronizableMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource()
{
	if (!Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton, Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UTimeSynchronizableMediaSource>()
{
	return UTimeSynchronizableMediaSource::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeSynchronizableMediaSource);
UTimeSynchronizableMediaSource::~UTimeSynchronizableMediaSource() {}
// End Class UTimeSynchronizableMediaSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeSynchronizableMediaSource, UTimeSynchronizableMediaSource::StaticClass, TEXT("UTimeSynchronizableMediaSource"), &Z_Registration_Info_UClass_UTimeSynchronizableMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeSynchronizableMediaSource), 2976520630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_2292458184(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
