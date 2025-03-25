// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Execution/RigUnit_RigModules.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_RigModules() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetItemShortName();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ResolveConnector();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigModulesBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_RigModulesBase
static_assert(std::is_polymorphic<FRigUnit_RigModulesBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_RigModulesBase cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase;
class UScriptStruct* FRigUnit_RigModulesBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RigModulesBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RigModulesBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RigModulesBase>()
{
	return FRigUnit_RigModulesBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Modules" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "NodeColor", "0.262745, 0.8, 0, 0.229412" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RigModulesBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_RigModulesBase",
	nullptr,
	0,
	sizeof(FRigUnit_RigModulesBase),
	alignof(FRigUnit_RigModulesBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigModulesBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase.InnerSingleton;
}
// End ScriptStruct FRigUnit_RigModulesBase

// Begin ScriptStruct FRigUnit_RigModulesBaseMutable
static_assert(std::is_polymorphic<FRigUnit_RigModulesBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_RigModulesBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable;
class UScriptStruct* FRigUnit_RigModulesBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RigModulesBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RigModulesBaseMutable>()
{
	return FRigUnit_RigModulesBaseMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Modules" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "NodeColor", "0.262745, 0.8, 0, 0.229412" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RigModulesBaseMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_RigModulesBaseMutable",
	nullptr,
	0,
	sizeof(FRigUnit_RigModulesBaseMutable),
	alignof(FRigUnit_RigModulesBaseMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable.InnerSingleton;
}
// End ScriptStruct FRigUnit_RigModulesBaseMutable

// Begin ScriptStruct FRigUnit_ResolveConnector
static_assert(std::is_polymorphic<FRigUnit_ResolveConnector>() == std::is_polymorphic<FRigUnit_RigModulesBase>(), "USTRUCT FRigUnit_ResolveConnector cannot be polymorphic unless super FRigUnit_RigModulesBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector;
class UScriptStruct* FRigUnit_ResolveConnector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ResolveConnector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ResolveConnector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ResolveConnector_Execute;
		Arguments_FRigUnit_ResolveConnector_Execute.Emplace(TEXT("Connector"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ResolveConnector_Execute.Emplace(TEXT("SkipSocket"), TEXT("bool"));
		Arguments_FRigUnit_ResolveConnector_Execute.Emplace(TEXT("Result"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ResolveConnector_Execute.Emplace(TEXT("bIsConnected"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ResolveConnector::Execute"), &FRigUnit_ResolveConnector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector.OuterSingleton, Arguments_FRigUnit_ResolveConnector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ResolveConnector>()
{
	return FRigUnit_ResolveConnector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns the resolved item of the connector.\n*/" },
		{ "DisplayName", "Get Connection" },
		{ "Keywords", "Connector,GetResolved,Target,Resolve" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "Returns the resolved item of the connector." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The key of the connector to resolve\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "* The key of the connector to resolve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipSocket_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * If the connector is resolved to a socket the node\n\x09 * will return the socket's direct parent (skipping it).\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "* If the connector is resolved to a socket the node\n* will return the socket's direct parent (skipping it)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The resulting item the connector is resolved to\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* The resulting item the connector is resolved to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConnected_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * Returns true if the connector is resolved to a target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* Returns true if the connector is resolved to a target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connector;
	static void NewProp_SkipSocket_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SkipSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ResolveConnector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_Connector = { "Connector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ResolveConnector, Connector), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connector_MetaData), NewProp_Connector_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_SkipSocket_SetBit(void* Obj)
{
	((FRigUnit_ResolveConnector*)Obj)->SkipSocket = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_SkipSocket = { "SkipSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ResolveConnector), &Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_SkipSocket_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipSocket_MetaData), NewProp_SkipSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_ResolveConnector, Result), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((FRigUnit_ResolveConnector*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_ResolveConnector), &Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConnected_MetaData), NewProp_bIsConnected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_Connector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_SkipSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewProp_bIsConnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_RigModulesBase,
	&NewStructOps,
	"RigUnit_ResolveConnector",
	Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::PropPointers),
	sizeof(FRigUnit_ResolveConnector),
	alignof(FRigUnit_ResolveConnector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ResolveConnector()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector.InnerSingleton;
}
void FRigUnit_ResolveConnector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_ResolveConnector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Connector,
		SkipSocket,
		Result,
		bIsConnected
	);
}
// End ScriptStruct FRigUnit_ResolveConnector

// Begin ScriptStruct FRigUnit_GetCurrentNameSpace
static_assert(std::is_polymorphic<FRigUnit_GetCurrentNameSpace>() == std::is_polymorphic<FRigUnit_RigModulesBase>(), "USTRUCT FRigUnit_GetCurrentNameSpace cannot be polymorphic unless super FRigUnit_RigModulesBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace;
class UScriptStruct* FRigUnit_GetCurrentNameSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetCurrentNameSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetCurrentNameSpace_Execute;
		Arguments_FRigUnit_GetCurrentNameSpace_Execute.Emplace(TEXT("NameSpace"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetCurrentNameSpace::Execute"), &FRigUnit_GetCurrentNameSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace.OuterSingleton, Arguments_FRigUnit_GetCurrentNameSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetCurrentNameSpace>()
{
	return FRigUnit_GetCurrentNameSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the currently used namespace of the module.\n */" },
		{ "DisplayName", "Get NameSpace" },
		{ "Keywords", "NameSpace" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "Returns the currently used namespace of the module." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The current namespace of the rig module\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* The current namespace of the rig module" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetCurrentNameSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetCurrentNameSpace, NameSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::NewProp_NameSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_RigModulesBase,
	&NewStructOps,
	"RigUnit_GetCurrentNameSpace",
	Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::PropPointers),
	sizeof(FRigUnit_GetCurrentNameSpace),
	alignof(FRigUnit_GetCurrentNameSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace.InnerSingleton;
}
void FRigUnit_GetCurrentNameSpace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetCurrentNameSpace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		NameSpace
	);
}
// End ScriptStruct FRigUnit_GetCurrentNameSpace

// Begin ScriptStruct FRigUnit_GetItemShortName
static_assert(std::is_polymorphic<FRigUnit_GetItemShortName>() == std::is_polymorphic<FRigUnit_RigModulesBase>(), "USTRUCT FRigUnit_GetItemShortName cannot be polymorphic unless super FRigUnit_RigModulesBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName;
class UScriptStruct* FRigUnit_GetItemShortName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemShortName, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetItemShortName"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetItemShortName_Execute;
		Arguments_FRigUnit_GetItemShortName_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetItemShortName_Execute.Emplace(TEXT("ShortName"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetItemShortName::Execute"), &FRigUnit_GetItemShortName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName.OuterSingleton, Arguments_FRigUnit_GetItemShortName_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetItemShortName>()
{
	return FRigUnit_GetItemShortName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the short name of the given item (without the namespace)\n */" },
		{ "DisplayName", "Get Short Name" },
		{ "Keywords", "NameSpace" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "Returns the short name of the given item (without the namespace)" },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The key of the item to return the short name for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "* The key of the item to return the short name for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The short name of the item (without the namespace)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* The short name of the item (without the namespace)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShortName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetItemShortName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetItemShortName, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetItemShortName, ShortName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortName_MetaData), NewProp_ShortName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::NewProp_ShortName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_RigModulesBase,
	&NewStructOps,
	"RigUnit_GetItemShortName",
	Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::PropPointers),
	sizeof(FRigUnit_GetItemShortName),
	alignof(FRigUnit_GetItemShortName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetItemShortName()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName.InnerSingleton;
}
void FRigUnit_GetItemShortName::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetItemShortName::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		ShortName
	);
}
// End ScriptStruct FRigUnit_GetItemShortName

// Begin ScriptStruct FRigUnit_GetItemNameSpace
static_assert(std::is_polymorphic<FRigUnit_GetItemNameSpace>() == std::is_polymorphic<FRigUnit_RigModulesBase>(), "USTRUCT FRigUnit_GetItemNameSpace cannot be polymorphic unless super FRigUnit_RigModulesBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace;
class UScriptStruct* FRigUnit_GetItemNameSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetItemNameSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetItemNameSpace_Execute;
		Arguments_FRigUnit_GetItemNameSpace_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetItemNameSpace_Execute.Emplace(TEXT("HasNameSpace"), TEXT("bool"));
		Arguments_FRigUnit_GetItemNameSpace_Execute.Emplace(TEXT("NameSpace"), TEXT("FString"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetItemNameSpace::Execute"), &FRigUnit_GetItemNameSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace.OuterSingleton, Arguments_FRigUnit_GetItemNameSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetItemNameSpace>()
{
	return FRigUnit_GetItemNameSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the namespace of a given item. This may be an empty string if the item doesn't have a namespace.\n */" },
		{ "DisplayName", "Get Item NameSpace" },
		{ "Keywords", "NameSpace" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "Returns the namespace of a given item. This may be an empty string if the item doesn't have a namespace." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The key of the item to return the namespace for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "* The key of the item to return the namespace for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasNameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * True if the item has a valid namespace\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* True if the item has a valid namespace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The namespace of the item\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* The namespace of the item" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_HasNameSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasNameSpace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetItemNameSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetItemNameSpace, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_HasNameSpace_SetBit(void* Obj)
{
	((FRigUnit_GetItemNameSpace*)Obj)->HasNameSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_HasNameSpace = { "HasNameSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_GetItemNameSpace), &Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_HasNameSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasNameSpace_MetaData), NewProp_HasNameSpace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_NameSpace = { "NameSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetItemNameSpace, NameSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameSpace_MetaData), NewProp_NameSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_HasNameSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewProp_NameSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_RigModulesBase,
	&NewStructOps,
	"RigUnit_GetItemNameSpace",
	Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::PropPointers),
	sizeof(FRigUnit_GetItemNameSpace),
	alignof(FRigUnit_GetItemNameSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace.InnerSingleton;
}
void FRigUnit_GetItemNameSpace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetItemNameSpace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		HasNameSpace,
		NameSpace
	);
}
// End ScriptStruct FRigUnit_GetItemNameSpace

// Begin ScriptStruct FRigUnit_IsItemInCurrentNameSpace
static_assert(std::is_polymorphic<FRigUnit_IsItemInCurrentNameSpace>() == std::is_polymorphic<FRigUnit_RigModulesBase>(), "USTRUCT FRigUnit_IsItemInCurrentNameSpace cannot be polymorphic unless super FRigUnit_RigModulesBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace;
class UScriptStruct* FRigUnit_IsItemInCurrentNameSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_IsItemInCurrentNameSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_IsItemInCurrentNameSpace_Execute;
		Arguments_FRigUnit_IsItemInCurrentNameSpace_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_IsItemInCurrentNameSpace_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_IsItemInCurrentNameSpace::Execute"), &FRigUnit_IsItemInCurrentNameSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace.OuterSingleton, Arguments_FRigUnit_IsItemInCurrentNameSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_IsItemInCurrentNameSpace>()
{
	return FRigUnit_IsItemInCurrentNameSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the given item has been created by this module, \n * which means that the item's namespace is the module namespace.\n */" },
		{ "DisplayName", "Is In Current NameSpace" },
		{ "Keywords", "NameSpace" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "Returns true if the given item has been created by this module,\nwhich means that the item's namespace is the module namespace." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The key of the item to return the namespace for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "* The key of the item to return the namespace for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * True if the item is in this namespace / owned by this module.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* True if the item is in this namespace / owned by this module." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_IsItemInCurrentNameSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_IsItemInCurrentNameSpace, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 1447557315
void Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::NewProp_Result_SetBit(void* Obj)
{
	((FRigUnit_IsItemInCurrentNameSpace*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_IsItemInCurrentNameSpace), &Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_RigModulesBase,
	&NewStructOps,
	"RigUnit_IsItemInCurrentNameSpace",
	Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::PropPointers),
	sizeof(FRigUnit_IsItemInCurrentNameSpace),
	alignof(FRigUnit_IsItemInCurrentNameSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace.InnerSingleton;
}
void FRigUnit_IsItemInCurrentNameSpace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_IsItemInCurrentNameSpace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Result
	);
}
// End ScriptStruct FRigUnit_IsItemInCurrentNameSpace

// Begin ScriptStruct FRigUnit_GetItemsInNameSpace
static_assert(std::is_polymorphic<FRigUnit_GetItemsInNameSpace>() == std::is_polymorphic<FRigUnit_RigModulesBase>(), "USTRUCT FRigUnit_GetItemsInNameSpace cannot be polymorphic unless super FRigUnit_RigModulesBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace;
class UScriptStruct* FRigUnit_GetItemsInNameSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetItemsInNameSpace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetItemsInNameSpace_Execute;
		Arguments_FRigUnit_GetItemsInNameSpace_Execute.Emplace(TEXT("TypeToSearch"), TEXT("ERigElementType"));
		Arguments_FRigUnit_GetItemsInNameSpace_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetItemsInNameSpace::Execute"), &FRigUnit_GetItemsInNameSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace.OuterSingleton, Arguments_FRigUnit_GetItemsInNameSpace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetItemsInNameSpace>()
{
	return FRigUnit_GetItemsInNameSpace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns all items (based on a filter) in the current namespace. \n */" },
		{ "DisplayName", "Get Items In NameSpace" },
		{ "Keywords", "NameSpace" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "ToolTip", "Returns all items (based on a filter) in the current namespace." },
		{ "Varying", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeToSearch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * The items within the namespace\n\x09 */" },
		{ "ModuleRelativePath", "Public/Units/Execution/RigUnit_RigModules.h" },
		{ "Output", "" },
		{ "ToolTip", "* The items within the namespace" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeToSearch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeToSearch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetItemsInNameSpace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_TypeToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_TypeToSearch = { "TypeToSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetItemsInNameSpace, TypeToSearch), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeToSearch_MetaData), NewProp_TypeToSearch_MetaData) }; // 1289171826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 1447557315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_GetItemsInNameSpace, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1447557315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_TypeToSearch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_TypeToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_RigModulesBase,
	&NewStructOps,
	"RigUnit_GetItemsInNameSpace",
	Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::PropPointers),
	sizeof(FRigUnit_GetItemsInNameSpace),
	alignof(FRigUnit_GetItemsInNameSpace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace.InnerSingleton;
}
void FRigUnit_GetItemsInNameSpace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_GetItemsInNameSpace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		TypeToSearch,
		Items
	);
}
// End ScriptStruct FRigUnit_GetItemsInNameSpace

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_RigModulesBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RigModulesBase_Statics::NewStructOps, TEXT("RigUnit_RigModulesBase"), &Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RigModulesBase), 400867417U) },
		{ FRigUnit_RigModulesBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RigModulesBaseMutable_Statics::NewStructOps, TEXT("RigUnit_RigModulesBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_RigModulesBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RigModulesBaseMutable), 3890739222U) },
		{ FRigUnit_ResolveConnector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::NewStructOps, TEXT("RigUnit_ResolveConnector"), &Z_Registration_Info_UScriptStruct_RigUnit_ResolveConnector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ResolveConnector), 1071934221U) },
		{ FRigUnit_GetCurrentNameSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetCurrentNameSpace_Statics::NewStructOps, TEXT("RigUnit_GetCurrentNameSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_GetCurrentNameSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetCurrentNameSpace), 104845573U) },
		{ FRigUnit_GetItemShortName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetItemShortName_Statics::NewStructOps, TEXT("RigUnit_GetItemShortName"), &Z_Registration_Info_UScriptStruct_RigUnit_GetItemShortName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetItemShortName), 1311151650U) },
		{ FRigUnit_GetItemNameSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetItemNameSpace_Statics::NewStructOps, TEXT("RigUnit_GetItemNameSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_GetItemNameSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetItemNameSpace), 1761334997U) },
		{ FRigUnit_IsItemInCurrentNameSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentNameSpace_Statics::NewStructOps, TEXT("RigUnit_IsItemInCurrentNameSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_IsItemInCurrentNameSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_IsItemInCurrentNameSpace), 151663531U) },
		{ FRigUnit_GetItemsInNameSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetItemsInNameSpace_Statics::NewStructOps, TEXT("RigUnit_GetItemsInNameSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_GetItemsInNameSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetItemsInNameSpace), 2088668547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_494160555(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_RigModules_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
