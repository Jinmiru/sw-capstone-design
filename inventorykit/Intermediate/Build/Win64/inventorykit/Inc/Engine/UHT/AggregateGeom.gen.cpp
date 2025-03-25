// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/LevelSetElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SkinnedLevelSetElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregateGeom() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKLevelSetElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSkinnedLevelSetElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKTaperedCapsuleElem();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FKAggregateGeom
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KAggregateGeom;
class UScriptStruct* FKAggregateGeom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KAggregateGeom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KAggregateGeom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKAggregateGeom, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KAggregateGeom"));
	}
	return Z_Registration_Info_UScriptStruct_KAggregateGeom.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKAggregateGeom>()
{
	return FKAggregateGeom::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKAggregateGeom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for an aggregate of collision shapes */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
		{ "ToolTip", "Container for an aggregate of collision shapes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Spheres" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Boxes" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphylElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Capsules" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvexElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Convex Elements" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaperedCapsuleElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Tapered Capsules" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSetElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Level Sets" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedLevelSetElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "(Experimental) Skinned Level Sets" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphereElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphylElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SphylElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaperedCapsuleElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaperedCapsuleElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSetElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSetElems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkinnedLevelSetElems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinnedLevelSetElems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKAggregateGeom>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_Inner = { "SphereElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKSphereElem, METADATA_PARAMS(0, nullptr) }; // 4006634544
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems = { "SphereElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKAggregateGeom, SphereElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereElems_MetaData), NewProp_SphereElems_MetaData) }; // 4006634544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_Inner = { "BoxElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKBoxElem, METADATA_PARAMS(0, nullptr) }; // 3805493991
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems = { "BoxElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKAggregateGeom, BoxElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxElems_MetaData), NewProp_BoxElems_MetaData) }; // 3805493991
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_Inner = { "SphylElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKSphylElem, METADATA_PARAMS(0, nullptr) }; // 3244322599
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems = { "SphylElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKAggregateGeom, SphylElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphylElems_MetaData), NewProp_SphylElems_MetaData) }; // 3244322599
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_Inner = { "ConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(0, nullptr) }; // 3161735465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems = { "ConvexElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKAggregateGeom, ConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvexElems_MetaData), NewProp_ConvexElems_MetaData) }; // 3161735465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_Inner = { "TaperedCapsuleElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKTaperedCapsuleElem, METADATA_PARAMS(0, nullptr) }; // 4119801632
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems = { "TaperedCapsuleElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKAggregateGeom, TaperedCapsuleElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaperedCapsuleElems_MetaData), NewProp_TaperedCapsuleElems_MetaData) }; // 4119801632
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems_Inner = { "LevelSetElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKLevelSetElem, METADATA_PARAMS(0, nullptr) }; // 2559079891
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems = { "LevelSetElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKAggregateGeom, LevelSetElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSetElems_MetaData), NewProp_LevelSetElems_MetaData) }; // 2559079891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SkinnedLevelSetElems_Inner = { "SkinnedLevelSetElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKSkinnedLevelSetElem, METADATA_PARAMS(0, nullptr) }; // 265072852
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SkinnedLevelSetElems = { "SkinnedLevelSetElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKAggregateGeom, SkinnedLevelSetElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinnedLevelSetElems_MetaData), NewProp_SkinnedLevelSetElems_MetaData) }; // 265072852
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SkinnedLevelSetElems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SkinnedLevelSetElems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"KAggregateGeom",
	Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers),
	sizeof(FKAggregateGeom),
	alignof(FKAggregateGeom),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom()
{
	if (!Z_Registration_Info_UScriptStruct_KAggregateGeom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KAggregateGeom.InnerSingleton, Z_Construct_UScriptStruct_FKAggregateGeom_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KAggregateGeom.InnerSingleton;
}
// End ScriptStruct FKAggregateGeom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKAggregateGeom::StaticStruct, Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewStructOps, TEXT("KAggregateGeom"), &Z_Registration_Info_UScriptStruct_KAggregateGeom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKAggregateGeom), 1026465065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_3664808634(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
