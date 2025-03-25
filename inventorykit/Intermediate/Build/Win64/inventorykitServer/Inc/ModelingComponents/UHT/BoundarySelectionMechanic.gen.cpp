// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Selection/BoundarySelectionMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundarySelectionMechanic() {}

// Begin Cross Module References
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBoundarySelectionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UBoundarySelectionMechanic
void UBoundarySelectionMechanic::StaticRegisterNativesUBoundarySelectionMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoundarySelectionMechanic);
UClass* Z_Construct_UClass_UBoundarySelectionMechanic_NoRegister()
{
	return UBoundarySelectionMechanic::StaticClass();
}
struct Z_Construct_UClass_UBoundarySelectionMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Selection/BoundarySelectionMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/BoundarySelectionMechanic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoundarySelectionMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBoundarySelectionMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshTopologySelectionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundarySelectionMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoundarySelectionMechanic_Statics::ClassParams = {
	&UBoundarySelectionMechanic::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundarySelectionMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoundarySelectionMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoundarySelectionMechanic()
{
	if (!Z_Registration_Info_UClass_UBoundarySelectionMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoundarySelectionMechanic.OuterSingleton, Z_Construct_UClass_UBoundarySelectionMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoundarySelectionMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBoundarySelectionMechanic>()
{
	return UBoundarySelectionMechanic::StaticClass();
}
UBoundarySelectionMechanic::UBoundarySelectionMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoundarySelectionMechanic);
UBoundarySelectionMechanic::~UBoundarySelectionMechanic() {}
// End Class UBoundarySelectionMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoundarySelectionMechanic, UBoundarySelectionMechanic::StaticClass, TEXT("UBoundarySelectionMechanic"), &Z_Registration_Info_UClass_UBoundarySelectionMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoundarySelectionMechanic), 1005396658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_667267366(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_BoundarySelectionMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
