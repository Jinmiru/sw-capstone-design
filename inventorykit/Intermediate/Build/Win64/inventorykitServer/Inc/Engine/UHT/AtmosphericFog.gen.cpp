// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Atmosphere/AtmosphericFog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphericFog() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog();
ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AAtmosphericFog
void AAtmosphericFog::StaticRegisterNativesAAtmosphericFog()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtmosphericFog);
UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister()
{
	return AAtmosphericFog::StaticClass();
}
struct Z_Construct_UClass_AAtmosphericFog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/** \n *\x09""A placeable fog actor that simulates atmospheric light scattering  \n *\x09@see https://docs.unrealengine.com/latest/INT/Engine/Actors/FogEffects/AtmosphericFog/index.html\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Atmosphere/AtmosphericFog.h" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable fog actor that simulates atmospheric light scattering\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/FogEffects/AtmosphericFog/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFogComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Main fog component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ToolTip", "Main fog component" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** Arrow component to indicate default sun rotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ToolTip", "Arrow component to indicate default sun rotation" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtmosphericFogComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtmosphericFog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent = { "AtmosphericFogComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtmosphericFog, AtmosphericFogComponent), Z_Construct_UClass_UAtmosphericFogComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtmosphericFogComponent_MetaData), NewProp_AtmosphericFogComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAtmosphericFog, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAtmosphericFog_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtmosphericFog_Statics::ClassParams = {
	&AAtmosphericFog::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams), Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAtmosphericFog()
{
	if (!Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton, Z_Construct_UClass_AAtmosphericFog_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AAtmosphericFog>()
{
	return AAtmosphericFog::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAtmosphericFog);
AAtmosphericFog::~AAtmosphericFog() {}
// End Class AAtmosphericFog

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAtmosphericFog, AAtmosphericFog::StaticClass, TEXT("AAtmosphericFog"), &Z_Registration_Info_UClass_AAtmosphericFog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtmosphericFog), 847803134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_2014443237(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
