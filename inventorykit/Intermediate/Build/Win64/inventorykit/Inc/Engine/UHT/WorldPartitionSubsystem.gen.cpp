// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionSubsystem.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionSubsystem Function IsAllStreamingCompleted
struct Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics
{
	struct WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "/** Returns true if world partition is done streaming levels, adding them to the world or removing them from the world. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSubsystem.h" },
		{ "ToolTip", "Returns true if world partition is done streaming levels, adding them to the world or removing them from the world." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionSubsystem, nullptr, "IsAllStreamingCompleted", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::WorldPartitionSubsystem_eventIsAllStreamingCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionSubsystem::execIsAllStreamingCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAllStreamingCompleted();
	P_NATIVE_END;
}
// End Class UWorldPartitionSubsystem Function IsAllStreamingCompleted

// Begin Class UWorldPartitionSubsystem Function IsStreamingCompleted
struct Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics
{
	struct WorldPartitionSubsystem_eventIsStreamingCompleted_Parms
	{
		EWorldPartitionRuntimeCellState QueryState;
		TArray<FWorldPartitionStreamingQuerySource> QuerySources;
		bool bExactState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Streaming" },
		{ "Comment", "//~End FTickableGameObject\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuerySources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueryState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QueryState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuerySources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuerySources;
	static void NewProp_bExactState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState = { "QueryState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms, QueryState), Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState, METADATA_PARAMS(0, nullptr) }; // 1120169810
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources_Inner = { "QuerySources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldPartitionStreamingQuerySource, METADATA_PARAMS(0, nullptr) }; // 888604988
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources = { "QuerySources", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms, QuerySources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuerySources_MetaData), NewProp_QuerySources_MetaData) }; // 888604988
void Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState_SetBit(void* Obj)
{
	((WorldPartitionSubsystem_eventIsStreamingCompleted_Parms*)Obj)->bExactState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState = { "bExactState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldPartitionSubsystem_eventIsStreamingCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldPartitionSubsystem_eventIsStreamingCompleted_Parms), &Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QueryState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_QuerySources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_bExactState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionSubsystem, nullptr, "IsStreamingCompleted", nullptr, nullptr, Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::WorldPartitionSubsystem_eventIsStreamingCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::WorldPartitionSubsystem_eventIsStreamingCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionSubsystem::execIsStreamingCompleted)
{
	P_GET_ENUM(EWorldPartitionRuntimeCellState,Z_Param_QueryState);
	P_GET_TARRAY_REF(FWorldPartitionStreamingQuerySource,Z_Param_Out_QuerySources);
	P_GET_UBOOL(Z_Param_bExactState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStreamingCompleted(EWorldPartitionRuntimeCellState(Z_Param_QueryState),Z_Param_Out_QuerySources,Z_Param_bExactState);
	P_NATIVE_END;
}
// End Class UWorldPartitionSubsystem Function IsStreamingCompleted

// Begin Class UWorldPartitionSubsystem
void UWorldPartitionSubsystem::StaticRegisterNativesUWorldPartitionSubsystem()
{
	UClass* Class = UWorldPartitionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsAllStreamingCompleted", &UWorldPartitionSubsystem::execIsAllStreamingCompleted },
		{ "IsStreamingCompleted", &UWorldPartitionSubsystem::execIsStreamingCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionSubsystem);
UClass* Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister()
{
	return UWorldPartitionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UWorldPartitionSubsystem\n */" },
		{ "IncludePath", "WorldPartition/WorldPartitionSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionSubsystem.h" },
		{ "ToolTip", "UWorldPartitionSubsystem" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionSubsystem_IsAllStreamingCompleted, "IsAllStreamingCompleted" }, // 2600340595
		{ &Z_Construct_UFunction_UWorldPartitionSubsystem_IsStreamingCompleted, "IsStreamingCompleted" }, // 1948803231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldPartitionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionSubsystem_Statics::ClassParams = {
	&UWorldPartitionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionSubsystem()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton, Z_Construct_UClass_UWorldPartitionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionSubsystem.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionSubsystem>()
{
	return UWorldPartitionSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionSubsystem);
UWorldPartitionSubsystem::~UWorldPartitionSubsystem() {}
// End Class UWorldPartitionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionSubsystem, UWorldPartitionSubsystem::StaticClass, TEXT("UWorldPartitionSubsystem"), &Z_Registration_Info_UClass_UWorldPartitionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionSubsystem), 35000391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_476618979(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
