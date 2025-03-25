// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/FunctionalAITest.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalAITest() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITest();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITest_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITestBase();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalAITestBase_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature();
FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnInfo();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnInfoBase();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnSet();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnSetBase();
FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FPendingDelayedSpawn();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Delegate FFunctionalTestAISpawned
struct Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics
{
	struct _Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms
	{
		AAIController* Controller;
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting, nullptr, "FunctionalTestAISpawned__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFunctionalTestAISpawned_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestAISpawned, AAIController* Controller, APawn* Pawn)
{
	struct _Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms
	{
		AAIController* Controller;
		APawn* Pawn;
	};
	_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms Parms;
	Parms.Controller=Controller;
	Parms.Pawn=Pawn;
	FunctionalTestAISpawned.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFunctionalTestAISpawned

// Begin ScriptStruct FAITestSpawnInfoBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase;
class UScriptStruct* FAITestSpawnInfoBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnInfoBase, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AITestSpawnInfoBase"));
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAITestSpawnInfoBase>()
{
	return FAITestSpawnInfoBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""FAITestSpawnInfoBase\n*\n*\x09""Base struct defining where & when to spawn. Used within a FAITestSpawnSetBase class.\n*/" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "FAITestSpawnInfoBase\n\nBase struct defining where & when to spawn. Used within a FAITestSpawnSetBase class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "Comment", "/** Where should AI be spawned */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Where should AI be spawned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberToSpawn_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDelay_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ClampMin", "0" },
		{ "Comment", "/** delay between consecutive spawn attempts */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "delay between consecutive spawn attempts" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreSpawnDelay_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ClampMin", "0" },
		{ "Comment", "/** delay before attempting first spawn */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "delay before attempting first spawn" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreSpawnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITestSpawnInfoBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfoBase, SpawnLocation), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_NumberToSpawn = { "NumberToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfoBase, NumberToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberToSpawn_MetaData), NewProp_NumberToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_SpawnDelay = { "SpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfoBase, SpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDelay_MetaData), NewProp_SpawnDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_PreSpawnDelay = { "PreSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfoBase, PreSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreSpawnDelay_MetaData), NewProp_PreSpawnDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_NumberToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_SpawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewProp_PreSpawnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	&NewStructOps,
	"AITestSpawnInfoBase",
	Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::PropPointers),
	sizeof(FAITestSpawnInfoBase),
	alignof(FAITestSpawnInfoBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnInfoBase()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase.InnerSingleton, Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase.InnerSingleton;
}
// End ScriptStruct FAITestSpawnInfoBase

// Begin ScriptStruct FAITestSpawnInfo
static_assert(std::is_polymorphic<FAITestSpawnInfo>() == std::is_polymorphic<FAITestSpawnInfoBase>(), "USTRUCT FAITestSpawnInfo cannot be polymorphic unless super FAITestSpawnInfoBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITestSpawnInfo;
class UScriptStruct* FAITestSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITestSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnInfo, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AITestSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnInfo.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAITestSpawnInfo>()
{
	return FAITestSpawnInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""FAITestSpawnInfo\n*\n*\x09Generic AI Test Spawn Info used in FAITestSpawnSet within a generic AFunctionalAITest test.\n*/" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "FAITestSpawnInfo\n\nGeneric AI Test Spawn Info used in FAITestSpawnSet within a generic AFunctionalAITest test." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "Comment", "/** Determines AI to be spawned */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Determines AI to be spawned" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerClass_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "Comment", "/** class to override default pawn's controller class. If None the default will be used*/" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "class to override default pawn's controller class. If None the default will be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "Comment", "/** if set will be applied to spawned AI */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "if set will be applied to spawned AI" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeamID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITestSpawnInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfo, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfo, ControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerClass_MetaData), NewProp_ControllerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfo, TeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamID_MetaData), NewProp_TeamID_MetaData) }; // 3379033268
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnInfo, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_ControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_TeamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	Z_Construct_UScriptStruct_FAITestSpawnInfoBase,
	&NewStructOps,
	"AITestSpawnInfo",
	Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::PropPointers),
	sizeof(FAITestSpawnInfo),
	alignof(FAITestSpawnInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITestSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnInfo.InnerSingleton;
}
// End ScriptStruct FAITestSpawnInfo

// Begin ScriptStruct FPendingDelayedSpawn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PendingDelayedSpawn;
class UScriptStruct* FPendingDelayedSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PendingDelayedSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PendingDelayedSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingDelayedSpawn, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("PendingDelayedSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_PendingDelayedSpawn.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FPendingDelayedSpawn>()
{
	return FPendingDelayedSpawn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""FPendingDelayedSpawn\n*\n*\x09Struct defining a pending spawn request within a AFunctionalAITestBase.\n*/" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "FPendingDelayedSpawn\n\nStruct defining a pending spawn request within a AFunctionalAITestBase." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingDelayedSpawn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	&NewStructOps,
	"PendingDelayedSpawn",
	nullptr,
	0,
	sizeof(FPendingDelayedSpawn),
	alignof(FPendingDelayedSpawn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPendingDelayedSpawn()
{
	if (!Z_Registration_Info_UScriptStruct_PendingDelayedSpawn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PendingDelayedSpawn.InnerSingleton, Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PendingDelayedSpawn.InnerSingleton;
}
// End ScriptStruct FPendingDelayedSpawn

// Begin ScriptStruct FAITestSpawnSetBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITestSpawnSetBase;
class UScriptStruct* FAITestSpawnSetBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnSetBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITestSpawnSetBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnSetBase, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AITestSpawnSetBase"));
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnSetBase.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAITestSpawnSetBase>()
{
	return FAITestSpawnSetBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""FAITestSpawnSetBase\n*\n*\x09""Base struct defining an AI Test Spawn Set that are used in AFunctionalAITestBase tests.\n*/" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "FAITestSpawnSetBase\n\nBase struct defining an AI Test Spawn Set that are used in AFunctionalAITestBase tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "Comment", "/** give the set a name to help identify it if need be */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "give the set a name to help identify it if need be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackSpawnLocation_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "Comment", "/** location used for spawning if spawn info doesn't define one */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "location used for spawning if spawn info doesn't define one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackSpawnLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITestSpawnSetBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnSetBase, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FAITestSpawnSetBase*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAITestSpawnSetBase), &Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_FallbackSpawnLocation = { "FallbackSpawnLocation", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnSetBase, FallbackSpawnLocation), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackSpawnLocation_MetaData), NewProp_FallbackSpawnLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewProp_FallbackSpawnLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	nullptr,
	&NewStructOps,
	"AITestSpawnSetBase",
	Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::PropPointers),
	sizeof(FAITestSpawnSetBase),
	alignof(FAITestSpawnSetBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnSetBase()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnSetBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITestSpawnSetBase.InnerSingleton, Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnSetBase.InnerSingleton;
}
// End ScriptStruct FAITestSpawnSetBase

// Begin ScriptStruct FAITestSpawnSet
static_assert(std::is_polymorphic<FAITestSpawnSet>() == std::is_polymorphic<FAITestSpawnSetBase>(), "USTRUCT FAITestSpawnSet cannot be polymorphic unless super FAITestSpawnSetBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITestSpawnSet;
class UScriptStruct* FAITestSpawnSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITestSpawnSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnSet, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AITestSpawnSet"));
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnSet.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAITestSpawnSet>()
{
	return FAITestSpawnSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAITestSpawnSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n*\x09""FAITestSpawnSet\n*\n*\x09Generic AI Test Spawn Set that is used in regular AFunctionalAITest tests.\n*/" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "FAITestSpawnSet\n\nGeneric AI Test Spawn Set that is used in regular AFunctionalAITest tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfoContainer_MetaData[] = {
		{ "Category", "AISpawn" },
		{ "Comment", "/** what to spawn */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "what to spawn" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInfoContainer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnInfoContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITestSpawnSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer_Inner = { "SpawnInfoContainer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAITestSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 3846163117
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer = { "SpawnInfoContainer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITestSpawnSet, SpawnInfoContainer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInfoContainer_MetaData), NewProp_SpawnInfoContainer_MetaData) }; // 3846163117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewProp_SpawnInfoContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	Z_Construct_UScriptStruct_FAITestSpawnSetBase,
	&NewStructOps,
	"AITestSpawnSet",
	Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::PropPointers),
	sizeof(FAITestSpawnSet),
	alignof(FAITestSpawnSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAITestSpawnSet()
{
	if (!Z_Registration_Info_UScriptStruct_AITestSpawnSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITestSpawnSet.InnerSingleton, Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AITestSpawnSet.InnerSingleton;
}
// End ScriptStruct FAITestSpawnSet

// Begin Class AFunctionalAITestBase Function IsOneOfSpawnedPawns
struct Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics
{
	struct FunctionalAITestBase_eventIsOneOfSpawnedPawns_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Development" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalAITestBase_eventIsOneOfSpawnedPawns_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalAITestBase_eventIsOneOfSpawnedPawns_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalAITestBase_eventIsOneOfSpawnedPawns_Parms), &Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFunctionalAITestBase, nullptr, "IsOneOfSpawnedPawns", nullptr, nullptr, Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::FunctionalAITestBase_eventIsOneOfSpawnedPawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::FunctionalAITestBase_eventIsOneOfSpawnedPawns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFunctionalAITestBase::execIsOneOfSpawnedPawns)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOneOfSpawnedPawns(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class AFunctionalAITestBase Function IsOneOfSpawnedPawns

// Begin Class AFunctionalAITestBase
void AFunctionalAITestBase::StaticRegisterNativesAFunctionalAITestBase()
{
	UClass* Class = AFunctionalAITestBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsOneOfSpawnedPawns", &AFunctionalAITestBase::execIsOneOfSpawnedPawns },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalAITestBase);
UClass* Z_Construct_UClass_AFunctionalAITestBase_NoRegister()
{
	return AFunctionalAITestBase::StaticClass();
}
struct Z_Construct_UClass_AFunctionalAITestBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n*\x09""AFunctionalAITestBase\n*\n*\x09""Base abstract class defining a Functional AI Test.\n*\x09You can derive from this base class to create a test with a different type of SpawnSets.\n*/" },
		{ "HideCategories", "Actor Input Rendering HLOD" },
		{ "IncludePath", "FunctionalAITest.h" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AFunctionalAITestBase\n\nBase abstract class defining a Functional AI Test.\nYou can derive from this base class to create a test with a different type of SpawnSets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationRandomizationRange_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawns_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingDelayedSpawns_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawnSetIndex_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpawnSetName_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAISpawned_MetaData[] = {
		{ "Comment", "/** Called when a single AI finished spawning */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Called when a single AI finished spawning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAllAISPawned_MetaData[] = {
		{ "Comment", "/** Called when a all AI finished spawning */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "Called when a all AI finished spawning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshDebugOrigin_MetaData[] = {
		{ "Category", "NavMeshDebug" },
		{ "Comment", "/** navmesh debug: log navoctree modifiers around this point */" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "navmesh debug: log navoctree modifiers around this point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshDebugExtent_MetaData[] = {
		{ "Category", "NavMeshDebug" },
		{ "Comment", "/** navmesh debug: extent around NavMeshDebugOrigin */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "navmesh debug: extent around NavMeshDebugOrigin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForNavMesh_MetaData[] = {
		{ "Category", "AITest" },
		{ "Comment", "/** if set, ftest will postpone start until navmesh is fully generated */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "if set, ftest will postpone start until navmesh is fully generated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugNavMeshOnTimeout_MetaData[] = {
		{ "Category", "NavMeshDebug" },
		{ "Comment", "/** if set, ftest will postpone start until navmesh is fully generated */" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "if set, ftest will postpone start until navmesh is fully generated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnLocationRandomizationRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedPawns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingDelayedSpawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingDelayedSpawns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSpawnSetIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSpawnSetName;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAISpawned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllAISPawned;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavMeshDebugOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavMeshDebugExtent;
	static void NewProp_bWaitForNavMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForNavMesh;
	static void NewProp_bDebugNavMeshOnTimeout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugNavMeshOnTimeout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFunctionalAITestBase_IsOneOfSpawnedPawns, "IsOneOfSpawnedPawns" }, // 3154697558
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalAITestBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_SpawnLocationRandomizationRange = { "SpawnLocationRandomizationRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, SpawnLocationRandomizationRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocationRandomizationRange_MetaData), NewProp_SpawnLocationRandomizationRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_SpawnedPawns_Inner = { "SpawnedPawns", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_SpawnedPawns = { "SpawnedPawns", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, SpawnedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPawns_MetaData), NewProp_SpawnedPawns_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_PendingDelayedSpawns_Inner = { "PendingDelayedSpawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPendingDelayedSpawn, METADATA_PARAMS(0, nullptr) }; // 2913284443
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_PendingDelayedSpawns = { "PendingDelayedSpawns", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, PendingDelayedSpawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingDelayedSpawns_MetaData), NewProp_PendingDelayedSpawns_MetaData) }; // 2913284443
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_CurrentSpawnSetIndex = { "CurrentSpawnSetIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, CurrentSpawnSetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpawnSetIndex_MetaData), NewProp_CurrentSpawnSetIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_CurrentSpawnSetName = { "CurrentSpawnSetName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, CurrentSpawnSetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpawnSetName_MetaData), NewProp_CurrentSpawnSetName_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_OnAISpawned = { "OnAISpawned", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, OnAISpawned), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAISpawned_MetaData), NewProp_OnAISpawned_MetaData) }; // 2641987464
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_OnAllAISPawned = { "OnAllAISPawned", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, OnAllAISPawned), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAllAISPawned_MetaData), NewProp_OnAllAISPawned_MetaData) }; // 2981851264
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_NavMeshDebugOrigin = { "NavMeshDebugOrigin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, NavMeshDebugOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshDebugOrigin_MetaData), NewProp_NavMeshDebugOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_NavMeshDebugExtent = { "NavMeshDebugExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITestBase, NavMeshDebugExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshDebugExtent_MetaData), NewProp_NavMeshDebugExtent_MetaData) };
void Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bWaitForNavMesh_SetBit(void* Obj)
{
	((AFunctionalAITestBase*)Obj)->bWaitForNavMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bWaitForNavMesh = { "bWaitForNavMesh", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AFunctionalAITestBase), &Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bWaitForNavMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForNavMesh_MetaData), NewProp_bWaitForNavMesh_MetaData) };
void Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bDebugNavMeshOnTimeout_SetBit(void* Obj)
{
	((AFunctionalAITestBase*)Obj)->bDebugNavMeshOnTimeout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bDebugNavMeshOnTimeout = { "bDebugNavMeshOnTimeout", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AFunctionalAITestBase), &Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bDebugNavMeshOnTimeout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugNavMeshOnTimeout_MetaData), NewProp_bDebugNavMeshOnTimeout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFunctionalAITestBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_SpawnLocationRandomizationRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_SpawnedPawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_SpawnedPawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_PendingDelayedSpawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_PendingDelayedSpawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_CurrentSpawnSetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_CurrentSpawnSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_OnAISpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_OnAllAISPawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_NavMeshDebugOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_NavMeshDebugExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bWaitForNavMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITestBase_Statics::NewProp_bDebugNavMeshOnTimeout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITestBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFunctionalAITestBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITestBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalAITestBase_Statics::ClassParams = {
	&AFunctionalAITestBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFunctionalAITestBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITestBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITestBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFunctionalAITestBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFunctionalAITestBase()
{
	if (!Z_Registration_Info_UClass_AFunctionalAITestBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalAITestBase.OuterSingleton, Z_Construct_UClass_AFunctionalAITestBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFunctionalAITestBase.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalAITestBase>()
{
	return AFunctionalAITestBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalAITestBase);
AFunctionalAITestBase::~AFunctionalAITestBase() {}
// End Class AFunctionalAITestBase

// Begin Class AFunctionalAITest
void AFunctionalAITest::StaticRegisterNativesAFunctionalAITest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionalAITest);
UClass* Z_Construct_UClass_AFunctionalAITest_NoRegister()
{
	return AFunctionalAITest::StaticClass();
}
struct Z_Construct_UClass_AFunctionalAITest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n*\x09""FuntionalAITest\n*\n*\x09""Functional AI Test using a regular FAITestSpawnSet as a default SpawnSet class type.\n*/" },
		{ "HideCategories", "Actor Input Rendering HLOD" },
		{ "IncludePath", "FunctionalAITest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
		{ "ToolTip", "FuntionalAITest\n\nFunctional AI Test using a regular FAITestSpawnSet as a default SpawnSet class type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSets_MetaData[] = {
		{ "Category", "AITest" },
		{ "ModuleRelativePath", "Classes/FunctionalAITest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalAITest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets_Inner = { "SpawnSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAITestSpawnSet, METADATA_PARAMS(0, nullptr) }; // 38951835
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets = { "SpawnSets", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFunctionalAITest, SpawnSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSets_MetaData), NewProp_SpawnSets_MetaData) }; // 38951835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFunctionalAITest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalAITest_Statics::NewProp_SpawnSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFunctionalAITest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFunctionalAITestBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalAITest_Statics::ClassParams = {
	&AFunctionalAITest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFunctionalAITest_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionalAITest_Statics::Class_MetaDataParams), Z_Construct_UClass_AFunctionalAITest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFunctionalAITest()
{
	if (!Z_Registration_Info_UClass_AFunctionalAITest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionalAITest.OuterSingleton, Z_Construct_UClass_AFunctionalAITest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFunctionalAITest.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<AFunctionalAITest>()
{
	return AFunctionalAITest::StaticClass();
}
AFunctionalAITest::AFunctionalAITest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalAITest);
AFunctionalAITest::~AFunctionalAITest() {}
// End Class AFunctionalAITest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAITestSpawnInfoBase::StaticStruct, Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics::NewStructOps, TEXT("AITestSpawnInfoBase"), &Z_Registration_Info_UScriptStruct_AITestSpawnInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITestSpawnInfoBase), 1172300795U) },
		{ FAITestSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics::NewStructOps, TEXT("AITestSpawnInfo"), &Z_Registration_Info_UScriptStruct_AITestSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITestSpawnInfo), 3846163117U) },
		{ FPendingDelayedSpawn::StaticStruct, Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics::NewStructOps, TEXT("PendingDelayedSpawn"), &Z_Registration_Info_UScriptStruct_PendingDelayedSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPendingDelayedSpawn), 2913284443U) },
		{ FAITestSpawnSetBase::StaticStruct, Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics::NewStructOps, TEXT("AITestSpawnSetBase"), &Z_Registration_Info_UScriptStruct_AITestSpawnSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITestSpawnSetBase), 3120599943U) },
		{ FAITestSpawnSet::StaticStruct, Z_Construct_UScriptStruct_FAITestSpawnSet_Statics::NewStructOps, TEXT("AITestSpawnSet"), &Z_Registration_Info_UScriptStruct_AITestSpawnSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITestSpawnSet), 38951835U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFunctionalAITestBase, AFunctionalAITestBase::StaticClass, TEXT("AFunctionalAITestBase"), &Z_Registration_Info_UClass_AFunctionalAITestBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalAITestBase), 190675646U) },
		{ Z_Construct_UClass_AFunctionalAITest, AFunctionalAITest::StaticClass, TEXT("AFunctionalAITest"), &Z_Registration_Info_UClass_AFunctionalAITest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionalAITest), 3837821372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_1366917388(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
