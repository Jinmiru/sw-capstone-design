// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Private/NavigationObjectRepository.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationObjectRepository() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationObjectRepository();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationObjectRepository_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavigationObjectRepository
void UNavigationObjectRepository::StaticRegisterNativesUNavigationObjectRepository()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationObjectRepository);
UClass* Z_Construct_UClass_UNavigationObjectRepository_NoRegister()
{
	return UNavigationObjectRepository::StaticClass();
}
struct Z_Construct_UClass_UNavigationObjectRepository_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World subsystem dedicated to store different types of navigation related objects that the\n * NavigationSystem needs to access.\n */" },
		{ "IncludePath", "NavigationObjectRepository.h" },
		{ "ModuleRelativePath", "Private/NavigationObjectRepository.h" },
		{ "ToolTip", "World subsystem dedicated to store different types of navigation related objects that the\nNavigationSystem needs to access." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationObjectRepository>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigationObjectRepository_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationObjectRepository_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationObjectRepository_Statics::ClassParams = {
	&UNavigationObjectRepository::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationObjectRepository_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationObjectRepository_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationObjectRepository()
{
	if (!Z_Registration_Info_UClass_UNavigationObjectRepository.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationObjectRepository.OuterSingleton, Z_Construct_UClass_UNavigationObjectRepository_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationObjectRepository.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationObjectRepository>()
{
	return UNavigationObjectRepository::StaticClass();
}
UNavigationObjectRepository::UNavigationObjectRepository() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationObjectRepository);
UNavigationObjectRepository::~UNavigationObjectRepository() {}
// End Class UNavigationObjectRepository

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationObjectRepository, UNavigationObjectRepository::StaticClass, TEXT("UNavigationObjectRepository"), &Z_Registration_Info_UClass_UNavigationObjectRepository, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationObjectRepository), 1775859296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_4075555901(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Private_NavigationObjectRepository_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
