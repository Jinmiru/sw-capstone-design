// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_PreviewMeshProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider();
ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UInterface_PreviewMeshProvider
void UInterface_PreviewMeshProvider::StaticRegisterNativesUInterface_PreviewMeshProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_PreviewMeshProvider);
UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister()
{
	return UInterface_PreviewMeshProvider::StaticClass();
}
struct Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_PreviewMeshProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_PreviewMeshProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::ClassParams = {
	&UInterface_PreviewMeshProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider()
{
	if (!Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.OuterSingleton, Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterface_PreviewMeshProvider>()
{
	return UInterface_PreviewMeshProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_PreviewMeshProvider);
UInterface_PreviewMeshProvider::~UInterface_PreviewMeshProvider() {}
// End Interface UInterface_PreviewMeshProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_PreviewMeshProvider, UInterface_PreviewMeshProvider::StaticClass, TEXT("UInterface_PreviewMeshProvider"), &Z_Registration_Info_UClass_UInterface_PreviewMeshProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_PreviewMeshProvider), 1431543565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_3339386938(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
