// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Private/GeometryCollection/GeometryCollectionISMPoolRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionISMPoolRenderer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolRenderer();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class UGeometryCollectionISMPoolRenderer
void UGeometryCollectionISMPoolRenderer::StaticRegisterNativesUGeometryCollectionISMPoolRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionISMPoolRenderer);
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_NoRegister()
{
	return UGeometryCollectionISMPoolRenderer::StaticClass();
}
struct Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Implementation of a geometry collection custom renderer that pushes AutoInstanceMeshes to an ISMPool. */" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionISMPoolRenderer.h" },
		{ "ModuleRelativePath", "Private/GeometryCollection/GeometryCollectionISMPoolRenderer.h" },
		{ "ToolTip", "Implementation of a geometry collection custom renderer that pushes AutoInstanceMeshes to an ISMPool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMPoolActor_MetaData[] = {
		{ "Comment", "/** Instanced Static Mesh Pool actor that is used to render our meshes. */" },
		{ "ModuleRelativePath", "Private/GeometryCollection/GeometryCollectionISMPoolRenderer.h" },
		{ "ToolTip", "Instanced Static Mesh Pool actor that is used to render our meshes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMPoolActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionISMPoolRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::NewProp_ISMPoolActor = { "ISMPoolActor", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGeometryCollectionISMPoolRenderer, ISMPoolActor), Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMPoolActor_MetaData), NewProp_ISMPoolActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::NewProp_ISMPoolActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGeometryCollectionExternalRenderInterface_NoRegister, (int32)VTABLE_OFFSET(UGeometryCollectionISMPoolRenderer, IGeometryCollectionExternalRenderInterface), false },  // 3107001664
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::ClassParams = {
	&UGeometryCollectionISMPoolRenderer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGeometryCollectionISMPoolRenderer()
{
	if (!Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.OuterSingleton, Z_Construct_UClass_UGeometryCollectionISMPoolRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionISMPoolRenderer>()
{
	return UGeometryCollectionISMPoolRenderer::StaticClass();
}
UGeometryCollectionISMPoolRenderer::UGeometryCollectionISMPoolRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionISMPoolRenderer);
UGeometryCollectionISMPoolRenderer::~UGeometryCollectionISMPoolRenderer() {}
// End Class UGeometryCollectionISMPoolRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionISMPoolRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionISMPoolRenderer, UGeometryCollectionISMPoolRenderer::StaticClass, TEXT("UGeometryCollectionISMPoolRenderer"), &Z_Registration_Info_UClass_UGeometryCollectionISMPoolRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionISMPoolRenderer), 1185846219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionISMPoolRenderer_h_3154567979(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionISMPoolRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Private_GeometryCollection_GeometryCollectionISMPoolRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
