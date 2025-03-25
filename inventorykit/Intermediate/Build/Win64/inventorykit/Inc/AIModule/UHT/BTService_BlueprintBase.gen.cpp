// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Services/BTService_BlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_BlueprintBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBTService_BlueprintBase Function IsServiceActive
struct Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics
{
	struct BTService_BlueprintBase_eventIsServiceActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** check if service is currently being active */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "check if service is currently being active" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BTService_BlueprintBase_eventIsServiceActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BTService_BlueprintBase_eventIsServiceActive_Parms), &Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "IsServiceActive", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::BTService_BlueprintBase_eventIsServiceActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::BTService_BlueprintBase_eventIsServiceActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTService_BlueprintBase::execIsServiceActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsServiceActive();
	P_NATIVE_END;
}
// End Class UBTService_BlueprintBase Function IsServiceActive

// Begin Class UBTService_BlueprintBase Function ReceiveActivation
struct BTService_BlueprintBase_eventReceiveActivation_Parms
{
	AActor* OwnerActor;
};
static FName NAME_UBTService_BlueprintBase_ReceiveActivation = FName(TEXT("ReceiveActivation"));
void UBTService_BlueprintBase::ReceiveActivation(AActor* OwnerActor)
{
	BTService_BlueprintBase_eventReceiveActivation_Parms Parms;
	Parms.OwnerActor=OwnerActor;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveActivation),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** service became active\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "service became active\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivation_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::NewProp_OwnerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveActivation", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveActivation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveActivation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveActivation

// Begin Class UBTService_BlueprintBase Function ReceiveActivationAI
struct BTService_BlueprintBase_eventReceiveActivationAI_Parms
{
	AAIController* OwnerController;
	APawn* ControlledPawn;
};
static FName NAME_UBTService_BlueprintBase_ReceiveActivationAI = FName(TEXT("ReceiveActivationAI"));
void UBTService_BlueprintBase::ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn)
{
	BTService_BlueprintBase_eventReceiveActivationAI_Parms Parms;
	Parms.OwnerController=OwnerController;
	Parms.ControlledPawn=ControlledPawn;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveActivationAI),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveActivation function.\n\x09 *\x09@see ReceiveActivation for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveActivation function.\n    @see ReceiveActivation for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivationAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivationAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_ControlledPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveActivationAI", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveActivationAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveActivationAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveActivationAI

// Begin Class UBTService_BlueprintBase Function ReceiveDeactivation
struct BTService_BlueprintBase_eventReceiveDeactivation_Parms
{
	AActor* OwnerActor;
};
static FName NAME_UBTService_BlueprintBase_ReceiveDeactivation = FName(TEXT("ReceiveDeactivation"));
void UBTService_BlueprintBase::ReceiveDeactivation(AActor* OwnerActor)
{
	BTService_BlueprintBase_eventReceiveDeactivation_Parms Parms;
	Parms.OwnerActor=OwnerActor;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveDeactivation),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** service became inactive\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "service became inactive\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivation_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::NewProp_OwnerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveDeactivation", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveDeactivation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveDeactivation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveDeactivation

// Begin Class UBTService_BlueprintBase Function ReceiveDeactivationAI
struct BTService_BlueprintBase_eventReceiveDeactivationAI_Parms
{
	AAIController* OwnerController;
	APawn* ControlledPawn;
};
static FName NAME_UBTService_BlueprintBase_ReceiveDeactivationAI = FName(TEXT("ReceiveDeactivationAI"));
void UBTService_BlueprintBase::ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn)
{
	BTService_BlueprintBase_eventReceiveDeactivationAI_Parms Parms;
	Parms.OwnerController=OwnerController;
	Parms.ControlledPawn=ControlledPawn;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveDeactivationAI),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveDeactivation function.\n\x09 *\x09@see ReceiveDeactivation for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveDeactivation function.\n    @see ReceiveDeactivation for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_ControlledPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveDeactivationAI", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveDeactivationAI

// Begin Class UBTService_BlueprintBase Function ReceiveSearchStart
struct BTService_BlueprintBase_eventReceiveSearchStart_Parms
{
	AActor* OwnerActor;
};
static FName NAME_UBTService_BlueprintBase_ReceiveSearchStart = FName(TEXT("ReceiveSearchStart"));
void UBTService_BlueprintBase::ReceiveSearchStart(AActor* OwnerActor)
{
	BTService_BlueprintBase_eventReceiveSearchStart_Parms Parms;
	Parms.OwnerActor=OwnerActor;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveSearchStart),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** task search enters branch of tree\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "task search enters branch of tree\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStart_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::NewProp_OwnerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveSearchStart", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveSearchStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveSearchStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveSearchStart

// Begin Class UBTService_BlueprintBase Function ReceiveSearchStartAI
struct BTService_BlueprintBase_eventReceiveSearchStartAI_Parms
{
	AAIController* OwnerController;
	APawn* ControlledPawn;
};
static FName NAME_UBTService_BlueprintBase_ReceiveSearchStartAI = FName(TEXT("ReceiveSearchStartAI"));
void UBTService_BlueprintBase::ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn)
{
	BTService_BlueprintBase_eventReceiveSearchStartAI_Parms Parms;
	Parms.OwnerController=OwnerController;
	Parms.ControlledPawn=ControlledPawn;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveSearchStartAI),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveSearchStart function.\n\x09 *\x09@see ReceiveSearchStart for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveSearchStart function.\n    @see ReceiveSearchStart for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_ControlledPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveSearchStartAI", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveSearchStartAI

// Begin Class UBTService_BlueprintBase Function ReceiveTick
struct BTService_BlueprintBase_eventReceiveTick_Parms
{
	AActor* OwnerActor;
	float DeltaSeconds;
};
static FName NAME_UBTService_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
void UBTService_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
{
	BTService_BlueprintBase_eventReceiveTick_Parms Parms;
	Parms.OwnerActor=OwnerActor;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveTick),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** tick function\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveTick", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveTick

// Begin Class UBTService_BlueprintBase Function ReceiveTickAI
struct BTService_BlueprintBase_eventReceiveTickAI_Parms
{
	AAIController* OwnerController;
	APawn* ControlledPawn;
	float DeltaSeconds;
};
static FName NAME_UBTService_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
void UBTService_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
{
	BTService_BlueprintBase_eventReceiveTickAI_Parms Parms;
	Parms.OwnerController=OwnerController;
	Parms.ControlledPawn=ControlledPawn;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveTickAI),&Parms);
}
struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveTick function.\n\x09 *\x09@see ReceiveTick for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveTick function.\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveTickAI", nullptr, nullptr, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::PropPointers), sizeof(BTService_BlueprintBase_eventReceiveTickAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(BTService_BlueprintBase_eventReceiveTickAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBTService_BlueprintBase Function ReceiveTickAI

// Begin Class UBTService_BlueprintBase
void UBTService_BlueprintBase::StaticRegisterNativesUBTService_BlueprintBase()
{
	UClass* Class = UBTService_BlueprintBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsServiceActive", &UBTService_BlueprintBase::execIsServiceActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_BlueprintBase);
UClass* Z_Construct_UClass_UBTService_BlueprintBase_NoRegister()
{
	return UBTService_BlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UBTService_BlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Base class for blueprint based service nodes. Do NOT use it for creating native c++ classes!\n *\n *  When service receives Deactivation event, all latent actions associated this instance are being removed.\n *  This prevents from resuming activity started by Activation, but does not handle external events.\n *  Please use them safely (unregister at abort) and call IsServiceActive() when in doubt.\n */" },
		{ "IncludePath", "BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Base class for blueprint based service nodes. Do NOT use it for creating native c++ classes!\n\nWhen service receives Deactivation event, all latent actions associated this instance are being removed.\nThis prevents from resuming activity started by Activation, but does not handle external events.\nPlease use them safely (unregister at abort) and call IsServiceActive() when in doubt." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[] = {
		{ "Comment", "/** Cached AIController owner of BehaviorTreeComponent. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[] = {
		{ "Comment", "/** Cached actor owner of BehaviorTreeComponent. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Cached actor owner of BehaviorTreeComponent." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** show detailed information about properties */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "show detailed information about properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEventDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** show detailed information about implemented events */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "show detailed information about implemented events" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorOwner;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomDescription;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bShowPropertyDetails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails;
	static void NewProp_bShowEventDetails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEventDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive, "IsServiceActive" }, // 1231276056
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation, "ReceiveActivation" }, // 3738899221
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI, "ReceiveActivationAI" }, // 1750310738
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation, "ReceiveDeactivation" }, // 563877162
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI, "ReceiveDeactivationAI" }, // 1907660919
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart, "ReceiveSearchStart" }, // 2592528259
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI, "ReceiveSearchStartAI" }, // 4257989507
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 358697471
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 194105166
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_BlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIOwner_MetaData), NewProp_AIOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_ActorOwner = { "ActorOwner", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorOwner_MetaData), NewProp_ActorOwner_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_CustomDescription = { "CustomDescription", nullptr, (EPropertyFlags)0x0020080800010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_BlueprintBase, CustomDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDescription_MetaData), NewProp_CustomDescription_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit(void* Obj)
{
	((UBTService_BlueprintBase*)Obj)->bShowPropertyDetails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails = { "bShowPropertyDetails", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTService_BlueprintBase), &Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPropertyDetails_MetaData), NewProp_bShowPropertyDetails_MetaData) };
void Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails_SetBit(void* Obj)
{
	((UBTService_BlueprintBase*)Obj)->bShowEventDetails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails = { "bShowEventDetails", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBTService_BlueprintBase), &Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEventDetails_MetaData), NewProp_bShowEventDetails_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_BlueprintBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_AIOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_ActorOwner,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_CustomDescription,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_BlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::ClassParams = {
	&UBTService_BlueprintBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTService_BlueprintBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_BlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_BlueprintBase()
{
	if (!Z_Registration_Info_UClass_UBTService_BlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_BlueprintBase.OuterSingleton, Z_Construct_UClass_UBTService_BlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_BlueprintBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBTService_BlueprintBase>()
{
	return UBTService_BlueprintBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_BlueprintBase);
UBTService_BlueprintBase::~UBTService_BlueprintBase() {}
// End Class UBTService_BlueprintBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_BlueprintBase, UBTService_BlueprintBase::StaticClass, TEXT("UBTService_BlueprintBase"), &Z_Registration_Info_UClass_UBTService_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_BlueprintBase), 3270055850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_2813666919(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Services_BTService_BlueprintBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
