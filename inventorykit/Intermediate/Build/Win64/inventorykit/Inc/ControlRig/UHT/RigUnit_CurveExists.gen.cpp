// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Hierarchy/RigUnit_CurveExists.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_CurveExists() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CurveExists();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_CurveExists
static_assert(std::is_polymorphic<FRigUnit_CurveExists>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_CurveExists cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_CurveExists;
class UScriptStruct* FRigUnit_CurveExists::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CurveExists.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_CurveExists.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CurveExists, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_CurveExists"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_CurveExists_Execute;
		Arguments_FRigUnit_CurveExists_Execute.Emplace(TEXT("Curve"), TEXT("FName"));
		Arguments_FRigUnit_CurveExists_Execute.Emplace(TEXT("Exists"), TEXT("bool"));
		Arguments_FRigUnit_CurveExists_Execute.Emplace(TEXT("CachedCurveIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_CurveExists::Execute"), &FRigUnit_CurveExists::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_CurveExists.OuterSingleton, Arguments_FRigUnit_CurveExists_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CurveExists.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_CurveExists>()
{
	return FRigUnit_CurveExists::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n * CurveExists is used to check whether a curve exists or not.\n */" },
		{ "DisplayName", "Curve Exists" },
		{ "Keywords", "CurveExists,bool" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_CurveExists.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "CurveExists is used to check whether a curve exists or not." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Curve to retrieve the transform for.\n\x09 */" },
		{ "CustomWidget", "CurveName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_CurveExists.h" },
		{ "ToolTip", "The name of the Curve to retrieve the transform for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exists_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Boolean indicating whether the named curve exists or not. \n\x09 *  Does not indicate whether the curve's value is valid or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_CurveExists.h" },
		{ "Output", "" },
		{ "ToolTip", "Boolean indicating whether the named curve exists or not.\nDoes not indicate whether the curve's value is valid or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCurveIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used Curve index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_CurveExists.h" },
		{ "ToolTip", "Used to cache the internally used Curve index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Curve;
	static void NewProp_Exists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Exists;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCurveIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_CurveExists>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CurveExists, Curve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_Exists_SetBit(void* Obj)
{
	((FRigUnit_CurveExists*)Obj)->Exists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_Exists = { "Exists", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_CurveExists), &Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_Exists_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exists_MetaData), NewProp_Exists_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_CachedCurveIndex = { "CachedCurveIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_CurveExists, CachedCurveIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCurveIndex_MetaData), NewProp_CachedCurveIndex_MetaData) }; // 2782416853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_Exists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewProp_CachedCurveIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_CurveExists",
	Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::PropPointers),
	sizeof(FRigUnit_CurveExists),
	alignof(FRigUnit_CurveExists),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_CurveExists()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_CurveExists.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_CurveExists.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_CurveExists.InnerSingleton;
}
void FRigUnit_CurveExists::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_CurveExists::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Curve,
		Exists,
		CachedCurveIndex
	);
}
// End ScriptStruct FRigUnit_CurveExists

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_CurveExists_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_CurveExists::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_CurveExists_Statics::NewStructOps, TEXT("RigUnit_CurveExists"), &Z_Registration_Info_UScriptStruct_RigUnit_CurveExists, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_CurveExists), 2726175345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_CurveExists_h_1342685076(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_CurveExists_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_CurveExists_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
