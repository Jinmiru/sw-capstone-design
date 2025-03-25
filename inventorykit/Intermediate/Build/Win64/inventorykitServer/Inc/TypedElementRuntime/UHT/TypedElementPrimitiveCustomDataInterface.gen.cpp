// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TypedElementRuntime/Public/Elements/Interfaces/TypedElementPrimitiveCustomDataInterface.h"
#include "Runtime/TypedElementFramework/Public/Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementPrimitiveCustomDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface();
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References

// Begin Interface UTypedElementPrimitiveCustomDataInterface Function SetCustomData
struct Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics
{
	struct TypedElementPrimitiveCustomDataInterface_eventSetCustomData_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		TArray<float> CustomDataFloats;
		bool bMarkRenderStateDirty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|CustomData" },
		{ "Comment", "// Sets all Primitive's CustomData values\n" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementPrimitiveCustomDataInterface.h" },
		{ "ToolTip", "Sets all Primitive's CustomData values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDataFloats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDataFloats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomDataFloats;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementPrimitiveCustomDataInterface_eventSetCustomData_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_CustomDataFloats_Inner = { "CustomDataFloats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_CustomDataFloats = { "CustomDataFloats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementPrimitiveCustomDataInterface_eventSetCustomData_Parms, CustomDataFloats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDataFloats_MetaData), NewProp_CustomDataFloats_MetaData) };
void Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((TypedElementPrimitiveCustomDataInterface_eventSetCustomData_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementPrimitiveCustomDataInterface_eventSetCustomData_Parms), &Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_CustomDataFloats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_CustomDataFloats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::NewProp_bMarkRenderStateDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface, nullptr, "SetCustomData", nullptr, nullptr, Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::TypedElementPrimitiveCustomDataInterface_eventSetCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::TypedElementPrimitiveCustomDataInterface_eventSetCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementPrimitiveCustomDataInterface::execSetCustomData)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_TARRAY_REF(float,Z_Param_Out_CustomDataFloats);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomData(Z_Param_Out_InElementHandle,Z_Param_Out_CustomDataFloats,Z_Param_bMarkRenderStateDirty);
	P_NATIVE_END;
}
// End Interface UTypedElementPrimitiveCustomDataInterface Function SetCustomData

// Begin Interface UTypedElementPrimitiveCustomDataInterface Function SetCustomDataValue
struct Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics
{
	struct TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms
	{
		FScriptTypedElementHandle InElementHandle;
		int32 CustomDataIndex;
		float CustomDataValue;
		bool bMarkRenderStateDirty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|CustomData" },
		{ "Comment", "// Sets a single Primitive's CustomData value\n" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementPrimitiveCustomDataInterface.h" },
		{ "ToolTip", "Sets a single Primitive's CustomData value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDataIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDataValue;
	static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InElementHandle_MetaData), NewProp_InElementHandle_MetaData) }; // 335387057
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_CustomDataIndex = { "CustomDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms, CustomDataIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_CustomDataValue = { "CustomDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms, CustomDataValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
{
	((TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms*)Obj)->bMarkRenderStateDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms), &Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_InElementHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_CustomDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_CustomDataValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface, nullptr, "SetCustomDataValue", nullptr, nullptr, Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::TypedElementPrimitiveCustomDataInterface_eventSetCustomDataValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITypedElementPrimitiveCustomDataInterface::execSetCustomDataValue)
{
	P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_CustomDataIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CustomDataValue);
	P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomDataValue(Z_Param_Out_InElementHandle,Z_Param_CustomDataIndex,Z_Param_CustomDataValue,Z_Param_bMarkRenderStateDirty);
	P_NATIVE_END;
}
// End Interface UTypedElementPrimitiveCustomDataInterface Function SetCustomDataValue

// Begin Interface UTypedElementPrimitiveCustomDataInterface
void UTypedElementPrimitiveCustomDataInterface::StaticRegisterNativesUTypedElementPrimitiveCustomDataInterface()
{
	UClass* Class = UTypedElementPrimitiveCustomDataInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCustomData", &ITypedElementPrimitiveCustomDataInterface::execSetCustomData },
		{ "SetCustomDataValue", &ITypedElementPrimitiveCustomDataInterface::execSetCustomDataValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementPrimitiveCustomDataInterface);
UClass* Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_NoRegister()
{
	return UTypedElementPrimitiveCustomDataInterface::StaticClass();
}
struct Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementPrimitiveCustomDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomData, "SetCustomData" }, // 1838099739
		{ &Z_Construct_UFunction_UTypedElementPrimitiveCustomDataInterface_SetCustomDataValue, "SetCustomDataValue" }, // 1625894801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementPrimitiveCustomDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics::ClassParams = {
	&UTypedElementPrimitiveCustomDataInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface()
{
	if (!Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.OuterSingleton, Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementPrimitiveCustomDataInterface>()
{
	return UTypedElementPrimitiveCustomDataInterface::StaticClass();
}
UTypedElementPrimitiveCustomDataInterface::UTypedElementPrimitiveCustomDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementPrimitiveCustomDataInterface);
UTypedElementPrimitiveCustomDataInterface::~UTypedElementPrimitiveCustomDataInterface() {}
// End Interface UTypedElementPrimitiveCustomDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface, UTypedElementPrimitiveCustomDataInterface::StaticClass, TEXT("UTypedElementPrimitiveCustomDataInterface"), &Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementPrimitiveCustomDataInterface), 1510207955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_3112162317(TEXT("/Script/TypedElementRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementPrimitiveCustomDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
