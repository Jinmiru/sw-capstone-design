// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Mechanics/CollectSurfacePathMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectSurfacePathMechanic() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollectSurfacePathMechanic();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UCollectSurfacePathMechanic
void UCollectSurfacePathMechanic::StaticRegisterNativesUCollectSurfacePathMechanic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollectSurfacePathMechanic);
UClass* Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister()
{
	return UCollectSurfacePathMechanic::StaticClass();
}
struct Z_Construct_UClass_UCollectSurfacePathMechanic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "IncludePath", "Mechanics/CollectSurfacePathMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/CollectSurfacePathMechanic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectSurfacePathMechanic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCollectSurfacePathMechanic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectSurfacePathMechanic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollectSurfacePathMechanic_Statics::ClassParams = {
	&UCollectSurfacePathMechanic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollectSurfacePathMechanic_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollectSurfacePathMechanic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCollectSurfacePathMechanic()
{
	if (!Z_Registration_Info_UClass_UCollectSurfacePathMechanic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollectSurfacePathMechanic.OuterSingleton, Z_Construct_UClass_UCollectSurfacePathMechanic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCollectSurfacePathMechanic.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UCollectSurfacePathMechanic>()
{
	return UCollectSurfacePathMechanic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectSurfacePathMechanic);
UCollectSurfacePathMechanic::~UCollectSurfacePathMechanic() {}
// End Class UCollectSurfacePathMechanic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollectSurfacePathMechanic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCollectSurfacePathMechanic, UCollectSurfacePathMechanic::StaticClass, TEXT("UCollectSurfacePathMechanic"), &Z_Registration_Info_UClass_UCollectSurfacePathMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollectSurfacePathMechanic), 1653095267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollectSurfacePathMechanic_h_1705243861(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollectSurfacePathMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CollectSurfacePathMechanic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
