// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Drawing/PolyEditPreviewMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditPreviewMesh() {}

// Begin Cross Module References
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UPolyEditPreviewMesh
void UPolyEditPreviewMesh::StaticRegisterNativesUPolyEditPreviewMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditPreviewMesh);
UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister()
{
	return UPolyEditPreviewMesh::StaticClass();
}
struct Z_Construct_UClass_UPolyEditPreviewMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPolyEditPreviewMesh is a variant of UPreviewMesh intended for use as a 'live preview' of\n * a mesh creation/editing operation. The class supports initializing the preview mesh in various\n * ways, generally as a submesh of a base mesh.\n */" },
		{ "IncludePath", "Drawing/PolyEditPreviewMesh.h" },
		{ "ModuleRelativePath", "Public/Drawing/PolyEditPreviewMesh.h" },
		{ "ToolTip", "UPolyEditPreviewMesh is a variant of UPreviewMesh intended for use as a 'live preview' of\na mesh creation/editing operation. The class supports initializing the preview mesh in various\nways, generally as a submesh of a base mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditPreviewMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPolyEditPreviewMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPreviewMesh,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPreviewMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditPreviewMesh_Statics::ClassParams = {
	&UPolyEditPreviewMesh::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPreviewMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UPolyEditPreviewMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPolyEditPreviewMesh()
{
	if (!Z_Registration_Info_UClass_UPolyEditPreviewMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditPreviewMesh.OuterSingleton, Z_Construct_UClass_UPolyEditPreviewMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPolyEditPreviewMesh.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPolyEditPreviewMesh>()
{
	return UPolyEditPreviewMesh::StaticClass();
}
UPolyEditPreviewMesh::UPolyEditPreviewMesh() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditPreviewMesh);
UPolyEditPreviewMesh::~UPolyEditPreviewMesh() {}
// End Class UPolyEditPreviewMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditPreviewMesh, UPolyEditPreviewMesh::StaticClass, TEXT("UPolyEditPreviewMesh"), &Z_Registration_Info_UClass_UPolyEditPreviewMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditPreviewMesh), 2962605431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_1990499089(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PolyEditPreviewMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
