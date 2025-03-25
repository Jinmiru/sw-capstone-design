// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/InterchangeSourceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSourceData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Class UInterchangeSourceData Function GetFilename
struct Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics
{
	struct InterchangeSourceData_eventGetFilename_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceData_eventGetFilename_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceData, nullptr, "GetFilename", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::InterchangeSourceData_eventGetFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::InterchangeSourceData_eventGetFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceData_GetFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceData::execGetFilename)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFilename();
	P_NATIVE_END;
}
// End Class UInterchangeSourceData Function GetFilename

// Begin Class UInterchangeSourceData Function SetFilename
struct Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics
{
	struct InterchangeSourceData_eventSetFilename_Parms
	{
		FString InFilename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_InFilename = { "InFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceData_eventSetFilename_Parms, InFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilename_MetaData), NewProp_InFilename_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceData_eventSetFilename_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceData_eventSetFilename_Parms), &Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_InFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceData, nullptr, "SetFilename", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::InterchangeSourceData_eventSetFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::InterchangeSourceData_eventSetFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceData_SetFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceData::execSetFilename)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFilename(Z_Param_InFilename);
	P_NATIVE_END;
}
// End Class UInterchangeSourceData Function SetFilename

// Begin Class UInterchangeSourceData
void UInterchangeSourceData::StaticRegisterNativesUInterchangeSourceData()
{
	UClass* Class = UInterchangeSourceData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFilename", &UInterchangeSourceData::execGetFilename },
		{ "SetFilename", &UInterchangeSourceData::execSetFilename },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSourceData);
UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister()
{
	return UInterchangeSourceData::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSourceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Helper class to be able to read different source data\n * File on disk\n * HTTP URL (TODO)\n * Memory buffer (TODO)\n * Stream (TODO)\n */" },
		{ "IncludePath", "InterchangeSourceData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
		{ "ToolTip", "* Helper class to be able to read different source data\n* File on disk\n* HTTP URL (TODO)\n* Memory buffer (TODO)\n* Stream (TODO)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSourceData_GetFilename, "GetFilename" }, // 3811073242
		{ &Z_Construct_UFunction_UInterchangeSourceData_SetFilename, "SetFilename" }, // 2563212574
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSourceData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeSourceData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeSourceData, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeSourceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeSourceData_Statics::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeSourceData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSourceData_Statics::ClassParams = {
	&UInterchangeSourceData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangeSourceData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceData_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSourceData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSourceData()
{
	if (!Z_Registration_Info_UClass_UInterchangeSourceData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSourceData.OuterSingleton, Z_Construct_UClass_UInterchangeSourceData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSourceData.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeSourceData>()
{
	return UInterchangeSourceData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSourceData);
UInterchangeSourceData::~UInterchangeSourceData() {}
// End Class UInterchangeSourceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSourceData, UInterchangeSourceData::StaticClass, TEXT("UInterchangeSourceData"), &Z_Registration_Info_UClass_UInterchangeSourceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSourceData), 2483361474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_1043687166(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
