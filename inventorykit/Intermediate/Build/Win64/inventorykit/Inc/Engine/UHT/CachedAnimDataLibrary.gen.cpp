// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/CachedAnimDataLibrary.h"
#include "Runtime/Engine/Public/Animation/CachedAnimData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCachedAnimDataLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCachedAnimDataLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCachedAnimDataLibrary_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetGlobalWeight
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateData CachedAnimStateData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Returns the weight of a state, relative to the graph (specified in the provided FCachedAnimStateData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Returns the weight of a state, relative to the graph (specified in the provided FCachedAnimStateData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_CachedAnimStateData = { "CachedAnimStateData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms, CachedAnimStateData), Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateData_MetaData), NewProp_CachedAnimStateData_MetaData) }; // 3498891689
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_CachedAnimStateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetGlobalWeight", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetGlobalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetGlobalWeight)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateData,Z_Param_Out_CachedAnimStateData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetGlobalWeight(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetGlobalWeight

// Begin Class UCachedAnimDataLibrary Function StateMachine_GetLocalWeight
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateData CachedAnimStateData;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Returns the weight of a state, relative to its state machine (specified in the provided FCachedAnimStateData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Returns the weight of a state, relative to its state machine (specified in the provided FCachedAnimStateData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_CachedAnimStateData = { "CachedAnimStateData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms, CachedAnimStateData), Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateData_MetaData), NewProp_CachedAnimStateData_MetaData) }; // 3498891689
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_CachedAnimStateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_GetLocalWeight", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::CachedAnimDataLibrary_eventStateMachine_GetLocalWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_GetLocalWeight)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateData,Z_Param_Out_CachedAnimStateData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_GetLocalWeight(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_GetLocalWeight

// Begin Class UCachedAnimDataLibrary Function StateMachine_IsStateRelevant
struct Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics
{
	struct CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms
	{
		UAnimInstance* InAnimInstance;
		FCachedAnimStateData CachedAnimStateData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|StateMachine" },
		{ "Comment", "// Returns whether a state is relevant (specified in the provided FCachedAnimStateData)\n" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ToolTip", "Returns whether a state is relevant (specified in the provided FCachedAnimStateData)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimStateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAnimStateData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms, InAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_CachedAnimStateData = { "CachedAnimStateData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms, CachedAnimStateData), Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAnimStateData_MetaData), NewProp_CachedAnimStateData_MetaData) }; // 3498891689
void Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms), &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_CachedAnimStateData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCachedAnimDataLibrary, nullptr, "StateMachine_IsStateRelevant", nullptr, nullptr, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::CachedAnimDataLibrary_eventStateMachine_IsStateRelevant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCachedAnimDataLibrary::execStateMachine_IsStateRelevant)
{
	P_GET_OBJECT(UAnimInstance,Z_Param_InAnimInstance);
	P_GET_STRUCT_REF(FCachedAnimStateData,Z_Param_Out_CachedAnimStateData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCachedAnimDataLibrary::StateMachine_IsStateRelevant(Z_Param_InAnimInstance,Z_Param_Out_CachedAnimStateData);
	P_NATIVE_END;
}
// End Class UCachedAnimDataLibrary Function StateMachine_IsStateRelevant

// Begin Class UCachedAnimDataLibrary
void UCachedAnimDataLibrary::StaticRegisterNativesUCachedAnimDataLibrary()
{
	UClass* Class = UCachedAnimDataLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StateMachine_GetGlobalWeight", &UCachedAnimDataLibrary::execStateMachine_GetGlobalWeight },
		{ "StateMachine_GetLocalWeight", &UCachedAnimDataLibrary::execStateMachine_GetLocalWeight },
		{ "StateMachine_IsStateRelevant", &UCachedAnimDataLibrary::execStateMachine_IsStateRelevant },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCachedAnimDataLibrary);
UClass* Z_Construct_UClass_UCachedAnimDataLibrary_NoRegister()
{
	return UCachedAnimDataLibrary::StaticClass();
}
struct Z_Construct_UClass_UCachedAnimDataLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A library of commonly used functionality from the CachedAnimData family, exposed to blueprint.\n */" },
		{ "IncludePath", "Animation/CachedAnimDataLibrary.h" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimDataLibrary.h" },
		{ "ScriptName", "CachedAnimDataLibrary" },
		{ "ToolTip", "A library of commonly used functionality from the CachedAnimData family, exposed to blueprint." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetGlobalWeight, "StateMachine_GetGlobalWeight" }, // 496937877
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_GetLocalWeight, "StateMachine_GetLocalWeight" }, // 820927426
		{ &Z_Construct_UFunction_UCachedAnimDataLibrary_StateMachine_IsStateRelevant, "StateMachine_IsStateRelevant" }, // 3802610296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCachedAnimDataLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCachedAnimDataLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCachedAnimDataLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCachedAnimDataLibrary_Statics::ClassParams = {
	&UCachedAnimDataLibrary::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCachedAnimDataLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCachedAnimDataLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCachedAnimDataLibrary()
{
	if (!Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton, Z_Construct_UClass_UCachedAnimDataLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCachedAnimDataLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCachedAnimDataLibrary>()
{
	return UCachedAnimDataLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCachedAnimDataLibrary);
UCachedAnimDataLibrary::~UCachedAnimDataLibrary() {}
// End Class UCachedAnimDataLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCachedAnimDataLibrary, UCachedAnimDataLibrary::StaticClass, TEXT("UCachedAnimDataLibrary"), &Z_Registration_Info_UClass_UCachedAnimDataLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCachedAnimDataLibrary), 996956696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_2346890170(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
