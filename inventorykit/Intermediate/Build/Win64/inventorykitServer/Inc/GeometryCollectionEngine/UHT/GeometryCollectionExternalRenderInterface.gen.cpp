// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionExternalRenderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionExternalRenderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionExternalRenderInterface();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Interface UGeometryCollectionExternalRenderInterface
void UGeometryCollectionExternalRenderInterface::StaticRegisterNativesUGeometryCollectionExternalRenderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionExternalRenderInterface);
UClass* Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister()
{
	return UGeometryCollectionExternalRenderInterface::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionExternalRenderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGeometryCollectionExternalRenderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_Statics::ClassParams = {
	&UGeometryCollectionExternalRenderInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionExternalRenderInterface()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.OuterSingleton, Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionExternalRenderInterface>()
{
	return UGeometryCollectionExternalRenderInterface::StaticClass();
}
UGeometryCollectionExternalRenderInterface::UGeometryCollectionExternalRenderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionExternalRenderInterface);
UGeometryCollectionExternalRenderInterface::~UGeometryCollectionExternalRenderInterface() {}
// End Interface UGeometryCollectionExternalRenderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionExternalRenderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionExternalRenderInterface, UGeometryCollectionExternalRenderInterface::StaticClass, TEXT("UGeometryCollectionExternalRenderInterface"), &Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionExternalRenderInterface), 3107001664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionExternalRenderInterface_h_561733312(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionExternalRenderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionExternalRenderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
