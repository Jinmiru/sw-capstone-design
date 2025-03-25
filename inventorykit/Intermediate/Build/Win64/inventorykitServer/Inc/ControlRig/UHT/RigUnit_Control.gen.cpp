// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Control/RigUnit_Control.h"
#include "Runtime/AnimationCore/Public/Constraint.h"
#include "Runtime/AnimationCore/Public/EulerTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Control() {}

// Begin Cross Module References
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Control();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_Control
static_assert(std::is_polymorphic<FRigUnit_Control>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_Control cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Control;
class UScriptStruct* FRigUnit_Control::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Control, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Control"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Control_Execute;
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Transform"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Base"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("InitTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Filter"), TEXT("FTransformFilter"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Control::Execute"), &FRigUnit_Control::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton, Arguments_FRigUnit_Control_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Control>()
{
	return FRigUnit_Control::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_Control_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** A control unit used to drive a transform from an external source */" },
		{ "Deprecated", "4.24.0" },
		{ "DisplayName", "Control" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ShowVariableNameInTitle", "" },
		{ "ToolTip", "A control unit used to drive a transform from an external source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "AnimationInput", "" },
		{ "Category", "Control" },
		{ "Comment", "/** The transform of this control */" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The transform of this control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The base that transform is relative to */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The base that transform is relative to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The initial transform that The Transform is initialized to. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The initial transform that The Transform is initialized to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The resultant transform of this unit (Base * Filter(Transform)) */" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "Output", "" },
		{ "ToolTip", "The resultant transform of this unit (Base * Filter(Transform))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The filter determines what axes can be manipulated by the in-viewport widgets */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The filter determines what axes can be manipulated by the in-viewport widgets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Control>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Control, Transform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) }; // 1171242445
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Control, Base), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_InitTransform = { "InitTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Control, InitTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitTransform_MetaData), NewProp_InitTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Control, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Control, Filter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // 2061705217
void Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((FRigUnit_Control*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_Control), &Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Control_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_InitTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_Control",
	Z_Construct_UScriptStruct_FRigUnit_Control_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::PropPointers),
	sizeof(FRigUnit_Control),
	alignof(FRigUnit_Control),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Control_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Control()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Control.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Control.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Control_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Control.InnerSingleton;
}
void FRigUnit_Control::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_Control::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Base,
		InitTransform,
		Result,
		Filter,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_Control

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_Control::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewStructOps, TEXT("RigUnit_Control"), &Z_Registration_Info_UScriptStruct_RigUnit_Control, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Control), 817504621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_145767436(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
