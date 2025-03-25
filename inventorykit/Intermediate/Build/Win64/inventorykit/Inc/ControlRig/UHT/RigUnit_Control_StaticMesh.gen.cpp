// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Control/RigUnit_Control_StaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Control_StaticMesh() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Control();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_Control_StaticMesh
static_assert(std::is_polymorphic<FRigUnit_Control_StaticMesh>() == std::is_polymorphic<FRigUnit_Control>(), "USTRUCT FRigUnit_Control_StaticMesh cannot be polymorphic unless super FRigUnit_Control is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh;
class UScriptStruct* FRigUnit_Control_StaticMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Control_StaticMesh"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Control_StaticMesh_Execute;
		Arguments_FRigUnit_Control_StaticMesh_Execute.Emplace(TEXT("MeshTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_StaticMesh_Execute.Emplace(TEXT("Transform"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_Control_StaticMesh_Execute.Emplace(TEXT("Base"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_StaticMesh_Execute.Emplace(TEXT("InitTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_StaticMesh_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_StaticMesh_Execute.Emplace(TEXT("Filter"), TEXT("FTransformFilter"));
		Arguments_FRigUnit_Control_StaticMesh_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Control_StaticMesh::Execute"), &FRigUnit_Control_StaticMesh::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh.OuterSingleton, Arguments_FRigUnit_Control_StaticMesh_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Control_StaticMesh>()
{
	return FRigUnit_Control_StaticMesh::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** A control unit used to drive a transform from an external source */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Static Mesh Control" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control_StaticMesh.h" },
		{ "ShowVariableNameInTitle", "" },
		{ "ToolTip", "A control unit used to drive a transform from an external source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The the transform the mesh will be rendered with (applied on top of the control's transform in the viewport) */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control_StaticMesh.h" },
		{ "ToolTip", "The the transform the mesh will be rendered with (applied on top of the control's transform in the viewport)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Control_StaticMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::NewProp_MeshTransform = { "MeshTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Control_StaticMesh, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTransform_MetaData), NewProp_MeshTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::NewProp_MeshTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_Control,
	&NewStructOps,
	"RigUnit_Control_StaticMesh",
	Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::PropPointers),
	sizeof(FRigUnit_Control_StaticMesh),
	alignof(FRigUnit_Control_StaticMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh.InnerSingleton;
}
void FRigUnit_Control_StaticMesh::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_Control_StaticMesh::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		MeshTransform,
		Transform,
		Base,
		InitTransform,
		Result,
		Filter,
		bIsInitialized
	);
}
// End ScriptStruct FRigUnit_Control_StaticMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_StaticMesh_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_Control_StaticMesh::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Control_StaticMesh_Statics::NewStructOps, TEXT("RigUnit_Control_StaticMesh"), &Z_Registration_Info_UScriptStruct_RigUnit_Control_StaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Control_StaticMesh), 1754853221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_StaticMesh_h_1062852031(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_StaticMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_StaticMesh_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
