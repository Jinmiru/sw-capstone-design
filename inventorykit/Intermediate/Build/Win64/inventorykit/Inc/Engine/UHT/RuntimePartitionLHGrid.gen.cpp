// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/RuntimeHashSet/RuntimePartitionLHGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimePartitionLHGrid() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_URuntimePartition();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartitionLHGrid();
ENGINE_API UClass* Z_Construct_UClass_URuntimePartitionLHGrid_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class URuntimePartitionLHGrid
void URuntimePartitionLHGrid::StaticRegisterNativesURuntimePartitionLHGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimePartitionLHGrid);
UClass* Z_Construct_UClass_URuntimePartitionLHGrid_NoRegister()
{
	return URuntimePartitionLHGrid::StaticClass();
}
struct Z_Construct_UClass_URuntimePartitionLHGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/RuntimeHashSet/RuntimePartitionLHGrid.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartitionLHGrid.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartitionLHGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGridPreview_MetaData[] = {
		{ "Category", "RuntimeSettings" },
		{ "ModuleRelativePath", "Public/WorldPartition/RuntimeHashSet/RuntimePartitionLHGrid.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_CellSize;
	static void NewProp_bShowGridPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGridPreview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimePartitionLHGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URuntimePartitionLHGrid_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimePartitionLHGrid, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
void Z_Construct_UClass_URuntimePartitionLHGrid_Statics::NewProp_bShowGridPreview_SetBit(void* Obj)
{
	((URuntimePartitionLHGrid*)Obj)->bShowGridPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimePartitionLHGrid_Statics::NewProp_bShowGridPreview = { "bShowGridPreview", nullptr, (EPropertyFlags)0x00c0000800002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URuntimePartitionLHGrid), &Z_Construct_UClass_URuntimePartitionLHGrid_Statics::NewProp_bShowGridPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGridPreview_MetaData), NewProp_bShowGridPreview_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimePartitionLHGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartitionLHGrid_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimePartitionLHGrid_Statics::NewProp_bShowGridPreview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionLHGrid_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_URuntimePartitionLHGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimePartition,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionLHGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimePartitionLHGrid_Statics::ClassParams = {
	&URuntimePartitionLHGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_URuntimePartitionLHGrid_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionLHGrid_Statics::PropPointers), 0),
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimePartitionLHGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimePartitionLHGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimePartitionLHGrid()
{
	if (!Z_Registration_Info_UClass_URuntimePartitionLHGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimePartitionLHGrid.OuterSingleton, Z_Construct_UClass_URuntimePartitionLHGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimePartitionLHGrid.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URuntimePartitionLHGrid>()
{
	return URuntimePartitionLHGrid::StaticClass();
}
URuntimePartitionLHGrid::URuntimePartitionLHGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimePartitionLHGrid);
URuntimePartitionLHGrid::~URuntimePartitionLHGrid() {}
// End Class URuntimePartitionLHGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimePartitionLHGrid, URuntimePartitionLHGrid::StaticClass, TEXT("URuntimePartitionLHGrid"), &Z_Registration_Info_UClass_URuntimePartitionLHGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimePartitionLHGrid), 113896293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_1937559131(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartitionLHGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
