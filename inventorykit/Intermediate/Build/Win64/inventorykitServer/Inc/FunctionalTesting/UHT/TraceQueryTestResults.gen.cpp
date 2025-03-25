// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/TraceQueryTestResults.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceQueryTestResults() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestNames();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin ScriptStruct FTraceChannelTestBatchOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions;
class UScriptStruct* FTraceChannelTestBatchOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceChannelTestBatchOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceChannelTestBatchOptions>()
{
	return FTraceChannelTestBatchOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLineTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do line traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do line traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSphereTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do sphere traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do sphere traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCapsuleTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do capsule traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do capsule traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBoxTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do box traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do box traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChannelTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do channel traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do channel traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bObjectsTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do object traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do object traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProfileTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do profile traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do profile traces" },
	};
#endif // WITH_METADATA
	static void NewProp_bLineTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineTrace;
	static void NewProp_bSphereTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSphereTrace;
	static void NewProp_bCapsuleTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapsuleTrace;
	static void NewProp_bBoxTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxTrace;
	static void NewProp_bChannelTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannelTrace;
	static void NewProp_bObjectsTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bObjectsTrace;
	static void NewProp_bProfileTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProfileTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceChannelTestBatchOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_SetBit(void* Obj)
{
	((FTraceChannelTestBatchOptions*)Obj)->bLineTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace = { "bLineTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLineTrace_MetaData), NewProp_bLineTrace_MetaData) };
void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_SetBit(void* Obj)
{
	((FTraceChannelTestBatchOptions*)Obj)->bSphereTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace = { "bSphereTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSphereTrace_MetaData), NewProp_bSphereTrace_MetaData) };
void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_SetBit(void* Obj)
{
	((FTraceChannelTestBatchOptions*)Obj)->bCapsuleTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace = { "bCapsuleTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCapsuleTrace_MetaData), NewProp_bCapsuleTrace_MetaData) };
void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_SetBit(void* Obj)
{
	((FTraceChannelTestBatchOptions*)Obj)->bBoxTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace = { "bBoxTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBoxTrace_MetaData), NewProp_bBoxTrace_MetaData) };
void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_SetBit(void* Obj)
{
	((FTraceChannelTestBatchOptions*)Obj)->bChannelTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace = { "bChannelTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChannelTrace_MetaData), NewProp_bChannelTrace_MetaData) };
void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_SetBit(void* Obj)
{
	((FTraceChannelTestBatchOptions*)Obj)->bObjectsTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace = { "bObjectsTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bObjectsTrace_MetaData), NewProp_bObjectsTrace_MetaData) };
void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_SetBit(void* Obj)
{
	((FTraceChannelTestBatchOptions*)Obj)->bProfileTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace = { "bProfileTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProfileTrace_MetaData), NewProp_bProfileTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	&NewStructOps,
	"TraceChannelTestBatchOptions",
	Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers),
	sizeof(FTraceChannelTestBatchOptions),
	alignof(FTraceChannelTestBatchOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions()
{
	if (!Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.InnerSingleton, Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.InnerSingleton;
}
// End ScriptStruct FTraceChannelTestBatchOptions

// Begin ScriptStruct FTraceQueryTestNames
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceQueryTestNames;
class UScriptStruct* FTraceQueryTestNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceQueryTestNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestNames, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestNames"));
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestNames.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceQueryTestNames>()
{
	return FTraceQueryTestNames::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PhysicalMaterialName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestNames>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestNames, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName = { "PhysicalMaterialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestNames, PhysicalMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialName_MetaData), NewProp_PhysicalMaterialName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestNames, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	&NewStructOps,
	"TraceQueryTestNames",
	Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers),
	sizeof(FTraceQueryTestNames),
	alignof(FTraceQueryTestNames),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestNames()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestNames.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceQueryTestNames.InnerSingleton, Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestNames.InnerSingleton;
}
// End ScriptStruct FTraceQueryTestNames

// Begin ScriptStruct FTraceQueryTestResultsInnerMost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost;
class UScriptStruct* FTraceQueryTestResultsInnerMost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestResultsInnerMost"));
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceQueryTestResultsInnerMost>()
{
	return FTraceQueryTestResultsInnerMost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleHit_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Result from doing a single sweep*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Result from doing a single sweep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleNames_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Names found from doing a single sweep*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Names found from doing a single sweep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleResult_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The true/false value returned from the single sweep */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The true/false value returned from the single sweep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiHits_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Result from doing a multi sweep */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Result from doing a multi sweep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiNames_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Names found from doing a multi sweep*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Names found from doing a multi sweep" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiResult_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The true/false value returned from the multi sweep */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The true/false value returned from the multi sweep" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleNames;
	static void NewProp_bSingleResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MultiHits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MultiNames;
	static void NewProp_bMultiResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInnerMost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit = { "SingleHit", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, SingleHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleHit_MetaData), NewProp_SingleHit_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames = { "SingleNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, SingleNames), Z_Construct_UScriptStruct_FTraceQueryTestNames, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleNames_MetaData), NewProp_SingleNames_MetaData) }; // 924028695
void Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_SetBit(void* Obj)
{
	((FTraceQueryTestResultsInnerMost*)Obj)->bSingleResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult = { "bSingleResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceQueryTestResultsInnerMost), &Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleResult_MetaData), NewProp_bSingleResult_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_Inner = { "MultiHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits = { "MultiHits", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, MultiHits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiHits_MetaData), NewProp_MultiHits_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_Inner = { "MultiNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTraceQueryTestNames, METADATA_PARAMS(0, nullptr) }; // 924028695
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames = { "MultiNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, MultiNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiNames_MetaData), NewProp_MultiNames_MetaData) }; // 924028695
void Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_SetBit(void* Obj)
{
	((FTraceQueryTestResultsInnerMost*)Obj)->bMultiResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult = { "bMultiResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTraceQueryTestResultsInnerMost), &Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiResult_MetaData), NewProp_bMultiResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	&NewStructOps,
	"TraceQueryTestResultsInnerMost",
	Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers),
	sizeof(FTraceQueryTestResultsInnerMost),
	alignof(FTraceQueryTestResultsInnerMost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.InnerSingleton, Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.InnerSingleton;
}
// End ScriptStruct FTraceQueryTestResultsInnerMost

// Begin ScriptStruct FTraceQueryTestResultsInner
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner;
class UScriptStruct* FTraceQueryTestResultsInner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestResultsInner"));
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceQueryTestResultsInner>()
{
	return FTraceQueryTestResultsInner::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the line trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the line trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the sphere */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the sphere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the capsule*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the capsule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the box*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SphereResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInner>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults = { "LineResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInner, LineResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineResults_MetaData), NewProp_LineResults_MetaData) }; // 4227026583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults = { "SphereResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInner, SphereResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereResults_MetaData), NewProp_SphereResults_MetaData) }; // 4227026583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults = { "CapsuleResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInner, CapsuleResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleResults_MetaData), NewProp_CapsuleResults_MetaData) }; // 4227026583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults = { "BoxResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceQueryTestResultsInner, BoxResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxResults_MetaData), NewProp_BoxResults_MetaData) }; // 4227026583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	&NewStructOps,
	"TraceQueryTestResultsInner",
	Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers),
	sizeof(FTraceQueryTestResultsInner),
	alignof(FTraceQueryTestResultsInner),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.InnerSingleton, Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.InnerSingleton;
}
// End ScriptStruct FTraceQueryTestResultsInner

// Begin Class UTraceQueryTestResults Function ToString
struct Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics
{
	struct TraceQueryTestResults_eventToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Output string value */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Output string value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraceQueryTestResults_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceQueryTestResults, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::TraceQueryTestResults_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::TraceQueryTestResults_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraceQueryTestResults_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTraceQueryTestResults::execToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString();
	P_NATIVE_END;
}
// End Class UTraceQueryTestResults Function ToString

// Begin Class UTraceQueryTestResults
void UTraceQueryTestResults::StaticRegisterNativesUTraceQueryTestResults()
{
	UClass* Class = UTraceQueryTestResults::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToString", &UTraceQueryTestResults::execToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceQueryTestResults);
UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister()
{
	return UTraceQueryTestResults::StaticClass();
}
struct Z_Construct_UClass_UTraceQueryTestResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TraceQueryTestResults.h" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Results for channel trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for channel trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Results for object trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for object trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Results for profile trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for profile trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatchOptions_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BatchOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceQueryTestResults_ToString, "ToString" }, // 3764575121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceQueryTestResults>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults = { "ChannelResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceQueryTestResults, ChannelResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelResults_MetaData), NewProp_ChannelResults_MetaData) }; // 3586758918
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults = { "ObjectResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceQueryTestResults, ObjectResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectResults_MetaData), NewProp_ObjectResults_MetaData) }; // 3586758918
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults = { "ProfileResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceQueryTestResults, ProfileResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileResults_MetaData), NewProp_ProfileResults_MetaData) }; // 3586758918
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions = { "BatchOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceQueryTestResults, BatchOptions), Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatchOptions_MetaData), NewProp_BatchOptions_MetaData) }; // 1655869919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTraceQueryTestResults_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceQueryTestResults_Statics::ClassParams = {
	&UTraceQueryTestResults::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams), Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTraceQueryTestResults()
{
	if (!Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton, Z_Construct_UClass_UTraceQueryTestResults_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<UTraceQueryTestResults>()
{
	return UTraceQueryTestResults::StaticClass();
}
UTraceQueryTestResults::UTraceQueryTestResults(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceQueryTestResults);
UTraceQueryTestResults::~UTraceQueryTestResults() {}
// End Class UTraceQueryTestResults

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTraceChannelTestBatchOptions::StaticStruct, Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewStructOps, TEXT("TraceChannelTestBatchOptions"), &Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceChannelTestBatchOptions), 1655869919U) },
		{ FTraceQueryTestNames::StaticStruct, Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewStructOps, TEXT("TraceQueryTestNames"), &Z_Registration_Info_UScriptStruct_TraceQueryTestNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceQueryTestNames), 924028695U) },
		{ FTraceQueryTestResultsInnerMost::StaticStruct, Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewStructOps, TEXT("TraceQueryTestResultsInnerMost"), &Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceQueryTestResultsInnerMost), 4227026583U) },
		{ FTraceQueryTestResultsInner::StaticStruct, Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewStructOps, TEXT("TraceQueryTestResultsInner"), &Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceQueryTestResultsInner), 3586758918U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTraceQueryTestResults, UTraceQueryTestResults::StaticClass, TEXT("UTraceQueryTestResults"), &Z_Registration_Info_UClass_UTraceQueryTestResults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceQueryTestResults), 2011547623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_1365278266(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
