// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionISMPoolComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionISMPoolComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class UGeometryCollectionISMPoolComponent
void UGeometryCollectionISMPoolComponent::StaticRegisterNativesUGeometryCollectionISMPoolComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionISMPoolComponent);
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister()
{
	return UGeometryCollectionISMPoolComponent::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n* UGeometryCollectionISMPoolComponent.\n* Component that manages a pool of ISM components in order to allow multiple client components that use the same meshes to the share ISMs.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionISMPoolComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolComponent.h" },
		{ "ToolTip", "UGeometryCollectionISMPoolComponent.\nComponent that manages a pool of ISM components in order to allow multiple client components that use the same meshes to the share ISMs." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionISMPoolComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::ClassParams = {
	&UGeometryCollectionISMPoolComponent::StaticClass,
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
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.OuterSingleton, Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionISMPoolComponent>()
{
	return UGeometryCollectionISMPoolComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionISMPoolComponent);
UGeometryCollectionISMPoolComponent::~UGeometryCollectionISMPoolComponent() {}
// End Class UGeometryCollectionISMPoolComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionISMPoolComponent, UGeometryCollectionISMPoolComponent::StaticClass, TEXT("UGeometryCollectionISMPoolComponent"), &Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionISMPoolComponent), 1415414432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_864738961(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
