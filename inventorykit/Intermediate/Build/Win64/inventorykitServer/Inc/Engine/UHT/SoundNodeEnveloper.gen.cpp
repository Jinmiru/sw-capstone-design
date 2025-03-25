// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundNodeEnveloper.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeEnveloper() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundNode();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper();
ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundNodeEnveloper
void USoundNodeEnveloper::StaticRegisterNativesUSoundNodeEnveloper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeEnveloper);
UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister()
{
	return USoundNodeEnveloper::StaticClass();
}
struct Z_Construct_UClass_USoundNodeEnveloper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Allows manipulation of volume and pitch over a set time period\n */" },
		{ "DisplayName", "Enveloper" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeEnveloper.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "Allows manipulation of volume and pitch over a set time period" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopStart_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The time in seconds where the envelope's loop begins.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds where the envelope's loop begins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopEnd_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The time in seconds where the envelope's loop ends.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds where the envelope's loop ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationAfterLoop_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The time in seconds it takes the evelope to fade out after the last loop is completed.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds it takes the evelope to fade out after the last loop is completed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// The number of times the envelope should loop if looping is enabled and the envelope is not set to loop indefinitely.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The number of times the envelope should loop if looping is enabled and the envelope is not set to loop indefinitely." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoopIndefinitely_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// If enabled, the envelope will continue to loop indefenitely regardless of the Loop Count value.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "If enabled, the envelope will continue to loop indefenitely regardless of the Loop Count value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Looping" },
		{ "Comment", "// If enabled, the envelope will loop using the loop settings.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "If enabled, the envelope will loop using the loop settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeInterpCurve_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchInterpCurve_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeCurve_MetaData[] = {
		{ "Category", "Envelope" },
		{ "Comment", "// The distribution defining the volume envelope.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The distribution defining the volume envelope." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchCurve_MetaData[] = {
		{ "Category", "Envelope" },
		{ "Comment", "// The distribution defining the pitch envelope.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The distribution defining the pitch envelope." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The lower bound of pitch (1.0 is no change)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The upper bound of pitch (1.0 is no change)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The lower bound of volume (1.0 is no change)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The upper bound of volume (1.0 is no change)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationAfterLoop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static void NewProp_bLoopIndefinitely_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopIndefinitely;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeInterpCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchInterpCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeEnveloper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart = { "LoopStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, LoopStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopStart_MetaData), NewProp_LoopStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd = { "LoopEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, LoopEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopEnd_MetaData), NewProp_LoopEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop = { "DurationAfterLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, DurationAfterLoop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationAfterLoop_MetaData), NewProp_DurationAfterLoop_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, LoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCount_MetaData), NewProp_LoopCount_MetaData) };
void Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_SetBit(void* Obj)
{
	((USoundNodeEnveloper*)Obj)->bLoopIndefinitely = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely = { "bLoopIndefinitely", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundNodeEnveloper), &Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoopIndefinitely_MetaData), NewProp_bLoopIndefinitely_MetaData) };
void Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((USoundNodeEnveloper*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USoundNodeEnveloper), &Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve = { "VolumeInterpCurve", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeInterpCurve_MetaData), NewProp_VolumeInterpCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve = { "PitchInterpCurve", nullptr, (EPropertyFlags)0x0114000020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchInterpCurve_MetaData), NewProp_PitchInterpCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve = { "VolumeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeCurve_MetaData), NewProp_VolumeCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve = { "PitchCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchCurve_MetaData), NewProp_PitchCurve_MetaData) }; // 762678829
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMin_MetaData), NewProp_PitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchMax_MetaData), NewProp_PitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMin_MetaData), NewProp_VolumeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMax_MetaData), NewProp_VolumeMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundNodeEnveloper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeEnveloper_Statics::ClassParams = {
	&USoundNodeEnveloper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundNodeEnveloper()
{
	if (!Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton, Z_Construct_UClass_USoundNodeEnveloper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundNodeEnveloper.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundNodeEnveloper>()
{
	return USoundNodeEnveloper::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeEnveloper);
USoundNodeEnveloper::~USoundNodeEnveloper() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeEnveloper)
// End Class USoundNodeEnveloper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeEnveloper, USoundNodeEnveloper::StaticClass, TEXT("USoundNodeEnveloper"), &Z_Registration_Info_UClass_USoundNodeEnveloper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeEnveloper), 605665410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_3057163900(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeEnveloper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
