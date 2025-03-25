// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/SpatialCurveDistanceMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialCurveDistanceMechanic() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class USpatialCurveDistanceMechanic
void USpatialCurveDistanceMechanic::StaticRegisterNativesUSpatialCurveDistanceMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpatialCurveDistanceMechanic);
UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister()
{
	return USpatialCurveDistanceMechanic::StaticClass();
}
struct Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Mechanics/SpatialCurveDistanceMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/SpatialCurveDistanceMechanic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialCurveDistanceMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::ClassParams = {
	&USpatialCurveDistanceMechanic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic()
{
	if (!Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.OuterSingleton, Z_Construct_UClass_USpatialCurveDistanceMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpatialCurveDistanceMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<USpatialCurveDistanceMechanic>()
{
	return USpatialCurveDistanceMechanic::StaticClass();
}
USpatialCurveDistanceMechanic::USpatialCurveDistanceMechanic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialCurveDistanceMechanic);
USpatialCurveDistanceMechanic::~USpatialCurveDistanceMechanic() {}
// End Class USpatialCurveDistanceMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpatialCurveDistanceMechanic, USpatialCurveDistanceMechanic::StaticClass, TEXT("USpatialCurveDistanceMechanic"), &Z_Registration_Info_UClass_USpatialCurveDistanceMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpatialCurveDistanceMechanic), 1868978735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_1414782050(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_SpatialCurveDistanceMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
