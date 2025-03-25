// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/GrassInstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrassInstancedStaticMeshComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent();
FOLIAGE_API UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class UGrassInstancedStaticMeshComponent
void UGrassInstancedStaticMeshComponent::StaticRegisterNativesUGrassInstancedStaticMeshComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrassInstancedStaticMeshComponent);
UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister()
{
	return UGrassInstancedStaticMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Foliage" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "GrassInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/GrassInstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrassInstancedStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::ClassParams = {
	&UGrassInstancedStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UGrassInstancedStaticMeshComponent>()
{
	return UGrassInstancedStaticMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrassInstancedStaticMeshComponent);
UGrassInstancedStaticMeshComponent::~UGrassInstancedStaticMeshComponent() {}
// End Class UGrassInstancedStaticMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrassInstancedStaticMeshComponent, UGrassInstancedStaticMeshComponent::StaticClass, TEXT("UGrassInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrassInstancedStaticMeshComponent), 2660672842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_3256542715(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
