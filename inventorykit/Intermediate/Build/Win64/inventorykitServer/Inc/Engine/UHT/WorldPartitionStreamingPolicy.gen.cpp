// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingPolicy.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingPolicy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActivatedCells();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FActivatedCells
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActivatedCells;
class UScriptStruct* FActivatedCells::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActivatedCells.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActivatedCells.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActivatedCells, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActivatedCells"));
	}
	return Z_Registration_Info_UScriptStruct_ActivatedCells.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActivatedCells>()
{
	return FActivatedCells::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActivatedCells_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cells_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActivatedCells>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActivatedCells_Statics::NewProp_Cells_ElementProp = { "Cells", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FActivatedCells_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActivatedCells, Cells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActivatedCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivatedCells_Statics::NewProp_Cells_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivatedCells_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivatedCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActivatedCells_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ActivatedCells",
	Z_Construct_UScriptStruct_FActivatedCells_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivatedCells_Statics::PropPointers),
	sizeof(FActivatedCells),
	alignof(FActivatedCells),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivatedCells_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActivatedCells_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActivatedCells()
{
	if (!Z_Registration_Info_UScriptStruct_ActivatedCells.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActivatedCells.InnerSingleton, Z_Construct_UScriptStruct_FActivatedCells_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActivatedCells.InnerSingleton;
}
// End ScriptStruct FActivatedCells

// Begin Class UWorldPartitionStreamingPolicy
void UWorldPartitionStreamingPolicy::StaticRegisterNativesUWorldPartitionStreamingPolicy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionStreamingPolicy);
UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister()
{
	return UWorldPartitionStreamingPolicy::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionStreamingPolicy.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToActivateCells_MetaData[] = {
		{ "Comment", "// Used by UWorldPartitionSubsystem\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
		{ "ToolTip", "Used by UWorldPartitionSubsystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToLoadCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMergeStreamingSourceInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedCells_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedCells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivatedCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToActivateCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToActivateCells;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToLoadCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToLoadCells;
	static void NewProp_bShouldMergeStreamingSourceInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMergeStreamingSourceInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionStreamingPolicy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_LoadedCells_ElementProp = { "LoadedCells", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_LoadedCells = { "LoadedCells", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingPolicy, LoadedCells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedCells_MetaData), NewProp_LoadedCells_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ActivatedCells = { "ActivatedCells", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingPolicy, ActivatedCells), Z_Construct_UScriptStruct_FActivatedCells, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatedCells_MetaData), NewProp_ActivatedCells_MetaData) }; // 3790617150
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToActivateCells_Inner = { "ToActivateCells", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToActivateCells = { "ToActivateCells", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingPolicy, ToActivateCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToActivateCells_MetaData), NewProp_ToActivateCells_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToLoadCells_Inner = { "ToLoadCells", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToLoadCells = { "ToLoadCells", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionStreamingPolicy, ToLoadCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToLoadCells_MetaData), NewProp_ToLoadCells_MetaData) };
void Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_bShouldMergeStreamingSourceInfo_SetBit(void* Obj)
{
	((UWorldPartitionStreamingPolicy*)Obj)->bShouldMergeStreamingSourceInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_bShouldMergeStreamingSourceInfo = { "bShouldMergeStreamingSourceInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldPartitionStreamingPolicy), &Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_bShouldMergeStreamingSourceInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMergeStreamingSourceInfo_MetaData), NewProp_bShouldMergeStreamingSourceInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_LoadedCells_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_LoadedCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ActivatedCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToActivateCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToActivateCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToLoadCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_ToLoadCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::NewProp_bShouldMergeStreamingSourceInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::ClassParams = {
	&UWorldPartitionStreamingPolicy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton, Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionStreamingPolicy>()
{
	return UWorldPartitionStreamingPolicy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionStreamingPolicy);
UWorldPartitionStreamingPolicy::~UWorldPartitionStreamingPolicy() {}
// End Class UWorldPartitionStreamingPolicy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActivatedCells::StaticStruct, Z_Construct_UScriptStruct_FActivatedCells_Statics::NewStructOps, TEXT("ActivatedCells"), &Z_Registration_Info_UScriptStruct_ActivatedCells, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActivatedCells), 3790617150U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionStreamingPolicy, UWorldPartitionStreamingPolicy::StaticClass, TEXT("UWorldPartitionStreamingPolicy"), &Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionStreamingPolicy), 3007268814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_2691829553(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
