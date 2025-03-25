// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/Modules/NiagaraStatelessModule_MeshIndex.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_MeshIndex() {}

// Begin Cross Module References
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraStatelessModule_MeshIndex Function NeedsMeshIndexWeights
struct Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics
{
	struct NiagaraStatelessModule_MeshIndex_eventNeedsMeshIndexWeights_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_MeshIndex.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraStatelessModule_MeshIndex_eventNeedsMeshIndexWeights_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraStatelessModule_MeshIndex_eventNeedsMeshIndexWeights_Parms), &Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex, nullptr, "NeedsMeshIndexWeights", nullptr, nullptr, Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::NiagaraStatelessModule_MeshIndex_eventNeedsMeshIndexWeights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::NiagaraStatelessModule_MeshIndex_eventNeedsMeshIndexWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraStatelessModule_MeshIndex::execNeedsMeshIndexWeights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NeedsMeshIndexWeights();
	P_NATIVE_END;
}
// End Class UNiagaraStatelessModule_MeshIndex Function NeedsMeshIndexWeights

// Begin Class UNiagaraStatelessModule_MeshIndex
void UNiagaraStatelessModule_MeshIndex::StaticRegisterNativesUNiagaraStatelessModule_MeshIndex()
{
	UClass* Class = UNiagaraStatelessModule_MeshIndex::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NeedsMeshIndexWeights", &UNiagaraStatelessModule_MeshIndex::execNeedsMeshIndexWeights },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStatelessModule_MeshIndex);
UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_NoRegister()
{
	return UNiagaraStatelessModule_MeshIndex::StaticClass();
}
struct Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Index" },
		{ "IncludePath", "Stateless/Modules/NiagaraStatelessModule_MeshIndex.h" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_MeshIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_MeshIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndexWeight_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/* Weight for each potential mesh index when using a range. */" },
		{ "EditCondition", "NeedsMeshIndexWeights()" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/Stateless/Modules/NiagaraStatelessModule_MeshIndex.h" },
		{ "ToolTip", "Weight for each potential mesh index when using a range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshIndexWeight_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshIndexWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights, "NeedsMeshIndexWeights" }, // 26957537
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStatelessModule_MeshIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_MeshIndex, MeshIndex), Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshIndex_MetaData), NewProp_MeshIndex_MetaData) }; // 2392440345
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::NewProp_MeshIndexWeight_Inner = { "MeshIndexWeight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::NewProp_MeshIndexWeight = { "MeshIndexWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraStatelessModule_MeshIndex, MeshIndexWeight), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshIndexWeight_MetaData), NewProp_MeshIndexWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::NewProp_MeshIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::NewProp_MeshIndexWeight_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::NewProp_MeshIndexWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraStatelessModule,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::ClassParams = {
	&UNiagaraStatelessModule_MeshIndex::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex()
{
	if (!Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.OuterSingleton, Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraStatelessModule_MeshIndex>()
{
	return UNiagaraStatelessModule_MeshIndex::StaticClass();
}
UNiagaraStatelessModule_MeshIndex::UNiagaraStatelessModule_MeshIndex() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStatelessModule_MeshIndex);
UNiagaraStatelessModule_MeshIndex::~UNiagaraStatelessModule_MeshIndex() {}
// End Class UNiagaraStatelessModule_MeshIndex

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshIndex_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex, UNiagaraStatelessModule_MeshIndex::StaticClass, TEXT("UNiagaraStatelessModule_MeshIndex"), &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStatelessModule_MeshIndex), 48954660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshIndex_h_3938028389(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshIndex_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
