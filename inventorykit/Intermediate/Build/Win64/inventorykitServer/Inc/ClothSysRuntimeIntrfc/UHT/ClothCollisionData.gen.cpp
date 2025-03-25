// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionPrim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothCollisionData() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Box();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin ScriptStruct FClothCollisionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothCollisionData;
class UScriptStruct* FClothCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionData, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionData.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionData>()
{
	return FClothCollisionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothCollisionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Sphere data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Sphere data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereConnections_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Capsule data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Capsule data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Convexes_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Convex Data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Convex Data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Box data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Box data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spheres;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereConnections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphereConnections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Convexes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Convexes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, METADATA_PARAMS(0, nullptr) }; // 1627706880
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionData, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spheres_MetaData), NewProp_Spheres_MetaData) }; // 1627706880
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner = { "SphereConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, METADATA_PARAMS(0, nullptr) }; // 2605240944
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections = { "SphereConnections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionData, SphereConnections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereConnections_MetaData), NewProp_SphereConnections_MetaData) }; // 2605240944
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner = { "Convexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, METADATA_PARAMS(0, nullptr) }; // 3636493926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes = { "Convexes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionData, Convexes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Convexes_MetaData), NewProp_Convexes_MetaData) }; // 3636493926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Box, METADATA_PARAMS(0, nullptr) }; // 620335548
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionData, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boxes_MetaData), NewProp_Boxes_MetaData) }; // 620335548
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	&NewStructOps,
	"ClothCollisionData",
	Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers),
	sizeof(FClothCollisionData),
	alignof(FClothCollisionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FClothCollisionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionData.InnerSingleton;
}
// End ScriptStruct FClothCollisionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothCollisionData::StaticStruct, Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewStructOps, TEXT("ClothCollisionData"), &Z_Registration_Info_UScriptStruct_ClothCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothCollisionData), 1292702270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_2111393691(TEXT("/Script/ClothingSystemRuntimeInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
