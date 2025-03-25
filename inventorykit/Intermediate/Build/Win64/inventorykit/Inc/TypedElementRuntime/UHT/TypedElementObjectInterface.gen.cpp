// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementRuntime/Public/Elements/Interfaces/TypedElementObjectInterface.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementObjectInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementObjectInterface();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementObjectInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References

// Begin Interface UTypedElementObjectInterface Function GetObject
struct Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics
{
	struct TypedElementObjectInterface_eventGetObject_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Object" },
		{ "Comment", "/**\n\x09 * Get the object instance that this handle represents, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementObjectInterface.h" },
		{ "ToolTip", "Get the object instance that this handle represents, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObject_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementObjectInterface, nullptr, "GetObject", nullptr, nullptr, Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::TypedElementObjectInterface_eventGetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::TypedElementObjectInterface_eventGetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementObjectInterface_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementObjectInterface::execGetObject)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetObject(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementObjectInterface Function GetObject

// Begin Interface UTypedElementObjectInterface Function GetObjectClass
struct Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics
{
	struct TypedElementObjectInterface_eventGetObjectClass_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Object" },
		{ "Comment", "/**\n\x09 * Gets the object instance's class that the handle represents, if any. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementObjectInterface.h" },
		{ "ToolTip", "Gets the object instance's class that the handle represents, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObjectClass_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementObjectInterface, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::TypedElementObjectInterface_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::TypedElementObjectInterface_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementObjectInterface::execGetObjectClass)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementObjectInterface Function GetObjectClass

// Begin Interface UTypedElementObjectInterface
void UTypedElementObjectInterface::StaticRegisterNativesUTypedElementObjectInterface()
{
	UClass* Class = UTypedElementObjectInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetObject", &ITypedElementObjectInterface::execGetObject },
		{ "GetObjectClass", &ITypedElementObjectInterface::execGetObjectClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementObjectInterface);
UClass* Z_Construct_UClass_UTypedElementObjectInterface_NoRegister()
{
	return UTypedElementObjectInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementObjectInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementObjectInterface_GetObject, "GetObject" }, // 69675474
		{ &Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass, "GetObjectClass" }, // 1187363083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementObjectInterface_Statics::ClassParams = {
	&UTypedElementObjectInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementObjectInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementObjectInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementObjectInterface.OuterSingleton, Z_Construct_UClass_UTypedElementObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementObjectInterface.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementObjectInterface>()
{
	return UTypedElementObjectInterface::StaticClass();
}
UTypedElementObjectInterface::UTypedElementObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementObjectInterface);
UTypedElementObjectInterface::~UTypedElementObjectInterface() {}
// End Interface UTypedElementObjectInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementObjectInterface, UTypedElementObjectInterface::StaticClass, TEXT("UTypedElementObjectInterface"), &Z_Registration_Info_UClass_UTypedElementObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementObjectInterface), 2234255953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_2653928585(TEXT("/Script/TypedElementRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
