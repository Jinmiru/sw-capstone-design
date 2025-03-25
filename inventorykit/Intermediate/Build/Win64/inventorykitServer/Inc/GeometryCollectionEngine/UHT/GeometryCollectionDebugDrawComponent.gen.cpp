// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDebugDrawComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class UGeometryCollectionDebugDrawComponent
void UGeometryCollectionDebugDrawComponent::StaticRegisterNativesUGeometryCollectionDebugDrawComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionDebugDrawComponent);
UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_NoRegister()
{
	return UGeometryCollectionDebugDrawComponent::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Tags Activation Cooking AssetUserData Collision" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionDebugDrawActor_MetaData[] = {
		{ "Comment", "/** Singleton actor, containing the debug draw properties. Automatically populated at play time unless explicitly set. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
		{ "ToolTip", "Singleton actor, containing the debug draw properties. Automatically populated at play time unless explicitly set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionRenderLevelSetActor_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Level Set singleton actor, containing the Render properties. Automatically populated at play time unless explicitly set. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h" },
		{ "ToolTip", "Level Set singleton actor, containing the Render properties. Automatically populated at play time unless explicitly set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionDebugDrawActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionRenderLevelSetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionDebugDrawComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionDebugDrawActor = { "GeometryCollectionDebugDrawActor", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor_DEPRECATED), Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionDebugDrawActor_MetaData), NewProp_GeometryCollectionDebugDrawActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionRenderLevelSetActor = { "GeometryCollectionRenderLevelSetActor", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor), Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollectionRenderLevelSetActor_MetaData), NewProp_GeometryCollectionRenderLevelSetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionDebugDrawActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::NewProp_GeometryCollectionRenderLevelSetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::ClassParams = {
	&UGeometryCollectionDebugDrawComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionDebugDrawComponent()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.OuterSingleton, Z_Construct_UClass_UGeometryCollectionDebugDrawComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionDebugDrawComponent>()
{
	return UGeometryCollectionDebugDrawComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionDebugDrawComponent);
UGeometryCollectionDebugDrawComponent::~UGeometryCollectionDebugDrawComponent() {}
// End Class UGeometryCollectionDebugDrawComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionDebugDrawComponent, UGeometryCollectionDebugDrawComponent::StaticClass, TEXT("UGeometryCollectionDebugDrawComponent"), &Z_Registration_Info_UClass_UGeometryCollectionDebugDrawComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionDebugDrawComponent), 848681709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_2311640172(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
