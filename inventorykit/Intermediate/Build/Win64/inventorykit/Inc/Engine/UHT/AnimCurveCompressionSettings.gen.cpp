// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings();
ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimCurveCompressionSettings
void UAnimCurveCompressionSettings::StaticRegisterNativesUAnimCurveCompressionSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveCompressionSettings);
UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister()
{
	return UAnimCurveCompressionSettings::StaticClass();
}
struct Z_Construct_UClass_UAnimCurveCompressionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This object is used to wrap a curve compression codec. It allows a clean integration in the editor by avoiding the need\n * to create asset types and factory wrappers for every codec.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionSettings.h" },
		{ "ToolTip", "* This object is used to wrap a curve compression codec. It allows a clean integration in the editor by avoiding the need\n* to create asset types and factory wrappers for every codec." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** An animation curve compression codec. */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionSettings.h" },
		{ "ToolTip", "An animation curve compression codec." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Codec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0114000002000009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimCurveCompressionSettings, Codec), Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Codec_MetaData), NewProp_Codec_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::ClassParams = {
	&UAnimCurveCompressionSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimCurveCompressionSettings()
{
	if (!Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton, Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionSettings>()
{
	return UAnimCurveCompressionSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionSettings);
UAnimCurveCompressionSettings::~UAnimCurveCompressionSettings() {}
// End Class UAnimCurveCompressionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveCompressionSettings, UAnimCurveCompressionSettings::StaticClass, TEXT("UAnimCurveCompressionSettings"), &Z_Registration_Info_UClass_UAnimCurveCompressionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveCompressionSettings), 1461916319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_25995897(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
