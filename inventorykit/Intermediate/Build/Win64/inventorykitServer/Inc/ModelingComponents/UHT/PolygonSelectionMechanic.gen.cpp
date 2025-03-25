// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Selection/PolygonSelectionMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolygonSelectionMechanic() {}

// Begin Cross Module References
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UDEPRECATED_PolygonSelectionMechanicProperties
void UDEPRECATED_PolygonSelectionMechanicProperties::StaticRegisterNativesUDEPRECATED_PolygonSelectionMechanicProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PolygonSelectionMechanicProperties);
UClass* Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_NoRegister()
{
	return UDEPRECATED_PolygonSelectionMechanicProperties::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// DEPRECATED: Use UMeshTopologySelectionMechanicProperties\n" },
		{ "IncludePath", "Selection/PolygonSelectionMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/PolygonSelectionMechanic.h" },
		{ "ToolTip", "DEPRECATED: Use UMeshTopologySelectionMechanicProperties" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PolygonSelectionMechanicProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshTopologySelectionMechanicProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics::ClassParams = {
	&UDEPRECATED_PolygonSelectionMechanicProperties::StaticClass,
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
	0x021002A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDEPRECATED_PolygonSelectionMechanicProperties>()
{
	return UDEPRECATED_PolygonSelectionMechanicProperties::StaticClass();
}
UDEPRECATED_PolygonSelectionMechanicProperties::UDEPRECATED_PolygonSelectionMechanicProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PolygonSelectionMechanicProperties);
UDEPRECATED_PolygonSelectionMechanicProperties::~UDEPRECATED_PolygonSelectionMechanicProperties() {}
// End Class UDEPRECATED_PolygonSelectionMechanicProperties

// Begin Class UPolygonSelectionMechanic
void UPolygonSelectionMechanic::StaticRegisterNativesUPolygonSelectionMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygonSelectionMechanic);
UClass* Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister()
{
	return UPolygonSelectionMechanic::StaticClass();
}
struct Z_Construct_UClass_UPolygonSelectionMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPolygonSelectionMechanic implements the interaction for selecting a set of faces/vertices/edges\n * from a FGroupTopology.\n */" },
		{ "IncludePath", "Selection/PolygonSelectionMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/PolygonSelectionMechanic.h" },
		{ "ToolTip", "UPolygonSelectionMechanic implements the interaction for selecting a set of faces/vertices/edges\nfrom a FGroupTopology." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygonSelectionMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPolygonSelectionMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshTopologySelectionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonSelectionMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygonSelectionMechanic_Statics::ClassParams = {
	&UPolygonSelectionMechanic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonSelectionMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolygonSelectionMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolygonSelectionMechanic()
{
	if (!Z_Registration_Info_UClass_UPolygonSelectionMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygonSelectionMechanic.OuterSingleton, Z_Construct_UClass_UPolygonSelectionMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolygonSelectionMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPolygonSelectionMechanic>()
{
	return UPolygonSelectionMechanic::StaticClass();
}
UPolygonSelectionMechanic::UPolygonSelectionMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygonSelectionMechanic);
UPolygonSelectionMechanic::~UPolygonSelectionMechanic() {}
// End Class UPolygonSelectionMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PolygonSelectionMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PolygonSelectionMechanicProperties, UDEPRECATED_PolygonSelectionMechanicProperties::StaticClass, TEXT("UDEPRECATED_PolygonSelectionMechanicProperties"), &Z_Registration_Info_UClass_UDEPRECATED_PolygonSelectionMechanicProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PolygonSelectionMechanicProperties), 402555325U) },
		{ Z_Construct_UClass_UPolygonSelectionMechanic, UPolygonSelectionMechanic::StaticClass, TEXT("UPolygonSelectionMechanic"), &Z_Registration_Info_UClass_UPolygonSelectionMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygonSelectionMechanic), 724597426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PolygonSelectionMechanic_h_2234069140(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PolygonSelectionMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PolygonSelectionMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
