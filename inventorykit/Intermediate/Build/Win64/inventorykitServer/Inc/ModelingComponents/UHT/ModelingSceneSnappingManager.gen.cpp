// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Snapping/ModelingSceneSnappingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingSceneSnappingManager() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneSnappingManager();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingSceneSnappingManager();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UModelingSceneSnappingManager
void UModelingSceneSnappingManager::StaticRegisterNativesUModelingSceneSnappingManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingSceneSnappingManager);
UClass* Z_Construct_UClass_UModelingSceneSnappingManager_NoRegister()
{
	return UModelingSceneSnappingManager::StaticClass();
}
struct Z_Construct_UClass_UModelingSceneSnappingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UModelingSceneSnappingManager is an implementation of snapping suitable for use in\n * Modeling Tools/Gizmos (and potentially other places). \n * \n * Currently Supports:\n *    - snap to position/rotation grid\n *    - snap to mesh vertex position\n *    - snap to mesh edge position\n * \n * Snapping to mesh vertex/edge positions currently works for Volume (BrushComponent), StaticMeshComponent, \n * and DynamicMeshComponent. \n * \n * Currently the StaticMesh vertex/edge snapping is dependent on the Physics\n * system, and may fail or return nonsense results in some cases, due to the physics\n * complex-collision mesh deviating from the source-model mesh.\n */" },
		{ "IncludePath", "Snapping/ModelingSceneSnappingManager.h" },
		{ "ModuleRelativePath", "Public/Snapping/ModelingSceneSnappingManager.h" },
		{ "ToolTip", "UModelingSceneSnappingManager is an implementation of snapping suitable for use in\nModeling Tools/Gizmos (and potentially other places).\n\nCurrently Supports:\n   - snap to position/rotation grid\n   - snap to mesh vertex position\n   - snap to mesh edge position\n\nSnapping to mesh vertex/edge positions currently works for Volume (BrushComponent), StaticMeshComponent,\nand DynamicMeshComponent.\n\nCurrently the StaticMesh vertex/edge snapping is dependent on the Physics\nsystem, and may fail or return nonsense results in some cases, due to the physics\ncomplex-collision mesh deviating from the source-model mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/Snapping/ModelingSceneSnappingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingSceneSnappingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModelingSceneSnappingManager_Statics::NewProp_ParentContext = { "ParentContext", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModelingSceneSnappingManager, ParentContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentContext_MetaData), NewProp_ParentContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingSceneSnappingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSceneSnappingManager_Statics::NewProp_ParentContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModelingSceneSnappingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneSnappingManager,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingSceneSnappingManager_Statics::ClassParams = {
	&UModelingSceneSnappingManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModelingSceneSnappingManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSceneSnappingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UModelingSceneSnappingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModelingSceneSnappingManager()
{
	if (!Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton, Z_Construct_UClass_UModelingSceneSnappingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModelingSceneSnappingManager.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UModelingSceneSnappingManager>()
{
	return UModelingSceneSnappingManager::StaticClass();
}
UModelingSceneSnappingManager::UModelingSceneSnappingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingSceneSnappingManager);
UModelingSceneSnappingManager::~UModelingSceneSnappingManager() {}
// End Class UModelingSceneSnappingManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModelingSceneSnappingManager, UModelingSceneSnappingManager::StaticClass, TEXT("UModelingSceneSnappingManager"), &Z_Registration_Info_UClass_UModelingSceneSnappingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingSceneSnappingManager), 4013962115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_2359019785(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Snapping_ModelingSceneSnappingManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
