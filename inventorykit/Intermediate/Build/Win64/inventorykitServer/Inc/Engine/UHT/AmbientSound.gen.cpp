// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/AmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbientSound() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AAmbientSound();
ENGINE_API UClass* Z_Construct_UClass_AAmbientSound_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AAmbientSound Function AdjustVolume
struct Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics
{
	struct AmbientSound_eventAdjustVolume_Parms
	{
		float AdjustVolumeDuration;
		float AdjustVolumeLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbientSound_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbientSound_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "AdjustVolume", nullptr, nullptr, Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::AmbientSound_eventAdjustVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::AmbientSound_eventAdjustVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmbientSound_AdjustVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbientSound_AdjustVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbientSound::execAdjustVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel);
	P_NATIVE_END;
}
// End Class AAmbientSound Function AdjustVolume

// Begin Class AAmbientSound Function FadeIn
struct Z_Construct_UFunction_AAmbientSound_FadeIn_Statics
{
	struct AmbientSound_eventFadeIn_Parms
	{
		float FadeInDuration;
		float FadeVolumeLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbientSound_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbientSound_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeInDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::NewProp_FadeVolumeLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "FadeIn", nullptr, nullptr, Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::AmbientSound_eventFadeIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::AmbientSound_eventFadeIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmbientSound_FadeIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbientSound_FadeIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbientSound::execFadeIn)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel);
	P_NATIVE_END;
}
// End Class AAmbientSound Function FadeIn

// Begin Class AAmbientSound Function FadeOut
struct Z_Construct_UFunction_AAmbientSound_FadeOut_Statics
{
	struct AmbientSound_eventFadeOut_Parms
	{
		float FadeOutDuration;
		float FadeVolumeLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbientSound_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbientSound_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeOutDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::NewProp_FadeVolumeLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "FadeOut", nullptr, nullptr, Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::AmbientSound_eventFadeOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::AmbientSound_eventFadeOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmbientSound_FadeOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbientSound_FadeOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbientSound::execFadeOut)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel);
	P_NATIVE_END;
}
// End Class AAmbientSound Function FadeOut

// Begin Class AAmbientSound Function Play
struct Z_Construct_UFunction_AAmbientSound_Play_Statics
{
	struct AmbientSound_eventPlay_Parms
	{
		float StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmbientSound_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbientSound_eventPlay_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbientSound_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbientSound_Play_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_AAmbientSound_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmbientSound_Play_Statics::AmbientSound_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbientSound_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmbientSound_Play_Statics::AmbientSound_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmbientSound_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbientSound_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbientSound::execPlay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play(Z_Param_StartTime);
	P_NATIVE_END;
}
// End Class AAmbientSound Function Play

// Begin Class AAmbientSound Function Stop
struct Z_Construct_UFunction_AAmbientSound_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbientSound_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbientSound, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbientSound_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbientSound_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAmbientSound_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbientSound_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbientSound::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class AAmbientSound Function Stop

// Begin Class AAmbientSound
void AAmbientSound::StaticRegisterNativesAAmbientSound()
{
	UClass* Class = AAmbientSound::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustVolume", &AAmbientSound::execAdjustVolume },
		{ "FadeIn", &AAmbientSound::execFadeIn },
		{ "FadeOut", &AAmbientSound::execFadeOut },
		{ "Play", &AAmbientSound::execPlay },
		{ "Stop", &AAmbientSound::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmbientSound);
UClass* Z_Construct_UClass_AAmbientSound_NoRegister()
{
	return AAmbientSound::StaticClass();
}
struct Z_Construct_UClass_AAmbientSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Audio" },
		{ "ClassGroupNames", "Sounds" },
		{ "Comment", "/** A sound actor that can be placed in a level */" },
		{ "HideCategories", "Collision Input Game" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Sound/AmbientSound.h" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
		{ "ToolTip", "A sound actor that can be placed in a level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "Comment", "/** Audio component that handles sound playing */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sound,Audio,Audio|Components|Audio" },
		{ "ModuleRelativePath", "Classes/Sound/AmbientSound.h" },
		{ "ToolTip", "Audio component that handles sound playing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmbientSound_AdjustVolume, "AdjustVolume" }, // 1620400907
		{ &Z_Construct_UFunction_AAmbientSound_FadeIn, "FadeIn" }, // 4288728887
		{ &Z_Construct_UFunction_AAmbientSound_FadeOut, "FadeOut" }, // 1445550200
		{ &Z_Construct_UFunction_AAmbientSound_Play, "Play" }, // 2760522696
		{ &Z_Construct_UFunction_AAmbientSound_Stop, "Stop" }, // 1228539786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmbientSound>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmbientSound_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbientSound, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmbientSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbientSound_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientSound_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAmbientSound_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientSound_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmbientSound_Statics::ClassParams = {
	&AAmbientSound::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAmbientSound_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientSound_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientSound_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmbientSound_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAmbientSound()
{
	if (!Z_Registration_Info_UClass_AAmbientSound.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmbientSound.OuterSingleton, Z_Construct_UClass_AAmbientSound_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAmbientSound.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AAmbientSound>()
{
	return AAmbientSound::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAmbientSound);
AAmbientSound::~AAmbientSound() {}
// End Class AAmbientSound

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAmbientSound, AAmbientSound::StaticClass, TEXT("AAmbientSound"), &Z_Registration_Info_UClass_AAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmbientSound), 3301085185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_2377551519(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
