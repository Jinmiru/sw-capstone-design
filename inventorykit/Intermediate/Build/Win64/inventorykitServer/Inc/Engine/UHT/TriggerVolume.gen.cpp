// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TriggerVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ATriggerVolume
void ATriggerVolume::StaticRegisterNativesATriggerVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerVolume);
UClass* Z_Construct_UClass_ATriggerVolume_NoRegister()
{
	return ATriggerVolume::StaticClass();
}
struct Z_Construct_UClass_ATriggerVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/TriggerVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATriggerVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerVolume_Statics::ClassParams = {
	&ATriggerVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATriggerVolume()
{
	if (!Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton, Z_Construct_UClass_ATriggerVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ATriggerVolume>()
{
	return ATriggerVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerVolume);
ATriggerVolume::~ATriggerVolume() {}
// End Class ATriggerVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerVolume, ATriggerVolume::StaticClass, TEXT("ATriggerVolume"), &Z_Registration_Info_UClass_ATriggerVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerVolume), 2994540066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_2507001876(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
