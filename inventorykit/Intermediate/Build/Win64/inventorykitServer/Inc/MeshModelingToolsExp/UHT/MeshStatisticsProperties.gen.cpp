// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/Properties/MeshStatisticsProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshStatisticsProperties() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UMeshStatisticsProperties
void UMeshStatisticsProperties::StaticRegisterNativesUMeshStatisticsProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshStatisticsProperties);
UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister()
{
	return UMeshStatisticsProperties::StaticClass();
}
struct Z_Construct_UClass_UMeshStatisticsProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/MeshStatisticsProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "MeshStatistics" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[] = {
		{ "Category", "MeshStatistics" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "MeshStatistics" },
		{ "ModuleRelativePath", "Public/Properties/MeshStatisticsProperties.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UV;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshStatisticsProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshStatisticsProperties, Mesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshStatisticsProperties, UV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV_MetaData), NewProp_UV_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshStatisticsProperties, Attributes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshStatisticsProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshStatisticsProperties_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshStatisticsProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshStatisticsProperties_Statics::ClassParams = {
	&UMeshStatisticsProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeshStatisticsProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshStatisticsProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshStatisticsProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshStatisticsProperties()
{
	if (!Z_Registration_Info_UClass_UMeshStatisticsProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshStatisticsProperties.OuterSingleton, Z_Construct_UClass_UMeshStatisticsProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshStatisticsProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshStatisticsProperties>()
{
	return UMeshStatisticsProperties::StaticClass();
}
UMeshStatisticsProperties::UMeshStatisticsProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshStatisticsProperties);
UMeshStatisticsProperties::~UMeshStatisticsProperties() {}
// End Class UMeshStatisticsProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshStatisticsProperties, UMeshStatisticsProperties::StaticClass, TEXT("UMeshStatisticsProperties"), &Z_Registration_Info_UClass_UMeshStatisticsProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshStatisticsProperties), 676883309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_3390734185(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_MeshStatisticsProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
