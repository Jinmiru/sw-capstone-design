// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Lightmass/LightmappedSurfaceCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmappedSurfaceCollection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection();
ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UModel();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightmappedSurfaceCollection
void ULightmappedSurfaceCollection::StaticRegisterNativesULightmappedSurfaceCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightmappedSurfaceCollection);
UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister()
{
	return ULightmappedSurfaceCollection::StaticClass();
}
struct Z_Construct_UClass_ULightmappedSurfaceCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Lightmass/LightmappedSurfaceCollection.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceModel_MetaData[] = {
		{ "Category", "LightmappedSurfaceCollection" },
		{ "Comment", "/** The UModel these surfaces come from. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
		{ "ToolTip", "The UModel these surfaces come from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[] = {
		{ "Category", "LightmappedSurfaceCollection" },
		{ "Comment", "/** An array of the surface indices grouped into a single static lighting mapping. */" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
		{ "ToolTip", "An array of the surface indices grouped into a single static lighting mapping." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceModel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Surfaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmappedSurfaceCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel = { "SourceModel", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightmappedSurfaceCollection, SourceModel), Z_Construct_UClass_UModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceModel_MetaData), NewProp_SourceModel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightmappedSurfaceCollection, Surfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Surfaces_MetaData), NewProp_Surfaces_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::ClassParams = {
	&ULightmappedSurfaceCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightmappedSurfaceCollection()
{
	if (!Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton, Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightmappedSurfaceCollection.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightmappedSurfaceCollection>()
{
	return ULightmappedSurfaceCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmappedSurfaceCollection);
ULightmappedSurfaceCollection::~ULightmappedSurfaceCollection() {}
// End Class ULightmappedSurfaceCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightmappedSurfaceCollection, ULightmappedSurfaceCollection::StaticClass, TEXT("ULightmappedSurfaceCollection"), &Z_Registration_Info_UClass_ULightmappedSurfaceCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightmappedSurfaceCollection), 2532497483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_3489174412(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmappedSurfaceCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
