// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionRenderLevelSetActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin Class AGeometryCollectionRenderLevelSetActor
void AGeometryCollectionRenderLevelSetActor::StaticRegisterNativesAGeometryCollectionRenderLevelSetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionRenderLevelSetActor);
UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_NoRegister()
{
	return AGeometryCollectionRenderLevelSetActor::StaticClass();
}
struct Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""AGeometryCollectionRenderLevelSetActor\n*    An actor representing the collection of data necessary to \n*    render volumes.  This references a ray marching material, which\n*    is used internally by a post process component blendable.  This\n*    is a workflow that can be improved with a deeper implementation\n*    in the future if we decide to.  Note that behavior with multiple\n*    render level set actors isn't currently supported very well,\n*    but could be improved in the future\n*/" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "AGeometryCollectionRenderLevelSetActor\nAn actor representing the collection of data necessary to\nrender volumes.  This references a ray marching material, which\nis used internally by a post process component blendable.  This\nis a workflow that can be improved with a deeper implementation\nin the future if we decide to.  Note that behavior with multiple\nrender level set actors isn't currently supported very well,\nbut could be improved in the future" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetVolumeTexture_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "// Volume texture to fill\x09\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Volume texture to fill" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayMarchMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Material that performs ray marching.  Note this must have certain parameters in order\n// to work correctly\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Material that performs ray marching.  Note this must have certain parameters in order\nto work correctly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceTolerance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Surface tolerance used for rendering.  When surface reconstruction is noisy,\n// try tweaking this value\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Surface tolerance used for rendering.  When surface reconstruction is noisy,\ntry tweaking this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Isovalue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Isovalue of the level set to use for surface reconstruction.  Generally you want\n// this to be zero, but it can be useful for exploring the distance values to make\n// this negative to see the interior structure of the levelset \n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Isovalue of the level set to use for surface reconstruction.  Generally you want\nthis to be zero, but it can be useful for exploring the distance values to make\nthis negative to see the interior structure of the levelset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Enable or disable rendering\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Enable or disable rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderVolumeBoundingBox_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// Enable or disable rendering\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h" },
		{ "ToolTip", "Enable or disable rendering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetVolumeTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayMarchMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Isovalue;
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static void NewProp_RenderVolumeBoundingBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderVolumeBoundingBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionRenderLevelSetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture = { "TargetVolumeTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetVolumeTexture_MetaData), NewProp_TargetVolumeTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial = { "RayMarchMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayMarchMaterial_MetaData), NewProp_RayMarchMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance = { "SurfaceTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, SurfaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceTolerance_MetaData), NewProp_SurfaceTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue = { "Isovalue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryCollectionRenderLevelSetActor, Isovalue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Isovalue_MetaData), NewProp_Isovalue_MetaData) };
void Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((AGeometryCollectionRenderLevelSetActor*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionRenderLevelSetActor), &Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
void Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_SetBit(void* Obj)
{
	((AGeometryCollectionRenderLevelSetActor*)Obj)->RenderVolumeBoundingBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox = { "RenderVolumeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeometryCollectionRenderLevelSetActor), &Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderVolumeBoundingBox_MetaData), NewProp_RenderVolumeBoundingBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_TargetVolumeTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RayMarchMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_SurfaceTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Isovalue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::NewProp_RenderVolumeBoundingBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::ClassParams = {
	&AGeometryCollectionRenderLevelSetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor()
{
	if (!Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionRenderLevelSetActor>()
{
	return AGeometryCollectionRenderLevelSetActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionRenderLevelSetActor);
AGeometryCollectionRenderLevelSetActor::~AGeometryCollectionRenderLevelSetActor() {}
// End Class AGeometryCollectionRenderLevelSetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionRenderLevelSetActor, AGeometryCollectionRenderLevelSetActor::StaticClass, TEXT("AGeometryCollectionRenderLevelSetActor"), &Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionRenderLevelSetActor), 188441324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_3136508411(TEXT("/Script/GeometryCollectionEngine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRenderLevelSetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
