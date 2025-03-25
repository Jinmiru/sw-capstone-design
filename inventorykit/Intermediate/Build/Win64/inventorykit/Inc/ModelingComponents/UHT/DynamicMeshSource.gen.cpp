// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/TargetInterfaces/DynamicMeshSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshSource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPersistentDynamicMeshSource();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPersistentDynamicMeshSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Interface UPersistentDynamicMeshSource
void UPersistentDynamicMeshSource::StaticRegisterNativesUPersistentDynamicMeshSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersistentDynamicMeshSource);
UClass* Z_Construct_UClass_UPersistentDynamicMeshSource_NoRegister()
{
	return UPersistentDynamicMeshSource::StaticClass();
}
struct Z_Construct_UClass_UPersistentDynamicMeshSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/DynamicMeshSource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPersistentDynamicMeshSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPersistentDynamicMeshSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDynamicMeshSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersistentDynamicMeshSource_Statics::ClassParams = {
	&UPersistentDynamicMeshSource::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPersistentDynamicMeshSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UPersistentDynamicMeshSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPersistentDynamicMeshSource()
{
	if (!Z_Registration_Info_UClass_UPersistentDynamicMeshSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersistentDynamicMeshSource.OuterSingleton, Z_Construct_UClass_UPersistentDynamicMeshSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPersistentDynamicMeshSource.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPersistentDynamicMeshSource>()
{
	return UPersistentDynamicMeshSource::StaticClass();
}
UPersistentDynamicMeshSource::UPersistentDynamicMeshSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPersistentDynamicMeshSource);
UPersistentDynamicMeshSource::~UPersistentDynamicMeshSource() {}
// End Interface UPersistentDynamicMeshSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPersistentDynamicMeshSource, UPersistentDynamicMeshSource::StaticClass, TEXT("UPersistentDynamicMeshSource"), &Z_Registration_Info_UClass_UPersistentDynamicMeshSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersistentDynamicMeshSource), 3203133780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshSource_h_3865603457(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
