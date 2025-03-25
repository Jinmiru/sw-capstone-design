// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ProfilingDebugging/HealthSnapshot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthSnapshot() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary();
ENGINE_API UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UHealthSnapshotBlueprintLibrary Function LogPerformanceSnapshot
struct Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics
{
	struct HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms
	{
		FString SnapshotTitle;
		bool bResetStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Performance | HealthSnapshot" },
		{ "Comment", "/**\n\x09* Writes a snapshot to the log. Captures memory stats by default. Also captures performance stats if called after StartHealthSnapshotChart and before SopHealthSnapshotChart.\n\x09*\n\x09* @param\x09SnapshotTitle\x09\x09\x09The name to be given to the new HealthSnapshot.\n\x09*/" },
		{ "CPP_Default_bResetStats", "true" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
		{ "ToolTip", "Writes a snapshot to the log. Captures memory stats by default. Also captures performance stats if called after StartHealthSnapshotChart and before SopHealthSnapshotChart.\n\n@param        SnapshotTitle                   The name to be given to the new HealthSnapshot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SnapshotTitle;
	static void NewProp_bResetStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_SnapshotTitle = { "SnapshotTitle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms, SnapshotTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotTitle_MetaData), NewProp_SnapshotTitle_MetaData) };
void Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats_SetBit(void* Obj)
{
	((HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms*)Obj)->bResetStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats = { "bResetStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms), &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_SnapshotTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::NewProp_bResetStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, nullptr, "LogPerformanceSnapshot", nullptr, nullptr, Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::HealthSnapshotBlueprintLibrary_eventLogPerformanceSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthSnapshotBlueprintLibrary::execLogPerformanceSnapshot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotTitle);
	P_GET_UBOOL(Z_Param_bResetStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHealthSnapshotBlueprintLibrary::LogPerformanceSnapshot(Z_Param_SnapshotTitle,Z_Param_bResetStats);
	P_NATIVE_END;
}
// End Class UHealthSnapshotBlueprintLibrary Function LogPerformanceSnapshot

// Begin Class UHealthSnapshotBlueprintLibrary Function StartPerformanceSnapshots
struct Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Performance | HealthSnapshot" },
		{ "Comment", "/**\n\x09* Begins capturing FPS charts that can be used to include performance data in a HealthSnapshot. If snapshots are already running clears all accumulated performance data\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
		{ "ToolTip", "Begins capturing FPS charts that can be used to include performance data in a HealthSnapshot. If snapshots are already running clears all accumulated performance data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, nullptr, "StartPerformanceSnapshots", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthSnapshotBlueprintLibrary::execStartPerformanceSnapshots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UHealthSnapshotBlueprintLibrary::StartPerformanceSnapshots();
	P_NATIVE_END;
}
// End Class UHealthSnapshotBlueprintLibrary Function StartPerformanceSnapshots

// Begin Class UHealthSnapshotBlueprintLibrary Function StopPerformanceSnapshots
struct Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Performance | HealthSnapshot" },
		{ "Comment", "/**\n\x09* Stops capturing FPS charts only if StartHealthSnapshotChart has first been called. Does nothing if FPS charts are not running. HealthSnapshots captured after this is called will not include performance stats.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
		{ "ToolTip", "Stops capturing FPS charts only if StartHealthSnapshotChart has first been called. Does nothing if FPS charts are not running. HealthSnapshots captured after this is called will not include performance stats." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, nullptr, "StopPerformanceSnapshots", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthSnapshotBlueprintLibrary::execStopPerformanceSnapshots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UHealthSnapshotBlueprintLibrary::StopPerformanceSnapshots();
	P_NATIVE_END;
}
// End Class UHealthSnapshotBlueprintLibrary Function StopPerformanceSnapshots

// Begin Class UHealthSnapshotBlueprintLibrary
void UHealthSnapshotBlueprintLibrary::StaticRegisterNativesUHealthSnapshotBlueprintLibrary()
{
	UClass* Class = UHealthSnapshotBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LogPerformanceSnapshot", &UHealthSnapshotBlueprintLibrary::execLogPerformanceSnapshot },
		{ "StartPerformanceSnapshots", &UHealthSnapshotBlueprintLibrary::execStartPerformanceSnapshots },
		{ "StopPerformanceSnapshots", &UHealthSnapshotBlueprintLibrary::execStopPerformanceSnapshots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthSnapshotBlueprintLibrary);
UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_NoRegister()
{
	return UHealthSnapshotBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProfilingDebugging/HealthSnapshot.h" },
		{ "ModuleRelativePath", "Public/ProfilingDebugging/HealthSnapshot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_LogPerformanceSnapshot, "LogPerformanceSnapshot" }, // 292007301
		{ &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StartPerformanceSnapshots, "StartPerformanceSnapshots" }, // 1051988136
		{ &Z_Construct_UFunction_UHealthSnapshotBlueprintLibrary_StopPerformanceSnapshots, "StopPerformanceSnapshots" }, // 2993337465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthSnapshotBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::ClassParams = {
	&UHealthSnapshotBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthSnapshotBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UHealthSnapshotBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHealthSnapshotBlueprintLibrary>()
{
	return UHealthSnapshotBlueprintLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthSnapshotBlueprintLibrary);
UHealthSnapshotBlueprintLibrary::~UHealthSnapshotBlueprintLibrary() {}
// End Class UHealthSnapshotBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthSnapshotBlueprintLibrary, UHealthSnapshotBlueprintLibrary::StaticClass, TEXT("UHealthSnapshotBlueprintLibrary"), &Z_Registration_Info_UClass_UHealthSnapshotBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthSnapshotBlueprintLibrary), 3960978969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_3512202051(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ProfilingDebugging_HealthSnapshot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
