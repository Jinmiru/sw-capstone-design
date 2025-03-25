// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeMeshCollisionComponent.h"
#include "Runtime/Landscape/Classes/LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshCollisionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeMeshCollisionComponent
void ULandscapeMeshCollisionComponent::StaticRegisterNativesULandscapeMeshCollisionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeMeshCollisionComponent);
UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister()
{
	return ULandscapeMeshCollisionComponent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeMeshCollisionComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshGuid_MetaData[] = {
		{ "Comment", "/** Guid used to share PhysX heightfield objects in the editor */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
		{ "ToolTip", "Guid used to share PhysX heightfield objects in the editor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMeshCollisionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid = { "MeshGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMeshCollisionComponent, MeshGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshGuid_MetaData), NewProp_MeshGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::ClassParams = {
	&ULandscapeMeshCollisionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent()
{
	if (!Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent.OuterSingleton, Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMeshCollisionComponent>()
{
	return ULandscapeMeshCollisionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshCollisionComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeMeshCollisionComponent)
// End Class ULandscapeMeshCollisionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeMeshCollisionComponent, ULandscapeMeshCollisionComponent::StaticClass, TEXT("ULandscapeMeshCollisionComponent"), &Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMeshCollisionComponent), 2813002611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_248690059(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
