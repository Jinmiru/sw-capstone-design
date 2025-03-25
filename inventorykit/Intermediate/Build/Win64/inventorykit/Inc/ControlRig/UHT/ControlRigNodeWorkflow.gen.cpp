// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/ControlRigNodeWorkflow.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
#include "RigVM/Public/RigVMCore/RigVMUserWorkflow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigNodeWorkflow() {}

// Begin Cross Module References
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigWorkflowOptions();
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigWorkflowOptions_NoRegister();
CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigTransformType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVMUserWorkflowOptions();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMUserWorkflow();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Class UControlRigWorkflowOptions Function EnsureAtLeastOneRigElementSelected
struct Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics
{
	struct ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms), &Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigWorkflowOptions, nullptr, "EnsureAtLeastOneRigElementSelected", nullptr, nullptr, Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigWorkflowOptions::execEnsureAtLeastOneRigElementSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EnsureAtLeastOneRigElementSelected();
	P_NATIVE_END;
}
// End Class UControlRigWorkflowOptions Function EnsureAtLeastOneRigElementSelected

// Begin Class UControlRigWorkflowOptions
void UControlRigWorkflowOptions::StaticRegisterNativesUControlRigWorkflowOptions()
{
	UClass* Class = UControlRigWorkflowOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnsureAtLeastOneRigElementSelected", &UControlRigWorkflowOptions::execEnsureAtLeastOneRigElementSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigWorkflowOptions);
UClass* Z_Construct_UClass_UControlRigWorkflowOptions_NoRegister()
{
	return UControlRigWorkflowOptions::StaticClass();
}
struct Z_Construct_UClass_UControlRigWorkflowOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Units/ControlRigNodeWorkflow.h" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hierarchy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Selection_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Selection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected, "EnsureAtLeastOneRigElementSelected" }, // 1962092016
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigWorkflowOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigWorkflowOptions, Hierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hierarchy_MetaData), NewProp_Hierarchy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection_Inner = { "Selection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigWorkflowOptions, Selection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selection_MetaData), NewProp_Selection_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigWorkflowOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Hierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigWorkflowOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URigVMUserWorkflowOptions,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::ClassParams = {
	&UControlRigWorkflowOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UControlRigWorkflowOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigWorkflowOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigWorkflowOptions()
{
	if (!Z_Registration_Info_UClass_UControlRigWorkflowOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigWorkflowOptions.OuterSingleton, Z_Construct_UClass_UControlRigWorkflowOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigWorkflowOptions.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigWorkflowOptions>()
{
	return UControlRigWorkflowOptions::StaticClass();
}
UControlRigWorkflowOptions::UControlRigWorkflowOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigWorkflowOptions);
UControlRigWorkflowOptions::~UControlRigWorkflowOptions() {}
// End Class UControlRigWorkflowOptions

// Begin Class UControlRigTransformWorkflowOptions Function ProvideWorkflows
struct Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics
{
	struct ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms
	{
		const UObject* InSubject;
		TArray<FRigVMUserWorkflow> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSubject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSubject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_InSubject = { "InSubject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms, InSubject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSubject_MetaData), NewProp_InSubject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigVMUserWorkflow, METADATA_PARAMS(0, nullptr) }; // 118648909
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 118648909
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_InSubject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTransformWorkflowOptions, nullptr, "ProvideWorkflows", nullptr, nullptr, Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UControlRigTransformWorkflowOptions::execProvideWorkflows)
{
	P_GET_OBJECT(UObject,Z_Param_InSubject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRigVMUserWorkflow>*)Z_Param__Result=P_THIS->ProvideWorkflows(Z_Param_InSubject);
	P_NATIVE_END;
}
// End Class UControlRigTransformWorkflowOptions Function ProvideWorkflows

// Begin Class UControlRigTransformWorkflowOptions
void UControlRigTransformWorkflowOptions::StaticRegisterNativesUControlRigTransformWorkflowOptions()
{
	UClass* Class = UControlRigTransformWorkflowOptions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProvideWorkflows", &UControlRigTransformWorkflowOptions::execProvideWorkflows },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigTransformWorkflowOptions);
UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions_NoRegister()
{
	return UControlRigTransformWorkflowOptions::StaticClass();
}
struct Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Units/ControlRigNodeWorkflow.h" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// The type of transform to retrieve from the hierarchy\n" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
		{ "ToolTip", "The type of transform to retrieve from the hierarchy" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows, "ProvideWorkflows" }, // 2596697864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigTransformWorkflowOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigTransformWorkflowOptions, TransformType), Z_Construct_UEnum_ControlRig_ERigTransformType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformType_MetaData), NewProp_TransformType_MetaData) }; // 3342553616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::NewProp_TransformType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControlRigWorkflowOptions,
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::ClassParams = {
	&UControlRigTransformWorkflowOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions()
{
	if (!Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.OuterSingleton, Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.OuterSingleton;
}
template<> CONTROLRIG_API UClass* StaticClass<UControlRigTransformWorkflowOptions>()
{
	return UControlRigTransformWorkflowOptions::StaticClass();
}
UControlRigTransformWorkflowOptions::UControlRigTransformWorkflowOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigTransformWorkflowOptions);
UControlRigTransformWorkflowOptions::~UControlRigTransformWorkflowOptions() {}
// End Class UControlRigTransformWorkflowOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigWorkflowOptions, UControlRigWorkflowOptions::StaticClass, TEXT("UControlRigWorkflowOptions"), &Z_Registration_Info_UClass_UControlRigWorkflowOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigWorkflowOptions), 3471047699U) },
		{ Z_Construct_UClass_UControlRigTransformWorkflowOptions, UControlRigTransformWorkflowOptions::StaticClass, TEXT("UControlRigTransformWorkflowOptions"), &Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigTransformWorkflowOptions), 2620498410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_4114277404(TEXT("/Script/ControlRig"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
