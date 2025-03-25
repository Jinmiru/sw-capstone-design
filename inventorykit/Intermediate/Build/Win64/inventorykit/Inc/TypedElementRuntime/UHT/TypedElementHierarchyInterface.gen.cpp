// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementRuntime/Public/Elements/Interfaces/TypedElementHierarchyInterface.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementHierarchyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References

// Begin Interface UTypedElementHierarchyInterface Function GetChildElements
struct Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics
{
	struct TypedElementHierarchyInterface_eventGetChildElements_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		TArray<FScriptTypedElementHandle> OutElementHandles;
		bool bAllowCreate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Hierarchy" },
		{ "Comment", "/**\n\x09 * Get the logical children of this element, if any.\n\x09 * eg) An actor might return its component, or an ISM component might return its static mesh instances.\n\x09 *\n\x09 * @note Appends to OutElementHandles.\n\x09 */" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementHierarchyInterface.h" },
		{ "ToolTip", "Get the logical children of this element, if any.\neg) An actor might return its component, or an ISM component might return its static mesh instances.\n\n@note Appends to OutElementHandles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutElementHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutElementHandles;
	static void NewProp_bAllowCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetChildElements_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles_Inner = { "OutElementHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles = { "OutElementHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetChildElements_Parms, OutElementHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 335387057
void Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
{
	((TypedElementHierarchyInterface_eventGetChildElements_Parms*)Obj)->bAllowCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementHierarchyInterface_eventGetChildElements_Parms), &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCreate_MetaData), NewProp_bAllowCreate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHierarchyInterface, nullptr, "GetChildElements", nullptr, nullptr, Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::TypedElementHierarchyInterface_eventGetChildElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::TypedElementHierarchyInterface_eventGetChildElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementHierarchyInterface::execGetChildElements)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_TARRAY_REF(FScriptTypedElementHandle,Z_Param_Out_OutElementHandles);
	P_GET_UBOOL(Z_Param_bAllowCreate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChildElements(Z_Param_Out_InElementHandle,Z_Param_Out_OutElementHandles,Z_Param_bAllowCreate);
	P_NATIVE_END;
}
// End Interface UTypedElementHierarchyInterface Function GetChildElements

// Begin Interface UTypedElementHierarchyInterface Function GetParentElement
struct Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics
{
	struct TypedElementHierarchyInterface_eventGetParentElement_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		bool bAllowCreate;
		FScriptTypedElementHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Hierarchy" },
		{ "Comment", "/**\n\x09 * Get the logical parent of this element, if any.\n\x09 * eg) A component might return its actor, or a static mesh instance might return its ISM component.\n\x09 */" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementHierarchyInterface.h" },
		{ "ToolTip", "Get the logical parent of this element, if any.\neg) A component might return its actor, or a static mesh instance might return its ISM component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static void NewProp_bAllowCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetParentElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
void Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
{
	((TypedElementHierarchyInterface_eventGetParentElement_Parms*)Obj)->bAllowCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementHierarchyInterface_eventGetParentElement_Parms), &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCreate_MetaData), NewProp_bAllowCreate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetParentElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(0, nullptr) }; // 335387057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHierarchyInterface, nullptr, "GetParentElement", nullptr, nullptr, Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::TypedElementHierarchyInterface_eventGetParentElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::TypedElementHierarchyInterface_eventGetParentElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementHierarchyInterface::execGetParentElement)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_UBOOL(Z_Param_bAllowCreate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScriptTypedElementHandle*)Z_Param__Result=P_THIS->GetParentElement(Z_Param_Out_InElementHandle,Z_Param_bAllowCreate);
	P_NATIVE_END;
}
// End Interface UTypedElementHierarchyInterface Function GetParentElement

// Begin Interface UTypedElementHierarchyInterface
void UTypedElementHierarchyInterface::StaticRegisterNativesUTypedElementHierarchyInterface()
{
	UClass* Class = UTypedElementHierarchyInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChildElements", &ITypedElementHierarchyInterface::execGetChildElements },
		{ "GetParentElement", &ITypedElementHierarchyInterface::execGetParentElement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementHierarchyInterface);
UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister()
{
	return UTypedElementHierarchyInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementHierarchyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementHierarchyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements, "GetChildElements" }, // 3761815663
		{ &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement, "GetParentElement" }, // 975118954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementHierarchyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::ClassParams = {
	&UTypedElementHierarchyInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementHierarchyInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementHierarchyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementHierarchyInterface.OuterSingleton, Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementHierarchyInterface.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementHierarchyInterface>()
{
	return UTypedElementHierarchyInterface::StaticClass();
}
UTypedElementHierarchyInterface::UTypedElementHierarchyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementHierarchyInterface);
UTypedElementHierarchyInterface::~UTypedElementHierarchyInterface() {}
// End Interface UTypedElementHierarchyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementHierarchyInterface, UTypedElementHierarchyInterface::StaticClass, TEXT("UTypedElementHierarchyInterface"), &Z_Registration_Info_UClass_UTypedElementHierarchyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementHierarchyInterface), 2361398956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_1627834047(TEXT("/Script/TypedElementRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
