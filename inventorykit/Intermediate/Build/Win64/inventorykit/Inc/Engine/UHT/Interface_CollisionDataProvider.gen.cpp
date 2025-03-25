// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_CollisionDataProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UInterface_CollisionDataProvider
void UInterface_CollisionDataProvider::StaticRegisterNativesUInterface_CollisionDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_CollisionDataProvider);
UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister()
{
	return UInterface_CollisionDataProvider::StaticClass();
}
struct Z_Construct_UClass_UInterface_CollisionDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_CollisionDataProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_CollisionDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::ClassParams = {
	&UInterface_CollisionDataProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_CollisionDataProvider()
{
	if (!Z_Registration_Info_UClass_UInterface_CollisionDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_CollisionDataProvider.OuterSingleton, Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_CollisionDataProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterface_CollisionDataProvider>()
{
	return UInterface_CollisionDataProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_CollisionDataProvider);
UInterface_CollisionDataProvider::~UInterface_CollisionDataProvider() {}
// End Interface UInterface_CollisionDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_CollisionDataProvider, UInterface_CollisionDataProvider::StaticClass, TEXT("UInterface_CollisionDataProvider"), &Z_Registration_Info_UClass_UInterface_CollisionDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_CollisionDataProvider), 4090871341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_3922757895(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
