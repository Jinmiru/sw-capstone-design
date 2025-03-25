// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_UnsetCurveValue.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_UnsetCurveValue() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_UnsetCurveValue
static_assert(std::is_polymorphic<FRigUnit_UnsetCurveValue>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_UnsetCurveValue cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue;
class UScriptStruct* FRigUnit_UnsetCurveValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_UnsetCurveValue"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_UnsetCurveValue_Execute;
		Arguments_FRigUnit_UnsetCurveValue_Execute.Emplace(TEXT("Curve"), TEXT("FName"));
		Arguments_FRigUnit_UnsetCurveValue_Execute.Emplace(TEXT("CachedCurveIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_UnsetCurveValue::Execute"), &FRigUnit_UnsetCurveValue::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton, Arguments_FRigUnit_UnsetCurveValue_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_UnsetCurveValue>()
{
	return FRigUnit_UnsetCurveValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n * UnsetCurveValue is used to perform a change in the curve container by invalidating a single Curve value.\n */" },
		{ "DisplayName", "Unset Curve Value" },
		{ "Keywords", "UnsetCurveValue" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_UnsetCurveValue.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "ToolTip", "UnsetCurveValue is used to perform a change in the curve container by invalidating a single Curve value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Curve to set the Value for.\n\x09 */" },
		{ "CustomWidget", "CurveName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_UnsetCurveValue.h" },
		{ "ToolTip", "The name of the Curve to set the Value for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCurveIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used curve index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_UnsetCurveValue.h" },
		{ "ToolTip", "Used to cache the internally used curve index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Curve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCurveIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_UnsetCurveValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_UnsetCurveValue, Curve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_CachedCurveIndex = { "CachedCurveIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_UnsetCurveValue, CachedCurveIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCurveIndex_MetaData), NewProp_CachedCurveIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_CachedCurveIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_UnsetCurveValue",
	Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::PropPointers),
	sizeof(FRigUnit_UnsetCurveValue),
	alignof(FRigUnit_UnsetCurveValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.InnerSingleton;
}
void FRigUnit_UnsetCurveValue::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_UnsetCurveValue::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Curve,
		CachedCurveIndex
	);
}
// End ScriptStruct FRigUnit_UnsetCurveValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_UnsetCurveValue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_UnsetCurveValue::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewStructOps, TEXT("RigUnit_UnsetCurveValue"), &Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_UnsetCurveValue), 2812981959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_UnsetCurveValue_h_2013709176(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_UnsetCurveValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_UnsetCurveValue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
