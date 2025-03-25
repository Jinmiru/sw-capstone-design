// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Public/GroundTruthData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundTruthData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UGroundTruthData();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UGroundTruthData_NoRegister();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class UGroundTruthData Function CanModify
struct Z_Construct_UFunction_UGroundTruthData_CanModify_Statics
{
	struct GroundTruthData_eventCanModify_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GroundTruthData_eventCanModify_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GroundTruthData_eventCanModify_Parms), &Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "CanModify", nullptr, nullptr, Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::GroundTruthData_eventCanModify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::GroundTruthData_eventCanModify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundTruthData_CanModify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundTruthData::execCanModify)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanModify();
	P_NATIVE_END;
}
// End Class UGroundTruthData Function CanModify

// Begin Class UGroundTruthData Function LoadObject
struct Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics
{
	struct GroundTruthData_eventLoadObject_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundTruthData_eventLoadObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "LoadObject", nullptr, nullptr, Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::GroundTruthData_eventLoadObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::GroundTruthData_eventLoadObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundTruthData_LoadObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundTruthData::execLoadObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->LoadObject();
	P_NATIVE_END;
}
// End Class UGroundTruthData Function LoadObject

// Begin Class UGroundTruthData Function ResetObject
struct Z_Construct_UFunction_UGroundTruthData_ResetObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_ResetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "ResetObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_ResetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundTruthData_ResetObject_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGroundTruthData_ResetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundTruthData_ResetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundTruthData::execResetObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetObject();
	P_NATIVE_END;
}
// End Class UGroundTruthData Function ResetObject

// Begin Class UGroundTruthData Function SaveObject
struct Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics
{
	struct GroundTruthData_eventSaveObject_Parms
	{
		UObject* GroundTruth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundTruth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::NewProp_GroundTruth = { "GroundTruth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GroundTruthData_eventSaveObject_Parms, GroundTruth), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::NewProp_GroundTruth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "SaveObject", nullptr, nullptr, Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::GroundTruthData_eventSaveObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::GroundTruthData_eventSaveObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGroundTruthData_SaveObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGroundTruthData::execSaveObject)
{
	P_GET_OBJECT(UObject,Z_Param_GroundTruth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveObject(Z_Param_GroundTruth);
	P_NATIVE_END;
}
// End Class UGroundTruthData Function SaveObject

// Begin Class UGroundTruthData
void UGroundTruthData::StaticRegisterNativesUGroundTruthData()
{
	UClass* Class = UGroundTruthData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanModify", &UGroundTruthData::execCanModify },
		{ "LoadObject", &UGroundTruthData::execLoadObject },
		{ "ResetObject", &UGroundTruthData::execResetObject },
		{ "SaveObject", &UGroundTruthData::execSaveObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroundTruthData);
UClass* Z_Construct_UClass_UGroundTruthData_NoRegister()
{
	return UGroundTruthData::StaticClass();
}
struct Z_Construct_UClass_UGroundTruthData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GroundTruthData.h" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetGroundTruth_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[] = {
		{ "Category", "Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bResetGroundTruth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetGroundTruth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroundTruthData_CanModify, "CanModify" }, // 1834982138
		{ &Z_Construct_UFunction_UGroundTruthData_LoadObject, "LoadObject" }, // 3014009563
		{ &Z_Construct_UFunction_UGroundTruthData_ResetObject, "ResetObject" }, // 3620945474
		{ &Z_Construct_UFunction_UGroundTruthData_SaveObject, "SaveObject" }, // 1075766714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroundTruthData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_SetBit(void* Obj)
{
	((UGroundTruthData*)Obj)->bResetGroundTruth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth = { "bResetGroundTruth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGroundTruthData), &Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetGroundTruth_MetaData), NewProp_bResetGroundTruth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x01260800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroundTruthData, ObjectData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectData_MetaData), NewProp_ObjectData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroundTruthData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroundTruthData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroundTruthData_Statics::ClassParams = {
	&UGroundTruthData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGroundTruthData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroundTruthData()
{
	if (!Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton, Z_Construct_UClass_UGroundTruthData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<UGroundTruthData>()
{
	return UGroundTruthData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroundTruthData);
UGroundTruthData::~UGroundTruthData() {}
// End Class UGroundTruthData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroundTruthData, UGroundTruthData::StaticClass, TEXT("UGroundTruthData"), &Z_Registration_Info_UClass_UGroundTruthData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroundTruthData), 1111115617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_1275776195(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
