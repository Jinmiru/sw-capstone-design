// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_PostProcessVolume() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UInterface_PostProcessVolume
void UInterface_PostProcessVolume::StaticRegisterNativesUInterface_PostProcessVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_PostProcessVolume);
UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister()
{
	return UInterface_PostProcessVolume::StaticClass();
}
struct Z_Construct_UClass_UInterface_PostProcessVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_PostProcessVolume.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_PostProcessVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_PostProcessVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_PostProcessVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_PostProcessVolume_Statics::ClassParams = {
	&UInterface_PostProcessVolume::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_PostProcessVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_PostProcessVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_PostProcessVolume()
{
	if (!Z_Registration_Info_UClass_UInterface_PostProcessVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_PostProcessVolume.OuterSingleton, Z_Construct_UClass_UInterface_PostProcessVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_PostProcessVolume.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterface_PostProcessVolume>()
{
	return UInterface_PostProcessVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_PostProcessVolume);
UInterface_PostProcessVolume::~UInterface_PostProcessVolume() {}
// End Interface UInterface_PostProcessVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_PostProcessVolume, UInterface_PostProcessVolume::StaticClass, TEXT("UInterface_PostProcessVolume"), &Z_Registration_Info_UClass_UInterface_PostProcessVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_PostProcessVolume), 2991099773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_3154327612(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
