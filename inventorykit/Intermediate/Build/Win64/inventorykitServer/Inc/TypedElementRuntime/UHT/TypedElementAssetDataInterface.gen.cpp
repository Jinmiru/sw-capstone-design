// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementRuntime/Public/Elements/Interfaces/TypedElementAssetDataInterface.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementAssetDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References

// Begin Interface UTypedElementAssetDataInterface Function GetAllReferencedAssetDatas
struct Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		TArray<FAssetData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|AssetData" },
		{ "Comment", "/**\n\x09 * Returns any asset datas for content objects referenced by handle.\n\x09 * If the given handle itself has valid asset data, it should be returned as the last element of the array.\n\x09 *\n\x09 * @returns An array of valid asset datas.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementAssetDataInterface.h" },
		{ "ToolTip", "Returns any asset datas for content objects referenced by handle.\nIf the given handle itself has valid asset data, it should be returned as the last element of the array.\n\n@returns An array of valid asset datas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementAssetDataInterface, nullptr, "GetAllReferencedAssetDatas", nullptr, nullptr, Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementAssetDataInterface::execGetAllReferencedAssetDatas)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAssetData>*)Z_Param__Result=P_THIS->GetAllReferencedAssetDatas(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementAssetDataInterface Function GetAllReferencedAssetDatas

// Begin Interface UTypedElementAssetDataInterface Function GetAssetData
struct Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct TypedElementAssetDataInterface_eventGetAssetData_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		FAssetData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|AssetData" },
		{ "Comment", "/**\n\x09 * Returns the asset data for the given handle, if it exists.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementAssetDataInterface.h" },
		{ "ToolTip", "Returns the asset data for the given handle, if it exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAssetData_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementAssetDataInterface, nullptr, "GetAssetData", nullptr, nullptr, Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::TypedElementAssetDataInterface_eventGetAssetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::TypedElementAssetDataInterface_eventGetAssetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementAssetDataInterface::execGetAssetData)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetData*)Z_Param__Result=P_THIS->GetAssetData(Z_Param_Out_InElementHandle);
	P_NATIVE_END;
}
// End Interface UTypedElementAssetDataInterface Function GetAssetData

// Begin Interface UTypedElementAssetDataInterface
void UTypedElementAssetDataInterface::StaticRegisterNativesUTypedElementAssetDataInterface()
{
	UClass* Class = UTypedElementAssetDataInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllReferencedAssetDatas", &ITypedElementAssetDataInterface::execGetAllReferencedAssetDatas },
		{ "GetAssetData", &ITypedElementAssetDataInterface::execGetAssetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementAssetDataInterface);
UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister()
{
	return UTypedElementAssetDataInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementAssetDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementAssetDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas, "GetAllReferencedAssetDatas" }, // 532678056
		{ &Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData, "GetAssetData" }, // 4057178142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementAssetDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::ClassParams = {
	&UTypedElementAssetDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementAssetDataInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementAssetDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementAssetDataInterface.OuterSingleton, Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementAssetDataInterface.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementAssetDataInterface>()
{
	return UTypedElementAssetDataInterface::StaticClass();
}
UTypedElementAssetDataInterface::UTypedElementAssetDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementAssetDataInterface);
UTypedElementAssetDataInterface::~UTypedElementAssetDataInterface() {}
// End Interface UTypedElementAssetDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementAssetDataInterface, UTypedElementAssetDataInterface::StaticClass, TEXT("UTypedElementAssetDataInterface"), &Z_Registration_Info_UClass_UTypedElementAssetDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementAssetDataInterface), 1816171463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_3508963485(TEXT("/Script/TypedElementRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
