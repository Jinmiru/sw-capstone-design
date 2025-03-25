// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/NavLinkProxy.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkProxy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();
AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Delegate FSmartLinkReachedSignature
struct Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics
{
	struct _Script_AIModule_eventSmartLinkReachedSignature_Parms
	{
		AActor* MovingActor;
		FVector DestinationPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor = { "MovingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIModule_eventSmartLinkReachedSignature_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIModule_eventSmartLinkReachedSignature_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationPoint_MetaData), NewProp_DestinationPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "SmartLinkReachedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::_Script_AIModule_eventSmartLinkReachedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::_Script_AIModule_eventSmartLinkReachedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSmartLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& SmartLinkReachedSignature, AActor* MovingActor, FVector const& DestinationPoint)
{
	struct _Script_AIModule_eventSmartLinkReachedSignature_Parms
	{
		AActor* MovingActor;
		FVector DestinationPoint;
	};
	_Script_AIModule_eventSmartLinkReachedSignature_Parms Parms;
	Parms.MovingActor=MovingActor;
	Parms.DestinationPoint=DestinationPoint;
	SmartLinkReachedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSmartLinkReachedSignature

// Begin Class ANavLinkProxy Function CopyEndPointsFromSimpleLinkToSmartLink
#if WITH_EDITOR
struct Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SmartLink" },
		{ "Comment", "/** Copies navlink end points from the first entry in PointLinks array. This \n\x09 *\x09""function is a helper function making up for smart links not drawing\n\x09 *\x09the FVector widgets in the editor. */" },
		{ "DisplayName", "CopyEndPointsFromSimpleLink" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Copies navlink end points from the first entry in PointLinks array. This\n    function is a helper function making up for smart links not drawing\n    the FVector widgets in the editor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "CopyEndPointsFromSimpleLinkToSmartLink", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ANavLinkProxy::execCopyEndPointsFromSimpleLinkToSmartLink)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyEndPointsFromSimpleLinkToSmartLink();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ANavLinkProxy Function CopyEndPointsFromSimpleLinkToSmartLink

// Begin Class ANavLinkProxy Function HasMovingAgents
struct Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics
{
	struct NavLinkProxy_eventHasMovingAgents_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** check if any agent is moving through smart link right now */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "check if any agent is moving through smart link right now" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavLinkProxy_eventHasMovingAgents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLinkProxy_eventHasMovingAgents_Parms), &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "HasMovingAgents", nullptr, nullptr, Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NavLinkProxy_eventHasMovingAgents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NavLinkProxy_eventHasMovingAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavLinkProxy::execHasMovingAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMovingAgents();
	P_NATIVE_END;
}
// End Class ANavLinkProxy Function HasMovingAgents

// Begin Class ANavLinkProxy Function IsSmartLinkEnabled
struct Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics
{
	struct NavLinkProxy_eventIsSmartLinkEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** check if smart link is enabled */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "check if smart link is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavLinkProxy_eventIsSmartLinkEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLinkProxy_eventIsSmartLinkEnabled_Parms), &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "IsSmartLinkEnabled", nullptr, nullptr, Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NavLinkProxy_eventIsSmartLinkEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NavLinkProxy_eventIsSmartLinkEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavLinkProxy::execIsSmartLinkEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSmartLinkEnabled();
	P_NATIVE_END;
}
// End Class ANavLinkProxy Function IsSmartLinkEnabled

// Begin Class ANavLinkProxy Function ReceiveSmartLinkReached
struct NavLinkProxy_eventReceiveSmartLinkReached_Parms
{
	AActor* Agent;
	FVector Destination;
};
static FName NAME_ANavLinkProxy_ReceiveSmartLinkReached = FName(TEXT("ReceiveSmartLinkReached"));
void ANavLinkProxy::ReceiveSmartLinkReached(AActor* Agent, FVector const& Destination)
{
	NavLinkProxy_eventReceiveSmartLinkReached_Parms Parms;
	Parms.Agent=Agent;
	Parms.Destination=Destination;
	ProcessEvent(FindFunctionChecked(NAME_ANavLinkProxy_ReceiveSmartLinkReached),&Parms);
}
struct Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** called when agent reaches smart link during path following, use ResumePathFollowing() to give control back */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "called when agent reaches smart link during path following, use ResumePathFollowing() to give control back" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Destination_MetaData), NewProp_Destination_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "ReceiveSmartLinkReached", nullptr, nullptr, Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers), sizeof(NavLinkProxy_eventReceiveSmartLinkReached_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams) };
static_assert(sizeof(NavLinkProxy_eventReceiveSmartLinkReached_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANavLinkProxy Function ReceiveSmartLinkReached

// Begin Class ANavLinkProxy Function ResumePathFollowing
struct Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics
{
	struct NavLinkProxy_eventResumePathFollowing_Parms
	{
		AActor* Agent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** resume normal path following */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "resume normal path following" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavLinkProxy_eventResumePathFollowing_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NewProp_Agent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "ResumePathFollowing", nullptr, nullptr, Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NavLinkProxy_eventResumePathFollowing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NavLinkProxy_eventResumePathFollowing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavLinkProxy::execResumePathFollowing)
{
	P_GET_OBJECT(AActor,Z_Param_Agent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumePathFollowing(Z_Param_Agent);
	P_NATIVE_END;
}
// End Class ANavLinkProxy Function ResumePathFollowing

// Begin Class ANavLinkProxy Function SetSmartLinkEnabled
struct Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics
{
	struct NavLinkProxy_eventSetSmartLinkEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** change state of smart link */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "change state of smart link" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((NavLinkProxy_eventSetSmartLinkEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavLinkProxy_eventSetSmartLinkEnabled_Parms), &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "SetSmartLinkEnabled", nullptr, nullptr, Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NavLinkProxy_eventSetSmartLinkEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NavLinkProxy_eventSetSmartLinkEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavLinkProxy::execSetSmartLinkEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSmartLinkEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class ANavLinkProxy Function SetSmartLinkEnabled

// Begin Class ANavLinkProxy
void ANavLinkProxy::StaticRegisterNativesANavLinkProxy()
{
	UClass* Class = ANavLinkProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "CopyEndPointsFromSimpleLinkToSmartLink", &ANavLinkProxy::execCopyEndPointsFromSimpleLinkToSmartLink },
#endif // WITH_EDITOR
		{ "HasMovingAgents", &ANavLinkProxy::execHasMovingAgents },
		{ "IsSmartLinkEnabled", &ANavLinkProxy::execIsSmartLinkEnabled },
		{ "ResumePathFollowing", &ANavLinkProxy::execResumePathFollowing },
		{ "SetSmartLinkEnabled", &ANavLinkProxy::execSetSmartLinkEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavLinkProxy);
UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister()
{
	return ANavLinkProxy::StaticClass();
}
struct Z_Construct_UClass_ANavLinkProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n *  ANavLinkProxy connects areas of Navmesh that don't have a direct navigation path.\n *  It directly supports Simple Links (see PointLinks array). There can be multiple Simple links per ANavLinkProxy instance.\n *  Simple links are designed to statically link areas of Navmesh and are associated with a particular area class that the link provides.\n *  Smart Link functionality is provided via UNavLinkCustomComponent, see SmartLinkComp. They are designed to be able to be dynamically toggled\n *  between enabled and disabled and provide different area classes for both cases. The area classes can be dynamically modified \n *  without navmesh rebuilds.\n *  There can only be at most one smart link per ANavLinkProxy instance.\n *  Both simple and smart links on a single ANavLinkProxy instance, can be set / enabled at once, as well as either or neither of them.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Navigation/NavLinkProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "ANavLinkProxy connects areas of Navmesh that don't have a direct navigation path.\nIt directly supports Simple Links (see PointLinks array). There can be multiple Simple links per ANavLinkProxy instance.\nSimple links are designed to statically link areas of Navmesh and are associated with a particular area class that the link provides.\nSmart Link functionality is provided via UNavLinkCustomComponent, see SmartLinkComp. They are designed to be able to be dynamically toggled\nbetween enabled and disabled and provide different area classes for both cases. The area classes can be dynamically modified\nwithout navmesh rebuilds.\nThere can only be at most one smart link per ANavLinkProxy instance.\nBoth simple and smart links on a single ANavLinkProxy instance, can be set / enabled at once, as well as either or neither of them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLinks_MetaData[] = {
		{ "Category", "SimpleLink" },
		{ "Comment", "/** Navigation links (point to point) added to navigation data */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Navigation links (point to point) added to navigation data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLinks_MetaData[] = {
		{ "Comment", "/** Navigation links (segment to segment) added to navigation data\n\x09*\x09@todo hidden from use until we fix segment links. Not really working now*/" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Navigation links (segment to segment) added to navigation data\n     @todo hidden from use until we fix segment links. Not really working now" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmartLinkComp_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** Smart link: can affect path following */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Smart link: can affect path following" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmartLinkIsRelevant_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** Smart link: toggle relevancy */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Smart link: toggle relevancy" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[] = {
		{ "Comment", "/** Editor Preview */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Editor Preview" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSmartLinkReached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointLinks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SegmentLinks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartLinkComp;
	static void NewProp_bSmartLinkIsRelevant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmartLinkIsRelevant;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartLinkReached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink, "CopyEndPointsFromSimpleLinkToSmartLink" }, // 494388412
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents, "HasMovingAgents" }, // 3062379547
		{ &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled, "IsSmartLinkEnabled" }, // 1359829304
		{ &Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached, "ReceiveSmartLinkReached" }, // 1010133535
		{ &Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing, "ResumePathFollowing" }, // 1675000642
		{ &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled, "SetSmartLinkEnabled" }, // 1715745470
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinkProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_Inner = { "PointLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(0, nullptr) }; // 770316475
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks = { "PointLinks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinkProxy, PointLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLinks_MetaData), NewProp_PointLinks_MetaData) }; // 770316475
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_Inner = { "SegmentLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNavigationSegmentLink, METADATA_PARAMS(0, nullptr) }; // 867880349
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks = { "SegmentLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinkProxy, SegmentLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentLinks_MetaData), NewProp_SegmentLinks_MetaData) }; // 867880349
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp = { "SmartLinkComp", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinkProxy, SmartLinkComp), Z_Construct_UClass_UNavLinkCustomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmartLinkComp_MetaData), NewProp_SmartLinkComp_MetaData) };
void Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_SetBit(void* Obj)
{
	((ANavLinkProxy*)Obj)->bSmartLinkIsRelevant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant = { "bSmartLinkIsRelevant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANavLinkProxy), &Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmartLinkIsRelevant_MetaData), NewProp_bSmartLinkIsRelevant_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp = { "EdRenderComp", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinkProxy, EdRenderComp), Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdRenderComp_MetaData), NewProp_EdRenderComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinkProxy, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached = { "OnSmartLinkReached", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavLinkProxy, OnSmartLinkReached), Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSmartLinkReached_MetaData), NewProp_OnSmartLinkReached_MetaData) }; // 3938082823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavLinkProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavLinkProxy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavLinkHostInterface), false },  // 852273620
	{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavRelevantInterface), false },  // 2600625190
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavLinkProxy_Statics::ClassParams = {
	&ANavLinkProxy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavLinkProxy()
{
	if (!Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton, Z_Construct_UClass_ANavLinkProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<ANavLinkProxy>()
{
	return ANavLinkProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinkProxy);
ANavLinkProxy::~ANavLinkProxy() {}
// End Class ANavLinkProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavLinkProxy, ANavLinkProxy::StaticClass, TEXT("ANavLinkProxy"), &Z_Registration_Info_UClass_ANavLinkProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavLinkProxy), 3861201826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_211697176(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
