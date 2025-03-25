// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/ParameterizationOps/RecomputeUVsOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecomputeUVsOp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsOpFactory();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Class URecomputeUVsOpFactory
void URecomputeUVsOpFactory::StaticRegisterNativesURecomputeUVsOpFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecomputeUVsOpFactory);
UClass* Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister()
{
	return URecomputeUVsOpFactory::StaticClass();
}
struct Z_Construct_UClass_URecomputeUVsOpFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV solving operations.\n * \n * Inherits from UObject so that it can hold a strong pointer to the settings UObject, which\n * needs to be a UObject to be displayed in the details panel.\n */" },
		{ "IncludePath", "ParameterizationOps/RecomputeUVsOp.h" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/RecomputeUVsOp.h" },
		{ "ToolTip", "Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV solving operations.\n\nInherits from UObject so that it can hold a strong pointer to the settings UObject, which\nneeds to be a UObject to be displayed in the details panel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/RecomputeUVsOp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecomputeUVsOpFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URecomputeUVsOpFactory_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsOpFactory, Settings), Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecomputeUVsOpFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsOpFactory_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsOpFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URecomputeUVsOpFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsOpFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URecomputeUVsOpFactory_Statics::ClassParams = {
	&URecomputeUVsOpFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URecomputeUVsOpFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsOpFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsOpFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URecomputeUVsOpFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URecomputeUVsOpFactory()
{
	if (!Z_Registration_Info_UClass_URecomputeUVsOpFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecomputeUVsOpFactory.OuterSingleton, Z_Construct_UClass_URecomputeUVsOpFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URecomputeUVsOpFactory.OuterSingleton;
}
template<> MODELINGOPERATORS_API UClass* StaticClass<URecomputeUVsOpFactory>()
{
	return URecomputeUVsOpFactory::StaticClass();
}
URecomputeUVsOpFactory::URecomputeUVsOpFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URecomputeUVsOpFactory);
URecomputeUVsOpFactory::~URecomputeUVsOpFactory() {}
// End Class URecomputeUVsOpFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_RecomputeUVsOp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URecomputeUVsOpFactory, URecomputeUVsOpFactory::StaticClass, TEXT("URecomputeUVsOpFactory"), &Z_Registration_Info_UClass_URecomputeUVsOpFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecomputeUVsOpFactory), 3999530962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_RecomputeUVsOp_h_1145416620(TEXT("/Script/ModelingOperators"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_RecomputeUVsOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_RecomputeUVsOp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
