// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponents/Public/BaseTools/BaseVoxelTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseVoxelTool() {}

// Begin Cross Module References
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseVoxelTool_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UVoxelProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References

// Begin Class UBaseVoxelTool
void UBaseVoxelTool::StaticRegisterNativesUBaseVoxelTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseVoxelTool);
UClass* Z_Construct_UClass_UBaseVoxelTool_NoRegister()
{
	return UBaseVoxelTool::StaticClass();
}
struct Z_Construct_UClass_UBaseVoxelTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base for Voxel tools\n */" },
		{ "IncludePath", "BaseTools/BaseVoxelTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseVoxelTool.h" },
		{ "ToolTip", "Base for Voxel tools" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseVoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseVoxelTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseVoxelTool_Statics::NewProp_VoxProperties = { "VoxProperties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseVoxelTool, VoxProperties), Z_Construct_UClass_UVoxelProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxProperties_MetaData), NewProp_VoxProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseVoxelTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseVoxelTool_Statics::NewProp_VoxProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVoxelTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseVoxelTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedTool,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVoxelTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseVoxelTool_Statics::ClassParams = {
	&UBaseVoxelTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseVoxelTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVoxelTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseVoxelTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseVoxelTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseVoxelTool()
{
	if (!Z_Registration_Info_UClass_UBaseVoxelTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseVoxelTool.OuterSingleton, Z_Construct_UClass_UBaseVoxelTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseVoxelTool.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBaseVoxelTool>()
{
	return UBaseVoxelTool::StaticClass();
}
UBaseVoxelTool::UBaseVoxelTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseVoxelTool);
UBaseVoxelTool::~UBaseVoxelTool() {}
// End Class UBaseVoxelTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseVoxelTool, UBaseVoxelTool::StaticClass, TEXT("UBaseVoxelTool"), &Z_Registration_Info_UClass_UBaseVoxelTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseVoxelTool), 1959353404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_1682455654(TEXT("/Script/ModelingComponents"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseVoxelTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
