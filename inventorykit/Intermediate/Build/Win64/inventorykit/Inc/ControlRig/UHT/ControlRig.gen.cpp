// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRig.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "ControlRig/Public/Rigs/RigHierarchyElements.h"
#include "ControlRig/Public/Rigs/RigInfluenceMap.h"
#include "ControlRig/Public/Rigs/RigModuleDefines.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRig() {}

// Begin Cross Module References
ANIMATIONCORE_API UClass* Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchyProvider_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UTransformableControlHandle_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigExecutionType();
CONTROLRIG_API UFunction* Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElementCustomization();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigModuleSettings();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
RIGVM_API UClass* Z_Construct_UClass_UDataAssetLink_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVMHost();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Delegate FOnControlSelectedBP
struct Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics
{
	struct ControlRig_eventOnControlSelectedBP_Parms
	{
		UControlRig* Rig;
		FRigControlElement Control;
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// To support Blueprints/scripting, we need a different delegate type (a 'Dynamic' delegate) which supports looser style UFunction binding (using names).\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "To support Blueprints/scripting, we need a different delegate type (a 'Dynamic' delegate) which supports looser style UFunction binding (using names)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Control;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Rig = { "Rig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventOnControlSelectedBP_Parms, Rig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventOnControlSelectedBP_Parms, Control), Z_Construct_UScriptStruct_FRigControlElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Control_MetaData), NewProp_Control_MetaData) }; // 755259183
void Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((ControlRig_eventOnControlSelectedBP_Parms*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRig_eventOnControlSelectedBP_Parms), &Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Rig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Control,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "OnControlSelectedBP__DelegateSignature", "ControlRig", "OnControlSelected_BP", Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::ControlRig_eventOnControlSelectedBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::ControlRig_eventOnControlSelectedBP_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UControlRig::FOnControlSelectedBP_DelegateWrapper(const FMulticastScriptDelegate& OnControlSelectedBP, UControlRig* Rig, FRigControlElement const& Control, bool bSelected)
{
	struct ControlRig_eventOnControlSelectedBP_Parms
	{
		UControlRig* Rig;
		FRigControlElement Control;
		bool bSelected;
	};
	ControlRig_eventOnControlSelectedBP_Parms Parms;
	Parms.Rig=Rig;
	Parms.Control=Control;
	Parms.bSelected=bSelected ? true : false;
	OnControlSelectedBP.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnControlSelectedBP

// Begin Class UControlRig Function ClearControlSelection
struct Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics
{
	struct ControlRig_eventClearControlSelection_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRig_eventClearControlSelection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRig_eventClearControlSelection_Parms), &Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "ClearControlSelection", nullptr, nullptr, Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::ControlRig_eventClearControlSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::ControlRig_eventClearControlSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_ClearControlSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execClearControlSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ClearControlSelection();
	P_NATIVE_END;
}
// End Class UControlRig Function ClearControlSelection

// Begin Class UControlRig Function CreateTransformableControlHandle
struct Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics
{
	struct ControlRig_eventCreateTransformableControlHandle_Parms
	{
		FName ControlName;
		UTransformableControlHandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Constraints" },
		{ "Comment", "/** Creates a transformable control handle for the specified control to be used by the constraints system. Should use the UObject from \n\x09""ConstraintsScriptingLibrary::GetManager(UWorld* InWorld)*/" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Creates a transformable control handle for the specified control to be used by the constraints system. Should use the UObject from\n      ConstraintsScriptingLibrary::GetManager(UWorld* InWorld)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventCreateTransformableControlHandle_Parms, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventCreateTransformableControlHandle_Parms, ReturnValue), Z_Construct_UClass_UTransformableControlHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "CreateTransformableControlHandle", nullptr, nullptr, Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::ControlRig_eventCreateTransformableControlHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::ControlRig_eventCreateTransformableControlHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execCreateTransformableControlHandle)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ControlName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTransformableControlHandle**)Z_Param__Result=P_THIS->CreateTransformableControlHandle(Z_Param_Out_ControlName);
	P_NATIVE_END;
}
// End Class UControlRig Function CreateTransformableControlHandle

// Begin Class UControlRig Function CurrentControlSelection
struct Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics
{
	struct ControlRig_eventCurrentControlSelection_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventCurrentControlSelection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "CurrentControlSelection", nullptr, nullptr, Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::ControlRig_eventCurrentControlSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::ControlRig_eventCurrentControlSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_CurrentControlSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execCurrentControlSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->CurrentControlSelection();
	P_NATIVE_END;
}
// End Class UControlRig Function CurrentControlSelection

// Begin Class UControlRig Function FindControlRigs
struct Z_Construct_UFunction_UControlRig_FindControlRigs_Statics
{
	struct ControlRig_eventFindControlRigs_Parms
	{
		UObject* Outer;
		TSubclassOf<UControlRig> OptionalClass;
		TArray<UControlRig*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_OptionalClass = { "OptionalClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, OptionalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_OptionalClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "FindControlRigs", nullptr, nullptr, Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::ControlRig_eventFindControlRigs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::ControlRig_eventFindControlRigs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_FindControlRigs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execFindControlRigs)
{
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_GET_OBJECT(UClass,Z_Param_OptionalClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UControlRig*>*)Z_Param__Result=UControlRig::FindControlRigs(Z_Param_Outer,Z_Param_OptionalClass);
	P_NATIVE_END;
}
// End Class UControlRig Function FindControlRigs

// Begin Class UControlRig Function GetHierarchy
struct Z_Construct_UFunction_UControlRig_GetHierarchy_Statics
{
	struct ControlRig_eventGetHierarchy_Parms
	{
		URigHierarchy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventGetHierarchy_Parms, ReturnValue), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetHierarchy", nullptr, nullptr, Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::ControlRig_eventGetHierarchy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::ControlRig_eventGetHierarchy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_GetHierarchy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execGetHierarchy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URigHierarchy**)Z_Param__Result=P_THIS->GetHierarchy();
	P_NATIVE_END;
}
// End Class UControlRig Function GetHierarchy

// Begin Class UControlRig Function GetHostingActor
struct Z_Construct_UFunction_UControlRig_GetHostingActor_Statics
{
	struct ControlRig_eventGetHostingActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Find the actor the rig is bound to, if any */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Find the actor the rig is bound to, if any" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventGetHostingActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetHostingActor", nullptr, nullptr, Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::ControlRig_eventGetHostingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::ControlRig_eventGetHostingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_GetHostingActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execGetHostingActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetHostingActor();
	P_NATIVE_END;
}
// End Class UControlRig Function GetHostingActor

// Begin Class UControlRig Function GetInteractionRig
struct Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics
{
	struct ControlRig_eventGetInteractionRig_Parms
	{
		UControlRig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "InteractionRig is no longer used" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventGetInteractionRig_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetInteractionRig", nullptr, nullptr, Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::ControlRig_eventGetInteractionRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::ControlRig_eventGetInteractionRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_GetInteractionRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execGetInteractionRig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UControlRig**)Z_Param__Result=P_THIS->GetInteractionRig();
	P_NATIVE_END;
}
// End Class UControlRig Function GetInteractionRig

// Begin Class UControlRig Function GetInteractionRigClass
struct Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics
{
	struct ControlRig_eventGetInteractionRigClass_Parms
	{
		TSubclassOf<UControlRig> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "InteractionRig is no longer used" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventGetInteractionRigClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetInteractionRigClass", nullptr, nullptr, Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::ControlRig_eventGetInteractionRigClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::ControlRig_eventGetInteractionRigClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_GetInteractionRigClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execGetInteractionRigClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UControlRig>*)Z_Param__Result=P_THIS->GetInteractionRigClass();
	P_NATIVE_END;
}
// End Class UControlRig Function GetInteractionRigClass

// Begin Class UControlRig Function IsControlSelected
struct Z_Construct_UFunction_UControlRig_IsControlSelected_Statics
{
	struct ControlRig_eventIsControlSelected_Parms
	{
		FName InControlName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventIsControlSelected_Parms, InControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InControlName_MetaData), NewProp_InControlName_MetaData) };
void Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRig_eventIsControlSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRig_eventIsControlSelected_Parms), &Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "IsControlSelected", nullptr, nullptr, Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::ControlRig_eventIsControlSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::ControlRig_eventIsControlSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_IsControlSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execIsControlSelected)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InControlName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsControlSelected(Z_Param_Out_InControlName);
	P_NATIVE_END;
}
// End Class UControlRig Function IsControlSelected

// Begin Class UControlRig Function RequestConstruction
struct Z_Construct_UFunction_UControlRig_RequestConstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Requests to perform construction during the next execution */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Requests to perform construction during the next execution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "RequestConstruction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UControlRig_RequestConstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execRequestConstruction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestConstruction();
	P_NATIVE_END;
}
// End Class UControlRig Function RequestConstruction

// Begin Class UControlRig Function SelectControl
struct Z_Construct_UFunction_UControlRig_SelectControl_Statics
{
	struct ControlRig_eventSelectControl_Parms
	{
		FName InControlName;
		bool bSelect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "CPP_Default_bSelect", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
	static void NewProp_bSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventSelectControl_Parms, InControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InControlName_MetaData), NewProp_InControlName_MetaData) };
void Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect_SetBit(void* Obj)
{
	((ControlRig_eventSelectControl_Parms*)Obj)->bSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRig_eventSelectControl_Parms), &Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SelectControl", nullptr, nullptr, Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_SelectControl_Statics::ControlRig_eventSelectControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_SelectControl_Statics::ControlRig_eventSelectControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_SelectControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SelectControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execSelectControl)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InControlName);
	P_GET_UBOOL(Z_Param_bSelect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectControl(Z_Param_Out_InControlName,Z_Param_bSelect);
	P_NATIVE_END;
}
// End Class UControlRig Function SelectControl

// Begin Class UControlRig Function SetInteractionRig
struct Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics
{
	struct ControlRig_eventSetInteractionRig_Parms
	{
		UControlRig* InInteractionRig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "InteractionRig is no longer used" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractionRig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::NewProp_InInteractionRig = { "InInteractionRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventSetInteractionRig_Parms, InInteractionRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::NewProp_InInteractionRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetInteractionRig", nullptr, nullptr, Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::ControlRig_eventSetInteractionRig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::ControlRig_eventSetInteractionRig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_SetInteractionRig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execSetInteractionRig)
{
	P_GET_OBJECT(UControlRig,Z_Param_InInteractionRig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractionRig(Z_Param_InInteractionRig);
	P_NATIVE_END;
}
// End Class UControlRig Function SetInteractionRig

// Begin Class UControlRig Function SetInteractionRigClass
struct Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics
{
	struct ControlRig_eventSetInteractionRigClass_Parms
	{
		TSubclassOf<UControlRig> InInteractionRigClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "InteractionRig is no longer used" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InInteractionRigClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::NewProp_InInteractionRigClass = { "InInteractionRigClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRig_eventSetInteractionRigClass_Parms, InInteractionRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::NewProp_InInteractionRigClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetInteractionRigClass", nullptr, nullptr, Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::ControlRig_eventSetInteractionRigClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::ControlRig_eventSetInteractionRigClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_SetInteractionRigClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execSetInteractionRigClass)
{
	P_GET_OBJECT(UClass,Z_Param_InInteractionRigClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractionRigClass(Z_Param_InInteractionRigClass);
	P_NATIVE_END;
}
// End Class UControlRig Function SetInteractionRigClass

// Begin Class UControlRig Function SupportsBackwardsSolve
struct Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics
{
	struct ControlRig_eventSupportsBackwardsSolve_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Contains a backwards solve event */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Contains a backwards solve event" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRig_eventSupportsBackwardsSolve_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRig_eventSupportsBackwardsSolve_Parms), &Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SupportsBackwardsSolve", nullptr, nullptr, Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::ControlRig_eventSupportsBackwardsSolve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::ControlRig_eventSupportsBackwardsSolve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRig::execSupportsBackwardsSolve)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsBackwardsSolve();
	P_NATIVE_END;
}
// End Class UControlRig Function SupportsBackwardsSolve

// Begin Class UControlRig
void UControlRig::StaticRegisterNativesUControlRig()
{
	UClass* Class = UControlRig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearControlSelection", &UControlRig::execClearControlSelection },
		{ "CreateTransformableControlHandle", &UControlRig::execCreateTransformableControlHandle },
		{ "CurrentControlSelection", &UControlRig::execCurrentControlSelection },
		{ "FindControlRigs", &UControlRig::execFindControlRigs },
		{ "GetHierarchy", &UControlRig::execGetHierarchy },
		{ "GetHostingActor", &UControlRig::execGetHostingActor },
		{ "GetInteractionRig", &UControlRig::execGetInteractionRig },
		{ "GetInteractionRigClass", &UControlRig::execGetInteractionRigClass },
		{ "IsControlSelected", &UControlRig::execIsControlSelected },
		{ "RequestConstruction", &UControlRig::execRequestConstruction },
		{ "SelectControl", &UControlRig::execSelectControl },
		{ "SetInteractionRig", &UControlRig::execSetInteractionRig },
		{ "SetInteractionRigClass", &UControlRig::execSetInteractionRigClass },
		{ "SupportsBackwardsSolve", &UControlRig::execSupportsBackwardsSolve },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRig);
UClass* Z_Construct_UClass_UControlRig_NoRegister()
{
	return UControlRig::StaticClass();
}
struct Z_Construct_UClass_UControlRig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Runs logic for mapping input data to transforms (the \"Rig\") */" },
		{ "IncludePath", "ControlRig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Runs logic for mapping input data to transforms (the \"Rig\")" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionType_MetaData[] = {
		{ "Comment", "// END UObject interface\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "END UObject interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchySettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlCustomizations_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibraries_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibraryNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputProperties_MetaData[] = {
		{ "Comment", "// you either go Input or Output, currently if you put it in both place, Output will override\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "you either go Input or Output, currently if you put it in both place, Output will override" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigVMExtendedExecuteContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceRegistry_MetaData[] = {
		{ "Comment", "/** The registry to access data source */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "The registry to access data source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Influences_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalVariableDataAssetLinks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControlSelected_BP_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "DisplayName", "OnControlSelected" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bControlsVisible_MetaData[] = {
		{ "Comment", "/** Whether controls are visible */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Whether controls are visible" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdditive_MetaData[] = {
		{ "Comment", "/** An additive control rig runs a backwards solve before applying additive control values\n\x09 * and running the forward solve\n\x09 */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "An additive control rig runs a backwards solve before applying additive control values\nand running the forward solve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigModuleSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigModuleNameSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRigClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlCustomizations_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlCustomizations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlCustomizations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicHierarchy;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GizmoLibrary;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShapeLibraries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeLibraries;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapeLibraryNameMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapeLibraryNameMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ShapeLibraryNameMap;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputProperties_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputProperties_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InputProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputProperties_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputProperties_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutputProperties;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigVMExtendedExecuteContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataSourceRegistry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Influences;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalVariableDataAssetLinks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExternalVariableDataAssetLinks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalVariableDataAssetLinks;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControlSelected_BP;
#if WITH_EDITORONLY_DATA
	static void NewProp_bControlsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bControlsVisible;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bIsAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RigModuleSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RigModuleNameSpace;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionRig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionRigClass;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRig_ClearControlSelection, "ClearControlSelection" }, // 3581870205
		{ &Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle, "CreateTransformableControlHandle" }, // 3421075655
		{ &Z_Construct_UFunction_UControlRig_CurrentControlSelection, "CurrentControlSelection" }, // 4179006147
		{ &Z_Construct_UFunction_UControlRig_FindControlRigs, "FindControlRigs" }, // 533919116
		{ &Z_Construct_UFunction_UControlRig_GetHierarchy, "GetHierarchy" }, // 2690279096
		{ &Z_Construct_UFunction_UControlRig_GetHostingActor, "GetHostingActor" }, // 2709467587
		{ &Z_Construct_UFunction_UControlRig_GetInteractionRig, "GetInteractionRig" }, // 2842300459
		{ &Z_Construct_UFunction_UControlRig_GetInteractionRigClass, "GetInteractionRigClass" }, // 217040084
		{ &Z_Construct_UFunction_UControlRig_IsControlSelected, "IsControlSelected" }, // 162514912
		{ &Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature, "OnControlSelectedBP__DelegateSignature" }, // 3673747271
		{ &Z_Construct_UFunction_UControlRig_RequestConstruction, "RequestConstruction" }, // 3776634818
		{ &Z_Construct_UFunction_UControlRig_SelectControl, "SelectControl" }, // 4176590732
		{ &Z_Construct_UFunction_UControlRig_SetInteractionRig, "SetInteractionRig" }, // 1350684024
		{ &Z_Construct_UFunction_UControlRig_SetInteractionRigClass, "SetInteractionRigClass" }, // 230019515
		{ &Z_Construct_UFunction_UControlRig_SupportsBackwardsSolve, "SupportsBackwardsSolve" }, // 603295905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType = { "ExecutionType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, ExecutionType), Z_Construct_UEnum_ControlRig_ERigExecutionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionType_MetaData), NewProp_ExecutionType_MetaData) }; // 2095378819
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_HierarchySettings = { "HierarchySettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, HierarchySettings), Z_Construct_UScriptStruct_FRigHierarchySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchySettings_MetaData), NewProp_HierarchySettings_MetaData) }; // 1524821739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_ValueProp = { "ControlCustomizations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRigControlElementCustomization, METADATA_PARAMS(0, nullptr) }; // 2658307847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_Key_KeyProp = { "ControlCustomizations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations = { "ControlCustomizations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, ControlCustomizations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlCustomizations_MetaData), NewProp_ControlCustomizations_MetaData) }; // 1447557315 2658307847
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy = { "DynamicHierarchy", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, DynamicHierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicHierarchy_MetaData), NewProp_DynamicHierarchy_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary = { "GizmoLibrary", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, GizmoLibrary_DEPRECATED), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoLibrary_MetaData), NewProp_GizmoLibrary_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_Inner = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, ShapeLibraries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeLibraries_MetaData), NewProp_ShapeLibraries_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraryNameMap_ValueProp = { "ShapeLibraryNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraryNameMap_Key_KeyProp = { "ShapeLibraryNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraryNameMap = { "ShapeLibraryNameMap", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, ShapeLibraryNameMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeLibraryNameMap_MetaData), NewProp_ShapeLibraryNameMap_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_ValueProp = { "InputProperties", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCachedPropertyPath, METADATA_PARAMS(0, nullptr) }; // 2813334034
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_Key_KeyProp = { "InputProperties_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties = { "InputProperties", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, InputProperties_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputProperties_MetaData), NewProp_InputProperties_MetaData) }; // 2813334034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_ValueProp = { "OutputProperties", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCachedPropertyPath, METADATA_PARAMS(0, nullptr) }; // 2813334034
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_Key_KeyProp = { "OutputProperties_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties = { "OutputProperties", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, OutputProperties_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputProperties_MetaData), NewProp_OutputProperties_MetaData) }; // 2813334034
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_RigVMExtendedExecuteContext = { "RigVMExtendedExecuteContext", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, RigVMExtendedExecuteContext), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigVMExtendedExecuteContext_MetaData), NewProp_RigVMExtendedExecuteContext_MetaData) }; // 1517476021
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry = { "DataSourceRegistry", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, DataSourceRegistry), Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSourceRegistry_MetaData), NewProp_DataSourceRegistry_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_Influences = { "Influences", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, Influences), Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Influences_MetaData), NewProp_Influences_MetaData) }; // 2581994178
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExternalVariableDataAssetLinks_ValueProp = { "ExternalVariableDataAssetLinks", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UDataAssetLink_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExternalVariableDataAssetLinks_Key_KeyProp = { "ExternalVariableDataAssetLinks_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExternalVariableDataAssetLinks = { "ExternalVariableDataAssetLinks", nullptr, (EPropertyFlags)0x0124088000202008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, ExternalVariableDataAssetLinks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalVariableDataAssetLinks_MetaData), NewProp_ExternalVariableDataAssetLinks_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OnControlSelected_BP = { "OnControlSelected_BP", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, OnControlSelected_BP), Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControlSelected_BP_MetaData), NewProp_OnControlSelected_BP_MetaData) }; // 3673747271
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible_SetBit(void* Obj)
{
	((UControlRig*)Obj)->bControlsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible = { "bControlsVisible", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRig), &Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bControlsVisible_MetaData), NewProp_bControlsVisible_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UControlRig_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
{
	((UControlRig*)Obj)->bIsAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_bIsAdditive = { "bIsAdditive", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRig), &Z_Construct_UClass_UControlRig_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAdditive_MetaData), NewProp_bIsAdditive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_RigModuleSettings = { "RigModuleSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, RigModuleSettings), Z_Construct_UScriptStruct_FRigModuleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigModuleSettings_MetaData), NewProp_RigModuleSettings_MetaData) }; // 2584514901
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_RigModuleNameSpace = { "RigModuleNameSpace", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, RigModuleNameSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigModuleNameSpace_MetaData), NewProp_RigModuleNameSpace_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig = { "InteractionRig", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, InteractionRig_DEPRECATED), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRig_MetaData), NewProp_InteractionRig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass = { "InteractionRigClass", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRig, InteractionRigClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRigClass_MetaData), NewProp_InteractionRigClass_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_HierarchySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraryNameMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraryNameMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraryNameMap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_RigVMExtendedExecuteContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_Influences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExternalVariableDataAssetLinks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExternalVariableDataAssetLinks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExternalVariableDataAssetLinks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OnControlSelected_BP,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_bIsAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_RigModuleSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_RigModuleNameSpace,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URigVMHost,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRig_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(UControlRig, INodeMappingProviderInterface), false },  // 2699525937
	{ Z_Construct_UClass_URigHierarchyProvider_NoRegister, (int32)VTABLE_OFFSET(UControlRig, IRigHierarchyProvider), false },  // 1469693958
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRig_Statics::ClassParams = {
	&UControlRig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UControlRig_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRig()
{
	if (!Z_Registration_Info_UClass_UControlRig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRig.OuterSingleton, Z_Construct_UClass_UControlRig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRig.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRig>()
{
	return UControlRig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRig);
UControlRig::~UControlRig() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRig)
// End Class UControlRig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRig, UControlRig::StaticClass, TEXT("UControlRig"), &Z_Registration_Info_UClass_UControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRig), 486443387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_1979681637(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
