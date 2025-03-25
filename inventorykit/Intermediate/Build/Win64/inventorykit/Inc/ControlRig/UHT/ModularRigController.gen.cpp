// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ModularRigController.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "RigVM/Public/RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularRigController() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRigController();
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRigController_NoRegister();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMMirrorSettings();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UModularRigController Function AddModule
struct Z_Construct_UFunction_UModularRigController_AddModule_Statics
{
	struct ModularRigController_eventAddModule_Parms
	{
		FName InModuleName;
		TSubclassOf<UControlRig> InClass;
		FString InParentModulePath;
		bool bSetupUndo;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParentModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InModuleName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InParentModulePath;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_InModuleName = { "InModuleName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventAddModule_Parms, InModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModuleName_MetaData), NewProp_InModuleName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventAddModule_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_InParentModulePath = { "InParentModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventAddModule_Parms, InParentModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParentModulePath_MetaData), NewProp_InParentModulePath_MetaData) };
void Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventAddModule_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventAddModule_Parms), &Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventAddModule_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_AddModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_InModuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_InClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_InParentModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AddModule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AddModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_AddModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "AddModule", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_AddModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AddModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_AddModule_Statics::ModularRigController_eventAddModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AddModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_AddModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_AddModule_Statics::ModularRigController_eventAddModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_AddModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_AddModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execAddModule)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InModuleName);
	P_GET_OBJECT(UClass,Z_Param_InClass);
	P_GET_PROPERTY(FStrProperty,Z_Param_InParentModulePath);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->AddModule(Z_Param_Out_InModuleName,Z_Param_InClass,Z_Param_InParentModulePath,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function AddModule

// Begin Class UModularRigController Function AutoConnectModules
struct Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics
{
	struct ModularRigController_eventAutoConnectModules_Parms
	{
		TArray<FString> InModulePaths;
		bool bReplaceExistingConnections;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InModulePaths;
	static void NewProp_bReplaceExistingConnections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingConnections;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_InModulePaths_Inner = { "InModulePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_InModulePaths = { "InModulePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventAutoConnectModules_Parms, InModulePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePaths_MetaData), NewProp_InModulePaths_MetaData) };
void Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bReplaceExistingConnections_SetBit(void* Obj)
{
	((ModularRigController_eventAutoConnectModules_Parms*)Obj)->bReplaceExistingConnections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bReplaceExistingConnections = { "bReplaceExistingConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventAutoConnectModules_Parms), &Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bReplaceExistingConnections_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventAutoConnectModules_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventAutoConnectModules_Parms), &Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventAutoConnectModules_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventAutoConnectModules_Parms), &Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_InModulePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_InModulePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bReplaceExistingConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "AutoConnectModules", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::ModularRigController_eventAutoConnectModules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::ModularRigController_eventAutoConnectModules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_AutoConnectModules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_AutoConnectModules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execAutoConnectModules)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InModulePaths);
	P_GET_UBOOL(Z_Param_bReplaceExistingConnections);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AutoConnectModules(Z_Param_Out_InModulePaths,Z_Param_bReplaceExistingConnections,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function AutoConnectModules

// Begin Class UModularRigController Function AutoConnectSecondaryConnectors
struct Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics
{
	struct ModularRigController_eventAutoConnectSecondaryConnectors_Parms
	{
		TArray<FRigElementKey> InConnectorKeys;
		bool bReplaceExistingConnections;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConnectorKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConnectorKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InConnectorKeys;
	static void NewProp_bReplaceExistingConnections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExistingConnections;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_InConnectorKeys_Inner = { "InConnectorKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_InConnectorKeys = { "InConnectorKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventAutoConnectSecondaryConnectors_Parms, InConnectorKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConnectorKeys_MetaData), NewProp_InConnectorKeys_MetaData) }; // 1447557315
void Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bReplaceExistingConnections_SetBit(void* Obj)
{
	((ModularRigController_eventAutoConnectSecondaryConnectors_Parms*)Obj)->bReplaceExistingConnections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bReplaceExistingConnections = { "bReplaceExistingConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventAutoConnectSecondaryConnectors_Parms), &Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bReplaceExistingConnections_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventAutoConnectSecondaryConnectors_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventAutoConnectSecondaryConnectors_Parms), &Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventAutoConnectSecondaryConnectors_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventAutoConnectSecondaryConnectors_Parms), &Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_InConnectorKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_InConnectorKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bReplaceExistingConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "AutoConnectSecondaryConnectors", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::ModularRigController_eventAutoConnectSecondaryConnectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::ModularRigController_eventAutoConnectSecondaryConnectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execAutoConnectSecondaryConnectors)
{
	P_GET_TARRAY_REF(FRigElementKey,Z_Param_Out_InConnectorKeys);
	P_GET_UBOOL(Z_Param_bReplaceExistingConnections);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AutoConnectSecondaryConnectors(Z_Param_Out_InConnectorKeys,Z_Param_bReplaceExistingConnections,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function AutoConnectSecondaryConnectors

// Begin Class UModularRigController Function BindModuleVariable
struct Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics
{
	struct ModularRigController_eventBindModuleVariable_Parms
	{
		FString InModulePath;
		FName InVariableName;
		FString InSourcePath;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSourcePath;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventBindModuleVariable_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventBindModuleVariable_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_InSourcePath = { "InSourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventBindModuleVariable_Parms, InSourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSourcePath_MetaData), NewProp_InSourcePath_MetaData) };
void Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventBindModuleVariable_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventBindModuleVariable_Parms), &Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventBindModuleVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventBindModuleVariable_Parms), &Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_InSourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "BindModuleVariable", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::ModularRigController_eventBindModuleVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::ModularRigController_eventBindModuleVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_BindModuleVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_BindModuleVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execBindModuleVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InSourcePath);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BindModuleVariable(Z_Param_InModulePath,Z_Param_Out_InVariableName,Z_Param_InSourcePath,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function BindModuleVariable

// Begin Class UModularRigController Function CanConnectConnectorToElement
struct Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics
{
	struct ModularRigController_eventCanConnectConnectorToElement_Parms
	{
		FRigElementKey InConnectorKey;
		FRigElementKey InTargetKey;
		FText OutErrorMessage;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConnectorKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConnectorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetKey;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutErrorMessage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_InConnectorKey = { "InConnectorKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventCanConnectConnectorToElement_Parms, InConnectorKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConnectorKey_MetaData), NewProp_InConnectorKey_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_InTargetKey = { "InTargetKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventCanConnectConnectorToElement_Parms, InTargetKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetKey_MetaData), NewProp_InTargetKey_MetaData) }; // 1447557315
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_OutErrorMessage = { "OutErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventCanConnectConnectorToElement_Parms, OutErrorMessage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventCanConnectConnectorToElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventCanConnectConnectorToElement_Parms), &Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_InConnectorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_InTargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_OutErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "CanConnectConnectorToElement", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::ModularRigController_eventCanConnectConnectorToElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::ModularRigController_eventCanConnectConnectorToElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execCanConnectConnectorToElement)
{
	P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InConnectorKey);
	P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InTargetKey);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanConnectConnectorToElement(Z_Param_Out_InConnectorKey,Z_Param_Out_InTargetKey,Z_Param_Out_OutErrorMessage);
	P_NATIVE_END;
}
// End Class UModularRigController Function CanConnectConnectorToElement

// Begin Class UModularRigController Function ConnectConnectorToElement
struct Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics
{
	struct ModularRigController_eventConnectConnectorToElement_Parms
	{
		FRigElementKey InConnectorKey;
		FRigElementKey InTargetKey;
		bool bSetupUndo;
		bool bAutoResolveOtherConnectors;
		bool bCheckValidConnection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "CPP_Default_bAutoResolveOtherConnectors", "true" },
		{ "CPP_Default_bCheckValidConnection", "true" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConnectorKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTargetKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConnectorKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTargetKey;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_bAutoResolveOtherConnectors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoResolveOtherConnectors;
	static void NewProp_bCheckValidConnection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckValidConnection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_InConnectorKey = { "InConnectorKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventConnectConnectorToElement_Parms, InConnectorKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConnectorKey_MetaData), NewProp_InConnectorKey_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_InTargetKey = { "InTargetKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventConnectConnectorToElement_Parms, InTargetKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTargetKey_MetaData), NewProp_InTargetKey_MetaData) }; // 1447557315
void Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventConnectConnectorToElement_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventConnectConnectorToElement_Parms), &Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bAutoResolveOtherConnectors_SetBit(void* Obj)
{
	((ModularRigController_eventConnectConnectorToElement_Parms*)Obj)->bAutoResolveOtherConnectors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bAutoResolveOtherConnectors = { "bAutoResolveOtherConnectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventConnectConnectorToElement_Parms), &Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bAutoResolveOtherConnectors_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bCheckValidConnection_SetBit(void* Obj)
{
	((ModularRigController_eventConnectConnectorToElement_Parms*)Obj)->bCheckValidConnection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bCheckValidConnection = { "bCheckValidConnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventConnectConnectorToElement_Parms), &Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bCheckValidConnection_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventConnectConnectorToElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventConnectConnectorToElement_Parms), &Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_InConnectorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_InTargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bAutoResolveOtherConnectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_bCheckValidConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "ConnectConnectorToElement", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::ModularRigController_eventConnectConnectorToElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::ModularRigController_eventConnectConnectorToElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execConnectConnectorToElement)
{
	P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InConnectorKey);
	P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InTargetKey);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_GET_UBOOL(Z_Param_bAutoResolveOtherConnectors);
	P_GET_UBOOL(Z_Param_bCheckValidConnection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectConnectorToElement(Z_Param_Out_InConnectorKey,Z_Param_Out_InTargetKey,Z_Param_bSetupUndo,Z_Param_bAutoResolveOtherConnectors,Z_Param_bCheckValidConnection);
	P_NATIVE_END;
}
// End Class UModularRigController Function ConnectConnectorToElement

// Begin Class UModularRigController Function DeleteModule
struct Z_Construct_UFunction_UModularRigController_DeleteModule_Statics
{
	struct ModularRigController_eventDeleteModule_Parms
	{
		FString InModulePath;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventDeleteModule_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
void Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventDeleteModule_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventDeleteModule_Parms), &Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventDeleteModule_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventDeleteModule_Parms), &Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "DeleteModule", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::ModularRigController_eventDeleteModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::ModularRigController_eventDeleteModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_DeleteModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_DeleteModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execDeleteModule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteModule(Z_Param_InModulePath,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function DeleteModule

// Begin Class UModularRigController Function DisconnectConnector
struct Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics
{
	struct ModularRigController_eventDisconnectConnector_Parms
	{
		FRigElementKey InConnectorKey;
		bool bDisconnectSubModules;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "CPP_Default_bDisconnectSubModules", "false" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConnectorKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConnectorKey;
	static void NewProp_bDisconnectSubModules_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisconnectSubModules;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_InConnectorKey = { "InConnectorKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventDisconnectConnector_Parms, InConnectorKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConnectorKey_MetaData), NewProp_InConnectorKey_MetaData) }; // 1447557315
void Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bDisconnectSubModules_SetBit(void* Obj)
{
	((ModularRigController_eventDisconnectConnector_Parms*)Obj)->bDisconnectSubModules = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bDisconnectSubModules = { "bDisconnectSubModules", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventDisconnectConnector_Parms), &Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bDisconnectSubModules_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventDisconnectConnector_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventDisconnectConnector_Parms), &Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventDisconnectConnector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventDisconnectConnector_Parms), &Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_InConnectorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bDisconnectSubModules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "DisconnectConnector", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::ModularRigController_eventDisconnectConnector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::ModularRigController_eventDisconnectConnector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_DisconnectConnector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_DisconnectConnector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execDisconnectConnector)
{
	P_GET_STRUCT_REF(FRigElementKey,Z_Param_Out_InConnectorKey);
	P_GET_UBOOL(Z_Param_bDisconnectSubModules);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DisconnectConnector(Z_Param_Out_InConnectorKey,Z_Param_bDisconnectSubModules,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function DisconnectConnector

// Begin Class UModularRigController Function DisconnectCyclicConnectors
struct Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics
{
	struct ModularRigController_eventDisconnectCyclicConnectors_Parms
	{
		bool bSetupUndo;
		TArray<FRigElementKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventDisconnectCyclicConnectors_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventDisconnectCyclicConnectors_Parms), &Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventDisconnectCyclicConnectors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "DisconnectCyclicConnectors", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::ModularRigController_eventDisconnectCyclicConnectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::ModularRigController_eventDisconnectCyclicConnectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execDisconnectCyclicConnectors)
{
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigElementKey>*)Z_Param__Result=P_THIS->DisconnectCyclicConnectors(Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function DisconnectCyclicConnectors

// Begin Class UModularRigController Function MirrorModule
struct Z_Construct_UFunction_UModularRigController_MirrorModule_Statics
{
	struct ModularRigController_eventMirrorModule_Parms
	{
		FString InModulePath;
		FRigVMMirrorSettings InSettings;
		bool bSetupUndo;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventMirrorModule_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventMirrorModule_Parms, InSettings), Z_Construct_UScriptStruct_FRigVMMirrorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 2535337673
void Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventMirrorModule_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventMirrorModule_Parms), &Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventMirrorModule_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_InSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "MirrorModule", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::ModularRigController_eventMirrorModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::ModularRigController_eventMirrorModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_MirrorModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_MirrorModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execMirrorModule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_STRUCT_REF(FRigVMMirrorSettings,Z_Param_Out_InSettings);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->MirrorModule(Z_Param_InModulePath,Z_Param_Out_InSettings,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function MirrorModule

// Begin Class UModularRigController Function RenameModule
struct Z_Construct_UFunction_UModularRigController_RenameModule_Statics
{
	struct ModularRigController_eventRenameModule_Parms
	{
		FString InModulePath;
		FName InNewName;
		bool bSetupUndo;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InNewName;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventRenameModule_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_InNewName = { "InNewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventRenameModule_Parms, InNewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewName_MetaData), NewProp_InNewName_MetaData) };
void Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventRenameModule_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventRenameModule_Parms), &Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventRenameModule_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_RenameModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_InNewName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_RenameModule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_RenameModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_RenameModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "RenameModule", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_RenameModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_RenameModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_RenameModule_Statics::ModularRigController_eventRenameModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_RenameModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_RenameModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_RenameModule_Statics::ModularRigController_eventRenameModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_RenameModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_RenameModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execRenameModule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InNewName);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->RenameModule(Z_Param_InModulePath,Z_Param_Out_InNewName,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function RenameModule

// Begin Class UModularRigController Function ReparentModule
struct Z_Construct_UFunction_UModularRigController_ReparentModule_Statics
{
	struct ModularRigController_eventReparentModule_Parms
	{
		FString InModulePath;
		FString InNewParentModulePath;
		bool bSetupUndo;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewParentModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNewParentModulePath;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventReparentModule_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_InNewParentModulePath = { "InNewParentModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventReparentModule_Parms, InNewParentModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewParentModulePath_MetaData), NewProp_InNewParentModulePath_MetaData) };
void Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventReparentModule_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventReparentModule_Parms), &Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventReparentModule_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_InNewParentModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "ReparentModule", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::ModularRigController_eventReparentModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::ModularRigController_eventReparentModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_ReparentModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_ReparentModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execReparentModule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_InNewParentModulePath);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ReparentModule(Z_Param_InModulePath,Z_Param_InNewParentModulePath,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function ReparentModule

// Begin Class UModularRigController Function SetConfigValueInModule
struct Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics
{
	struct ModularRigController_eventSetConfigValueInModule_Parms
	{
		FString InModulePath;
		FName InVariableName;
		FString InValue;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventSetConfigValueInModule_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventSetConfigValueInModule_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventSetConfigValueInModule_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventSetConfigValueInModule_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventSetConfigValueInModule_Parms), &Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventSetConfigValueInModule_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventSetConfigValueInModule_Parms), &Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "SetConfigValueInModule", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::ModularRigController_eventSetConfigValueInModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::ModularRigController_eventSetConfigValueInModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_SetConfigValueInModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_SetConfigValueInModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execSetConfigValueInModule)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetConfigValueInModule(Z_Param_InModulePath,Z_Param_Out_InVariableName,Z_Param_InValue,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function SetConfigValueInModule

// Begin Class UModularRigController Function SetModuleShortName
struct Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics
{
	struct ModularRigController_eventSetModuleShortName_Parms
	{
		FString InModulePath;
		FString InNewShortName;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNewShortName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNewShortName;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventSetModuleShortName_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_InNewShortName = { "InNewShortName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventSetModuleShortName_Parms, InNewShortName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNewShortName_MetaData), NewProp_InNewShortName_MetaData) };
void Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventSetModuleShortName_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventSetModuleShortName_Parms), &Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventSetModuleShortName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventSetModuleShortName_Parms), &Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_InNewShortName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "SetModuleShortName", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::ModularRigController_eventSetModuleShortName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::ModularRigController_eventSetModuleShortName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_SetModuleShortName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_SetModuleShortName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execSetModuleShortName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_InNewShortName);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetModuleShortName(Z_Param_InModulePath,Z_Param_InNewShortName,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function SetModuleShortName

// Begin Class UModularRigController Function UnBindModuleVariable
struct Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics
{
	struct ModularRigController_eventUnBindModuleVariable_Parms
	{
		FString InModulePath;
		FName InVariableName;
		bool bSetupUndo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ControlRig | Modules" },
		{ "CPP_Default_bSetupUndo", "true" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModulePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InModulePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static void NewProp_bSetupUndo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupUndo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_InModulePath = { "InModulePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventUnBindModuleVariable_Parms, InModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModulePath_MetaData), NewProp_InModulePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularRigController_eventUnBindModuleVariable_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
void Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_bSetupUndo_SetBit(void* Obj)
{
	((ModularRigController_eventUnBindModuleVariable_Parms*)Obj)->bSetupUndo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_bSetupUndo = { "bSetupUndo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventUnBindModuleVariable_Parms), &Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_bSetupUndo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularRigController_eventUnBindModuleVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularRigController_eventUnBindModuleVariable_Parms), &Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_InModulePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_bSetupUndo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularRigController, nullptr, "UnBindModuleVariable", nullptr, nullptr, Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::ModularRigController_eventUnBindModuleVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::ModularRigController_eventUnBindModuleVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularRigController_UnBindModuleVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularRigController_UnBindModuleVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularRigController::execUnBindModuleVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InModulePath);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
	P_GET_UBOOL(Z_Param_bSetupUndo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnBindModuleVariable(Z_Param_InModulePath,Z_Param_Out_InVariableName,Z_Param_bSetupUndo);
	P_NATIVE_END;
}
// End Class UModularRigController Function UnBindModuleVariable

// Begin Class UModularRigController
void UModularRigController::StaticRegisterNativesUModularRigController()
{
	UClass* Class = UModularRigController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddModule", &UModularRigController::execAddModule },
		{ "AutoConnectModules", &UModularRigController::execAutoConnectModules },
		{ "AutoConnectSecondaryConnectors", &UModularRigController::execAutoConnectSecondaryConnectors },
		{ "BindModuleVariable", &UModularRigController::execBindModuleVariable },
		{ "CanConnectConnectorToElement", &UModularRigController::execCanConnectConnectorToElement },
		{ "ConnectConnectorToElement", &UModularRigController::execConnectConnectorToElement },
		{ "DeleteModule", &UModularRigController::execDeleteModule },
		{ "DisconnectConnector", &UModularRigController::execDisconnectConnector },
		{ "DisconnectCyclicConnectors", &UModularRigController::execDisconnectCyclicConnectors },
		{ "MirrorModule", &UModularRigController::execMirrorModule },
		{ "RenameModule", &UModularRigController::execRenameModule },
		{ "ReparentModule", &UModularRigController::execReparentModule },
		{ "SetConfigValueInModule", &UModularRigController::execSetConfigValueInModule },
		{ "SetModuleShortName", &UModularRigController::execSetModuleShortName },
		{ "UnBindModuleVariable", &UModularRigController::execUnBindModuleVariable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularRigController);
UClass* Z_Construct_UClass_UModularRigController_NoRegister()
{
	return UModularRigController::StaticClass();
}
struct Z_Construct_UClass_UModularRigController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularRigController.h" },
		{ "ModuleRelativePath", "Public/ModularRigController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularRigController_AddModule, "AddModule" }, // 2980253777
		{ &Z_Construct_UFunction_UModularRigController_AutoConnectModules, "AutoConnectModules" }, // 3793249080
		{ &Z_Construct_UFunction_UModularRigController_AutoConnectSecondaryConnectors, "AutoConnectSecondaryConnectors" }, // 4247313617
		{ &Z_Construct_UFunction_UModularRigController_BindModuleVariable, "BindModuleVariable" }, // 1675640596
		{ &Z_Construct_UFunction_UModularRigController_CanConnectConnectorToElement, "CanConnectConnectorToElement" }, // 3464077307
		{ &Z_Construct_UFunction_UModularRigController_ConnectConnectorToElement, "ConnectConnectorToElement" }, // 3958069051
		{ &Z_Construct_UFunction_UModularRigController_DeleteModule, "DeleteModule" }, // 1159816612
		{ &Z_Construct_UFunction_UModularRigController_DisconnectConnector, "DisconnectConnector" }, // 3639810990
		{ &Z_Construct_UFunction_UModularRigController_DisconnectCyclicConnectors, "DisconnectCyclicConnectors" }, // 4221698423
		{ &Z_Construct_UFunction_UModularRigController_MirrorModule, "MirrorModule" }, // 184901803
		{ &Z_Construct_UFunction_UModularRigController_RenameModule, "RenameModule" }, // 2183235136
		{ &Z_Construct_UFunction_UModularRigController_ReparentModule, "ReparentModule" }, // 1814844930
		{ &Z_Construct_UFunction_UModularRigController_SetConfigValueInModule, "SetConfigValueInModule" }, // 732801810
		{ &Z_Construct_UFunction_UModularRigController_SetModuleShortName, "SetModuleShortName" }, // 1440109889
		{ &Z_Construct_UFunction_UModularRigController_UnBindModuleVariable, "UnBindModuleVariable" }, // 3973161834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularRigController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularRigController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularRigController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularRigController_Statics::ClassParams = {
	&UModularRigController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularRigController_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularRigController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularRigController()
{
	if (!Z_Registration_Info_UClass_UModularRigController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularRigController.OuterSingleton, Z_Construct_UClass_UModularRigController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularRigController.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UModularRigController>()
{
	return UModularRigController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularRigController);
UModularRigController::~UModularRigController() {}
// End Class UModularRigController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularRigController, UModularRigController::StaticClass, TEXT("UModularRigController"), &Z_Registration_Info_UClass_UModularRigController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularRigController), 2380487531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_3124715062(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
