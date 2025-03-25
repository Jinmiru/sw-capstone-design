// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODActor.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCell.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionHLOD();
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionHLOD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AWorldPartitionHLOD
void AWorldPartitionHLOD::StaticRegisterNativesAWorldPartitionHLOD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldPartitionHLOD);
UClass* Z_Construct_UClass_AWorldPartitionHLOD_NoRegister()
{
	return AWorldPartitionHLOD::StaticClass();
}
struct Z_Construct_UClass_AWorldPartitionHLOD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Replication Collision Physics Navigation Networking Input Actor LevelInstance Cooking" },
		{ "IncludePath", "WorldPartition/HLOD/HLODActor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVisibleDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireWarmup_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCellGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCell_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCellName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODSubActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubActorsHLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODBounds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinVisibleDistance;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HLODHash;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_HLODStats_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HLODStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HLODStats;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LODLevel;
	static void NewProp_bRequireWarmup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireWarmup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceCellGuid;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceCell;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceCellName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HLODSubActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODSubActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubActorsHLODLayer;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPartitionHLOD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceActors = { "SourceActors", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SourceActors), Z_Construct_UClass_UWorldPartitionHLODSourceActors_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceActors_MetaData), NewProp_SourceActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODBounds = { "HLODBounds", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, HLODBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODBounds_MetaData), NewProp_HLODBounds_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_MinVisibleDistance = { "MinVisibleDistance", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, MinVisibleDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVisibleDistance_MetaData), NewProp_MinVisibleDistance_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODHash = { "HLODHash", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, HLODHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODHash_MetaData), NewProp_HLODHash_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODStats_ValueProp = { "HLODStats", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODStats_Key_KeyProp = { "HLODStats_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODStats = { "HLODStats", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, HLODStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODStats_MetaData), NewProp_HLODStats_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, LODLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODLevel_MetaData), NewProp_LODLevel_MetaData) };
void Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_SetBit(void* Obj)
{
	((AWorldPartitionHLOD*)Obj)->bRequireWarmup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup = { "bRequireWarmup", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldPartitionHLOD), &Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireWarmup_MetaData), NewProp_bRequireWarmup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellGuid = { "SourceCellGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SourceCellGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCellGuid_MetaData), NewProp_SourceCellGuid_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCell = { "SourceCell", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SourceCell_DEPRECATED), Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCell_MetaData), NewProp_SourceCell_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellName = { "SourceCellName", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SourceCellName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCellName_MetaData), NewProp_SourceCellName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors_Inner = { "HLODSubActors", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping, METADATA_PARAMS(0, nullptr) }; // 588830860
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors = { "HLODSubActors", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, HLODSubActors_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODSubActors_MetaData), NewProp_HLODSubActors_MetaData) }; // 588830860
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SubActorsHLODLayer = { "SubActorsHLODLayer", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SubActorsHLODLayer_DEPRECATED), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubActorsHLODLayer_MetaData), NewProp_SubActorsHLODLayer_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldPartitionHLOD_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_MinVisibleDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODStats,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_LODLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellGuid,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SubActorsHLODLayer,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldPartitionHLOD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::ClassParams = {
	&AWorldPartitionHLOD::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWorldPartitionHLOD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldPartitionHLOD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldPartitionHLOD()
{
	if (!Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton, Z_Construct_UClass_AWorldPartitionHLOD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AWorldPartitionHLOD>()
{
	return AWorldPartitionHLOD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPartitionHLOD);
AWorldPartitionHLOD::~AWorldPartitionHLOD() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldPartitionHLOD)
// End Class AWorldPartitionHLOD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldPartitionHLOD, AWorldPartitionHLOD::StaticClass, TEXT("AWorldPartitionHLOD"), &Z_Registration_Info_UClass_AWorldPartitionHLOD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldPartitionHLOD), 3057428631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_3858397958(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
