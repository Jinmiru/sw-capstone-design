// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/Changes/DynamicMeshChangeTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshChangeTarget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UDynamicMeshReplacementChangeTarget
void UDynamicMeshReplacementChangeTarget::StaticRegisterNativesUDynamicMeshReplacementChangeTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshReplacementChangeTarget);
UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister()
{
	return UDynamicMeshReplacementChangeTarget::StaticClass();
}
struct Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Bare bones wrapper of FDynamicMesh3 that supports MeshReplacementChange-based updates.  Shares the mesh ptr with the MeshReplacementChange objects, so it must not be changed directly\n * TODO: also support other MeshChange objects (by making a copy of the mesh when applying these changes)\n */" },
		{ "IncludePath", "Changes/DynamicMeshChangeTarget.h" },
		{ "ModuleRelativePath", "Public/Changes/DynamicMeshChangeTarget.h" },
		{ "ToolTip", "Bare bones wrapper of FDynamicMesh3 that supports MeshReplacementChange-based updates.  Shares the mesh ptr with the MeshReplacementChange objects, so it must not be changed directly\nTODO: also support other MeshChange objects (by making a copy of the mesh when applying these changes)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshReplacementChangeTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshReplacementChangeTarget, IMeshReplacementCommandChangeTarget), false },  // 945490776
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::ClassParams = {
	&UDynamicMeshReplacementChangeTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget()
{
	if (!Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.OuterSingleton, Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDynamicMeshReplacementChangeTarget>()
{
	return UDynamicMeshReplacementChangeTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshReplacementChangeTarget);
// End Class UDynamicMeshReplacementChangeTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshReplacementChangeTarget, UDynamicMeshReplacementChangeTarget::StaticClass, TEXT("UDynamicMeshReplacementChangeTarget"), &Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshReplacementChangeTarget), 3946474358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_2653433922(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
