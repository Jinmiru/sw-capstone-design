// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Animation/Constraints/Public/ConstraintsScripting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintsScripting() {}

// Begin Cross Module References
ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsScriptingLibrary();
CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsScriptingLibrary_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableComponentHandle_NoRegister();
CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

// Begin Class UConstraintsScriptingLibrary Function AddConstraint
struct Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics
{
	struct ConstraintsScriptingLibrary_eventAddConstraint_Parms
	{
		UWorld* InWorld;
		UTransformableHandle* InParentHandle;
		UTransformableHandle* InChildHandle;
		UTickableTransformConstraint* InConstraint;
		bool bMaintainOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InChildHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InConstraint;
	static void NewProp_bMaintainOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InParentHandle = { "InParentHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InParentHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InChildHandle = { "InChildHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InChildHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InConstraint = { "InConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InConstraint), Z_Construct_UClass_UTickableTransformConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
{
	((ConstraintsScriptingLibrary_eventAddConstraint_Parms*)Obj)->bMaintainOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventAddConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainOffset_MetaData), NewProp_bMaintainOffset_MetaData) };
void Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ConstraintsScriptingLibrary_eventAddConstraint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventAddConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InParentHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InChildHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "AddConstraint", nullptr, nullptr, Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::ConstraintsScriptingLibrary_eventAddConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::ConstraintsScriptingLibrary_eventAddConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstraintsScriptingLibrary::execAddConstraint)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_OBJECT(UTransformableHandle,Z_Param_InParentHandle);
	P_GET_OBJECT(UTransformableHandle,Z_Param_InChildHandle);
	P_GET_OBJECT(UTickableTransformConstraint,Z_Param_InConstraint);
	P_GET_UBOOL(Z_Param_bMaintainOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UConstraintsScriptingLibrary::AddConstraint(Z_Param_InWorld,Z_Param_InParentHandle,Z_Param_InChildHandle,Z_Param_InConstraint,Z_Param_bMaintainOffset);
	P_NATIVE_END;
}
// End Class UConstraintsScriptingLibrary Function AddConstraint

// Begin Class UConstraintsScriptingLibrary Function CreateFromType
struct Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics
{
	struct ConstraintsScriptingLibrary_eventCreateFromType_Parms
	{
		UWorld* InWorld;
		ETransformConstraintType InType;
		UTickableTransformConstraint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Create Constraint based on the specified type.\n\x09* @param InWorld World to create the constraint\n\x09* @param InType The type of constraint\n\x09* @return return The constraint object\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Create Constraint based on the specified type.\n@param InWorld World to create the constraint\n@param InType The type of constraint\n@return return The constraint object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateFromType_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateFromType_Parms, InType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InType_MetaData), NewProp_InType_MetaData) }; // 112181424
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateFromType_Parms, ReturnValue), Z_Construct_UClass_UTickableTransformConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "CreateFromType", nullptr, nullptr, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::ConstraintsScriptingLibrary_eventCreateFromType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::ConstraintsScriptingLibrary_eventCreateFromType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstraintsScriptingLibrary::execCreateFromType)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_ENUM(ETransformConstraintType,Z_Param_InType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTickableTransformConstraint**)Z_Param__Result=UConstraintsScriptingLibrary::CreateFromType(Z_Param_InWorld,ETransformConstraintType(Z_Param_InType));
	P_NATIVE_END;
}
// End Class UConstraintsScriptingLibrary Function CreateFromType

// Begin Class UConstraintsScriptingLibrary Function CreateTransformableComponentHandle
struct Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics
{
	struct ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms
	{
		UWorld* InWorld;
		USceneComponent* InSceneComponent;
		FName InSocketName;
		UTransformableComponentHandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Create the transformable handle that deals with getting and setting transforms on this scene component\n\x09* @param InWorld, the world you are in\n\x09* @param InSceneComponent World to create the constraint\n\x09* @param InSocketName Optional name of the socket to get the transform \n\x09* @return returns the handle for this scene component\n\x09**/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Create the transformable handle that deals with getting and setting transforms on this scene component\n@param InWorld, the world you are in\n@param InSceneComponent World to create the constraint\n@param InSocketName Optional name of the socket to get the transform\n@return returns the handle for this scene component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSceneComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSceneComponent = { "InSceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, InSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSceneComponent_MetaData), NewProp_InSceneComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, InSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSocketName_MetaData), NewProp_InSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, ReturnValue), Z_Construct_UClass_UTransformableComponentHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "CreateTransformableComponentHandle", nullptr, nullptr, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstraintsScriptingLibrary::execCreateTransformableComponentHandle)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_OBJECT(USceneComponent,Z_Param_InSceneComponent);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTransformableComponentHandle**)Z_Param__Result=UConstraintsScriptingLibrary::CreateTransformableComponentHandle(Z_Param_InWorld,Z_Param_InSceneComponent,Z_Param_Out_InSocketName);
	P_NATIVE_END;
}
// End Class UConstraintsScriptingLibrary Function CreateTransformableComponentHandle

// Begin Class UConstraintsScriptingLibrary Function CreateTransformableHandle
struct Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics
{
	struct ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms
	{
		UWorld* InWorld;
		UObject* InObject;
		FName InAttachmentName;
		UTransformableHandle* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Create the transformable handle that deals with getting and setting transforms on this object\n\x09* @param InWorld, the world you are in\n\x09* @param InObject World to create the constraint\n\x09* @param InAttachmentName Optional name of the attachment to get the transform. Not that this can represent a scene component's socket name or a control rig control for example. \n\x09* @return returns the handle for this scene component\n\x09**/" },
		{ "CPP_Default_InAttachmentName", "None" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Create the transformable handle that deals with getting and setting transforms on this object\n@param InWorld, the world you are in\n@param InObject World to create the constraint\n@param InAttachmentName Optional name of the attachment to get the transform. Not that this can represent a scene component's socket name or a control rig control for example.\n@return returns the handle for this scene component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttachmentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InAttachmentName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InAttachmentName = { "InAttachmentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, InAttachmentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttachmentName_MetaData), NewProp_InAttachmentName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, ReturnValue), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InAttachmentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "CreateTransformableHandle", nullptr, nullptr, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstraintsScriptingLibrary::execCreateTransformableHandle)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_OBJECT(UObject,Z_Param_InObject);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttachmentName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTransformableHandle**)Z_Param__Result=UConstraintsScriptingLibrary::CreateTransformableHandle(Z_Param_InWorld,Z_Param_InObject,Z_Param_Out_InAttachmentName);
	P_NATIVE_END;
}
// End Class UConstraintsScriptingLibrary Function CreateTransformableHandle

// Begin Class UConstraintsScriptingLibrary Function GetConstraintsArray
struct Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics
{
	struct ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms
	{
		UWorld* InWorld;
		TArray<UTickableConstraint*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/* Get a copy of the constraints in the current world\n\x09@param InWorld World we are in\n\x09@return Copy of the constraints in the level\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Get a copy of the constraints in the current world\n      @param InWorld World we are in\n      @return Copy of the constraints in the level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "GetConstraintsArray", nullptr, nullptr, Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstraintsScriptingLibrary::execGetConstraintsArray)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTickableConstraint*>*)Z_Param__Result=UConstraintsScriptingLibrary::GetConstraintsArray(Z_Param_InWorld);
	P_NATIVE_END;
}
// End Class UConstraintsScriptingLibrary Function GetConstraintsArray

// Begin Class UConstraintsScriptingLibrary Function RemoveConstraint
struct Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics
{
	struct ConstraintsScriptingLibrary_eventRemoveConstraint_Parms
	{
		UWorld* InWorld;
		int32 InIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Remove constraint at specified index\n\x09* @param InWorld World to remove the constraint\n\x09* @param InIndex Index to remove from\n\x09* @return return If constraint removed correctly\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Remove constraint at specified index\n@param InWorld World to remove the constraint\n@param InIndex Index to remove from\n@return return If constraint removed correctly" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveConstraint_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveConstraint_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ConstraintsScriptingLibrary_eventRemoveConstraint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventRemoveConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "RemoveConstraint", nullptr, nullptr, Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::ConstraintsScriptingLibrary_eventRemoveConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::ConstraintsScriptingLibrary_eventRemoveConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstraintsScriptingLibrary::execRemoveConstraint)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UConstraintsScriptingLibrary::RemoveConstraint(Z_Param_InWorld,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UConstraintsScriptingLibrary Function RemoveConstraint

// Begin Class UConstraintsScriptingLibrary Function RemoveThisConstraint
struct Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics
{
	struct ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms
	{
		UWorld* InWorld;
		UTickableConstraint* InTickableConstraint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Remove specified constraint \n\x09* @param InWorld World to remove the constraint\n\x09* @param InTickableConstraint Constraint to remove\n\x09* @return return If constraint removed correctly\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Remove specified constraint\n@param InWorld World to remove the constraint\n@param InTickableConstraint Constraint to remove\n@return return If constraint removed correctly" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTickableConstraint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InTickableConstraint = { "InTickableConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms, InTickableConstraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InTickableConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "RemoveThisConstraint", nullptr, nullptr, Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConstraintsScriptingLibrary::execRemoveThisConstraint)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_GET_OBJECT(UTickableConstraint,Z_Param_InTickableConstraint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UConstraintsScriptingLibrary::RemoveThisConstraint(Z_Param_InWorld,Z_Param_InTickableConstraint);
	P_NATIVE_END;
}
// End Class UConstraintsScriptingLibrary Function RemoveThisConstraint

// Begin Class UConstraintsScriptingLibrary
void UConstraintsScriptingLibrary::StaticRegisterNativesUConstraintsScriptingLibrary()
{
	UClass* Class = UConstraintsScriptingLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddConstraint", &UConstraintsScriptingLibrary::execAddConstraint },
		{ "CreateFromType", &UConstraintsScriptingLibrary::execCreateFromType },
		{ "CreateTransformableComponentHandle", &UConstraintsScriptingLibrary::execCreateTransformableComponentHandle },
		{ "CreateTransformableHandle", &UConstraintsScriptingLibrary::execCreateTransformableHandle },
		{ "GetConstraintsArray", &UConstraintsScriptingLibrary::execGetConstraintsArray },
		{ "RemoveConstraint", &UConstraintsScriptingLibrary::execRemoveConstraint },
		{ "RemoveThisConstraint", &UConstraintsScriptingLibrary::execRemoveThisConstraint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstraintsScriptingLibrary);
UClass* Z_Construct_UClass_UConstraintsScriptingLibrary_NoRegister()
{
	return UConstraintsScriptingLibrary::StaticClass();
}
struct Z_Construct_UClass_UConstraintsScriptingLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints.\n*/" },
		{ "IncludePath", "ConstraintsScripting.h" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ScriptName", "ConstraintsScriptingLibrary" },
		{ "ToolTip", "This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints." },
		{ "Transient", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint, "AddConstraint" }, // 2755819145
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType, "CreateFromType" }, // 1298790537
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle, "CreateTransformableComponentHandle" }, // 1046294348
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle, "CreateTransformableHandle" }, // 3527148595
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray, "GetConstraintsArray" }, // 353416642
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint, "RemoveConstraint" }, // 138526720
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint, "RemoveThisConstraint" }, // 1364773909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintsScriptingLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::ClassParams = {
	&UConstraintsScriptingLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConstraintsScriptingLibrary()
{
	if (!Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton, Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton;
}
template<> CONSTRAINTS_API UClass* StaticClass<UConstraintsScriptingLibrary>()
{
	return UConstraintsScriptingLibrary::StaticClass();
}
UConstraintsScriptingLibrary::UConstraintsScriptingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConstraintsScriptingLibrary);
UConstraintsScriptingLibrary::~UConstraintsScriptingLibrary() {}
// End Class UConstraintsScriptingLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConstraintsScriptingLibrary, UConstraintsScriptingLibrary::StaticClass, TEXT("UConstraintsScriptingLibrary"), &Z_Registration_Info_UClass_UConstraintsScriptingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintsScriptingLibrary), 1853936535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_2363880892(TEXT("/Script/Constraints"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
