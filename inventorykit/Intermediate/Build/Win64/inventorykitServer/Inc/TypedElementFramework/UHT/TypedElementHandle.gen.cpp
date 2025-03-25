// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementHandle() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementHandleLibrary();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementHandleLibrary_NoRegister();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin ScriptStruct FScriptTypedElementHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle;
class UScriptStruct* FScriptTypedElementHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptTypedElementHandle, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("ScriptTypedElementHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FScriptTypedElementHandle>()
{
	return FScriptTypedElementHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Script exposure for the typed element handle struct type\n * Act as a weak handle to simplify the scripting use of the typed element framework and making it safer to use by avoiding crash in case of a bad usage.\n * This type is the standard way that an element is passed through to interfaces for a script (Blueprint or Python), and also the type that is stored in the script element lists.\n * C++ code may choose to use TTypedElement instead, which is a combination of an element handle and its associated element interface.\n *\n * Note: This type shouldn't be used in the engine code as it come with a performance and memory overhead that we want to avoid when compare to the native handles (FTypedElementHandle).\n */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementHandle.h" },
		{ "ToolTip", "Script exposure for the typed element handle struct type\nAct as a weak handle to simplify the scripting use of the typed element framework and making it safer to use by avoiding crash in case of a bad usage.\nThis type is the standard way that an element is passed through to interfaces for a script (Blueprint or Python), and also the type that is stored in the script element lists.\nC++ code may choose to use TTypedElement instead, which is a combination of an element handle and its associated element interface.\n\nNote: This type shouldn't be used in the engine code as it come with a performance and memory overhead that we want to avoid when compare to the native handles (FTypedElementHandle)." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptTypedElementHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	nullptr,
	&NewStructOps,
	"ScriptTypedElementHandle",
	nullptr,
	0,
	sizeof(FScriptTypedElementHandle),
	alignof(FScriptTypedElementHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle.InnerSingleton, Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle.InnerSingleton;
}
// End ScriptStruct FScriptTypedElementHandle

// Begin Class UTypedElementHandleLibrary Function Equal
struct Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics
{
	struct TypedElementHandleLibrary_eventEqual_Parms
	{
		FScriptTypedElementHandle LHS;
		FScriptTypedElementHandle RHS;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Handle" },
		{ "Comment", "/**\n\x09 * Are these two handles equal?\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (TypedElementHandle)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementHandle.h" },
		{ "ScriptMethod", "" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Are these two handles equal?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LHS_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LHS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RHS;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_LHS = { "LHS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHandleLibrary_eventEqual_Parms, LHS), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LHS_MetaData), NewProp_LHS_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_RHS = { "RHS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHandleLibrary_eventEqual_Parms, RHS), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHS_MetaData), NewProp_RHS_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementHandleLibrary_eventEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementHandleLibrary_eventEqual_Parms), &Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_LHS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_RHS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHandleLibrary, nullptr, "Equal", nullptr, nullptr, Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::TypedElementHandleLibrary_eventEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::TypedElementHandleLibrary_eventEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementHandleLibrary_Equal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHandleLibrary_Equal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementHandleLibrary::execEqual)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_LHS);
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_RHS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTypedElementHandleLibrary::Equal(Z_Param_Out_LHS,Z_Param_Out_RHS);
	P_NATIVE_END;
}
// End Class UTypedElementHandleLibrary Function Equal

// Begin Class UTypedElementHandleLibrary Function IsSet
struct Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics
{
	struct TypedElementHandleLibrary_eventIsSet_Parms
	{
		FScriptTypedElementHandle ElementHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Handle" },
		{ "Comment", "/**\n\x09 * Has this handle been initialized to a valid element?\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementHandle.h" },
		{ "ScriptMethod", "" },
		{ "ScriptOperator", "bool" },
		{ "ToolTip", "Has this handle been initialized to a valid element?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElementHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::NewProp_ElementHandle = { "ElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHandleLibrary_eventIsSet_Parms, ElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementHandle_MetaData), NewProp_ElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementHandleLibrary_eventIsSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementHandleLibrary_eventIsSet_Parms), &Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::NewProp_ElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHandleLibrary, nullptr, "IsSet", nullptr, nullptr, Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::TypedElementHandleLibrary_eventIsSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::TypedElementHandleLibrary_eventIsSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementHandleLibrary::execIsSet)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_ElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTypedElementHandleLibrary::IsSet(Z_Param_Out_ElementHandle);
	P_NATIVE_END;
}
// End Class UTypedElementHandleLibrary Function IsSet

// Begin Class UTypedElementHandleLibrary Function NotEqual
struct Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics
{
	struct TypedElementHandleLibrary_eventNotEqual_Parms
	{
		FScriptTypedElementHandle LHS;
		FScriptTypedElementHandle RHS;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Handle" },
		{ "Comment", "/**\n\x09 * Are these two handles not equal?\n\x09 */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (TypedElementHandle)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementHandle.h" },
		{ "ScriptMethod", "" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Are these two handles not equal?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LHS_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LHS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RHS;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_LHS = { "LHS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHandleLibrary_eventNotEqual_Parms, LHS), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LHS_MetaData), NewProp_LHS_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_RHS = { "RHS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHandleLibrary_eventNotEqual_Parms, RHS), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHS_MetaData), NewProp_RHS_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TypedElementHandleLibrary_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementHandleLibrary_eventNotEqual_Parms), &Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_LHS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_RHS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHandleLibrary, nullptr, "NotEqual", nullptr, nullptr, Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::TypedElementHandleLibrary_eventNotEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::TypedElementHandleLibrary_eventNotEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementHandleLibrary::execNotEqual)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_LHS);
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_RHS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTypedElementHandleLibrary::NotEqual(Z_Param_Out_LHS,Z_Param_Out_RHS);
	P_NATIVE_END;
}
// End Class UTypedElementHandleLibrary Function NotEqual

// Begin Class UTypedElementHandleLibrary Function Release
struct Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics
{
	struct TypedElementHandleLibrary_eventRelease_Parms
	{
		FScriptTypedElementHandle ElementHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Handle" },
		{ "Comment", "/**\n\x09 * Release this handle and set it back to an empty state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementHandle.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Release this handle and set it back to an empty state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ElementHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::NewProp_ElementHandle = { "ElementHandle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHandleLibrary_eventRelease_Parms, ElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::NewProp_ElementHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHandleLibrary, nullptr, "Release", nullptr, nullptr, Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::TypedElementHandleLibrary_eventRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::TypedElementHandleLibrary_eventRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementHandleLibrary_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHandleLibrary_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementHandleLibrary::execRelease)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_ElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTypedElementHandleLibrary::Release(Z_Param_Out_ElementHandle);
	P_NATIVE_END;
}
// End Class UTypedElementHandleLibrary Function Release

// Begin Class UTypedElementHandleLibrary
void UTypedElementHandleLibrary::StaticRegisterNativesUTypedElementHandleLibrary()
{
	UClass* Class = UTypedElementHandleLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Equal", &UTypedElementHandleLibrary::execEqual },
		{ "IsSet", &UTypedElementHandleLibrary::execIsSet },
		{ "NotEqual", &UTypedElementHandleLibrary::execNotEqual },
		{ "Release", &UTypedElementHandleLibrary::execRelease },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementHandleLibrary);
UClass* Z_Construct_UClass_UTypedElementHandleLibrary_NoRegister()
{
	return UTypedElementHandleLibrary::StaticClass();
}
struct Z_Construct_UClass_UTypedElementHandleLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Script exposure for FScriptTypedElementHandle. */" },
		{ "IncludePath", "Elements/Framework/TypedElementHandle.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementHandle.h" },
		{ "ToolTip", "Script exposure for FScriptTypedElementHandle." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementHandleLibrary_Equal, "Equal" }, // 3375350880
		{ &Z_Construct_UFunction_UTypedElementHandleLibrary_IsSet, "IsSet" }, // 1572357969
		{ &Z_Construct_UFunction_UTypedElementHandleLibrary_NotEqual, "NotEqual" }, // 1490734890
		{ &Z_Construct_UFunction_UTypedElementHandleLibrary_Release, "Release" }, // 2131836824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementHandleLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementHandleLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementHandleLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementHandleLibrary_Statics::ClassParams = {
	&UTypedElementHandleLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementHandleLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementHandleLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementHandleLibrary()
{
	if (!Z_Registration_Info_UClass_UTypedElementHandleLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementHandleLibrary.OuterSingleton, Z_Construct_UClass_UTypedElementHandleLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementHandleLibrary.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementHandleLibrary>()
{
	return UTypedElementHandleLibrary::StaticClass();
}
UTypedElementHandleLibrary::UTypedElementHandleLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementHandleLibrary);
UTypedElementHandleLibrary::~UTypedElementHandleLibrary() {}
// End Class UTypedElementHandleLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScriptTypedElementHandle::StaticStruct, Z_Construct_UScriptStruct_FScriptTypedElementHandle_Statics::NewStructOps, TEXT("ScriptTypedElementHandle"), &Z_Registration_Info_UScriptStruct_ScriptTypedElementHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptTypedElementHandle), 335387057U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementHandleLibrary, UTypedElementHandleLibrary::StaticClass, TEXT("UTypedElementHandleLibrary"), &Z_Registration_Info_UClass_UTypedElementHandleLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementHandleLibrary), 1139040041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_462715115(TEXT("/Script/TypedElementFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
