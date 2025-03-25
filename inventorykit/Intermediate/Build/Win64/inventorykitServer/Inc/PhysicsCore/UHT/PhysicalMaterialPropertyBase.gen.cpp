// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialPropertyBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase();
PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References

// Begin Class UDEPRECATED_PhysicalMaterialPropertyBase
void UDEPRECATED_PhysicalMaterialPropertyBase::StaticRegisterNativesUDEPRECATED_PhysicalMaterialPropertyBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PhysicalMaterialPropertyBase);
UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister()
{
	return UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PhysicalMaterialPropertyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::ClassParams = {
	&UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass,
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
	0x020832A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase.OuterSingleton;
}
template<> PHYSICSCORE_API UClass* StaticClass<UDEPRECATED_PhysicalMaterialPropertyBase>()
{
	return UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PhysicalMaterialPropertyBase);
UDEPRECATED_PhysicalMaterialPropertyBase::~UDEPRECATED_PhysicalMaterialPropertyBase() {}
// End Class UDEPRECATED_PhysicalMaterialPropertyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase, UDEPRECATED_PhysicalMaterialPropertyBase::StaticClass, TEXT("UDEPRECATED_PhysicalMaterialPropertyBase"), &Z_Registration_Info_UClass_UDEPRECATED_PhysicalMaterialPropertyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PhysicalMaterialPropertyBase), 1525219815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_295934240(TEXT("/Script/PhysicsCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterialPropertyBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
