// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementRegistry.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementRegistry() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementRegistry();
TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementRegistry_NoRegister();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References

// Begin Class UTypedElementRegistry Function GetElementInterface
struct Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics
{
	struct TypedElementRegistry_eventGetElementInterface_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		const TSubclassOf<UInterface> InBaseInterfaceType;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Registry" },
		{ "Comment", "/**\n\x09 * Get the element interface supported by the given handle, or null if there is no support for this interface or if the handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementRegistry.h" },
		{ "ToolTip", "Get the element interface supported by the given handle, or null if there is no support for this interface or if the handle is invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InBaseInterfaceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementRegistry_eventGetElementInterface_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InBaseInterfaceType = { "InBaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementRegistry_eventGetElementInterface_Parms, InBaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBaseInterfaceType_MetaData), NewProp_InBaseInterfaceType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementRegistry_eventGetElementInterface_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InBaseInterfaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementRegistry, nullptr, "GetElementInterface", nullptr, nullptr, Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::TypedElementRegistry_eventGetElementInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::TypedElementRegistry_eventGetElementInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementRegistry::execGetElementInterface)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_OBJECT(UClass,Z_Param_InBaseInterfaceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetElementInterface(Z_Param_Out_InElementHandle,Z_Param_InBaseInterfaceType);
	P_NATIVE_END;
}
// End Class UTypedElementRegistry Function GetElementInterface

// Begin Class UTypedElementRegistry Function GetInstance
struct Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics
{
	struct TypedElementRegistry_eventGetInstance_Parms
	{
		UTypedElementRegistry* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Registry" },
		{ "Comment", "/**\n\x09 * Get the singleton instance of the registry used in most cases.\n\x09 */" },
		{ "DisplayName", "Get Default Typed Element Registry" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementRegistry.h" },
		{ "ScriptName", "GetDefaultTypedElementRegistry" },
		{ "ToolTip", "Get the singleton instance of the registry used in most cases." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementRegistry_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UTypedElementRegistry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementRegistry, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::TypedElementRegistry_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::TypedElementRegistry_eventGetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementRegistry_GetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTypedElementRegistry::execGetInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTypedElementRegistry**)Z_Param__Result=UTypedElementRegistry::GetInstance();
	P_NATIVE_END;
}
// End Class UTypedElementRegistry Function GetInstance

// Begin Class UTypedElementRegistry
void UTypedElementRegistry::StaticRegisterNativesUTypedElementRegistry()
{
	UClass* Class = UTypedElementRegistry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetElementInterface", &UTypedElementRegistry::execGetElementInterface },
		{ "GetInstance", &UTypedElementRegistry::execGetInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementRegistry);
UClass* Z_Construct_UClass_UTypedElementRegistry_NoRegister()
{
	return UTypedElementRegistry::StaticClass();
}
struct Z_Construct_UClass_UTypedElementRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Registry of element types and their associated interfaces, along with the elements that represent their instances.\n */" },
		{ "IncludePath", "Elements/Framework/TypedElementRegistry.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementRegistry.h" },
		{ "ToolTip", "Registry of element types and their associated interfaces, along with the elements that represent their instances." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface, "GetElementInterface" }, // 884659253
		{ &Z_Construct_UFunction_UTypedElementRegistry_GetInstance, "GetInstance" }, // 281834277
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementRegistry_Statics::ClassParams = {
	&UTypedElementRegistry::StaticClass,
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
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementRegistry()
{
	if (!Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton, Z_Construct_UClass_UTypedElementRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementRegistry>()
{
	return UTypedElementRegistry::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementRegistry);
UTypedElementRegistry::~UTypedElementRegistry() {}
// End Class UTypedElementRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementRegistry, UTypedElementRegistry::StaticClass, TEXT("UTypedElementRegistry"), &Z_Registration_Info_UClass_UTypedElementRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementRegistry), 3607964415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_4089300721(TEXT("/Script/TypedElementFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
