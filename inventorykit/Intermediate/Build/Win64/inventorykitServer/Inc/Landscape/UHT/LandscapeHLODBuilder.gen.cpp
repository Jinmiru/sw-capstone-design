// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeHLODBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeHLODBuilder() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHLODBuilder();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHLODBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeHLODBuilder
void ULandscapeHLODBuilder::StaticRegisterNativesULandscapeHLODBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeHLODBuilder);
UClass* Z_Construct_UClass_ULandscapeHLODBuilder_NoRegister()
{
	return ULandscapeHLODBuilder::StaticClass();
}
struct Z_Construct_UClass_ULandscapeHLODBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeHLODBuilder.h" },
		{ "ModuleRelativePath", "Public/LandscapeHLODBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeHLODBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeHLODBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHLODBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeHLODBuilder_Statics::ClassParams = {
	&ULandscapeHLODBuilder::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x040800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHLODBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeHLODBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeHLODBuilder()
{
	if (!Z_Registration_Info_UClass_ULandscapeHLODBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeHLODBuilder.OuterSingleton, Z_Construct_UClass_ULandscapeHLODBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeHLODBuilder.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeHLODBuilder>()
{
	return ULandscapeHLODBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeHLODBuilder);
ULandscapeHLODBuilder::~ULandscapeHLODBuilder() {}
// End Class ULandscapeHLODBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeHLODBuilder, ULandscapeHLODBuilder::StaticClass, TEXT("ULandscapeHLODBuilder"), &Z_Registration_Info_UClass_ULandscapeHLODBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeHLODBuilder), 3450529398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_376817996(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeHLODBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
