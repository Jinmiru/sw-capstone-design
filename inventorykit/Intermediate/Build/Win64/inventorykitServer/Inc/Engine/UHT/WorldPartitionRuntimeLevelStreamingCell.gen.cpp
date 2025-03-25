// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeLevelStreamingCell() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UWorldPartitionRuntimeLevelStreamingCell Function OnLevelHidden
struct Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell, nullptr, "OnLevelHidden", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionRuntimeLevelStreamingCell::execOnLevelHidden)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelHidden();
	P_NATIVE_END;
}
// End Class UWorldPartitionRuntimeLevelStreamingCell Function OnLevelHidden

// Begin Class UWorldPartitionRuntimeLevelStreamingCell Function OnLevelShown
struct Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell, nullptr, "OnLevelShown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldPartitionRuntimeLevelStreamingCell::execOnLevelShown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelShown();
	P_NATIVE_END;
}
// End Class UWorldPartitionRuntimeLevelStreamingCell Function OnLevelShown

// Begin Class UWorldPartitionRuntimeLevelStreamingCell
void UWorldPartitionRuntimeLevelStreamingCell::StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell()
{
	UClass* Class = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLevelHidden", &UWorldPartitionRuntimeLevelStreamingCell::execOnLevelHidden },
		{ "OnLevelShown", &UWorldPartitionRuntimeLevelStreamingCell::execOnLevelShown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeLevelStreamingCell);
UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister()
{
	return UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
}
struct Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Packages_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Packages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Packages;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreaming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden, "OnLevelHidden" }, // 910751901
		{ &Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown, "OnLevelShown" }, // 976495938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeLevelStreamingCell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages_Inner = { "Packages", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping, METADATA_PARAMS(0, nullptr) }; // 588830860
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages = { "Packages", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeLevelStreamingCell, Packages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Packages_MetaData), NewProp_Packages_MetaData) }; // 588830860
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_LevelStreaming = { "LevelStreaming", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldPartitionRuntimeLevelStreamingCell, LevelStreaming), Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStreaming_MetaData), NewProp_LevelStreaming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_LevelStreaming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeCell,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::ClassParams = {
	&UWorldPartitionRuntimeLevelStreamingCell::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell()
{
	if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeLevelStreamingCell>()
{
	return UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeLevelStreamingCell);
UWorldPartitionRuntimeLevelStreamingCell::~UWorldPartitionRuntimeLevelStreamingCell() {}
// End Class UWorldPartitionRuntimeLevelStreamingCell

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell, UWorldPartitionRuntimeLevelStreamingCell::StaticClass, TEXT("UWorldPartitionRuntimeLevelStreamingCell"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeLevelStreamingCell), 2553415200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_3206072641(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
