// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResonanceAudio/Private/ResonanceAudioDirectivityVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioDirectivityVisualizer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_AResonanceAudioDirectivityVisualizer();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_NoRegister();
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ResonanceAudio();
// End Cross Module References

// Begin Class AResonanceAudioDirectivityVisualizer
void AResonanceAudioDirectivityVisualizer::StaticRegisterNativesAResonanceAudioDirectivityVisualizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResonanceAudioDirectivityVisualizer);
UClass* Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_NoRegister()
{
	return AResonanceAudioDirectivityVisualizer::StaticClass();
}
struct Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ResonanceAudioDirectivityVisualizer.h" },
		{ "ModuleRelativePath", "Private/ResonanceAudioDirectivityVisualizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Private/ResonanceAudioDirectivityVisualizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ResonanceAudioDirectivityVisualizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResonanceAudioDirectivityVisualizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResonanceAudioDirectivityVisualizer, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResonanceAudioDirectivityVisualizer, Settings), Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::ClassParams = {
	&AResonanceAudioDirectivityVisualizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::Class_MetaDataParams), Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AResonanceAudioDirectivityVisualizer()
{
	if (!Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.OuterSingleton, Z_Construct_UClass_AResonanceAudioDirectivityVisualizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer.OuterSingleton;
}
template<> RESONANCEAUDIO_API UClass* StaticClass<AResonanceAudioDirectivityVisualizer>()
{
	return AResonanceAudioDirectivityVisualizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AResonanceAudioDirectivityVisualizer);
AResonanceAudioDirectivityVisualizer::~AResonanceAudioDirectivityVisualizer() {}
// End Class AResonanceAudioDirectivityVisualizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioDirectivityVisualizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AResonanceAudioDirectivityVisualizer, AResonanceAudioDirectivityVisualizer::StaticClass, TEXT("AResonanceAudioDirectivityVisualizer"), &Z_Registration_Info_UClass_AResonanceAudioDirectivityVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResonanceAudioDirectivityVisualizer), 2726229367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioDirectivityVisualizer_h_2822780818(TEXT("/Script/ResonanceAudio"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioDirectivityVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioDirectivityVisualizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
