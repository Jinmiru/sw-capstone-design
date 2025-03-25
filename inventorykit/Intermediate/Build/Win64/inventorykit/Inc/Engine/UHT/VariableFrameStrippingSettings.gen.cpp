// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/VariableFrameStrippingSettings.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariableFrameStrippingSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UVariableFrameStrippingSettings();
ENGINE_API UClass* Z_Construct_UClass_UVariableFrameStrippingSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVariableFrameStrippingSettings
void UVariableFrameStrippingSettings::StaticRegisterNativesUVariableFrameStrippingSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariableFrameStrippingSettings);
UClass* Z_Construct_UClass_UVariableFrameStrippingSettings_NoRegister()
{
	return UVariableFrameStrippingSettings::StaticClass();
}
struct Z_Construct_UClass_UVariableFrameStrippingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n* This is a wrapper for the Variable frame stripping Codec.\n* It allows for the mass changing of settings on animation sequences in an editor accessible way.\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/VariableFrameStrippingSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/VariableFrameStrippingSettings.h" },
		{ "ToolTip", "* This is a wrapper for the Variable frame stripping Codec.\n* It allows for the mass changing of settings on animation sequences in an editor accessible way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseVariableFrameStripping_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09* Enables the change from standard 1/2 frame stripping to stripping a higher amount of frames per frame kept\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/VariableFrameStrippingSettings.h" },
		{ "ToolTip", "Enables the change from standard 1/2 frame stripping to stripping a higher amount of frames per frame kept" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameStrippingRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "2" },
		{ "Comment", "/**\n\x09* The number of Frames that are stripped down to one.\n\x09* Allows for overrides of that multiplier.\n\x09* FrameStrippingRate == 1 would strip no frames, Therefore this is clamped to 2.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/VariableFrameStrippingSettings.h" },
		{ "ToolTip", "The number of Frames that are stripped down to one.\nAllows for overrides of that multiplier.\nFrameStrippingRate == 1 would strip no frames, Therefore this is clamped to 2." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UseVariableFrameStripping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameStrippingRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariableFrameStrippingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::NewProp_UseVariableFrameStripping = { "UseVariableFrameStripping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVariableFrameStrippingSettings, UseVariableFrameStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseVariableFrameStripping_MetaData), NewProp_UseVariableFrameStripping_MetaData) }; // 846681800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::NewProp_FrameStrippingRate = { "FrameStrippingRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVariableFrameStrippingSettings, FrameStrippingRate), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameStrippingRate_MetaData), NewProp_FrameStrippingRate_MetaData) }; // 1262733314
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::NewProp_UseVariableFrameStripping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::NewProp_FrameStrippingRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::ClassParams = {
	&UVariableFrameStrippingSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVariableFrameStrippingSettings()
{
	if (!Z_Registration_Info_UClass_UVariableFrameStrippingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariableFrameStrippingSettings.OuterSingleton, Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVariableFrameStrippingSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVariableFrameStrippingSettings>()
{
	return UVariableFrameStrippingSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVariableFrameStrippingSettings);
UVariableFrameStrippingSettings::~UVariableFrameStrippingSettings() {}
// End Class UVariableFrameStrippingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVariableFrameStrippingSettings, UVariableFrameStrippingSettings::StaticClass, TEXT("UVariableFrameStrippingSettings"), &Z_Registration_Info_UClass_UVariableFrameStrippingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariableFrameStrippingSettings), 1889389207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_1305286660(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
