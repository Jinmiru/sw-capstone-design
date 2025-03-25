// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_GetWorldTime() {}

// Begin Cross Module References
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin ScriptStruct FRigVMFunction_GetWorldTime
static_assert(std::is_polymorphic<FRigVMFunction_GetWorldTime>() == std::is_polymorphic<FRigVMFunction_AnimBase>(), "USTRUCT FRigVMFunction_GetWorldTime cannot be polymorphic unless super FRigVMFunction_AnimBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime;
class UScriptStruct* FRigVMFunction_GetWorldTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_GetWorldTime"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_GetWorldTime_Execute;
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Year"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Month"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Day"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("WeekDay"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Hours"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Minutes"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Seconds"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("OverallSeconds"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_GetWorldTime::Execute"), &FRigVMFunction_GetWorldTime::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton, Arguments_FRigVMFunction_GetWorldTime_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_GetWorldTime>()
{
	return FRigVMFunction_GetWorldTime::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the current time (year, month, day, hour, minute)\n */" },
		{ "DisplayName", "Now" },
		{ "Keywords", "Time,Clock" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "ToolTip", "Returns the current time (year, month, day, hour, minute)" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeekDay_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallSeconds_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Year;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Month;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Day;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeekDay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hours;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minutes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_GetWorldTime>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Year), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Year_MetaData), NewProp_Year_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Month), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Month_MetaData), NewProp_Month_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Day), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Day_MetaData), NewProp_Day_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_WeekDay = { "WeekDay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, WeekDay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeekDay_MetaData), NewProp_WeekDay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Hours), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hours_MetaData), NewProp_Hours_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Minutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minutes_MetaData), NewProp_Minutes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seconds_MetaData), NewProp_Seconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_OverallSeconds = { "OverallSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, OverallSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallSeconds_MetaData), NewProp_OverallSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Year,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Month,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Day,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_WeekDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Hours,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Minutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Seconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_OverallSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	Z_Construct_UScriptStruct_FRigVMFunction_AnimBase,
	&NewStructOps,
	"RigVMFunction_GetWorldTime",
	Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::PropPointers),
	sizeof(FRigVMFunction_GetWorldTime),
	alignof(FRigVMFunction_GetWorldTime),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.InnerSingleton;
}
void FRigVMFunction_GetWorldTime::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigVMFunction_GetWorldTime::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Year,
		Month,
		Day,
		WeekDay,
		Hours,
		Minutes,
		Seconds,
		OverallSeconds
	);
}
// End ScriptStruct FRigVMFunction_GetWorldTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigVMFunction_GetWorldTime::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewStructOps, TEXT("RigVMFunction_GetWorldTime"), &Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_GetWorldTime), 3711207950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_2276150855(TEXT("/Script/RigVM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
