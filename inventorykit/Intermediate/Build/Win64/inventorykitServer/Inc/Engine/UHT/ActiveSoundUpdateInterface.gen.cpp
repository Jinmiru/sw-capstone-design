// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ActiveSoundUpdateInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveSoundUpdateInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UActiveSoundUpdateInterface();
ENGINE_API UClass* Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UActiveSoundUpdateInterface
void UActiveSoundUpdateInterface::StaticRegisterNativesUActiveSoundUpdateInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActiveSoundUpdateInterface);
UClass* Z_Construct_UClass_UActiveSoundUpdateInterface_NoRegister()
{
	return UActiveSoundUpdateInterface::StaticClass();
}
struct Z_Construct_UClass_UActiveSoundUpdateInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/ActiveSoundUpdateInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActiveSoundUpdateInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::ClassParams = {
	&UActiveSoundUpdateInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActiveSoundUpdateInterface()
{
	if (!Z_Registration_Info_UClass_UActiveSoundUpdateInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveSoundUpdateInterface.OuterSingleton, Z_Construct_UClass_UActiveSoundUpdateInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActiveSoundUpdateInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UActiveSoundUpdateInterface>()
{
	return UActiveSoundUpdateInterface::StaticClass();
}
UActiveSoundUpdateInterface::UActiveSoundUpdateInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveSoundUpdateInterface);
UActiveSoundUpdateInterface::~UActiveSoundUpdateInterface() {}
// End Interface UActiveSoundUpdateInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActiveSoundUpdateInterface, UActiveSoundUpdateInterface::StaticClass, TEXT("UActiveSoundUpdateInterface"), &Z_Registration_Info_UClass_UActiveSoundUpdateInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSoundUpdateInterface), 1009437935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_2690193728(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
