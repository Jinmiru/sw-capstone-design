// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/FunctionalTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationPerformaceHelper();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();
FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonMethod();
FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling();
FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult();
FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Enum EComparisonMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComparisonMethod;
static UEnum* EComparisonMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EComparisonMethod"));
	}
	return Z_Registration_Info_UEnum_EComparisonMethod.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EComparisonMethod>()
{
	return EComparisonMethod_StaticEnum();
}
struct Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equal_To.Name", "EComparisonMethod::Equal_To" },
		{ "Greater_Than.Name", "EComparisonMethod::Greater_Than" },
		{ "Greater_Than_Or_Equal_To.Name", "EComparisonMethod::Greater_Than_Or_Equal_To" },
		{ "Less_Than.Name", "EComparisonMethod::Less_Than" },
		{ "Less_Than_Or_Equal_To.Name", "EComparisonMethod::Less_Than_Or_Equal_To" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "Not_Equal_To.Name", "EComparisonMethod::Not_Equal_To" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComparisonMethod::Equal_To", (int64)EComparisonMethod::Equal_To },
		{ "EComparisonMethod::Not_Equal_To", (int64)EComparisonMethod::Not_Equal_To },
		{ "EComparisonMethod::Greater_Than_Or_Equal_To", (int64)EComparisonMethod::Greater_Than_Or_Equal_To },
		{ "EComparisonMethod::Less_Than_Or_Equal_To", (int64)EComparisonMethod::Less_Than_Or_Equal_To },
		{ "EComparisonMethod::Greater_Than", (int64)EComparisonMethod::Greater_Than },
		{ "EComparisonMethod::Less_Than", (int64)EComparisonMethod::Less_Than },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	"EComparisonMethod",
	"EComparisonMethod",
	Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonMethod()
{
	if (!Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EComparisonMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComparisonMethod.InnerSingleton;
}
// End Enum EComparisonMethod

// Begin Class UAutomationPerformaceHelper Function BeginRecording
struct Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics
{
	struct AutomationPerformaceHelper_eventBeginRecording_Parms
	{
		FString RecordName;
		float InGPUBudget;
		float InRenderThreadBudget;
		float InGameThreadBudget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Begins recording a new named performance stats record. We start by recording the baseline. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begins recording a new named performance stats record. We start by recording the baseline." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InGPUBudget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRenderThreadBudget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InGameThreadBudget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_RecordName = { "RecordName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, RecordName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGPUBudget = { "InGPUBudget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, InGPUBudget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InRenderThreadBudget = { "InRenderThreadBudget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, InRenderThreadBudget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGameThreadBudget = { "InGameThreadBudget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecording_Parms, InGameThreadBudget), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_RecordName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGPUBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InRenderThreadBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::NewProp_InGameThreadBudget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "BeginRecording", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::AutomationPerformaceHelper_eventBeginRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::AutomationPerformaceHelper_eventBeginRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execBeginRecording)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RecordName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InGPUBudget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRenderThreadBudget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InGameThreadBudget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginRecording(Z_Param_RecordName,Z_Param_InGPUBudget,Z_Param_InRenderThreadBudget,Z_Param_InGameThreadBudget);
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function BeginRecording

// Begin Class UAutomationPerformaceHelper Function BeginRecordingBaseline
struct Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics
{
	struct AutomationPerformaceHelper_eventBeginRecordingBaseline_Parms
	{
		FString RecordName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Begins recording a new named performance stats record. We start by recording the baseline */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begins recording a new named performance stats record. We start by recording the baseline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::NewProp_RecordName = { "RecordName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginRecordingBaseline_Parms, RecordName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::NewProp_RecordName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "BeginRecordingBaseline", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::AutomationPerformaceHelper_eventBeginRecordingBaseline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::AutomationPerformaceHelper_eventBeginRecordingBaseline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execBeginRecordingBaseline)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RecordName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginRecordingBaseline(Z_Param_RecordName);
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function BeginRecordingBaseline

// Begin Class UAutomationPerformaceHelper Function BeginStatsFile
struct Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics
{
	struct AutomationPerformaceHelper_eventBeginStatsFile_Parms
	{
		FString RecordName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Begins recording stats to a file. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begins recording stats to a file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RecordName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::NewProp_RecordName = { "RecordName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventBeginStatsFile_Parms, RecordName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordName_MetaData), NewProp_RecordName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::NewProp_RecordName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "BeginStatsFile", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::AutomationPerformaceHelper_eventBeginStatsFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::AutomationPerformaceHelper_eventBeginStatsFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execBeginStatsFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RecordName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginStatsFile(Z_Param_RecordName);
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function BeginStatsFile

// Begin Class UAutomationPerformaceHelper Function EndRecording
struct Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Stops recording performance stats. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Stops recording performance stats." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "EndRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execEndRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndRecording();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function EndRecording

// Begin Class UAutomationPerformaceHelper Function EndRecordingBaseline
struct Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Stops recording the baseline and moves to the main record. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Stops recording the baseline and moves to the main record." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "EndRecordingBaseline", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execEndRecordingBaseline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndRecordingBaseline();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function EndRecordingBaseline

// Begin Class UAutomationPerformaceHelper Function EndStatsFile
struct Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Ends recording stats to a file. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Ends recording stats to a file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "EndStatsFile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execEndStatsFile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndStatsFile();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function EndStatsFile

// Begin Class UAutomationPerformaceHelper Function IsCurrentRecordWithinGameThreadBudget
struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics
{
	struct AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsCurrentRecordWithinGameThreadBudget", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinGameThreadBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsCurrentRecordWithinGameThreadBudget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGameThreadBudget();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function IsCurrentRecordWithinGameThreadBudget

// Begin Class UAutomationPerformaceHelper Function IsCurrentRecordWithinGPUBudget
struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics
{
	struct AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsCurrentRecordWithinGPUBudget", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinGPUBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsCurrentRecordWithinGPUBudget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinGPUBudget();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function IsCurrentRecordWithinGPUBudget

// Begin Class UAutomationPerformaceHelper Function IsCurrentRecordWithinRenderThreadBudget
struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics
{
	struct AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsCurrentRecordWithinRenderThreadBudget", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::AutomationPerformaceHelper_eventIsCurrentRecordWithinRenderThreadBudget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsCurrentRecordWithinRenderThreadBudget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCurrentRecordWithinRenderThreadBudget();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function IsCurrentRecordWithinRenderThreadBudget

// Begin Class UAutomationPerformaceHelper Function IsRecording
struct Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics
{
	struct AutomationPerformaceHelper_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Returns true if this stats tracker is currently recording performance stats. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Returns true if this stats tracker is currently recording performance stats." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutomationPerformaceHelper_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutomationPerformaceHelper_eventIsRecording_Parms), &Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "IsRecording", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::AutomationPerformaceHelper_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::AutomationPerformaceHelper_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function IsRecording

// Begin Class UAutomationPerformaceHelper Function OnAllTestsComplete
struct Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Does any final work needed as all tests are complete. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Does any final work needed as all tests are complete." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "OnAllTestsComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execOnAllTestsComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAllTestsComplete();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function OnAllTestsComplete

// Begin Class UAutomationPerformaceHelper Function OnBeginTests
struct Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Does any init work across all tests.. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Does any init work across all tests.." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "OnBeginTests", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execOnBeginTests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginTests();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function OnBeginTests

// Begin Class UAutomationPerformaceHelper Function Sample
struct Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics
{
	struct AutomationPerformaceHelper_eventSample_Parms
	{
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Adds a sample to the stats counters for the current performance stats record. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Adds a sample to the stats counters for the current performance stats record." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventSample_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "Sample", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::AutomationPerformaceHelper_eventSample_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::AutomationPerformaceHelper_eventSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_Sample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_Sample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execSample)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sample(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function Sample

// Begin Class UAutomationPerformaceHelper Function StartCPUProfiling
struct Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Communicates with external profiler to being a CPU capture. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Communicates with external profiler to being a CPU capture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "StartCPUProfiling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execStartCPUProfiling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCPUProfiling();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function StartCPUProfiling

// Begin Class UAutomationPerformaceHelper Function StopCPUProfiling
struct Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Communicates with external profiler to end a CPU capture. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Communicates with external profiler to end a CPU capture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "StopCPUProfiling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execStopCPUProfiling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCPUProfiling();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function StopCPUProfiling

// Begin Class UAutomationPerformaceHelper Function Tick
struct Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics
{
	struct AutomationPerformaceHelper_eventTick_Parms
	{
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "//Begin basic stat recording\n" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Begin basic stat recording" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "Tick", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::AutomationPerformaceHelper_eventTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::AutomationPerformaceHelper_eventTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Tick(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function Tick

// Begin Class UAutomationPerformaceHelper Function TriggerGPUTraceIfRecordFallsBelowBudget
struct Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Will trigger a GPU trace next time the current test falls below GPU budget. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Will trigger a GPU trace next time the current test falls below GPU budget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "TriggerGPUTraceIfRecordFallsBelowBudget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execTriggerGPUTraceIfRecordFallsBelowBudget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerGPUTraceIfRecordFallsBelowBudget();
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function TriggerGPUTraceIfRecordFallsBelowBudget

// Begin Class UAutomationPerformaceHelper Function WriteLogFile
struct Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics
{
	struct AutomationPerformaceHelper_eventWriteLogFile_Parms
	{
		FString CaptureDir;
		FString CaptureExtension;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perf" },
		{ "Comment", "/** Writes the current set of performance stats records to a csv file in the profiling directory. An additional directory and an extension override can also be used. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Writes the current set of performance stats records to a csv file in the profiling directory. An additional directory and an extension override can also be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDir_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CaptureDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CaptureExtension;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureDir = { "CaptureDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventWriteLogFile_Parms, CaptureDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureDir_MetaData), NewProp_CaptureDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureExtension = { "CaptureExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomationPerformaceHelper_eventWriteLogFile_Parms, CaptureExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureExtension_MetaData), NewProp_CaptureExtension_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::NewProp_CaptureExtension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationPerformaceHelper, nullptr, "WriteLogFile", nullptr, nullptr, Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::AutomationPerformaceHelper_eventWriteLogFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::AutomationPerformaceHelper_eventWriteLogFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomationPerformaceHelper::execWriteLogFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CaptureDir);
	P_GET_PROPERTY(FStrProperty,Z_Param_CaptureExtension);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteLogFile(Z_Param_CaptureDir,Z_Param_CaptureExtension);
	P_NATIVE_END;
}
// End Class UAutomationPerformaceHelper Function WriteLogFile

// Begin Class UAutomationPerformaceHelper
void UAutomationPerformaceHelper::StaticRegisterNativesUAutomationPerformaceHelper()
{
	UClass* Class = UAutomationPerformaceHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginRecording", &UAutomationPerformaceHelper::execBeginRecording },
		{ "BeginRecordingBaseline", &UAutomationPerformaceHelper::execBeginRecordingBaseline },
		{ "BeginStatsFile", &UAutomationPerformaceHelper::execBeginStatsFile },
		{ "EndRecording", &UAutomationPerformaceHelper::execEndRecording },
		{ "EndRecordingBaseline", &UAutomationPerformaceHelper::execEndRecordingBaseline },
		{ "EndStatsFile", &UAutomationPerformaceHelper::execEndStatsFile },
		{ "IsCurrentRecordWithinGameThreadBudget", &UAutomationPerformaceHelper::execIsCurrentRecordWithinGameThreadBudget },
		{ "IsCurrentRecordWithinGPUBudget", &UAutomationPerformaceHelper::execIsCurrentRecordWithinGPUBudget },
		{ "IsCurrentRecordWithinRenderThreadBudget", &UAutomationPerformaceHelper::execIsCurrentRecordWithinRenderThreadBudget },
		{ "IsRecording", &UAutomationPerformaceHelper::execIsRecording },
		{ "OnAllTestsComplete", &UAutomationPerformaceHelper::execOnAllTestsComplete },
		{ "OnBeginTests", &UAutomationPerformaceHelper::execOnBeginTests },
		{ "Sample", &UAutomationPerformaceHelper::execSample },
		{ "StartCPUProfiling", &UAutomationPerformaceHelper::execStartCPUProfiling },
		{ "StopCPUProfiling", &UAutomationPerformaceHelper::execStopCPUProfiling },
		{ "Tick", &UAutomationPerformaceHelper::execTick },
		{ "TriggerGPUTraceIfRecordFallsBelowBudget", &UAutomationPerformaceHelper::execTriggerGPUTraceIfRecordFallsBelowBudget },
		{ "WriteLogFile", &UAutomationPerformaceHelper::execWriteLogFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationPerformaceHelper);
UClass* Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister()
{
	return UAutomationPerformaceHelper::StaticClass();
}
struct Z_Construct_UClass_UAutomationPerformaceHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Class for use with functional tests which provides various performance measuring features. \n * Recording of basic, unintrusive performance stats.\n * Automatic captures using external CPU and GPU profilers.\n * Triggering and ending of writing full stats to a file.\n*/" },
		{ "IncludePath", "FunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Class for use with functional tests which provides various performance measuring features.\nRecording of basic, unintrusive performance stats.\nAutomatic captures using external CPU and GPU profilers.\nTriggering and ending of writing full stats to a file." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecording, "BeginRecording" }, // 137895062
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginRecordingBaseline, "BeginRecordingBaseline" }, // 1457716994
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_BeginStatsFile, "BeginStatsFile" }, // 4271795288
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecording, "EndRecording" }, // 3000094895
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_EndRecordingBaseline, "EndRecordingBaseline" }, // 3032180779
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_EndStatsFile, "EndStatsFile" }, // 10165935
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget, "IsCurrentRecordWithinGameThreadBudget" }, // 2456173024
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget, "IsCurrentRecordWithinGPUBudget" }, // 1581892938
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget, "IsCurrentRecordWithinRenderThreadBudget" }, // 103883912
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_IsRecording, "IsRecording" }, // 1578736812
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_OnAllTestsComplete, "OnAllTestsComplete" }, // 125913318
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_OnBeginTests, "OnBeginTests" }, // 3705883680
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_Sample, "Sample" }, // 3359977983
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_StartCPUProfiling, "StartCPUProfiling" }, // 731018218
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_StopCPUProfiling, "StopCPUProfiling" }, // 3404322990
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_Tick, "Tick" }, // 1043699072
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget, "TriggerGPUTraceIfRecordFallsBelowBudget" }, // 218044304
		{ &Z_Construct_UFunction_UAutomationPerformaceHelper_WriteLogFile, "WriteLogFile" }, // 1062656648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationPerformaceHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutomationPerformaceHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationPerformaceHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationPerformaceHelper_Statics::ClassParams = {
	&UAutomationPerformaceHelper::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationPerformaceHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomationPerformaceHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutomationPerformaceHelper()
{
	if (!Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton, Z_Construct_UClass_UAutomationPerformaceHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomationPerformaceHelper.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationPerformaceHelper>()
{
	return UAutomationPerformaceHelper::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationPerformaceHelper);
UAutomationPerformaceHelper::~UAutomationPerformaceHelper() {}
// End Class UAutomationPerformaceHelper

// Begin Enum EFunctionalTestResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFunctionalTestResult;
static UEnum* EFunctionalTestResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EFunctionalTestResult"));
	}
	return Z_Registration_Info_UEnum_EFunctionalTestResult.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EFunctionalTestResult>()
{
	return EFunctionalTestResult_StaticEnum();
}
struct Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/**\n\x09 * When finishing a test if you use Default, you're not explicitly stating if the test passed or failed.\n\x09 * Instead you're instead allowing any tested assertions to have decided that for you.  Even if you do\n\x09 * explicitly log success, it can be overturned by errors that occurred during the test.\n\x09 */" },
		{ "Default.Name", "EFunctionalTestResult::Default" },
		{ "Default.ToolTip", "When finishing a test if you use Default, you're not explicitly stating if the test passed or failed.\nInstead you're instead allowing any tested assertions to have decided that for you.  Even if you do\nexplicitly log success, it can be overturned by errors that occurred during the test." },
		{ "Error.Name", "EFunctionalTestResult::Error" },
		{ "Failed.Name", "EFunctionalTestResult::Failed" },
		{ "Invalid.Name", "EFunctionalTestResult::Invalid" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "Running.Name", "EFunctionalTestResult::Running" },
		{ "Succeeded.Name", "EFunctionalTestResult::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFunctionalTestResult::Default", (int64)EFunctionalTestResult::Default },
		{ "EFunctionalTestResult::Invalid", (int64)EFunctionalTestResult::Invalid },
		{ "EFunctionalTestResult::Error", (int64)EFunctionalTestResult::Error },
		{ "EFunctionalTestResult::Running", (int64)EFunctionalTestResult::Running },
		{ "EFunctionalTestResult::Failed", (int64)EFunctionalTestResult::Failed },
		{ "EFunctionalTestResult::Succeeded", (int64)EFunctionalTestResult::Succeeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	"EFunctionalTestResult",
	"EFunctionalTestResult",
	Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult()
{
	if (!Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFunctionalTestResult.InnerSingleton;
}
// End Enum EFunctionalTestResult

// Begin Enum EFunctionalTestLogHandling
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFunctionalTestLogHandling;
static UEnum* EFunctionalTestLogHandling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EFunctionalTestLogHandling"));
	}
	return Z_Registration_Info_UEnum_EFunctionalTestLogHandling.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EFunctionalTestLogHandling>()
{
	return EFunctionalTestLogHandling_StaticEnum();
}
struct Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "OutputIgnored.Name", "EFunctionalTestLogHandling::OutputIgnored" },
		{ "OutputIsError.Name", "EFunctionalTestLogHandling::OutputIsError" },
		{ "ProjectDefault.Comment", "/**\n\x09 * How do log categories affect rest results. ProjectDefault can be set in DefaultEngine.ini\n\x09 * but individual tests can override that\n\x09 */" },
		{ "ProjectDefault.Name", "EFunctionalTestLogHandling::ProjectDefault" },
		{ "ProjectDefault.ToolTip", "How do log categories affect rest results. ProjectDefault can be set in DefaultEngine.ini\nbut individual tests can override that" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFunctionalTestLogHandling::ProjectDefault", (int64)EFunctionalTestLogHandling::ProjectDefault },
		{ "EFunctionalTestLogHandling::OutputIsError", (int64)EFunctionalTestLogHandling::OutputIsError },
		{ "EFunctionalTestLogHandling::OutputIgnored", (int64)EFunctionalTestLogHandling::OutputIgnored },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	"EFunctionalTestLogHandling",
	"EFunctionalTestLogHandling",
	Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling()
{
	if (!Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFunctionalTestLogHandling.InnerSingleton;
}
// End Enum EFunctionalTestLogHandling

// Begin Delegate FFunctionalTestEventSignature
struct Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting, nullptr, "FunctionalTestEventSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFunctionalTestEventSignature_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestEventSignature)
{
	FunctionalTestEventSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FFunctionalTestEventSignature

// Begin Class AFunctionalTest Function AddError
struct Z_Construct_UFunction_AFunctionalTest_AddError_Statics
{
	struct FunctionalTest_eventAddError_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Reporting" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AddError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAddError_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AddError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AddError_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AddError", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AddError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FunctionalTest_eventAddError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AddError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FunctionalTest_eventAddError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AddError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AddError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAddError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddError(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AddError

// Begin Class AFunctionalTest Function AddInfo
struct Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics
{
	struct FunctionalTest_eventAddInfo_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Reporting" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAddInfo_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AddInfo", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::FunctionalTest_eventAddInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::FunctionalTest_eventAddInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AddInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AddInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAddInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInfo(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AddInfo

// Begin Class AFunctionalTest Function AddRerun
struct Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics
{
	struct FunctionalTest_eventAddRerun_Parms
	{
		FName Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Causes the test to be rerun for a specific named reason. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Causes the test to be rerun for a specific named reason." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAddRerun_Parms, Reason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AddRerun", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FunctionalTest_eventAddRerun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FunctionalTest_eventAddRerun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AddRerun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AddRerun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAddRerun)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRerun(Z_Param_Reason);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AddRerun

// Begin Class AFunctionalTest Function AddWarning
struct Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics
{
	struct FunctionalTest_eventAddWarning_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Reporting" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAddWarning_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AddWarning", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FunctionalTest_eventAddWarning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FunctionalTest_eventAddWarning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AddWarning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AddWarning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAddWarning)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWarning(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AddWarning

// Begin Class AFunctionalTest Function AssertEqual_Bool
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics
{
	struct FunctionalTest_eventAssertEqual_Bool_Parms
	{
		bool Actual;
		bool Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two bools are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Bool)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two bools are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Actual_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Actual;
	static void NewProp_Expected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Bool_Parms*)Obj)->Actual = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Bool_Parms*)Obj)->Expected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Bool_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Bool_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Bool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Bool_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Bool", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FunctionalTest_eventAssertEqual_Bool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FunctionalTest_eventAssertEqual_Bool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Bool)
{
	P_GET_UBOOL(Z_Param_Actual);
	P_GET_UBOOL(Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Bool(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Bool

// Begin Class AFunctionalTest Function AssertEqual_Box2D
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics
{
	struct FunctionalTest_eventAssertEqual_Box2D_Parms
	{
		FBox2D Actual;
		FBox2D Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component boxes are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Box2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component boxes are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, Actual), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, Expected), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Box2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Box2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Box2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Box2D", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FunctionalTest_eventAssertEqual_Box2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FunctionalTest_eventAssertEqual_Box2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Box2D)
{
	P_GET_STRUCT(FBox2D,Z_Param_Actual);
	P_GET_STRUCT(FBox2D,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Box2D(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Box2D

// Begin Class AFunctionalTest Function AssertEqual_Double
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics
{
	struct FunctionalTest_eventAssertEqual_Double_Parms
	{
		double Actual;
		double Expected;
		FString What;
		double Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two double are equal within tolerance between two doubles.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Double)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two double are equal within tolerance between two doubles.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Actual;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Double_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Double_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Double_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Double", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FunctionalTest_eventAssertEqual_Double_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FunctionalTest_eventAssertEqual_Double_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Double)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Actual);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Double(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Double

// Begin Class AFunctionalTest Function AssertEqual_Float
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics
{
	struct FunctionalTest_eventAssertEqual_Float_Parms
	{
		float Actual;
		float Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two floats are equal within tolerance between two floats.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Float)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two floats are equal within tolerance between two floats.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} within Tolerance for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Float_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Float_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Float_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Float", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FunctionalTest_eventAssertEqual_Float_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FunctionalTest_eventAssertEqual_Float_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Float)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Actual);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Float(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Float

// Begin Class AFunctionalTest Function AssertEqual_Int
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics
{
	struct FunctionalTest_eventAssertEqual_Int_Parms
	{
		int32 Actual;
		int32 Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two ints are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Integer)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two ints are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Int_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Int_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Int_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Int", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FunctionalTest_eventAssertEqual_Int_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FunctionalTest_eventAssertEqual_Int_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Int)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Actual);
	P_GET_PROPERTY(FIntProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Int(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Int

// Begin Class AFunctionalTest Function AssertEqual_Matrix
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct FunctionalTest_eventAssertEqual_Matrix_Parms
	{
		FMatrix Actual;
		FMatrix Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two 4x4 matrices are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Matrix)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two 4x4 matrices are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, Actual), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, Expected), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Matrix_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Matrix_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Matrix_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Matrix", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FunctionalTest_eventAssertEqual_Matrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FunctionalTest_eventAssertEqual_Matrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Matrix)
{
	P_GET_STRUCT(FMatrix,Z_Param_Actual);
	P_GET_STRUCT(FMatrix,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Matrix(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Matrix

// Begin Class AFunctionalTest Function AssertEqual_Name
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics
{
	struct FunctionalTest_eventAssertEqual_Name_Parms
	{
		FName Actual;
		FName Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two FNames are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (FName)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two FNames are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Actual;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Name_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Name_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Name_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Name", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FunctionalTest_eventAssertEqual_Name_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FunctionalTest_eventAssertEqual_Name_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Name)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Actual);
	P_GET_PROPERTY(FNameProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Name(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Name

// Begin Class AFunctionalTest Function AssertEqual_Object
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics
{
	struct FunctionalTest_eventAssertEqual_Object_Parms
	{
		UObject* Actual;
		UObject* Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two Objects are equal\n\x09* @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Object)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two Objects are equal\n@param What   A name to use in the message if the assert fails (What: expected {Actual} to be Equal To {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, Actual), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, Expected), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Object_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Object_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Object_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Object", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FunctionalTest_eventAssertEqual_Object_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FunctionalTest_eventAssertEqual_Object_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Object)
{
	P_GET_OBJECT(UObject,Z_Param_Actual);
	P_GET_OBJECT(UObject,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Object(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Object

// Begin Class AFunctionalTest Function AssertEqual_Plane
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics
{
	struct FunctionalTest_eventAssertEqual_Plane_Parms
	{
		FPlane Actual;
		FPlane Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two planes are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Plane)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two planes are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, Actual), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, Expected), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Plane_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Plane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Plane_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Plane", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FunctionalTest_eventAssertEqual_Plane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FunctionalTest_eventAssertEqual_Plane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Plane)
{
	P_GET_STRUCT(FPlane,Z_Param_Actual);
	P_GET_STRUCT(FPlane,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Plane(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Plane

// Begin Class AFunctionalTest Function AssertEqual_Quat
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics
{
	struct FunctionalTest_eventAssertEqual_Quat_Parms
	{
		FQuat Actual;
		FQuat Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two quats are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Quat)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two quats are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, Actual), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, Expected), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Quat_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Quat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Quat_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Quat", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FunctionalTest_eventAssertEqual_Quat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FunctionalTest_eventAssertEqual_Quat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Quat)
{
	P_GET_STRUCT(FQuat,Z_Param_Actual);
	P_GET_STRUCT(FQuat,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Quat(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Quat

// Begin Class AFunctionalTest Function AssertEqual_Rotator
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics
{
	struct FunctionalTest_eventAssertEqual_Rotator_Parms
	{
		FRotator Actual;
		FRotator Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that the component angles of two rotators are all equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Rotator)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that the component angles of two rotators are all equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, Actual), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, Expected), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Rotator_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Rotator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Rotator_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Rotator", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FunctionalTest_eventAssertEqual_Rotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FunctionalTest_eventAssertEqual_Rotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Rotator)
{
	P_GET_STRUCT(FRotator,Z_Param_Actual);
	P_GET_STRUCT(FRotator,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Rotator(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Rotator

// Begin Class AFunctionalTest Function AssertEqual_RotatorOrientation
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics
{
	struct FunctionalTest_eventAssertEqual_RotatorOrientation_Parms
	{
		FRotator Actual;
		FRotator Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that the orientation of two rotators is the same within a small tolerance. Robust to quaternion singularities where angles can differ despite having an identical orientation. \n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Rotator Orientation)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that the orientation of two rotators is the same within a small tolerance. Robust to quaternion singularities where angles can differ despite having an identical orientation.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_RotatorOrientation_Parms, Actual), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_RotatorOrientation_Parms, Expected), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_RotatorOrientation_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_RotatorOrientation_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_RotatorOrientation_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_RotatorOrientation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_RotatorOrientation_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_RotatorOrientation", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::FunctionalTest_eventAssertEqual_RotatorOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::FunctionalTest_eventAssertEqual_RotatorOrientation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_RotatorOrientation)
{
	P_GET_STRUCT(FRotator,Z_Param_Actual);
	P_GET_STRUCT(FRotator,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_RotatorOrientation(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_RotatorOrientation

// Begin Class AFunctionalTest Function AssertEqual_String
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics
{
	struct FunctionalTest_eventAssertEqual_String_Parms
	{
		FString Actual;
		FString Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two Strings are equal.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (String)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two Strings are equal.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_String_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_String_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_String_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_String", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FunctionalTest_eventAssertEqual_String_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FunctionalTest_eventAssertEqual_String_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_String()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_String_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_String)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Actual);
	P_GET_PROPERTY(FStrProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_String(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_String

// Begin Class AFunctionalTest Function AssertEqual_TraceQueryResults
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics
{
	struct FunctionalTest_eventAssertEqual_TraceQueryResults_Parms
	{
		const UTraceQueryTestResults* Actual;
		const UTraceQueryTestResults* Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09* Assert that two TraceQueryResults are equal.\n\x09* @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09*/" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (TraceQuery)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two TraceQueryResults are equal.\n@param What   A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actual_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expected_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, Actual), Z_Construct_UClass_UTraceQueryTestResults_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actual_MetaData), NewProp_Actual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, Expected), Z_Construct_UClass_UTraceQueryTestResults_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expected_MetaData), NewProp_Expected_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_TraceQueryResults_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_TraceQueryResults_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_TraceQueryResults", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::FunctionalTest_eventAssertEqual_TraceQueryResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::FunctionalTest_eventAssertEqual_TraceQueryResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_TraceQueryResults)
{
	P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Actual);
	P_GET_OBJECT(UTraceQueryTestResults,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_TraceQueryResults(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_TraceQueryResults

// Begin Class AFunctionalTest Function AssertEqual_Transform
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics
{
	struct FunctionalTest_eventAssertEqual_Transform_Parms
	{
		FTransform Actual;
		FTransform Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two transforms are (components memberwise - translation, rotation, scale) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Transform)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two transforms are (components memberwise - translation, rotation, scale) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actual_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expected_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, Actual), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actual_MetaData), NewProp_Actual_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, Expected), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expected_MetaData), NewProp_Expected_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Transform_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Transform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Transform_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Transform", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FunctionalTest_eventAssertEqual_Transform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FunctionalTest_eventAssertEqual_Transform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Transform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Transform

// Begin Class AFunctionalTest Function AssertEqual_Vector
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics
{
	struct FunctionalTest_eventAssertEqual_Vector_Parms
	{
		FVector Actual;
		FVector Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two vectors are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Vector)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two vectors are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, Actual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, Expected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Vector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Vector_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Vector", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FunctionalTest_eventAssertEqual_Vector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FunctionalTest_eventAssertEqual_Vector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Vector)
{
	P_GET_STRUCT(FVector,Z_Param_Actual);
	P_GET_STRUCT(FVector,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Vector

// Begin Class AFunctionalTest Function AssertEqual_Vector2D
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics
{
	struct FunctionalTest_eventAssertEqual_Vector2D_Parms
	{
		FVector2D Actual;
		FVector2D Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component vectors are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Vector2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component vectors are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, Actual), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, Expected), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Vector2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Vector2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Vector2D", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FunctionalTest_eventAssertEqual_Vector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FunctionalTest_eventAssertEqual_Vector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Vector2D)
{
	P_GET_STRUCT(FVector2D,Z_Param_Actual);
	P_GET_STRUCT(FVector2D,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector2D(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Vector2D

// Begin Class AFunctionalTest Function AssertEqual_Vector4
struct Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics
{
	struct FunctionalTest_eventAssertEqual_Vector4_Parms
	{
		FVector4 Actual;
		FVector4 Expected;
		FString What;
		float Tolerance;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two four-component vectors are (memberwise) equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "CPP_Default_Tolerance", "0.000100" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Equal (Vector4)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two four-component vectors are (memberwise) equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, Actual), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, Expected), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertEqual_Vector4_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertEqual_Vector4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertEqual_Vector4_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertEqual_Vector4", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FunctionalTest_eventAssertEqual_Vector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FunctionalTest_eventAssertEqual_Vector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertEqual_Vector4)
{
	P_GET_STRUCT(FVector4,Z_Param_Actual);
	P_GET_STRUCT(FVector4,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertEqual_Vector4(Z_Param_Actual,Z_Param_Expected,Z_Param_What,Z_Param_Tolerance,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertEqual_Vector4

// Begin Class AFunctionalTest Function AssertFalse
struct Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics
{
	struct FunctionalTest_eventAssertFalse_Parms
	{
		bool Condition;
		FString Message;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that a boolean value is false.\n\x09 * @param Message\x09The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that a boolean value is false.\n@param Message       The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Condition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertFalse_Parms*)Obj)->Condition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertFalse_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertFalse_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertFalse_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertFalse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertFalse_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertFalse", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FunctionalTest_eventAssertFalse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FunctionalTest_eventAssertFalse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertFalse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertFalse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertFalse)
{
	P_GET_UBOOL(Z_Param_Condition);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertFalse(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertFalse

// Begin Class AFunctionalTest Function AssertIsValid
struct Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics
{
	struct FunctionalTest_eventAssertIsValid_Parms
	{
		UObject* Object;
		FString Message;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that a UObject is valid\n\x09 * @param Message\x09The message to display if the object is invalid (\"Invalid object: 'Message' for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that a UObject is valid\n@param Message       The message to display if the object is invalid (\"Invalid object: 'Message' for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertIsValid_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertIsValid_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertIsValid_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertIsValid_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertIsValid", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FunctionalTest_eventAssertIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FunctionalTest_eventAssertIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertIsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertIsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertIsValid)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertIsValid(Z_Param_Object,Z_Param_Message,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertIsValid

// Begin Class AFunctionalTest Function AssertNotEqual_Box2D
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Box2D_Parms
	{
		FBox2D Actual;
		FBox2D NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component boxes are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Box2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component boxes are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, Actual), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, NotExpected), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Box2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Box2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Box2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Box2D", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FunctionalTest_eventAssertNotEqual_Box2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FunctionalTest_eventAssertNotEqual_Box2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Box2D)
{
	P_GET_STRUCT(FBox2D,Z_Param_Actual);
	P_GET_STRUCT(FBox2D,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Box2D(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Box2D

// Begin Class AFunctionalTest Function AssertNotEqual_Matrix
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct FunctionalTest_eventAssertNotEqual_Matrix_Parms
	{
		FMatrix Actual;
		FMatrix NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two 4x4 matrices are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Matrix)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two 4x4 matrices are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, Actual), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, NotExpected), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Matrix_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Matrix_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Matrix_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Matrix", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FunctionalTest_eventAssertNotEqual_Matrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FunctionalTest_eventAssertNotEqual_Matrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Matrix)
{
	P_GET_STRUCT(FMatrix,Z_Param_Actual);
	P_GET_STRUCT(FMatrix,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Matrix(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Matrix

// Begin Class AFunctionalTest Function AssertNotEqual_Plane
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Plane_Parms
	{
		FPlane Actual;
		FPlane NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two planes are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Plane)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two planes are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, Actual), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, NotExpected), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Plane_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Plane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Plane_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Plane", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FunctionalTest_eventAssertNotEqual_Plane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FunctionalTest_eventAssertNotEqual_Plane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Plane)
{
	P_GET_STRUCT(FPlane,Z_Param_Actual);
	P_GET_STRUCT(FPlane,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Plane(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Plane

// Begin Class AFunctionalTest Function AssertNotEqual_Quat
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Quat_Parms
	{
		FQuat Actual;
		FQuat NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two quats are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Quat)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two quats are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, Actual), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, NotExpected), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Quat_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Quat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Quat_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Quat", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FunctionalTest_eventAssertNotEqual_Quat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FunctionalTest_eventAssertNotEqual_Quat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Quat)
{
	P_GET_STRUCT(FQuat,Z_Param_Actual);
	P_GET_STRUCT(FQuat,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Quat(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Quat

// Begin Class AFunctionalTest Function AssertNotEqual_Rotator
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Rotator_Parms
	{
		FRotator Actual;
		FRotator NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that the component angles of two rotators are all not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Rotator)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that the component angles of two rotators are all not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, Actual), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, NotExpected), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Rotator_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Rotator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Rotator_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Rotator", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FunctionalTest_eventAssertNotEqual_Rotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FunctionalTest_eventAssertNotEqual_Rotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Rotator)
{
	P_GET_STRUCT(FRotator,Z_Param_Actual);
	P_GET_STRUCT(FRotator,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Rotator(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Rotator

// Begin Class AFunctionalTest Function AssertNotEqual_String
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics
{
	struct FunctionalTest_eventAssertNotEqual_String_Parms
	{
		FString Actual;
		FString NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two Strings are not equal.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (String)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two Strings are not equal.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, NotExpected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_String_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_String_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_String_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_String", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FunctionalTest_eventAssertNotEqual_String_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FunctionalTest_eventAssertNotEqual_String_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_String)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Actual);
	P_GET_PROPERTY(FStrProperty,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_String(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_String

// Begin Class AFunctionalTest Function AssertNotEqual_Transform
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Transform_Parms
	{
		FTransform Actual;
		FTransform NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two transforms are (components memberwise - translation, rotation, scale) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Transform)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two transforms are (components memberwise - translation, rotation, scale) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actual_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotExpected_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, Actual), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actual_MetaData), NewProp_Actual_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, NotExpected), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotExpected_MetaData), NewProp_NotExpected_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Transform_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Transform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Transform_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Transform", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FunctionalTest_eventAssertNotEqual_Transform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FunctionalTest_eventAssertNotEqual_Transform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Transform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Actual);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Transform(Z_Param_Out_Actual,Z_Param_Out_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Transform

// Begin Class AFunctionalTest Function AssertNotEqual_Vector
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Vector_Parms
	{
		FVector Actual;
		FVector NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two vectors are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Vector)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two vectors are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, Actual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, NotExpected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Vector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Vector_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Vector", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FunctionalTest_eventAssertNotEqual_Vector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FunctionalTest_eventAssertNotEqual_Vector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Vector)
{
	P_GET_STRUCT(FVector,Z_Param_Actual);
	P_GET_STRUCT(FVector,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Vector

// Begin Class AFunctionalTest Function AssertNotEqual_Vector2D
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Vector2D_Parms
	{
		FVector2D Actual;
		FVector2D NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two two-component vectors are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Vector2D)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two two-component vectors are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, Actual), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, NotExpected), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector2D_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Vector2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Vector2D_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Vector2D", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FunctionalTest_eventAssertNotEqual_Vector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FunctionalTest_eventAssertNotEqual_Vector2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Vector2D)
{
	P_GET_STRUCT(FVector2D,Z_Param_Actual);
	P_GET_STRUCT(FVector2D,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector2D(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Vector2D

// Begin Class AFunctionalTest Function AssertNotEqual_Vector4
struct Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics
{
	struct FunctionalTest_eventAssertNotEqual_Vector4_Parms
	{
		FVector4 Actual;
		FVector4 NotExpected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that two four-component vectors are (memberwise) not equal within a small tolerance.\n\x09 * @param What\x09""A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Not Equal (Vector4)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that two four-component vectors are (memberwise) not equal within a small tolerance.\n@param What  A name to use in the message if the assert fails (\"Expected 'What' not to be {Expected} but it was {Actual} for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotExpected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, Actual), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_NotExpected = { "NotExpected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, NotExpected), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertNotEqual_Vector4_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertNotEqual_Vector4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertNotEqual_Vector4_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_NotExpected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertNotEqual_Vector4", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FunctionalTest_eventAssertNotEqual_Vector4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FunctionalTest_eventAssertNotEqual_Vector4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertNotEqual_Vector4)
{
	P_GET_STRUCT(FVector4,Z_Param_Actual);
	P_GET_STRUCT(FVector4,Z_Param_NotExpected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertNotEqual_Vector4(Z_Param_Actual,Z_Param_NotExpected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertNotEqual_Vector4

// Begin Class AFunctionalTest Function AssertTrue
struct Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics
{
	struct FunctionalTest_eventAssertTrue_Parms
	{
		bool Condition;
		FString Message;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert that a boolean value is true.\n\x09 * @param Message\x09The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert that a boolean value is true.\n@param Message       The message to display if the assert fails (\"Assertion Failed: 'Message' for context ''\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Condition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertTrue_Parms*)Obj)->Condition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertTrue_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertTrue_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertTrue_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertTrue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertTrue_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertTrue", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FunctionalTest_eventAssertTrue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FunctionalTest_eventAssertTrue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertTrue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertTrue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertTrue)
{
	P_GET_UBOOL(Z_Param_Condition);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertTrue(Z_Param_Condition,Z_Param_Message,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertTrue

// Begin Class AFunctionalTest Function AssertValue_DateTime
struct Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics
{
	struct FunctionalTest_eventAssertValue_DateTime_Parms
	{
		FDateTime Actual;
		EComparisonMethod ShouldBe;
		FDateTime Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two DateTimes.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (DateTime)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two DateTimes.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, Actual), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(0, nullptr) }; // 3438036448
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, Expected), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_DateTime_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertValue_DateTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_DateTime_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ShouldBe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_DateTime", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FunctionalTest_eventAssertValue_DateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FunctionalTest_eventAssertValue_DateTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertValue_DateTime)
{
	P_GET_STRUCT(FDateTime,Z_Param_Actual);
	P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
	P_GET_STRUCT(FDateTime,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertValue_DateTime(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertValue_DateTime

// Begin Class AFunctionalTest Function AssertValue_Double
struct Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics
{
	struct FunctionalTest_eventAssertValue_Double_Parms
	{
		double Actual;
		EComparisonMethod ShouldBe;
		double Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two doubles.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (Double)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two doubles.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Actual;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(0, nullptr) }; // 3438036448
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Double_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertValue_Double_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_Double_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ShouldBe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_Double", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FunctionalTest_eventAssertValue_Double_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FunctionalTest_eventAssertValue_Double_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_Double()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_Double_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertValue_Double)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Actual);
	P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertValue_Double(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertValue_Double

// Begin Class AFunctionalTest Function AssertValue_Float
struct Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics
{
	struct FunctionalTest_eventAssertValue_Float_Parms
	{
		float Actual;
		EComparisonMethod ShouldBe;
		float Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two floats.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (Float)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two floats.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(0, nullptr) }; // 3438036448
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Float_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertValue_Float_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_Float_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ShouldBe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_Float", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FunctionalTest_eventAssertValue_Float_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FunctionalTest_eventAssertValue_Float_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_Float()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_Float_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertValue_Float)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Actual);
	P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertValue_Float(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertValue_Float

// Begin Class AFunctionalTest Function AssertValue_Int
struct Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics
{
	struct FunctionalTest_eventAssertValue_Int_Parms
	{
		int32 Actual;
		EComparisonMethod ShouldBe;
		int32 Expected;
		FString What;
		const UObject* ContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asserts" },
		{ "Comment", "/**\n\x09 * Assert on a relationship between two integers.\n\x09 * @param What\x09""A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')\n\x09 */" },
		{ "CPP_Default_ContextObject", "None" },
		{ "DefaultToSelf", "ContextObject" },
		{ "DisplayName", "Assert Value (Integer)" },
		{ "HidePin", "ContextObject" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Assert on a relationship between two integers.\n@param What  A name to use in the message if the assert fails (What: expected {Actual} to be <ShouldBe> {Expected} for context '')" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_What_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Actual;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShouldBe_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShouldBe;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Expected;
	static const UECodeGen_Private::FStrPropertyParams NewProp_What;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Actual = { "Actual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, Actual), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe = { "ShouldBe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, ShouldBe), Z_Construct_UEnum_FunctionalTesting_EComparisonMethod, METADATA_PARAMS(0, nullptr) }; // 3438036448
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Expected = { "Expected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, Expected), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_What = { "What", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, What), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_What_MetaData), NewProp_What_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventAssertValue_Int_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventAssertValue_Int_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventAssertValue_Int_Parms), &Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Actual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ShouldBe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_Expected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_What,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "AssertValue_Int", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FunctionalTest_eventAssertValue_Int_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FunctionalTest_eventAssertValue_Int_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_AssertValue_Int()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_AssertValue_Int_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execAssertValue_Int)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Actual);
	P_GET_ENUM(EComparisonMethod,Z_Param_ShouldBe);
	P_GET_PROPERTY(FIntProperty,Z_Param_Expected);
	P_GET_PROPERTY(FStrProperty,Z_Param_What);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AssertValue_Int(Z_Param_Actual,EComparisonMethod(Z_Param_ShouldBe),Z_Param_Expected,Z_Param_What,Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function AssertValue_Int

// Begin Class AFunctionalTest Function DebugGatherRelevantActors
struct FunctionalTest_eventDebugGatherRelevantActors_Parms
{
	TArray<AActor*> ReturnValue;
};
static FName NAME_AFunctionalTest_DebugGatherRelevantActors = FName(TEXT("DebugGatherRelevantActors"));
TArray<AActor*> AFunctionalTest::DebugGatherRelevantActors() const
{
	FunctionalTest_eventDebugGatherRelevantActors_Parms Parms;
	const_cast<AFunctionalTest*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_DebugGatherRelevantActors),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Used by debug drawing to gather actors this test is using and point at them on the level to better understand test's setup */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Used by debug drawing to gather actors this test is using and point at them on the level to better understand test's setup" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventDebugGatherRelevantActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "DebugGatherRelevantActors", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::PropPointers), sizeof(FunctionalTest_eventDebugGatherRelevantActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(FunctionalTest_eventDebugGatherRelevantActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFunctionalTest Function DebugGatherRelevantActors

// Begin Class AFunctionalTest Function FinishTest
struct Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics
{
	struct FunctionalTest_eventFinishTest_Parms
	{
		EFunctionalTestResult TestResult;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TestResult;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult = { "TestResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventFinishTest_Parms, TestResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(0, nullptr) }; // 2167427140
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventFinishTest_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_TestResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "FinishTest", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FunctionalTest_eventFinishTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FunctionalTest_eventFinishTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_FinishTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_FinishTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execFinishTest)
{
	P_GET_ENUM(EFunctionalTestResult,Z_Param_TestResult);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishTest(EFunctionalTestResult(Z_Param_TestResult),Z_Param_Message);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function FinishTest

// Begin Class AFunctionalTest Function GetCurrentRerunReason
struct Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics
{
	struct FunctionalTest_eventGetCurrentRerunReason_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Returns the current re-run reason if we're in a named re-run. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Returns the current re-run reason if we're in a named re-run." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventGetCurrentRerunReason_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "GetCurrentRerunReason", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FunctionalTest_eventGetCurrentRerunReason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FunctionalTest_eventGetCurrentRerunReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execGetCurrentRerunReason)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetCurrentRerunReason();
	P_NATIVE_END;
}
// End Class AFunctionalTest Function GetCurrentRerunReason

// Begin Class AFunctionalTest Function IsEnabled
struct Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics
{
	struct FunctionalTest_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventIsEnabled_Parms), &Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FunctionalTest_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FunctionalTest_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// End Class AFunctionalTest Function IsEnabled

// Begin Class AFunctionalTest Function IsReady
struct FunctionalTest_eventIsReady_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FunctionalTest_eventIsReady_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AFunctionalTest_IsReady = FName(TEXT("IsReady"));
bool AFunctionalTest::IsReady()
{
	FunctionalTest_eventIsReady_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_IsReady),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AFunctionalTest_IsReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * IsReady() is called once per frame after a test is run, until it returns true.  You should use this function to\n\x09 * delay Start being called on the test until preconditions are met.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "IsReady() is called once per frame after a test is run, until it returns true.  You should use this function to\ndelay Start being called on the test until preconditions are met." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventIsReady_Parms), &Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "IsReady", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::PropPointers), sizeof(FunctionalTest_eventIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(FunctionalTest_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady_Implementation();
	P_NATIVE_END;
}
// End Class AFunctionalTest Function IsReady

// Begin Class AFunctionalTest Function IsRunning
struct Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics
{
	struct FunctionalTest_eventIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "// AActor interface end\n" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "AActor interface end" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventIsRunning_Parms), &Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "IsRunning", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FunctionalTest_eventIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FunctionalTest_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning();
	P_NATIVE_END;
}
// End Class AFunctionalTest Function IsRunning

// Begin Class AFunctionalTest Function LogMessage
struct Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics
{
	struct FunctionalTest_eventLogMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventLogMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "LogMessage", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FunctionalTest_eventLogMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FunctionalTest_eventLogMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_LogMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_LogMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execLogMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function LogMessage

// Begin Class AFunctionalTest Function OnAdditionalTestFinishedMessageRequest
struct FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms
{
	EFunctionalTestResult TestResult;
	FString ReturnValue;
};
static FName NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest = FName(TEXT("OnAdditionalTestFinishedMessageRequest"));
FString AFunctionalTest::OnAdditionalTestFinishedMessageRequest(EFunctionalTestResult TestResult) const
{
	FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms Parms;
	Parms.TestResult=TestResult;
	const_cast<AFunctionalTest*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_OnAdditionalTestFinishedMessageRequest),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TestResult;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult = { "TestResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms, TestResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(0, nullptr) }; // 2167427140
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_TestResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "OnAdditionalTestFinishedMessageRequest", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::PropPointers), sizeof(FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(FunctionalTest_eventOnAdditionalTestFinishedMessageRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFunctionalTest Function OnAdditionalTestFinishedMessageRequest

// Begin Class AFunctionalTest Function OnWantsReRunCheck
struct FunctionalTest_eventOnWantsReRunCheck_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FunctionalTest_eventOnWantsReRunCheck_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AFunctionalTest_OnWantsReRunCheck = FName(TEXT("OnWantsReRunCheck"));
bool AFunctionalTest::OnWantsReRunCheck() const
{
	FunctionalTest_eventOnWantsReRunCheck_Parms Parms;
	const_cast<AFunctionalTest*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_OnWantsReRunCheck),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** retrieves information whether test wants to have another run just after finishing */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "retrieves information whether test wants to have another run just after finishing" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTest_eventOnWantsReRunCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventOnWantsReRunCheck_Parms), &Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "OnWantsReRunCheck", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::PropPointers), sizeof(FunctionalTest_eventOnWantsReRunCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::Function_MetaDataParams) };
static_assert(sizeof(FunctionalTest_eventOnWantsReRunCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFunctionalTest Function OnWantsReRunCheck

// Begin Class AFunctionalTest Function ReceivePrepareTest
static FName NAME_AFunctionalTest_ReceivePrepareTest = FName(TEXT("ReceivePrepareTest"));
void AFunctionalTest::ReceivePrepareTest()
{
	ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_ReceivePrepareTest),NULL);
}
struct Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Prepare Test is fired once the test starts up, before the test IsReady() and thus before Start Test is called.\n\x09 * So if there's some initial conditions or setup that you might need for your IsReady() check, you might want\n\x09 * to do that here.\n\x09 */" },
		{ "DisplayName", "Prepare Test" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Prepare Test is fired once the test starts up, before the test IsReady() and thus before Start Test is called.\nSo if there's some initial conditions or setup that you might need for your IsReady() check, you might want\nto do that here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "ReceivePrepareTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFunctionalTest Function ReceivePrepareTest

// Begin Class AFunctionalTest Function ReceiveStartTest
static FName NAME_AFunctionalTest_ReceiveStartTest = FName(TEXT("ReceiveStartTest"));
void AFunctionalTest::ReceiveStartTest()
{
	ProcessEvent(FindFunctionChecked(NAME_AFunctionalTest_ReceiveStartTest),NULL);
}
struct Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called once the IsReady() check for the test returns true.  After that happens the test has Officially started,\n\x09 * and it will begin receiving Ticks in the blueprint.\n\x09 */" },
		{ "DisplayName", "Start Test" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called once the IsReady() check for the test returns true.  After that happens the test has Officially started,\nand it will begin receiving Ticks in the blueprint." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "ReceiveStartTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFunctionalTest Function ReceiveStartTest

// Begin Class AFunctionalTest Function RegisterAutoDestroyActor
struct Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics
{
	struct FunctionalTest_eventRegisterAutoDestroyActor_Parms
	{
		AActor* ActorToAutoDestroy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Development" },
		{ "Comment", "/** Actors registered this way will be automatically destroyed (by limiting their lifespan)\n\x09 *\x09on test finish */" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Actors registered this way will be automatically destroyed (by limiting their lifespan)\n    on test finish" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToAutoDestroy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::NewProp_ActorToAutoDestroy = { "ActorToAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventRegisterAutoDestroyActor_Parms, ActorToAutoDestroy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::NewProp_ActorToAutoDestroy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "RegisterAutoDestroyActor", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FunctionalTest_eventRegisterAutoDestroyActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FunctionalTest_eventRegisterAutoDestroyActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execRegisterAutoDestroyActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToAutoDestroy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAutoDestroyActor(Z_Param_ActorToAutoDestroy);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function RegisterAutoDestroyActor

// Begin Class AFunctionalTest Function SetConsoleVariable
struct Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics
{
	struct FunctionalTest_eventSetConsoleVariable_Parms
	{
		FString Name;
		FString InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Sets the CVar from the given input. Variable gets reset after the test. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Sets the CVar from the given input. Variable gets reset after the test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetConsoleVariable_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetConsoleVariable_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "SetConsoleVariable", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::FunctionalTest_eventSetConsoleVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::FunctionalTest_eventSetConsoleVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execSetConsoleVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConsoleVariable(Z_Param_Name,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function SetConsoleVariable

// Begin Class AFunctionalTest Function SetConsoleVariableFromBoolean
struct Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics
{
	struct FunctionalTest_eventSetConsoleVariableFromBoolean_Parms
	{
		FString Name;
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Sets the CVar from the given input. Variable gets reset after the test. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Sets the CVar from the given input. Variable gets reset after the test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetConsoleVariableFromBoolean_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((FunctionalTest_eventSetConsoleVariableFromBoolean_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTest_eventSetConsoleVariableFromBoolean_Parms), &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "SetConsoleVariableFromBoolean", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::FunctionalTest_eventSetConsoleVariableFromBoolean_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::FunctionalTest_eventSetConsoleVariableFromBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execSetConsoleVariableFromBoolean)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConsoleVariableFromBoolean(Z_Param_Name,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function SetConsoleVariableFromBoolean

// Begin Class AFunctionalTest Function SetConsoleVariableFromFloat
struct Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics
{
	struct FunctionalTest_eventSetConsoleVariableFromFloat_Parms
	{
		FString Name;
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Sets the CVar from the given input. Variable gets reset after the test. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Sets the CVar from the given input. Variable gets reset after the test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetConsoleVariableFromFloat_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetConsoleVariableFromFloat_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "SetConsoleVariableFromFloat", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::FunctionalTest_eventSetConsoleVariableFromFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::FunctionalTest_eventSetConsoleVariableFromFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execSetConsoleVariableFromFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConsoleVariableFromFloat(Z_Param_Name,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function SetConsoleVariableFromFloat

// Begin Class AFunctionalTest Function SetConsoleVariableFromInteger
struct Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics
{
	struct FunctionalTest_eventSetConsoleVariableFromInteger_Parms
	{
		FString Name;
		int32 InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/** Sets the CVar from the given input. Variable gets reset after the test. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Sets the CVar from the given input. Variable gets reset after the test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetConsoleVariableFromInteger_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetConsoleVariableFromInteger_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "SetConsoleVariableFromInteger", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::FunctionalTest_eventSetConsoleVariableFromInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::FunctionalTest_eventSetConsoleVariableFromInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execSetConsoleVariableFromInteger)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConsoleVariableFromInteger(Z_Param_Name,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class AFunctionalTest Function SetConsoleVariableFromInteger

// Begin Class AFunctionalTest Function SetTimeLimit
struct Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics
{
	struct FunctionalTest_eventSetTimeLimit_Parms
	{
		float NewTimeLimit;
		EFunctionalTestResult ResultWhenTimeRunsOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTimeLimit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultWhenTimeRunsOut_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultWhenTimeRunsOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_NewTimeLimit = { "NewTimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetTimeLimit_Parms, NewTimeLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut = { "ResultWhenTimeRunsOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTest_eventSetTimeLimit_Parms, ResultWhenTimeRunsOut), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(0, nullptr) }; // 2167427140
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_NewTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::NewProp_ResultWhenTimeRunsOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalTest, nullptr, "SetTimeLimit", nullptr, nullptr, Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FunctionalTest_eventSetTimeLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FunctionalTest_eventSetTimeLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalTest_SetTimeLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalTest_SetTimeLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalTest::execSetTimeLimit)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTimeLimit);
	P_GET_ENUM(EFunctionalTestResult,Z_Param_ResultWhenTimeRunsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeLimit(Z_Param_NewTimeLimit,EFunctionalTestResult(Z_Param_ResultWhenTimeRunsOut));
	P_NATIVE_END;
}
// End Class AFunctionalTest Function SetTimeLimit

// Begin Class AFunctionalTest
void AFunctionalTest::StaticRegisterNativesAFunctionalTest()
{
	UClass* Class = AFunctionalTest::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddError", &AFunctionalTest::execAddError },
		{ "AddInfo", &AFunctionalTest::execAddInfo },
		{ "AddRerun", &AFunctionalTest::execAddRerun },
		{ "AddWarning", &AFunctionalTest::execAddWarning },
		{ "AssertEqual_Bool", &AFunctionalTest::execAssertEqual_Bool },
		{ "AssertEqual_Box2D", &AFunctionalTest::execAssertEqual_Box2D },
		{ "AssertEqual_Double", &AFunctionalTest::execAssertEqual_Double },
		{ "AssertEqual_Float", &AFunctionalTest::execAssertEqual_Float },
		{ "AssertEqual_Int", &AFunctionalTest::execAssertEqual_Int },
		{ "AssertEqual_Matrix", &AFunctionalTest::execAssertEqual_Matrix },
		{ "AssertEqual_Name", &AFunctionalTest::execAssertEqual_Name },
		{ "AssertEqual_Object", &AFunctionalTest::execAssertEqual_Object },
		{ "AssertEqual_Plane", &AFunctionalTest::execAssertEqual_Plane },
		{ "AssertEqual_Quat", &AFunctionalTest::execAssertEqual_Quat },
		{ "AssertEqual_Rotator", &AFunctionalTest::execAssertEqual_Rotator },
		{ "AssertEqual_RotatorOrientation", &AFunctionalTest::execAssertEqual_RotatorOrientation },
		{ "AssertEqual_String", &AFunctionalTest::execAssertEqual_String },
		{ "AssertEqual_TraceQueryResults", &AFunctionalTest::execAssertEqual_TraceQueryResults },
		{ "AssertEqual_Transform", &AFunctionalTest::execAssertEqual_Transform },
		{ "AssertEqual_Vector", &AFunctionalTest::execAssertEqual_Vector },
		{ "AssertEqual_Vector2D", &AFunctionalTest::execAssertEqual_Vector2D },
		{ "AssertEqual_Vector4", &AFunctionalTest::execAssertEqual_Vector4 },
		{ "AssertFalse", &AFunctionalTest::execAssertFalse },
		{ "AssertIsValid", &AFunctionalTest::execAssertIsValid },
		{ "AssertNotEqual_Box2D", &AFunctionalTest::execAssertNotEqual_Box2D },
		{ "AssertNotEqual_Matrix", &AFunctionalTest::execAssertNotEqual_Matrix },
		{ "AssertNotEqual_Plane", &AFunctionalTest::execAssertNotEqual_Plane },
		{ "AssertNotEqual_Quat", &AFunctionalTest::execAssertNotEqual_Quat },
		{ "AssertNotEqual_Rotator", &AFunctionalTest::execAssertNotEqual_Rotator },
		{ "AssertNotEqual_String", &AFunctionalTest::execAssertNotEqual_String },
		{ "AssertNotEqual_Transform", &AFunctionalTest::execAssertNotEqual_Transform },
		{ "AssertNotEqual_Vector", &AFunctionalTest::execAssertNotEqual_Vector },
		{ "AssertNotEqual_Vector2D", &AFunctionalTest::execAssertNotEqual_Vector2D },
		{ "AssertNotEqual_Vector4", &AFunctionalTest::execAssertNotEqual_Vector4 },
		{ "AssertTrue", &AFunctionalTest::execAssertTrue },
		{ "AssertValue_DateTime", &AFunctionalTest::execAssertValue_DateTime },
		{ "AssertValue_Double", &AFunctionalTest::execAssertValue_Double },
		{ "AssertValue_Float", &AFunctionalTest::execAssertValue_Float },
		{ "AssertValue_Int", &AFunctionalTest::execAssertValue_Int },
		{ "FinishTest", &AFunctionalTest::execFinishTest },
		{ "GetCurrentRerunReason", &AFunctionalTest::execGetCurrentRerunReason },
		{ "IsEnabled", &AFunctionalTest::execIsEnabled },
		{ "IsReady", &AFunctionalTest::execIsReady },
		{ "IsRunning", &AFunctionalTest::execIsRunning },
		{ "LogMessage", &AFunctionalTest::execLogMessage },
		{ "RegisterAutoDestroyActor", &AFunctionalTest::execRegisterAutoDestroyActor },
		{ "SetConsoleVariable", &AFunctionalTest::execSetConsoleVariable },
		{ "SetConsoleVariableFromBoolean", &AFunctionalTest::execSetConsoleVariableFromBoolean },
		{ "SetConsoleVariableFromFloat", &AFunctionalTest::execSetConsoleVariableFromFloat },
		{ "SetConsoleVariableFromInteger", &AFunctionalTest::execSetConsoleVariableFromInteger },
		{ "SetTimeLimit", &AFunctionalTest::execSetTimeLimit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalTest);
UClass* Z_Construct_UClass_AFunctionalTest_NoRegister()
{
	return AFunctionalTest::StaticClass();
}
struct Z_Construct_UClass_AFunctionalTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering HLOD" },
		{ "IncludePath", "FunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestLabel_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * The owner is the group or person responsible for the test. Generally you should use a group name\n\x09 * like 'Editor' or 'Rendering'. When a test fails it may not be obvious who should investigate\n\x09 * so this provides a associate responsible groups with tests.\n\x09 */" },
		{ "DisplayName", "Owner" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The owner is the group or person responsible for the test. Generally you should use a group name\nlike 'Editor' or 'Rendering'. When a test fails it may not be obvious who should investigate\nso this provides a associate responsible groups with tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * A description of the test, like what is this test trying to determine.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "A description of the test, like what is this test trying to determine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Allows a test to be disabled.  If a test is disabled, it will not appear in the set of\n\x09 * runnable tests (after saving the map).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ScriptName", "IsEnabledValue" },
		{ "ToolTip", "Allows a test to be disabled.  If a test is disabled, it will not appear in the set of\nrunnable tests (after saving the map)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogErrorHandling_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Determines how LogErrors are handled during this test.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ScriptName", "LogErrorHandling" },
		{ "ToolTip", "Determines how LogErrors are handled during this test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogWarningHandling_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Determines how LogWarnings are handled during this test.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ScriptName", "LogWarningHandling" },
		{ "ToolTip", "Determines how LogWarnings are handled during this test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservationPoint_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Allows you to specify another actor to view the test from.  Usually this is a camera you place\n\x09 * in the map to observe the test.  Not useful when running on a build farm, but provides a handy\n\x09 * way to observe the test from a different location than you place the functional test actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Allows you to specify another actor to view the test from.  Usually this is a camera you place\nin the map to observe the test.  Not useful when running on a build farm, but provides a handy\nway to observe the test from a different location than you place the functional test actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDelayGarbageCollection_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * Allows for garbage collection to be delayed. If delayed, garbage collection will be triggered at the end of a test run\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Allows for garbage collection to be delayed. If delayed, garbage collection will be triggered at the end of a test run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomNumbersStream_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "Comment", "/**\n\x09 * A random number stream that you can use during testing.  This number stream will be consistent\n\x09 * every time the test is run.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "A random number stream that you can use during testing.  This number stream will be consistent\nevery time the test is run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreparationTimeLimit_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** The Test's time limit for preparation, this is the time it has to return true when checking IsReady(). '0' means no limit. */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "The Test's time limit for preparation, this is the time it has to return true when checking IsReady(). '0' means no limit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** Test's time limit. '0' means no limit */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Test's time limit. '0' means no limit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimesUpMessage_MetaData[] = {
		{ "Category", "Timeout" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimesUpResult_MetaData[] = {
		{ "Category", "Timeout" },
		{ "Comment", "/** If test is limited by time this is the result that will be returned when time runs out */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "If test is limited by time this is the result that will be returned when time runs out" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTestPrepare_MetaData[] = {
		{ "Comment", "/** Called when the test is ready to prepare */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called when the test is ready to prepare" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTestStart_MetaData[] = {
		{ "Comment", "/** Called when the test is started */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called when the test is started" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTestFinished_MetaData[] = {
		{ "Comment", "/** Called when the test is finished. Use it to clean up */" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "Called when the test is finished. Use it to clean up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoDestroyActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "Comment", "// AG TEMP - solving a compile issue in a temp way to unblock the bui.d\n" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
		{ "ToolTip", "AG TEMP - solving a compile issue in a temp way to unblock the bui.d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalTime_MetaData[] = {
		{ "Category", "Functional Testing" },
		{ "ModuleRelativePath", "Classes/FunctionalTest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestLabel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogErrorHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LogErrorHandling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogWarningHandling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LogWarningHandling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservationPoint;
	static void NewProp_bShouldDelayGarbageCollection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDelayGarbageCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomNumbersStream;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreparationTimeLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TimesUpMessage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimesUpResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimesUpResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestPrepare;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestStart;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoDestroyActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoDestroyActors;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestName;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFunctionalTest_AddError, "AddError" }, // 3935790814
		{ &Z_Construct_UFunction_AFunctionalTest_AddInfo, "AddInfo" }, // 3248993730
		{ &Z_Construct_UFunction_AFunctionalTest_AddRerun, "AddRerun" }, // 2442920304
		{ &Z_Construct_UFunction_AFunctionalTest_AddWarning, "AddWarning" }, // 3625840192
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Bool, "AssertEqual_Bool" }, // 1902266228
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Box2D, "AssertEqual_Box2D" }, // 247449722
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Double, "AssertEqual_Double" }, // 818178181
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Float, "AssertEqual_Float" }, // 1803085606
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Int, "AssertEqual_Int" }, // 3355695401
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Matrix, "AssertEqual_Matrix" }, // 1677150926
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Name, "AssertEqual_Name" }, // 3223805617
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Object, "AssertEqual_Object" }, // 1968160002
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Plane, "AssertEqual_Plane" }, // 2268710288
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Quat, "AssertEqual_Quat" }, // 2382812448
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Rotator, "AssertEqual_Rotator" }, // 3564431456
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_RotatorOrientation, "AssertEqual_RotatorOrientation" }, // 2810116508
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_String, "AssertEqual_String" }, // 3774633427
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_TraceQueryResults, "AssertEqual_TraceQueryResults" }, // 2379015836
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Transform, "AssertEqual_Transform" }, // 923473472
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector, "AssertEqual_Vector" }, // 1516777582
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector2D, "AssertEqual_Vector2D" }, // 189445636
		{ &Z_Construct_UFunction_AFunctionalTest_AssertEqual_Vector4, "AssertEqual_Vector4" }, // 2869846753
		{ &Z_Construct_UFunction_AFunctionalTest_AssertFalse, "AssertFalse" }, // 2864050531
		{ &Z_Construct_UFunction_AFunctionalTest_AssertIsValid, "AssertIsValid" }, // 2915896730
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Box2D, "AssertNotEqual_Box2D" }, // 4036090377
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Matrix, "AssertNotEqual_Matrix" }, // 3859093549
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Plane, "AssertNotEqual_Plane" }, // 4201704099
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Quat, "AssertNotEqual_Quat" }, // 4142039095
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Rotator, "AssertNotEqual_Rotator" }, // 646496138
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_String, "AssertNotEqual_String" }, // 3301641842
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Transform, "AssertNotEqual_Transform" }, // 3429233912
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector, "AssertNotEqual_Vector" }, // 3175540549
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector2D, "AssertNotEqual_Vector2D" }, // 2895316678
		{ &Z_Construct_UFunction_AFunctionalTest_AssertNotEqual_Vector4, "AssertNotEqual_Vector4" }, // 4185222366
		{ &Z_Construct_UFunction_AFunctionalTest_AssertTrue, "AssertTrue" }, // 2530613775
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_DateTime, "AssertValue_DateTime" }, // 1466660262
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_Double, "AssertValue_Double" }, // 1162071741
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_Float, "AssertValue_Float" }, // 3129734365
		{ &Z_Construct_UFunction_AFunctionalTest_AssertValue_Int, "AssertValue_Int" }, // 870988275
		{ &Z_Construct_UFunction_AFunctionalTest_DebugGatherRelevantActors, "DebugGatherRelevantActors" }, // 984018585
		{ &Z_Construct_UFunction_AFunctionalTest_FinishTest, "FinishTest" }, // 2656190829
		{ &Z_Construct_UFunction_AFunctionalTest_GetCurrentRerunReason, "GetCurrentRerunReason" }, // 2753096313
		{ &Z_Construct_UFunction_AFunctionalTest_IsEnabled, "IsEnabled" }, // 2201162522
		{ &Z_Construct_UFunction_AFunctionalTest_IsReady, "IsReady" }, // 3424189659
		{ &Z_Construct_UFunction_AFunctionalTest_IsRunning, "IsRunning" }, // 3382193622
		{ &Z_Construct_UFunction_AFunctionalTest_LogMessage, "LogMessage" }, // 3454990627
		{ &Z_Construct_UFunction_AFunctionalTest_OnAdditionalTestFinishedMessageRequest, "OnAdditionalTestFinishedMessageRequest" }, // 2026161515
		{ &Z_Construct_UFunction_AFunctionalTest_OnWantsReRunCheck, "OnWantsReRunCheck" }, // 1158444878
		{ &Z_Construct_UFunction_AFunctionalTest_ReceivePrepareTest, "ReceivePrepareTest" }, // 3426311784
		{ &Z_Construct_UFunction_AFunctionalTest_ReceiveStartTest, "ReceiveStartTest" }, // 221953050
		{ &Z_Construct_UFunction_AFunctionalTest_RegisterAutoDestroyActor, "RegisterAutoDestroyActor" }, // 1937791059
		{ &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariable, "SetConsoleVariable" }, // 27134548
		{ &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromBoolean, "SetConsoleVariableFromBoolean" }, // 1676225578
		{ &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromFloat, "SetConsoleVariableFromFloat" }, // 4056978180
		{ &Z_Construct_UFunction_AFunctionalTest_SetConsoleVariableFromInteger, "SetConsoleVariableFromInteger" }, // 3162392269
		{ &Z_Construct_UFunction_AFunctionalTest_SetTimeLimit, "SetTimeLimit" }, // 1637648485
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestLabel = { "TestLabel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, TestLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestLabel_MetaData), NewProp_TestLabel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
void Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((AFunctionalTest*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AFunctionalTest), &Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling = { "LogErrorHandling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, LogErrorHandling), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogErrorHandling_MetaData), NewProp_LogErrorHandling_MetaData) }; // 4182976181
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling = { "LogWarningHandling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, LogWarningHandling), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestLogHandling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogWarningHandling_MetaData), NewProp_LogWarningHandling_MetaData) }; // 4182976181
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_ObservationPoint = { "ObservationPoint", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, ObservationPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservationPoint_MetaData), NewProp_ObservationPoint_MetaData) };
void Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bShouldDelayGarbageCollection_SetBit(void* Obj)
{
	((AFunctionalTest*)Obj)->bShouldDelayGarbageCollection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bShouldDelayGarbageCollection = { "bShouldDelayGarbageCollection", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AFunctionalTest), &Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bShouldDelayGarbageCollection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDelayGarbageCollection_MetaData), NewProp_bShouldDelayGarbageCollection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RandomNumbersStream = { "RandomNumbersStream", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, RandomNumbersStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomNumbersStream_MetaData), NewProp_RandomNumbersStream_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, Result), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2167427140
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_PreparationTimeLimit = { "PreparationTimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, PreparationTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreparationTimeLimit_MetaData), NewProp_PreparationTimeLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, TimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLimit_MetaData), NewProp_TimeLimit_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpMessage = { "TimesUpMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, TimesUpMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimesUpMessage_MetaData), NewProp_TimesUpMessage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult = { "TimesUpResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, TimesUpResult), Z_Construct_UEnum_FunctionalTesting_EFunctionalTestResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimesUpResult_MetaData), NewProp_TimesUpResult_MetaData) }; // 2167427140
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestPrepare = { "OnTestPrepare", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, OnTestPrepare), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTestPrepare_MetaData), NewProp_OnTestPrepare_MetaData) }; // 2981851264
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestStart = { "OnTestStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, OnTestStart), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTestStart_MetaData), NewProp_OnTestStart_MetaData) }; // 2981851264
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestFinished = { "OnTestFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, OnTestFinished), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTestFinished_MetaData), NewProp_OnTestFinished_MetaData) }; // 2981851264
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors_Inner = { "AutoDestroyActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors = { "AutoDestroyActors", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, AutoDestroyActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoDestroyActors_MetaData), NewProp_AutoDestroyActors_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RenderComp = { "RenderComp", nullptr, (EPropertyFlags)0x0114000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, RenderComp), Z_Construct_UClass_UFuncTestRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderComp_MetaData), NewProp_RenderComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0114000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, TestName), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestName_MetaData), NewProp_TestName_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((AFunctionalTest*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFunctionalTest), &Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalTest, TotalTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalTime_MetaData), NewProp_TotalTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFunctionalTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogErrorHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_LogWarningHandling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_ObservationPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bShouldDelayGarbageCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RandomNumbersStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_PreparationTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TimesUpResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestPrepare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_OnTestFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_AutoDestroyActors,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_RenderComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TestName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_bIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalTest_Statics::NewProp_TotalTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFunctionalTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalTest_Statics::ClassParams = {
	&AFunctionalTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFunctionalTest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AFunctionalTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFunctionalTest()
{
	if (!Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton, Z_Construct_UClass_AFunctionalTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFunctionalTest.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalTest>()
{
	return AFunctionalTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalTest);
AFunctionalTest::~AFunctionalTest() {}
// End Class AFunctionalTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EComparisonMethod_StaticEnum, TEXT("EComparisonMethod"), &Z_Registration_Info_UEnum_EComparisonMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3438036448U) },
		{ EFunctionalTestResult_StaticEnum, TEXT("EFunctionalTestResult"), &Z_Registration_Info_UEnum_EFunctionalTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2167427140U) },
		{ EFunctionalTestLogHandling_StaticEnum, TEXT("EFunctionalTestLogHandling"), &Z_Registration_Info_UEnum_EFunctionalTestLogHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4182976181U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationPerformaceHelper, UAutomationPerformaceHelper::StaticClass, TEXT("UAutomationPerformaceHelper"), &Z_Registration_Info_UClass_UAutomationPerformaceHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationPerformaceHelper), 4192074986U) },
		{ Z_Construct_UClass_AFunctionalTest, AFunctionalTest::StaticClass, TEXT("AFunctionalTest"), &Z_Registration_Info_UClass_AFunctionalTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalTest), 153784995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_787063049(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
