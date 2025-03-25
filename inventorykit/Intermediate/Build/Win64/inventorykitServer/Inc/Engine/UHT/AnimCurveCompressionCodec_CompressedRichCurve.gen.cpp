// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_CompressedRichCurve() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCurveCompressionCodec_CompressedRichCurve
void UAnimCurveCompressionCodec_CompressedRichCurve::StaticRegisterNativesUAnimCurveCompressionCodec_CompressedRichCurve()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveCompressionCodec_CompressedRichCurve);
UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_NoRegister()
{
	return UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass();
}
struct Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Compressed Rich Curves" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurveError_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max error allowed when compressing the rich curves */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ToolTip", "Max error allowed when compressing the rich curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAnimSequenceSampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Whether to use the animation sequence sample rate or an explicit value */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ToolTip", "Whether to use the animation sequence sample rate or an explicit value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorSampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sample rate to use when measuring the curve error */" },
		{ "EditCondition", "!UseAnimSequenceSampleRate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ToolTip", "Sample rate to use when measuring the curve error" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCurveError;
	static void NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAnimSequenceSampleRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorSampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_CompressedRichCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_MaxCurveError = { "MaxCurveError", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_CompressedRichCurve, MaxCurveError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCurveError_MetaData), NewProp_MaxCurveError_MetaData) };
void Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj)
{
	((UAnimCurveCompressionCodec_CompressedRichCurve*)Obj)->UseAnimSequenceSampleRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate = { "UseAnimSequenceSampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimCurveCompressionCodec_CompressedRichCurve), &Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAnimSequenceSampleRate_MetaData), NewProp_UseAnimSequenceSampleRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_ErrorSampleRate = { "ErrorSampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_CompressedRichCurve, ErrorSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorSampleRate_MetaData), NewProp_ErrorSampleRate_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_MaxCurveError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_ErrorSampleRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::ClassParams = {
	&UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::PropPointers), 0),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve()
{
	if (!Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.OuterSingleton, Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec_CompressedRichCurve>()
{
	return UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_CompressedRichCurve);
UAnimCurveCompressionCodec_CompressedRichCurve::~UAnimCurveCompressionCodec_CompressedRichCurve() {}
// End Class UAnimCurveCompressionCodec_CompressedRichCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_CompressedRichCurve_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve, UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass, TEXT("UAnimCurveCompressionCodec_CompressedRichCurve"), &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_CompressedRichCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveCompressionCodec_CompressedRichCurve), 383215026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_CompressedRichCurve_h_2414649810(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_CompressedRichCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_CompressedRichCurve_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
