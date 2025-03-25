// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PathingGrid() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryGenerator_PathingGrid
void UEnvQueryGenerator_PathingGrid::StaticRegisterNativesUEnvQueryGenerator_PathingGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_PathingGrid);
UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister()
{
	return UEnvQueryGenerator_PathingGrid::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Navigation grid, generates points on navmesh\n *  with paths to/from context no further than given limit\n */" },
		{ "DisplayName", "Points: Pathing Grid" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "Navigation grid, generates points on navmesh\nwith paths to/from context no further than given limit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathToItem_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** pathfinding direction */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "pathfinding direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** navigation filter to use in pathfinding */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "navigation filter to use in pathfinding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanRangeMultiplier_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** multiplier for max distance between point and context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "multiplier for max distance between point and context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathToItem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NavigationFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScanRangeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_PathingGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_PathToItem = { "PathToItem", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, PathToItem), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathToItem_MetaData), NewProp_PathToItem_MetaData) }; // 4208764161
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_NavigationFilter = { "NavigationFilter", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, NavigationFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationFilter_MetaData), NewProp_NavigationFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_ScanRangeMultiplier = { "ScanRangeMultiplier", nullptr, (EPropertyFlags)0x0010048000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanRangeMultiplier_MetaData), NewProp_ScanRangeMultiplier_MetaData) }; // 1384630506
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_PathToItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_NavigationFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_ScanRangeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::ClassParams = {
	&UEnvQueryGenerator_PathingGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid()
{
	if (!Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_PathingGrid>()
{
	return UEnvQueryGenerator_PathingGrid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_PathingGrid);
UEnvQueryGenerator_PathingGrid::~UEnvQueryGenerator_PathingGrid() {}
// End Class UEnvQueryGenerator_PathingGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_PathingGrid, UEnvQueryGenerator_PathingGrid::StaticClass, TEXT("UEnvQueryGenerator_PathingGrid"), &Z_Registration_Info_UClass_UEnvQueryGenerator_PathingGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_PathingGrid), 3043347458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_1530431414(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_PathingGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
