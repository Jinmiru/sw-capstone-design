// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/TargetInterfaces/DynamicMeshProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Interface UDynamicMeshProvider
void UDynamicMeshProvider::StaticRegisterNativesUDynamicMeshProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshProvider);
UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister()
{
	return UDynamicMeshProvider::StaticClass();
}
struct Z_Construct_UClass_UDynamicMeshProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/DynamicMeshProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDynamicMeshProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDynamicMeshProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshProvider_Statics::ClassParams = {
	&UDynamicMeshProvider::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicMeshProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicMeshProvider()
{
	if (!Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton, Z_Construct_UClass_UDynamicMeshProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDynamicMeshProvider>()
{
	return UDynamicMeshProvider::StaticClass();
}
UDynamicMeshProvider::UDynamicMeshProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshProvider);
UDynamicMeshProvider::~UDynamicMeshProvider() {}
// End Interface UDynamicMeshProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshProvider, UDynamicMeshProvider::StaticClass, TEXT("UDynamicMeshProvider"), &Z_Registration_Info_UClass_UDynamicMeshProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshProvider), 3744777634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_3617833268(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
