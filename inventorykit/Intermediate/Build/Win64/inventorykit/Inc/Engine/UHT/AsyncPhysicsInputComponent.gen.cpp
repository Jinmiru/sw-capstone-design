// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Physics/AsyncPhysicsInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncPhysicsInputComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent();
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAsyncPhysicsInputComponent Function GetDataToConsume
struct Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics
{
	struct AsyncPhysicsInputComponent_eventGetDataToConsume_Parms
	{
		const UAsyncPhysicsData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Get the async physics data to execute logic off of. This data should not be modified and will NOT make its way back. Should be called from async tick */" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
		{ "ToolTip", "Get the async physics data to execute logic off of. This data should not be modified and will NOT make its way back. Should be called from async tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncPhysicsInputComponent_eventGetDataToConsume_Parms, ReturnValue), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncPhysicsInputComponent, nullptr, "GetDataToConsume", nullptr, nullptr, Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::AsyncPhysicsInputComponent_eventGetDataToConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::AsyncPhysicsInputComponent_eventGetDataToConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncPhysicsInputComponent::execGetDataToConsume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UAsyncPhysicsData**)Z_Param__Result=P_THIS->GetDataToConsume();
	P_NATIVE_END;
}
// End Class UAsyncPhysicsInputComponent Function GetDataToConsume

// Begin Class UAsyncPhysicsInputComponent Function GetDataToWrite
struct Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics
{
	struct AsyncPhysicsInputComponent_eventGetDataToWrite_Parms
	{
		UAsyncPhysicsData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Get the async physics data to write to. This data will make its way to the async physics tick on client and server. Should not be called from async tick */" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
		{ "ToolTip", "Get the async physics data to write to. This data will make its way to the async physics tick on client and server. Should not be called from async tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncPhysicsInputComponent_eventGetDataToWrite_Parms, ReturnValue), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncPhysicsInputComponent, nullptr, "GetDataToWrite", nullptr, nullptr, Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::AsyncPhysicsInputComponent_eventGetDataToWrite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::AsyncPhysicsInputComponent_eventGetDataToWrite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncPhysicsInputComponent::execGetDataToWrite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncPhysicsData**)Z_Param__Result=P_THIS->GetDataToWrite();
	P_NATIVE_END;
}
// End Class UAsyncPhysicsInputComponent Function GetDataToWrite

// Begin Class UAsyncPhysicsInputComponent Function ServerRPCBufferInput
struct AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms
{
	UAsyncPhysicsData* AsyncPhysicsData;
};
static FName NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput = FName(TEXT("ServerRPCBufferInput"));
void UAsyncPhysicsInputComponent::ServerRPCBufferInput(UAsyncPhysicsData* AsyncPhysicsData)
{
	AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms Parms;
	Parms.AsyncPhysicsData=AsyncPhysicsData;
	ProcessEvent(FindFunctionChecked(NAME_UAsyncPhysicsInputComponent_ServerRPCBufferInput),&Parms);
}
struct Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncPhysicsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::NewProp_AsyncPhysicsData = { "AsyncPhysicsData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms, AsyncPhysicsData), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::NewProp_AsyncPhysicsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncPhysicsInputComponent, nullptr, "ServerRPCBufferInput", nullptr, nullptr, Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::PropPointers), sizeof(AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(AsyncPhysicsInputComponent_eventServerRPCBufferInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncPhysicsInputComponent::execServerRPCBufferInput)
{
	P_GET_OBJECT(UAsyncPhysicsData,Z_Param_AsyncPhysicsData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCBufferInput_Implementation(Z_Param_AsyncPhysicsData);
	P_NATIVE_END;
}
// End Class UAsyncPhysicsInputComponent Function ServerRPCBufferInput

// Begin Class UAsyncPhysicsInputComponent
void UAsyncPhysicsInputComponent::StaticRegisterNativesUAsyncPhysicsInputComponent()
{
	UClass* Class = UAsyncPhysicsInputComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataToConsume", &UAsyncPhysicsInputComponent::execGetDataToConsume },
		{ "GetDataToWrite", &UAsyncPhysicsInputComponent::execGetDataToWrite },
		{ "ServerRPCBufferInput", &UAsyncPhysicsInputComponent::execServerRPCBufferInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncPhysicsInputComponent);
UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister()
{
	return UAsyncPhysicsInputComponent::StaticClass();
}
struct Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Physics/AsyncPhysicsInputComponent.h" },
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToConsume_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/AsyncPhysicsInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BufferedData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataToConsume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataToWrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToConsume, "GetDataToConsume" }, // 1423040320
		{ &Z_Construct_UFunction_UAsyncPhysicsInputComponent_GetDataToWrite, "GetDataToWrite" }, // 2750192155
		{ &Z_Construct_UFunction_UAsyncPhysicsInputComponent_ServerRPCBufferInput, "ServerRPCBufferInput" }, // 2675186263
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncPhysicsInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataClass = { "DataClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPhysicsInputComponent, DataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataClass_MetaData), NewProp_DataClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData_Inner = { "BufferedData", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData = { "BufferedData", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPhysicsInputComponent, BufferedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferedData_MetaData), NewProp_BufferedData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToConsume = { "DataToConsume", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPhysicsInputComponent, DataToConsume), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToConsume_MetaData), NewProp_DataToConsume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToWrite = { "DataToWrite", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncPhysicsInputComponent, DataToWrite), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToWrite_MetaData), NewProp_DataToWrite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_BufferedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::NewProp_DataToWrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::ClassParams = {
	&UAsyncPhysicsInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent()
{
	if (!Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton, Z_Construct_UClass_UAsyncPhysicsInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncPhysicsInputComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAsyncPhysicsInputComponent>()
{
	return UAsyncPhysicsInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncPhysicsInputComponent);
UAsyncPhysicsInputComponent::~UAsyncPhysicsInputComponent() {}
// End Class UAsyncPhysicsInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncPhysicsInputComponent, UAsyncPhysicsInputComponent::StaticClass, TEXT("UAsyncPhysicsInputComponent"), &Z_Registration_Info_UClass_UAsyncPhysicsInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncPhysicsInputComponent), 1220686704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_3196871299(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Physics_AsyncPhysicsInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
