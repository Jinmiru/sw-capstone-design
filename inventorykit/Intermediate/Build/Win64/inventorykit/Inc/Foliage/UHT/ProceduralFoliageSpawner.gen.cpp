// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/ProceduralFoliageSpawner.h"
#include "Runtime/Foliage/Public/FoliageTypeObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner();
FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class UProceduralFoliageSpawner Function Simulate
struct Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics
{
	struct ProceduralFoliageSpawner_eventSimulate_Parms
	{
		int32 NumSteps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "CPP_Default_NumSteps", "-1" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralFoliageSpawner_eventSimulate_Parms, NumSteps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::NewProp_NumSteps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageSpawner, nullptr, "Simulate", nullptr, nullptr, Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::ProceduralFoliageSpawner_eventSimulate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::ProceduralFoliageSpawner_eventSimulate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProceduralFoliageSpawner::execSimulate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSteps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Simulate(Z_Param_NumSteps);
	P_NATIVE_END;
}
// End Class UProceduralFoliageSpawner Function Simulate

// Begin Class UProceduralFoliageSpawner
void UProceduralFoliageSpawner::StaticRegisterNativesUProceduralFoliageSpawner()
{
	UClass* Class = UProceduralFoliageSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Simulate", &UProceduralFoliageSpawner::execSimulate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralFoliageSpawner);
UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister()
{
	return UProceduralFoliageSpawner::StaticClass();
}
struct Z_Construct_UClass_UProceduralFoliageSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProceduralFoliageSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** The seed used for generating the randomness of the simulation. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The seed used for generating the randomness of the simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** Length of the tile (in cm) along one axis. The total area of the tile will be TileSize*TileSize. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "Length of the tile (in cm) along one axis. The total area of the tile will be TileSize*TileSize." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumUniqueTiles_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** The number of unique tiles to generate. The final simulation is a procedurally determined combination of the various unique tiles. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The number of unique tiles to generate. The final simulation is a procedurally determined combination of the various unique tiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumQuadTreeSize_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** Minimum size of the quad tree used during the simulation. Reduce if too many instances are in splittable leaf quads (as warned in the log). */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "Minimum size of the quad tree used during the simulation. Reduce if too many instances are in splittable leaf quads (as warned in the log)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoliageTypes_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** The types of foliage to procedurally spawn. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The types of foliage to procedurally spawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideFoliageTerrainMaterials_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/**\n\x09 * If checked, will override the default behavior of using the global foliage material list and instead use the Override Foliage Terrain Materials defined here.\n\x09 * If the override is used, you must manually provide ALL materials this procedural foliage spawner should spawn on top of.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "If checked, will override the default behavior of using the global foliage material list and instead use the Override Foliage Terrain Materials defined here.\nIf the override is used, you must manually provide ALL materials this procedural foliage spawner should spawn on top of." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFoliageTerrainMaterials_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "Comment", "/** Procedural foliage will only spawn on materials specified here. These are only used if 'Use Override Foliage Terrain Materials' is checked. */" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "Procedural foliage will only spawn on materials specified here. These are only used if 'Use Override Foliage Terrain Materials' is checked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumUniqueTiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumQuadTreeSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageTypes;
	static void NewProp_bUseOverrideFoliageTerrainMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideFoliageTerrainMaterials;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideFoliageTerrainMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideFoliageTerrainMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate, "Simulate" }, // 1623363350
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles = { "NumUniqueTiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, NumUniqueTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumUniqueTiles_MetaData), NewProp_NumUniqueTiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize = { "MinimumQuadTreeSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, MinimumQuadTreeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumQuadTreeSize_MetaData), NewProp_MinimumQuadTreeSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_Inner = { "FoliageTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFoliageTypeObject, METADATA_PARAMS(0, nullptr) }; // 812349950
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes = { "FoliageTypes", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, FoliageTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoliageTypes_MetaData), NewProp_FoliageTypes_MetaData) }; // 812349950
void Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bUseOverrideFoliageTerrainMaterials_SetBit(void* Obj)
{
	((UProceduralFoliageSpawner*)Obj)->bUseOverrideFoliageTerrainMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bUseOverrideFoliageTerrainMaterials = { "bUseOverrideFoliageTerrainMaterials", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralFoliageSpawner), &Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bUseOverrideFoliageTerrainMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOverrideFoliageTerrainMaterials_MetaData), NewProp_bUseOverrideFoliageTerrainMaterials_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_OverrideFoliageTerrainMaterials_Inner = { "OverrideFoliageTerrainMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_OverrideFoliageTerrainMaterials = { "OverrideFoliageTerrainMaterials", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, OverrideFoliageTerrainMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFoliageTerrainMaterials_MetaData), NewProp_OverrideFoliageTerrainMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bUseOverrideFoliageTerrainMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_OverrideFoliageTerrainMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_OverrideFoliageTerrainMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProceduralFoliageSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::ClassParams = {
	&UProceduralFoliageSpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProceduralFoliageSpawner()
{
	if (!Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton, Z_Construct_UClass_UProceduralFoliageSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProceduralFoliageSpawner.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageSpawner>()
{
	return UProceduralFoliageSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageSpawner);
UProceduralFoliageSpawner::~UProceduralFoliageSpawner() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UProceduralFoliageSpawner)
// End Class UProceduralFoliageSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralFoliageSpawner, UProceduralFoliageSpawner::StaticClass, TEXT("UProceduralFoliageSpawner"), &Z_Registration_Info_UClass_UProceduralFoliageSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralFoliageSpawner), 2089636898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_1665391411(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_ProceduralFoliageSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
