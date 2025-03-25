// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Elements/Framework/EngineElementsLibrary.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineElementsLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UEngineElementsLibrary();
ENGINE_API UClass* Z_Construct_UClass_UEngineElementsLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UEngineElementsLibrary Function K2_AcquireEditorActorElementHandle
#if WITH_EDITOR
struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics
{
	struct EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms
	{
		const AActor* Actor;
		bool bAllowCreate;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Actor" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor Actor Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bAllowCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
{
	((EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms*)Obj)->bAllowCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCreate_MetaData), NewProp_bAllowCreate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorActorElementHandle", nullptr, nullptr, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorActorElementHandle)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bAllowCreate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorActorElementHandle(Z_Param_Actor,Z_Param_bAllowCreate);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UEngineElementsLibrary Function K2_AcquireEditorActorElementHandle

// Begin Class UEngineElementsLibrary Function K2_AcquireEditorComponentElementHandle
#if WITH_EDITOR
struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics
{
	struct EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms
	{
		const UActorComponent* Component;
		bool bAllowCreate;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Component" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor Component Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static void NewProp_bAllowCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
{
	((EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms*)Obj)->bAllowCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCreate_MetaData), NewProp_bAllowCreate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorComponentElementHandle", nullptr, nullptr, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorComponentElementHandle)
{
	P_GET_OBJECT(UActorComponent,Z_Param_Component);
	P_GET_UBOOL(Z_Param_bAllowCreate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorComponentElementHandle(Z_Param_Component,Z_Param_bAllowCreate);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UEngineElementsLibrary Function K2_AcquireEditorComponentElementHandle

// Begin Class UEngineElementsLibrary Function K2_AcquireEditorObjectElementHandle
#if WITH_EDITOR
struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics
{
	struct EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms
	{
		const UObject* Object;
		bool bAllowCreate;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Object" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor Object Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static void NewProp_bAllowCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
{
	((EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms*)Obj)->bAllowCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCreate_MetaData), NewProp_bAllowCreate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorObjectElementHandle", nullptr, nullptr, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorObjectElementHandle)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_UBOOL(Z_Param_bAllowCreate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorObjectElementHandle(Z_Param_Object,Z_Param_bAllowCreate);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UEngineElementsLibrary Function K2_AcquireEditorObjectElementHandle

// Begin Class UEngineElementsLibrary Function K2_AcquireEditorSMInstanceElementHandle
#if WITH_EDITOR
struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics
{
	struct EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms
	{
		const UInstancedStaticMeshComponent* ISMComponent;
		int32 InstanceIndex;
		bool bAllowCreate;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|StaticMeshInstance" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor SMInstance Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static void NewProp_bAllowCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ISMComponent = { "ISMComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms, ISMComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMComponent_MetaData), NewProp_ISMComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
{
	((EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms*)Obj)->bAllowCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCreate_MetaData), NewProp_bAllowCreate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ISMComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorSMInstanceElementHandle", nullptr, nullptr, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorSMInstanceElementHandle)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_ISMComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_GET_UBOOL(Z_Param_bAllowCreate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorSMInstanceElementHandle(Z_Param_ISMComponent,Z_Param_InstanceIndex,Z_Param_bAllowCreate);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UEngineElementsLibrary Function K2_AcquireEditorSMInstanceElementHandle

// Begin Class UEngineElementsLibrary
void UEngineElementsLibrary::StaticRegisterNativesUEngineElementsLibrary()
{
#if WITH_EDITOR
	UClass* Class = UEngineElementsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_AcquireEditorActorElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorActorElementHandle },
		{ "K2_AcquireEditorComponentElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorComponentElementHandle },
		{ "K2_AcquireEditorObjectElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorObjectElementHandle },
		{ "K2_AcquireEditorSMInstanceElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorSMInstanceElementHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineElementsLibrary);
UClass* Z_Construct_UClass_UEngineElementsLibrary_NoRegister()
{
	return UEngineElementsLibrary::StaticClass();
}
struct Z_Construct_UClass_UEngineElementsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Framework/EngineElementsLibrary.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle, "K2_AcquireEditorActorElementHandle" }, // 222983510
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle, "K2_AcquireEditorComponentElementHandle" }, // 537546103
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle, "K2_AcquireEditorObjectElementHandle" }, // 4217183873
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle, "K2_AcquireEditorSMInstanceElementHandle" }, // 1086201468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineElementsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEngineElementsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineElementsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineElementsLibrary_Statics::ClassParams = {
	&UEngineElementsLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineElementsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngineElementsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEngineElementsLibrary()
{
	if (!Z_Registration_Info_UClass_UEngineElementsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineElementsLibrary.OuterSingleton, Z_Construct_UClass_UEngineElementsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngineElementsLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEngineElementsLibrary>()
{
	return UEngineElementsLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineElementsLibrary);
UEngineElementsLibrary::~UEngineElementsLibrary() {}
// End Class UEngineElementsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngineElementsLibrary, UEngineElementsLibrary::StaticClass, TEXT("UEngineElementsLibrary"), &Z_Registration_Info_UClass_UEngineElementsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineElementsLibrary), 904702067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_1142544337(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
