// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionISMPoolDebugDrawComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionISMPoolDebugDrawComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class UGeometryCollectionISMPoolDebugDrawComponent
void UGeometryCollectionISMPoolDebugDrawComponent::StaticRegisterNativesUGeometryCollectionISMPoolDebugDrawComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionISMPoolDebugDrawComponent);
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_NoRegister()
{
	return UGeometryCollectionISMPoolDebugDrawComponent::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionISMPoolDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolDebugDrawComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGlobalStats_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolDebugDrawComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowStats_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolDebugDrawComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBounds_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolDebugDrawComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolDebugDrawComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowGlobalStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGlobalStats;
	static void NewProp_bShowStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStats;
	static void NewProp_bShowBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionISMPoolDebugDrawComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowGlobalStats_SetBit(void* Obj)
{
	((UGeometryCollectionISMPoolDebugDrawComponent*)Obj)->bShowGlobalStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowGlobalStats = { "bShowGlobalStats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionISMPoolDebugDrawComponent), &Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowGlobalStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGlobalStats_MetaData), NewProp_bShowGlobalStats_MetaData) };
void Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowStats_SetBit(void* Obj)
{
	((UGeometryCollectionISMPoolDebugDrawComponent*)Obj)->bShowStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowStats = { "bShowStats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionISMPoolDebugDrawComponent), &Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowStats_MetaData), NewProp_bShowStats_MetaData) };
void Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowBounds_SetBit(void* Obj)
{
	((UGeometryCollectionISMPoolDebugDrawComponent*)Obj)->bShowBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowBounds = { "bShowBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGeometryCollectionISMPoolDebugDrawComponent), &Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBounds_MetaData), NewProp_bShowBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_SelectedComponent = { "SelectedComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionISMPoolDebugDrawComponent, SelectedComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedComponent_MetaData), NewProp_SelectedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowGlobalStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_bShowBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::NewProp_SelectedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::ClassParams = {
	&UGeometryCollectionISMPoolDebugDrawComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionISMPoolDebugDrawComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionISMPoolDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionISMPoolDebugDrawComponent.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionISMPoolDebugDrawComponent>()
{
	return UGeometryCollectionISMPoolDebugDrawComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionISMPoolDebugDrawComponent);
UGeometryCollectionISMPoolDebugDrawComponent::~UGeometryCollectionISMPoolDebugDrawComponent() {}
// End Class UGeometryCollectionISMPoolDebugDrawComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolDebugDrawComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionISMPoolDebugDrawComponent, UGeometryCollectionISMPoolDebugDrawComponent::StaticClass, TEXT("UGeometryCollectionISMPoolDebugDrawComponent"), &Z_Registration_Info_UClass_UGeometryCollectionISMPoolDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionISMPoolDebugDrawComponent), 234649157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolDebugDrawComponent_h_3447681004(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolDebugDrawComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolDebugDrawComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
