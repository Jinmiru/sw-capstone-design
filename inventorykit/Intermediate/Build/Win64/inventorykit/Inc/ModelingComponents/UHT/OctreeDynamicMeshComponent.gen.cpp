// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Components/OctreeDynamicMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOctreeDynamicMeshComponent() {}

// Begin Cross Module References
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UBaseDynamicMeshComponent();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UOctreeDynamicMeshComponent Function SetDynamicMesh
struct Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics
{
	struct OctreeDynamicMeshComponent_eventSetDynamicMesh_Parms
	{
		UDynamicMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicMesh" },
		{ "ModuleRelativePath", "Public/Components/OctreeDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OctreeDynamicMeshComponent_eventSetDynamicMesh_Parms, NewMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOctreeDynamicMeshComponent, nullptr, "SetDynamicMesh", nullptr, nullptr, Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::OctreeDynamicMeshComponent_eventSetDynamicMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::OctreeDynamicMeshComponent_eventSetDynamicMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOctreeDynamicMeshComponent::execSetDynamicMesh)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamicMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// End Class UOctreeDynamicMeshComponent Function SetDynamicMesh

// Begin Class UOctreeDynamicMeshComponent
void UOctreeDynamicMeshComponent::StaticRegisterNativesUOctreeDynamicMeshComponent()
{
	UClass* Class = UOctreeDynamicMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDynamicMesh", &UOctreeDynamicMeshComponent::execSetDynamicMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOctreeDynamicMeshComponent);
UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent_NoRegister()
{
	return UOctreeDynamicMeshComponent::StaticClass();
}
struct Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * UOctreeDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\n * except it bases the renderable geometry off an internal FDynamicMesh3 instance.\n * The class generally has the same capabilities as UDynamicMeshComponent.\n * \n * A FDynamicMeshOctree3 is available to dynamically track the triangles of the mesh\n * (however the client is responsible for updating this octree).\n * Based on the Octree, the mesh is partitioned into chunks that are stored in separate\n * RenderBuffers in the FOctreeDynamicMeshSceneProxy.\n * Calling NotifyMeshUpdated() will result in only the \"dirty\" chunks being updated,\n * rather than the entire mesh.\n * \n * (So, if you don't need this capability, and don't want to update an Octree, use UDynamicMeshComponent!)\n */" },
		{ "HideCategories", "LOD Physics Collision LOD Mobility Trigger" },
		{ "IncludePath", "Components/OctreeDynamicMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Components/OctreeDynamicMeshComponent.h" },
		{ "ToolTip", "UOctreeDynamicMeshComponent is a mesh component similar to UProceduralMeshComponent,\nexcept it bases the renderable geometry off an internal FDynamicMesh3 instance.\nThe class generally has the same capabilities as UDynamicMeshComponent.\n\nA FDynamicMeshOctree3 is available to dynamically track the triangles of the mesh\n(however the client is responsible for updating this octree).\nBased on the Octree, the mesh is partitioned into chunks that are stored in separate\nRenderBuffers in the FOctreeDynamicMeshSceneProxy.\nCalling NotifyMeshUpdated() will result in only the \"dirty\" chunks being updated,\nrather than the entire mesh.\n\n(So, if you don't need this capability, and don't want to update an Octree, use UDynamicMeshComponent!)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshObject_MetaData[] = {
		{ "Comment", "//~ Begin USceneComponent Interface.\n" },
		{ "ModuleRelativePath", "Public/Components/OctreeDynamicMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOctreeDynamicMeshComponent_SetDynamicMesh, "SetDynamicMesh" }, // 3953011806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOctreeDynamicMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::NewProp_MeshObject = { "MeshObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOctreeDynamicMeshComponent, MeshObject), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshObject_MetaData), NewProp_MeshObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::NewProp_MeshObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseDynamicMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::ClassParams = {
	&UOctreeDynamicMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent()
{
	if (!Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.OuterSingleton, Z_Construct_UClass_UOctreeDynamicMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOctreeDynamicMeshComponent.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UOctreeDynamicMeshComponent>()
{
	return UOctreeDynamicMeshComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOctreeDynamicMeshComponent);
UOctreeDynamicMeshComponent::~UOctreeDynamicMeshComponent() {}
// End Class UOctreeDynamicMeshComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOctreeDynamicMeshComponent, UOctreeDynamicMeshComponent::StaticClass, TEXT("UOctreeDynamicMeshComponent"), &Z_Registration_Info_UClass_UOctreeDynamicMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOctreeDynamicMeshComponent), 1413974511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_3991958594(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Components_OctreeDynamicMeshComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
