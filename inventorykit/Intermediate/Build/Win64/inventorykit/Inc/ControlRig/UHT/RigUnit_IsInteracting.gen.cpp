// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_IsInteracting.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_IsInteracting() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsInteracting();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_IsInteracting
static_assert(std::is_polymorphic<FRigUnit_IsInteracting>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_IsInteracting cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting;
class UScriptStruct* FRigUnit_IsInteracting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsInteracting, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_IsInteracting"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_IsInteracting_Execute;
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsInteracting"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsTranslating"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsRotating"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("bIsScaling"), TEXT("bool"));
		Arguments_FRigUnit_IsInteracting_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_IsInteracting::Execute"), &FRigUnit_IsInteracting::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton, Arguments_FRigUnit_IsInteracting_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_IsInteracting>()
{
	return FRigUnit_IsInteracting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Returns true if the Control Rig is being interacted\n */" },
		{ "DisplayName", "Get Interaction" },
		{ "Keywords", "IsInteracting,Gizmo,Manipulation,Interaction,Tracking" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_IsInteracting.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Returns true if the Control Rig is being interacted" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteracting_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if there is currently an interaction happening\n" },
		{ "DisplayName", "Interacting" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if there is currently an interaction happening" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTranslating_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if the current interaction is a translation\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the current interaction is a translation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRotating_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if the current interaction is a rotation\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the current interaction is a rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsScaling_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// True if the current interaction is scaling\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "True if the current interaction is scaling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// The items being interacted on\n" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "The items being interacted on" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInteracting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteracting;
	static void NewProp_bIsTranslating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTranslating;
	static void NewProp_bIsRotating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotating;
	static void NewProp_bIsScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_IsInteracting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_SetBit(void* Obj)
{
	((FRigUnit_IsInteracting*)Obj)->bIsInteracting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting = { "bIsInteracting", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInteracting_MetaData), NewProp_bIsInteracting_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating_SetBit(void* Obj)
{
	((FRigUnit_IsInteracting*)Obj)->bIsTranslating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating = { "bIsTranslating", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTranslating_MetaData), NewProp_bIsTranslating_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating_SetBit(void* Obj)
{
	((FRigUnit_IsInteracting*)Obj)->bIsRotating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating = { "bIsRotating", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRotating_MetaData), NewProp_bIsRotating_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling_SetBit(void* Obj)
{
	((FRigUnit_IsInteracting*)Obj)->bIsScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling = { "bIsScaling", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsScaling_MetaData), NewProp_bIsScaling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_IsInteracting, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsTranslating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsRotating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_IsInteracting",
	Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers),
	sizeof(FRigUnit_IsInteracting),
	alignof(FRigUnit_IsInteracting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsInteracting()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton;
}
void FRigUnit_IsInteracting::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_IsInteracting::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		bIsInteracting,
		bIsTranslating,
		bIsRotating,
		bIsScaling,
		Items
	);
}
// End ScriptStruct FRigUnit_IsInteracting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_IsInteracting_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_IsInteracting::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewStructOps, TEXT("RigUnit_IsInteracting"), &Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_IsInteracting), 824825083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_IsInteracting_h_2995592950(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
