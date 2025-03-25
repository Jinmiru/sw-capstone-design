// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/FieldNotification/FieldNotificationLibrary.h"
#include "Runtime/FieldNotification/Public/FieldNotificationId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldNotificationLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UFieldNotificationLibrary();
ENGINE_API UClass* Z_Construct_UClass_UFieldNotificationLibrary_NoRegister();
FIELDNOTIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UFieldNotificationLibrary Function BroadcastFieldsValueChanged
struct Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics
{
	struct FieldNotificationLibrary_eventBroadcastFieldsValueChanged_Parms
	{
		UObject* Object;
		TArray<FFieldNotificationId> FieldIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FieldNotification" },
		{ "Comment", "/** Broadcast that a list of Field values changed. */" },
		{ "DisplayName", "Broadcast Fields Value Changed" },
		{ "FieldNotifyInterfaceParam", "Object" },
		{ "ModuleRelativePath", "Public/FieldNotification/FieldNotificationLibrary.h" },
		{ "ToolTip", "Broadcast that a list of Field values changed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventBroadcastFieldsValueChanged_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::NewProp_FieldIds_Inner = { "FieldIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::NewProp_FieldIds = { "FieldIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventBroadcastFieldsValueChanged_Parms, FieldIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::NewProp_FieldIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::NewProp_FieldIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldNotificationLibrary, nullptr, "BroadcastFieldsValueChanged", nullptr, nullptr, Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::FieldNotificationLibrary_eventBroadcastFieldsValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::FieldNotificationLibrary_eventBroadcastFieldsValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldNotificationLibrary::execBroadcastFieldsValueChanged)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_TARRAY(FFieldNotificationId,Z_Param_FieldIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFieldNotificationLibrary::BroadcastFieldsValueChanged(Z_Param_Object,Z_Param_FieldIds);
	P_NATIVE_END;
}
// End Class UFieldNotificationLibrary Function BroadcastFieldsValueChanged

// Begin Class UFieldNotificationLibrary Function BroadcastFieldValueChanged
struct Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics
{
	struct FieldNotificationLibrary_eventBroadcastFieldValueChanged_Parms
	{
		UObject* Object;
		FFieldNotificationId FieldId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FieldNotification" },
		{ "Comment", "/** Broadcast that the Field value changed. */" },
		{ "DisplayName", "Broadcast Field Value Changed" },
		{ "FieldNotifyInterfaceParam", "Object" },
		{ "ModuleRelativePath", "Public/FieldNotification/FieldNotificationLibrary.h" },
		{ "ToolTip", "Broadcast that the Field value changed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventBroadcastFieldValueChanged_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventBroadcastFieldValueChanged_Parms, FieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::NewProp_FieldId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldNotificationLibrary, nullptr, "BroadcastFieldValueChanged", nullptr, nullptr, Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::FieldNotificationLibrary_eventBroadcastFieldValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::FieldNotificationLibrary_eventBroadcastFieldValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFieldNotificationLibrary::execBroadcastFieldValueChanged)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_STRUCT(FFieldNotificationId,Z_Param_FieldId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFieldNotificationLibrary::BroadcastFieldValueChanged(Z_Param_Object,Z_Param_FieldId);
	P_NATIVE_END;
}
// End Class UFieldNotificationLibrary Function BroadcastFieldValueChanged

// Begin Class UFieldNotificationLibrary Function SetPropertyValueAndBroadcast
struct Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics
{
	struct FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms
	{
		bool NewValueByRef;
		int32 OldValue;
		int32 NewValue;
		UObject* Object;
		UObject* NetOwner;
		bool bHasLocalRepNotify;
		bool bShouldFlushDormancyOnSet;
		bool bIsNetProperty;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FieldNotification" },
		{ "CustomStructureParam", "NewValue,OldValue" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Set w/ Broadcast" },
		{ "FieldNotifyInterfaceParam", "Object" },
		{ "ModuleRelativePath", "Public/FieldNotification/FieldNotificationLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValueByRef_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValueByRef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetOwner;
	static void NewProp_bHasLocalRepNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLocalRepNotify;
	static void NewProp_bShouldFlushDormancyOnSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFlushDormancyOnSet;
	static void NewProp_bIsNetProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNetProperty;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NewValueByRef_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms*)Obj)->NewValueByRef = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NewValueByRef = { "NewValueByRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NewValueByRef_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms, OldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NetOwner = { "NetOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms, NetOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bHasLocalRepNotify_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms*)Obj)->bHasLocalRepNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bHasLocalRepNotify = { "bHasLocalRepNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bHasLocalRepNotify_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bShouldFlushDormancyOnSet_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms*)Obj)->bShouldFlushDormancyOnSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bShouldFlushDormancyOnSet = { "bShouldFlushDormancyOnSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bShouldFlushDormancyOnSet_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bIsNetProperty_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms*)Obj)->bIsNetProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bIsNetProperty = { "bIsNetProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bIsNetProperty_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NewValueByRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_NetOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bHasLocalRepNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bShouldFlushDormancyOnSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_bIsNetProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldNotificationLibrary, nullptr, "SetPropertyValueAndBroadcast", nullptr, nullptr, Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::FieldNotificationLibrary_eventSetPropertyValueAndBroadcast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UFieldNotificationLibrary Function SetPropertyValueAndBroadcast

// Begin Class UFieldNotificationLibrary Function SetPropertyValueAndBroadcastFields
struct Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics
{
	struct FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms
	{
		bool NewValueByRef;
		int32 OldValue;
		int32 NewValue;
		UObject* Object;
		UObject* NetOwner;
		bool bHasLocalRepNotify;
		bool bShouldFlushDormancyOnSet;
		bool bIsNetProperty;
		TArray<FFieldNotificationId> ExtraFieldIds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FieldNotification" },
		{ "CustomStructureParam", "NewValue,OldValue" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Set w/ Broadcast" },
		{ "FieldNotifyInterfaceParam", "Object" },
		{ "ModuleRelativePath", "Public/FieldNotification/FieldNotificationLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValueByRef_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValueByRef;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetOwner;
	static void NewProp_bHasLocalRepNotify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLocalRepNotify;
	static void NewProp_bShouldFlushDormancyOnSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFlushDormancyOnSet;
	static void NewProp_bIsNetProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNetProperty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraFieldIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraFieldIds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NewValueByRef_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms*)Obj)->NewValueByRef = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NewValueByRef = { "NewValueByRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NewValueByRef_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms, OldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NetOwner = { "NetOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms, NetOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bHasLocalRepNotify_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms*)Obj)->bHasLocalRepNotify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bHasLocalRepNotify = { "bHasLocalRepNotify", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bHasLocalRepNotify_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bShouldFlushDormancyOnSet_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms*)Obj)->bShouldFlushDormancyOnSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bShouldFlushDormancyOnSet = { "bShouldFlushDormancyOnSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bShouldFlushDormancyOnSet_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bIsNetProperty_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms*)Obj)->bIsNetProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bIsNetProperty = { "bIsNetProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bIsNetProperty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ExtraFieldIds_Inner = { "ExtraFieldIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ExtraFieldIds = { "ExtraFieldIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms, ExtraFieldIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2941726941
void Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms), &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NewValueByRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_NetOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bHasLocalRepNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bShouldFlushDormancyOnSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_bIsNetProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ExtraFieldIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ExtraFieldIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFieldNotificationLibrary, nullptr, "SetPropertyValueAndBroadcastFields", nullptr, nullptr, Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::FieldNotificationLibrary_eventSetPropertyValueAndBroadcastFields_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UFieldNotificationLibrary Function SetPropertyValueAndBroadcastFields

// Begin Class UFieldNotificationLibrary
void UFieldNotificationLibrary::StaticRegisterNativesUFieldNotificationLibrary()
{
	UClass* Class = UFieldNotificationLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastFieldsValueChanged", &UFieldNotificationLibrary::execBroadcastFieldsValueChanged },
		{ "BroadcastFieldValueChanged", &UFieldNotificationLibrary::execBroadcastFieldValueChanged },
		{ "SetPropertyValueAndBroadcast", &UFieldNotificationLibrary::execSetPropertyValueAndBroadcast },
		{ "SetPropertyValueAndBroadcastFields", &UFieldNotificationLibrary::execSetPropertyValueAndBroadcastFields },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFieldNotificationLibrary);
UClass* Z_Construct_UClass_UFieldNotificationLibrary_NoRegister()
{
	return UFieldNotificationLibrary::StaticClass();
}
struct Z_Construct_UClass_UFieldNotificationLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Field Notification system allows a user to know when a property value is modified at runtime (note that it can be a function return value).\n * The class needs to implement the INotifyFieldValueChanged interface.\n * The property' setter  usually follows this pattern \"if (new value != old value) assign the new value; broadcast that the value changed;\".\n * The Blueprint implementation handles that setter logic automatically with SetPropertyValueAndBroadcast.\n * When a property value is modified by replication, the RepNotify will call BroadcastFieldValueChanged.\n * A function can also be a Field Notify. The function needs to be const and return a single value.\n */" },
		{ "IncludePath", "FieldNotification/FieldNotificationLibrary.h" },
		{ "ModuleRelativePath", "Public/FieldNotification/FieldNotificationLibrary.h" },
		{ "ToolTip", "The Field Notification system allows a user to know when a property value is modified at runtime (note that it can be a function return value).\nThe class needs to implement the INotifyFieldValueChanged interface.\nThe property' setter  usually follows this pattern \"if (new value != old value) assign the new value; broadcast that the value changed;\".\nThe Blueprint implementation handles that setter logic automatically with SetPropertyValueAndBroadcast.\nWhen a property value is modified by replication, the RepNotify will call BroadcastFieldValueChanged.\nA function can also be a Field Notify. The function needs to be const and return a single value." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldsValueChanged, "BroadcastFieldsValueChanged" }, // 349227850
		{ &Z_Construct_UFunction_UFieldNotificationLibrary_BroadcastFieldValueChanged, "BroadcastFieldValueChanged" }, // 1500856453
		{ &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcast, "SetPropertyValueAndBroadcast" }, // 1686218916
		{ &Z_Construct_UFunction_UFieldNotificationLibrary_SetPropertyValueAndBroadcastFields, "SetPropertyValueAndBroadcastFields" }, // 480444262
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFieldNotificationLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFieldNotificationLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNotificationLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFieldNotificationLibrary_Statics::ClassParams = {
	&UFieldNotificationLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFieldNotificationLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFieldNotificationLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFieldNotificationLibrary()
{
	if (!Z_Registration_Info_UClass_UFieldNotificationLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFieldNotificationLibrary.OuterSingleton, Z_Construct_UClass_UFieldNotificationLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFieldNotificationLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UFieldNotificationLibrary>()
{
	return UFieldNotificationLibrary::StaticClass();
}
UFieldNotificationLibrary::UFieldNotificationLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFieldNotificationLibrary);
UFieldNotificationLibrary::~UFieldNotificationLibrary() {}
// End Class UFieldNotificationLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFieldNotificationLibrary, UFieldNotificationLibrary::StaticClass, TEXT("UFieldNotificationLibrary"), &Z_Registration_Info_UClass_UFieldNotificationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFieldNotificationLibrary), 1123514020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_1668108657(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_FieldNotification_FieldNotificationLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
