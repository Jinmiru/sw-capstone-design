// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/PlaneDistanceFromHitMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneDistanceFromHitMechanic() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UPlaneDistanceFromHitMechanic
void UPlaneDistanceFromHitMechanic::StaticRegisterNativesUPlaneDistanceFromHitMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneDistanceFromHitMechanic);
UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister()
{
	return UPlaneDistanceFromHitMechanic::StaticClass();
}
struct Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPlaneDistanceFromHitMechanic implements an interaction where a Height/Distance from a plane\n * is defined by intersecting a ray with a target mesh, and then using that hit point to define the distance.\n * Optionally the hit point can be snapped (eg to a world grid), and also the ray can hit other objects to define the height.\n *\n */" },
		{ "IncludePath", "Mechanics/PlaneDistanceFromHitMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/PlaneDistanceFromHitMechanic.h" },
		{ "ToolTip", "UPlaneDistanceFromHitMechanic implements an interaction where a Height/Distance from a plane\nis defined by intersecting a ray with a target mesh, and then using that hit point to define the distance.\nOptionally the hit point can be snapped (eg to a world grid), and also the ray can hit other objects to define the height." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneDistanceFromHitMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::ClassParams = {
	&UPlaneDistanceFromHitMechanic::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic()
{
	if (!Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.OuterSingleton, Z_Construct_UClass_UPlaneDistanceFromHitMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPlaneDistanceFromHitMechanic>()
{
	return UPlaneDistanceFromHitMechanic::StaticClass();
}
UPlaneDistanceFromHitMechanic::UPlaneDistanceFromHitMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneDistanceFromHitMechanic);
UPlaneDistanceFromHitMechanic::~UPlaneDistanceFromHitMechanic() {}
// End Class UPlaneDistanceFromHitMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlaneDistanceFromHitMechanic, UPlaneDistanceFromHitMechanic::StaticClass, TEXT("UPlaneDistanceFromHitMechanic"), &Z_Registration_Info_UClass_UPlaneDistanceFromHitMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneDistanceFromHitMechanic), 3173877735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_3767060353(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_PlaneDistanceFromHitMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
