// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Curve.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Curve() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FHapticFeedbackDetails_Curve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve;
class UScriptStruct* FHapticFeedbackDetails_Curve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HapticFeedbackDetails_Curve"));
	}
	return Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHapticFeedbackDetails_Curve>()
{
	return FHapticFeedbackDetails_Curve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "HapticDetails" },
		{ "Comment", "/** The frequency to vibrate the haptic device at.  Frequency ranges vary by device! */" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
		{ "ToolTip", "The frequency to vibrate the haptic device at.  Frequency ranges vary by device!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "HapticDetails" },
		{ "Comment", "/** The amplitude to vibrate the haptic device at.  Amplitudes are normalized over the range [0.0, 1.0], with 1.0 being the max setting of the device */" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
		{ "ToolTip", "The amplitude to vibrate the haptic device at.  Amplitudes are normalized over the range [0.0, 1.0], with 1.0 being the max setting of the device" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHapticFeedbackDetails_Curve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHapticFeedbackDetails_Curve, Frequency), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHapticFeedbackDetails_Curve, Amplitude), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) }; // 762678829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewProp_Amplitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"HapticFeedbackDetails_Curve",
	Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::PropPointers),
	sizeof(FHapticFeedbackDetails_Curve),
	alignof(FHapticFeedbackDetails_Curve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve()
{
	if (!Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve.InnerSingleton, Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve.InnerSingleton;
}
// End ScriptStruct FHapticFeedbackDetails_Curve

// Begin Class UHapticFeedbackEffect_Curve
void UHapticFeedbackEffect_Curve::StaticRegisterNativesUHapticFeedbackEffect_Curve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffect_Curve);
UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve_NoRegister()
{
	return UHapticFeedbackEffect_Curve::StaticClass();
}
struct Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_Curve.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HapticDetails_MetaData[] = {
		{ "Category", "HapticFeedbackEffect" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Curve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HapticDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_Curve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::NewProp_HapticDetails = { "HapticDetails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHapticFeedbackEffect_Curve, HapticDetails), Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HapticDetails_MetaData), NewProp_HapticDetails_MetaData) }; // 3293181642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::NewProp_HapticDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::ClassParams = {
	&UHapticFeedbackEffect_Curve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::Class_MetaDataParams), Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHapticFeedbackEffect_Curve()
{
	if (!Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_Curve>()
{
	return UHapticFeedbackEffect_Curve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Curve);
UHapticFeedbackEffect_Curve::~UHapticFeedbackEffect_Curve() {}
// End Class UHapticFeedbackEffect_Curve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHapticFeedbackDetails_Curve::StaticStruct, Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics::NewStructOps, TEXT("HapticFeedbackDetails_Curve"), &Z_Registration_Info_UScriptStruct_HapticFeedbackDetails_Curve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHapticFeedbackDetails_Curve), 3293181642U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffect_Curve, UHapticFeedbackEffect_Curve::StaticClass, TEXT("UHapticFeedbackEffect_Curve"), &Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffect_Curve), 992490213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_2477485648(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
