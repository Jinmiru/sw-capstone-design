// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_AssetUserData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UInterface_AssetUserData Function AddAssetUserDataOfClass
struct Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics
{
	struct Interface_AssetUserData_eventAddAssetUserDataOfClass_Parms
	{
		TSubclassOf<UAssetUserData> InUserDataClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetUserData" },
		{ "Comment", "/**\n\x09* Creates and adds an instance of the provided AssetUserData class to the target asset.\n\x09*\n\x09* @param\x09InUserDataClass\x09\x09UAssetUserData sub class to create\n\x09*\n\x09* @return\x09Whether or not an instance of InUserDataClass was succesfully added\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_AssetUserData.h" },
		{ "ToolTip", "Creates and adds an instance of the provided AssetUserData class to the target asset.\n\n@param        InUserDataClass         UAssetUserData sub class to create\n\n@return       Whether or not an instance of InUserDataClass was succesfully added" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InUserDataClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::NewProp_InUserDataClass = { "InUserDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_AssetUserData_eventAddAssetUserDataOfClass_Parms, InUserDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Interface_AssetUserData_eventAddAssetUserDataOfClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Interface_AssetUserData_eventAddAssetUserDataOfClass_Parms), &Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::NewProp_InUserDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_AssetUserData, nullptr, "AddAssetUserDataOfClass", nullptr, nullptr, Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::Interface_AssetUserData_eventAddAssetUserDataOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::Interface_AssetUserData_eventAddAssetUserDataOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_AssetUserData::execAddAssetUserDataOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_InUserDataClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddAssetUserDataOfClass(Z_Param_InUserDataClass);
	P_NATIVE_END;
}
// End Interface UInterface_AssetUserData Function AddAssetUserDataOfClass

// Begin Interface UInterface_AssetUserData Function GetAssetUserDataOfClass
struct Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics
{
	struct Interface_AssetUserData_eventGetAssetUserDataOfClass_Parms
	{
		TSubclassOf<UAssetUserData> InUserDataClass;
		UAssetUserData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetUserData" },
		{ "Comment", "/**\n\x09* Returns an instance of the provided AssetUserData class if it's contained in the target asset.\n\x09*\n\x09* @param\x09InUserDataClass\x09\x09UAssetUserData sub class to get\n\x09*\n\x09* @return\x09The instance of the UAssetUserData class contained, or null if it doesn't exist\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_AssetUserData.h" },
		{ "ToolTip", "Returns an instance of the provided AssetUserData class if it's contained in the target asset.\n\n@param        InUserDataClass         UAssetUserData sub class to get\n\n@return       The instance of the UAssetUserData class contained, or null if it doesn't exist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InUserDataClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::NewProp_InUserDataClass = { "InUserDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_AssetUserData_eventGetAssetUserDataOfClass_Parms, InUserDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_AssetUserData_eventGetAssetUserDataOfClass_Parms, ReturnValue), Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::NewProp_InUserDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_AssetUserData, nullptr, "GetAssetUserDataOfClass", nullptr, nullptr, Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::Interface_AssetUserData_eventGetAssetUserDataOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::Interface_AssetUserData_eventGetAssetUserDataOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_AssetUserData::execGetAssetUserDataOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_InUserDataClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAssetUserData**)Z_Param__Result=P_THIS->GetAssetUserDataOfClass(Z_Param_InUserDataClass);
	P_NATIVE_END;
}
// End Interface UInterface_AssetUserData Function GetAssetUserDataOfClass

// Begin Interface UInterface_AssetUserData Function HasAssetUserDataOfClass
struct Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics
{
	struct Interface_AssetUserData_eventHasAssetUserDataOfClass_Parms
	{
		TSubclassOf<UAssetUserData> InUserDataClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssetUserData" },
		{ "Comment", "/**\n\x09* Checks whether or not an instance of the provided AssetUserData class is contained.\n\x09*\n\x09* @param\x09InUserDataClass\x09\x09UAssetUserData sub class to check for\n\x09*\n\x09* @return\x09Whether or not an instance of InUserDataClass was found\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_AssetUserData.h" },
		{ "ToolTip", "Checks whether or not an instance of the provided AssetUserData class is contained.\n\n@param        InUserDataClass         UAssetUserData sub class to check for\n\n@return       Whether or not an instance of InUserDataClass was found" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InUserDataClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::NewProp_InUserDataClass = { "InUserDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interface_AssetUserData_eventHasAssetUserDataOfClass_Parms, InUserDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Interface_AssetUserData_eventHasAssetUserDataOfClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Interface_AssetUserData_eventHasAssetUserDataOfClass_Parms), &Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::NewProp_InUserDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterface_AssetUserData, nullptr, "HasAssetUserDataOfClass", nullptr, nullptr, Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::Interface_AssetUserData_eventHasAssetUserDataOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::Interface_AssetUserData_eventHasAssetUserDataOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInterface_AssetUserData::execHasAssetUserDataOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_InUserDataClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAssetUserDataOfClass(Z_Param_InUserDataClass);
	P_NATIVE_END;
}
// End Interface UInterface_AssetUserData Function HasAssetUserDataOfClass

// Begin Interface UInterface_AssetUserData
void UInterface_AssetUserData::StaticRegisterNativesUInterface_AssetUserData()
{
	UClass* Class = UInterface_AssetUserData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAssetUserDataOfClass", &IInterface_AssetUserData::execAddAssetUserDataOfClass },
		{ "GetAssetUserDataOfClass", &IInterface_AssetUserData::execGetAssetUserDataOfClass },
		{ "HasAssetUserDataOfClass", &IInterface_AssetUserData::execHasAssetUserDataOfClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_AssetUserData);
UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister()
{
	return UInterface_AssetUserData::StaticClass();
}
struct Z_Construct_UClass_UInterface_AssetUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_AssetUserData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterface_AssetUserData_AddAssetUserDataOfClass, "AddAssetUserDataOfClass" }, // 424003164
		{ &Z_Construct_UFunction_UInterface_AssetUserData_GetAssetUserDataOfClass, "GetAssetUserDataOfClass" }, // 2952308507
		{ &Z_Construct_UFunction_UInterface_AssetUserData_HasAssetUserDataOfClass, "HasAssetUserDataOfClass" }, // 2506300916
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_AssetUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterface_AssetUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_AssetUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_AssetUserData_Statics::ClassParams = {
	&UInterface_AssetUserData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_AssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterface_AssetUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterface_AssetUserData()
{
	if (!Z_Registration_Info_UClass_UInterface_AssetUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_AssetUserData.OuterSingleton, Z_Construct_UClass_UInterface_AssetUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterface_AssetUserData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterface_AssetUserData>()
{
	return UInterface_AssetUserData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_AssetUserData);
UInterface_AssetUserData::~UInterface_AssetUserData() {}
// End Interface UInterface_AssetUserData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_AssetUserData, UInterface_AssetUserData::StaticClass, TEXT("UInterface_AssetUserData"), &Z_Registration_Info_UClass_UInterface_AssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_AssetUserData), 505316468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_1352834586(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AssetUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
