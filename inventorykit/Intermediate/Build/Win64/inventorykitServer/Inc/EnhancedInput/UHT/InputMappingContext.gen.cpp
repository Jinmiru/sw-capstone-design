// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/InputMappingContext.h"
#include "EnhancedInput/Public/EnhancedActionKeyMapping.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingContext() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Class UInputMappingContext Function MapKey
struct Z_Construct_UFunction_UInputMappingContext_MapKey_Statics
{
	struct InputMappingContext_eventMapKey_Parms
	{
		const UInputAction* Action;
		FKey ToKey;
		FEnhancedActionKeyMapping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/**\n\x09* Map a key to an action within the mapping context.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
		{ "ToolTip", "Map a key to an action within the mapping context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingContext_eventMapKey_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::NewProp_ToKey = { "ToKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingContext_eventMapKey_Parms, ToKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingContext_eventMapKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3589935709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::NewProp_ToKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingContext, nullptr, "MapKey", nullptr, nullptr, Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::InputMappingContext_eventMapKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::InputMappingContext_eventMapKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingContext_MapKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingContext_MapKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingContext::execMapKey)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FKey,Z_Param_ToKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEnhancedActionKeyMapping*)Z_Param__Result=P_THIS->MapKey(Z_Param_Action,Z_Param_ToKey);
	P_NATIVE_END;
}
// End Class UInputMappingContext Function MapKey

// Begin Class UInputMappingContext Function UnmapAction
struct Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics
{
	struct InputMappingContext_eventUnmapAction_Parms
	{
		const UInputAction* Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapping" },
		{ "DeprecatedFunction", "" },
		{ "DeprecatedMessage", "UnmapAction has been deprecated, please use UnmapAllKeysFromAction instead." },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingContext_eventUnmapAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingContext, nullptr, "UnmapAction", nullptr, nullptr, Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::InputMappingContext_eventUnmapAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::InputMappingContext_eventUnmapAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingContext_UnmapAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingContext_UnmapAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingContext::execUnmapAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnmapAction(Z_Param_Action);
	P_NATIVE_END;
}
// End Class UInputMappingContext Function UnmapAction

// Begin Class UInputMappingContext Function UnmapAll
struct Z_Construct_UFunction_UInputMappingContext_UnmapAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/**\n\x09* Unmap everything within the mapping context.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
		{ "ToolTip", "Unmap everything within the mapping context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingContext_UnmapAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingContext, nullptr, "UnmapAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingContext_UnmapAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputMappingContext_UnmapAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingContext_UnmapAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingContext::execUnmapAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnmapAll();
	P_NATIVE_END;
}
// End Class UInputMappingContext Function UnmapAll

// Begin Class UInputMappingContext Function UnmapAllKeysFromAction
struct Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics
{
	struct InputMappingContext_eventUnmapAllKeysFromAction_Parms
	{
		const UInputAction* Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/**\n\x09* Unmap all key maps to an action within the mapping context.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
		{ "ToolTip", "Unmap all key maps to an action within the mapping context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingContext_eventUnmapAllKeysFromAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingContext, nullptr, "UnmapAllKeysFromAction", nullptr, nullptr, Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::InputMappingContext_eventUnmapAllKeysFromAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::InputMappingContext_eventUnmapAllKeysFromAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingContext::execUnmapAllKeysFromAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnmapAllKeysFromAction(Z_Param_Action);
	P_NATIVE_END;
}
// End Class UInputMappingContext Function UnmapAllKeysFromAction

// Begin Class UInputMappingContext Function UnmapKey
struct Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics
{
	struct InputMappingContext_eventUnmapKey_Parms
	{
		const UInputAction* Action;
		FKey Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/**\n\x09* Unmap a key from an action within the mapping context.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
		{ "ToolTip", "Unmap a key from an action within the mapping context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingContext_eventUnmapKey_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputMappingContext_eventUnmapKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingContext, nullptr, "UnmapKey", nullptr, nullptr, Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::InputMappingContext_eventUnmapKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::InputMappingContext_eventUnmapKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputMappingContext_UnmapKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputMappingContext_UnmapKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputMappingContext::execUnmapKey)
{
	P_GET_OBJECT(UInputAction,Z_Param_Action);
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnmapKey(Z_Param_Action,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UInputMappingContext Function UnmapKey

// Begin Class UInputMappingContext
void UInputMappingContext::StaticRegisterNativesUInputMappingContext()
{
	UClass* Class = UInputMappingContext::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MapKey", &UInputMappingContext::execMapKey },
		{ "UnmapAction", &UInputMappingContext::execUnmapAction },
		{ "UnmapAll", &UInputMappingContext::execUnmapAll },
		{ "UnmapAllKeysFromAction", &UInputMappingContext::execUnmapAllKeysFromAction },
		{ "UnmapKey", &UInputMappingContext::execUnmapKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputMappingContext);
UClass* Z_Construct_UClass_UInputMappingContext_NoRegister()
{
	return UInputMappingContext::StaticClass();
}
struct Z_Construct_UClass_UInputMappingContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* UInputMappingContext : A collection of key to action mappings for a specific input context\n* Could be used to:\n*\x09Store predefined controller mappings (allow switching between controller config variants). TODO: Build a system allowing redirects of UInputMappingContexts to handle this.\n*\x09""Define per-vehicle control mappings\n*\x09""Define context specific mappings (e.g. I switch from a gun (shoot action) to a grappling hook (reel in, reel out, disconnect actions).\n*\x09""Define overlay mappings to be applied on top of existing control mappings (e.g. Hero specific action mappings in a MOBA)\n*/" },
		{ "IncludePath", "InputMappingContext.h" },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
		{ "ToolTip", "UInputMappingContext : A collection of key to action mappings for a specific input context\nCould be used to:\n     Store predefined controller mappings (allow switching between controller config variants). TODO: Build a system allowing redirects of UInputMappingContexts to handle this.\n     Define per-vehicle control mappings\n     Define context specific mappings (e.g. I switch from a gun (shoot action) to a grappling hook (reel in, reel out, disconnect actions).\n     Define overlay mappings to be applied on top of existing control mappings (e.g. Hero specific action mappings in a MOBA)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[] = {
		{ "Category", "Mappings" },
		{ "Comment", "// List of key to action mappings.\n" },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
		{ "ToolTip", "List of key to action mappings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "// Localized context descriptor\n" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/InputMappingContext.h" },
		{ "ToolTip", "Localized context descriptor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Mappings;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ContextDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputMappingContext_MapKey, "MapKey" }, // 228785180
		{ &Z_Construct_UFunction_UInputMappingContext_UnmapAction, "UnmapAction" }, // 1257442930
		{ &Z_Construct_UFunction_UInputMappingContext_UnmapAll, "UnmapAll" }, // 2239480119
		{ &Z_Construct_UFunction_UInputMappingContext_UnmapAllKeysFromAction, "UnmapAllKeysFromAction" }, // 1620074642
		{ &Z_Construct_UFunction_UInputMappingContext_UnmapKey, "UnmapKey" }, // 548714299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputMappingContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputMappingContext_Statics::NewProp_Mappings_Inner = { "Mappings", nullptr, (EPropertyFlags)0x0000008000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3589935709
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputMappingContext_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0020088000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMappingContext, Mappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mappings_MetaData), NewProp_Mappings_MetaData) }; // 3589935709
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputMappingContext_Statics::NewProp_ContextDescription = { "ContextDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputMappingContext, ContextDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextDescription_MetaData), NewProp_ContextDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingContext_Statics::NewProp_Mappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingContext_Statics::NewProp_Mappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingContext_Statics::NewProp_ContextDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingContext_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputMappingContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputMappingContext_Statics::ClassParams = {
	&UInputMappingContext::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputMappingContext_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingContext_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputMappingContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputMappingContext()
{
	if (!Z_Registration_Info_UClass_UInputMappingContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputMappingContext.OuterSingleton, Z_Construct_UClass_UInputMappingContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputMappingContext.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UInputMappingContext>()
{
	return UInputMappingContext::StaticClass();
}
UInputMappingContext::UInputMappingContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputMappingContext);
UInputMappingContext::~UInputMappingContext() {}
// End Class UInputMappingContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputMappingContext, UInputMappingContext::StaticClass, TEXT("UInputMappingContext"), &Z_Registration_Info_UClass_UInputMappingContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputMappingContext), 415980717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_3029889964(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
