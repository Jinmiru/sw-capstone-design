// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeWeightmapUsage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeWeightmapUsage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeWeightmapUsage
void ULandscapeWeightmapUsage::StaticRegisterNativesULandscapeWeightmapUsage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeWeightmapUsage);
UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister()
{
	return ULandscapeWeightmapUsage::StaticClass();
}
struct Z_Construct_UClass_ULandscapeWeightmapUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeWeightmapUsage.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelUsage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChannelUsage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeWeightmapUsage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage = { "ChannelUsage", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ChannelUsage, ULandscapeWeightmapUsage), STRUCT_OFFSET(ULandscapeWeightmapUsage, ChannelUsage), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelUsage_MetaData), NewProp_ChannelUsage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid = { "LayerGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeWeightmapUsage, LayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerGuid_MetaData), NewProp_LayerGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::ClassParams = {
	&ULandscapeWeightmapUsage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeWeightmapUsage()
{
	if (!Z_Registration_Info_UClass_ULandscapeWeightmapUsage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeWeightmapUsage.OuterSingleton, Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeWeightmapUsage.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeWeightmapUsage>()
{
	return ULandscapeWeightmapUsage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeWeightmapUsage);
ULandscapeWeightmapUsage::~ULandscapeWeightmapUsage() {}
// End Class ULandscapeWeightmapUsage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeWeightmapUsage, ULandscapeWeightmapUsage::StaticClass, TEXT("ULandscapeWeightmapUsage"), &Z_Registration_Info_UClass_ULandscapeWeightmapUsage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeWeightmapUsage), 1553845559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_3539771533(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeWeightmapUsage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
