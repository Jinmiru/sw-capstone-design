// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSize.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
#include "Niagara/Public/NiagaraParameterBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleMeshSize() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector3();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_ScaleMeshSize Function UseScaleCurveRange
struct Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics
{
	struct NiagaraStatelessModule_ScaleMeshSize_eventUseScaleCurveRange_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSize.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraStatelessModule_ScaleMeshSize_eventUseScaleCurveRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraStatelessModule_ScaleMeshSize_eventUseScaleCurveRange_Parms), &Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize, nullptr, "UseScaleCurveRange", nullptr, nullptr, Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::NiagaraStatelessModule_ScaleMeshSize_eventUseScaleCurveRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::NiagaraStatelessModule_ScaleMeshSize_eventUseScaleCurveRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraStatelessModule_ScaleMeshSize::execUseScaleCurveRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UseScaleCurveRange();
	P_NATIVE_END;
}
// End Class UNiagaraStatelessModule_ScaleMeshSize Function UseScaleCurveRange

// Begin Class UNiagaraStatelessModule_ScaleMeshSize
void UNiagaraStatelessModule_ScaleMeshSize::StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSize()
{
	UClass* Class = UNiagaraStatelessModule_ScaleMeshSize::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UseScaleCurveRange", &UNiagaraStatelessModule_ScaleMeshSize::execUseScaleCurveRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_ScaleMeshSize);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_NoRegister()
{
	return UNiagaraStatelessModule_ScaleMeshSize::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Scale Mesh Size" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_ScaleMeshSize.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleDistribution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurveRange_MetaData[] = {
		{ "Category", "Parameters" },
		{ "EditCondition", "UseScaleCurveRange()" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_ScaleMeshSize.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleCurveRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange, "UseScaleCurveRange" }, // 2129248147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_ScaleMeshSize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::NewProp_ScaleDistribution = { "ScaleDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSize, ScaleDistribution), Z_Construct_UScriptStruct_FNiagaraDistributionVector3, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleDistribution_MetaData), NewProp_ScaleDistribution_MetaData) }; // 274836187
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::NewProp_ScaleCurveRange = { "ScaleCurveRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_ScaleMeshSize, ScaleCurveRange), Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurveRange_MetaData), NewProp_ScaleCurveRange_MetaData) }; // 1755671658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::NewProp_ScaleDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::NewProp_ScaleCurveRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::ClassParams = {
	&UNiagaraStatelessModule_ScaleMeshSize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_ScaleMeshSize>()
{
	return UNiagaraStatelessModule_ScaleMeshSize::StaticClass();
}
UNiagaraStatelessModule_ScaleMeshSize::UNiagaraStatelessModule_ScaleMeshSize() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_ScaleMeshSize);
UNiagaraStatelessModule_ScaleMeshSize::~UNiagaraStatelessModule_ScaleMeshSize() {}
// End Class UNiagaraStatelessModule_ScaleMeshSize

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize, UNiagaraStatelessModule_ScaleMeshSize::StaticClass, TEXT("UNiagaraStatelessModule_ScaleMeshSize"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_ScaleMeshSize), 1982797444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSize_h_1403915453(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
