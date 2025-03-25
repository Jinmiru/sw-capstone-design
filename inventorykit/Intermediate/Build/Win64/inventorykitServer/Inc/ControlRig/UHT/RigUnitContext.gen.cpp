// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnitContext() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigInteractionType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EControlRigInteractionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigInteractionType;
static UEnum* EControlRigInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigInteractionType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigInteractionType"));
	}
	return Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigInteractionType>()
{
	return EControlRigInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Name", "EControlRigInteractionType::All" },
		{ "Comment", "/**\n * The type of interaction happening on a rig\n */" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "None.Name", "EControlRigInteractionType::None" },
		{ "Rotate.Name", "EControlRigInteractionType::Rotate" },
		{ "Scale.Name", "EControlRigInteractionType::Scale" },
		{ "ToolTip", "The type of interaction happening on a rig" },
		{ "Translate.Name", "EControlRigInteractionType::Translate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigInteractionType::None", (int64)EControlRigInteractionType::None },
		{ "EControlRigInteractionType::Translate", (int64)EControlRigInteractionType::Translate },
		{ "EControlRigInteractionType::Rotate", (int64)EControlRigInteractionType::Rotate },
		{ "EControlRigInteractionType::Scale", (int64)EControlRigInteractionType::Scale },
		{ "EControlRigInteractionType::All", (int64)EControlRigInteractionType::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigInteractionType",
	"EControlRigInteractionType",
	Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigInteractionType()
{
	if (!Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton;
}
// End Enum EControlRigInteractionType

// Begin Enum ERigMetaDataNameSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigMetaDataNameSpace;
static UEnum* ERigMetaDataNameSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigMetaDataNameSpace"));
	}
	return Z_Registration_Info_UEnum_ERigMetaDataNameSpace.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigMetaDataNameSpace>()
{
	return ERigMetaDataNameSpace_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "ERigMetaDataNameSpace::Last" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "None.Comment", "// Use no namespace - store the metadata directly on the item\n" },
		{ "None.Name", "ERigMetaDataNameSpace::None" },
		{ "None.ToolTip", "Use no namespace - store the metadata directly on the item" },
		{ "Parent.Comment", "// Store the metadata relative to its parent model\n" },
		{ "Parent.Name", "ERigMetaDataNameSpace::Parent" },
		{ "Parent.ToolTip", "Store the metadata relative to its parent model" },
		{ "RigVMTypeAllowed", "" },
		{ "Root.Comment", "// Store the metadata under the root module\n" },
		{ "Root.Name", "ERigMetaDataNameSpace::Root" },
		{ "Root.ToolTip", "Store the metadata under the root module" },
		{ "Self.Comment", "// Store the metadata for item relative to its module\n" },
		{ "Self.Name", "ERigMetaDataNameSpace::Self" },
		{ "Self.ToolTip", "Store the metadata for item relative to its module" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigMetaDataNameSpace::None", (int64)ERigMetaDataNameSpace::None },
		{ "ERigMetaDataNameSpace::Self", (int64)ERigMetaDataNameSpace::Self },
		{ "ERigMetaDataNameSpace::Parent", (int64)ERigMetaDataNameSpace::Parent },
		{ "ERigMetaDataNameSpace::Root", (int64)ERigMetaDataNameSpace::Root },
		{ "ERigMetaDataNameSpace::Last", (int64)ERigMetaDataNameSpace::Last },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigMetaDataNameSpace",
	"ERigMetaDataNameSpace",
	Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace()
{
	if (!Z_Registration_Info_UEnum_ERigMetaDataNameSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigMetaDataNameSpace.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigMetaDataNameSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigMetaDataNameSpace.InnerSingleton;
}
// End Enum ERigMetaDataNameSpace

// Begin ScriptStruct FRigHierarchySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchySettings;
class UScriptStruct* FRigHierarchySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchySettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchySettings>()
{
	return FRigHierarchySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigHierarchySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralElementLimit_MetaData[] = {
		{ "Category", "Hierarchy Settings" },
		{ "Comment", "// Sets the limit for the number of elements to create procedurally\n" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "ToolTip", "Sets the limit for the number of elements to create procedurally" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProceduralElementLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit = { "ProceduralElementLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchySettings, ProceduralElementLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralElementLimit_MetaData), NewProp_ProceduralElementLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigHierarchySettings",
	Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers),
	sizeof(FRigHierarchySettings),
	alignof(FRigHierarchySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton;
}
// End ScriptStruct FRigHierarchySettings

// Begin ScriptStruct FControlRigExecuteContext
static_assert(std::is_polymorphic<FControlRigExecuteContext>() == std::is_polymorphic<FRigVMExecuteContext>(), "USTRUCT FControlRigExecuteContext cannot be polymorphic unless super FRigVMExecuteContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigExecuteContext;
class UScriptStruct* FControlRigExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigExecuteContext>()
{
	return FControlRigExecuteContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigExecuteContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigVMExecuteContext,
	&NewStructOps,
	"ControlRigExecuteContext",
	nullptr,
	0,
	sizeof(FControlRigExecuteContext),
	alignof(FControlRigExecuteContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.InnerSingleton;
}
// End ScriptStruct FControlRigExecuteContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlRigInteractionType_StaticEnum, TEXT("EControlRigInteractionType"), &Z_Registration_Info_UEnum_EControlRigInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2958077217U) },
		{ ERigMetaDataNameSpace_StaticEnum, TEXT("ERigMetaDataNameSpace"), &Z_Registration_Info_UEnum_ERigMetaDataNameSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 409500391U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigHierarchySettings::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewStructOps, TEXT("RigHierarchySettings"), &Z_Registration_Info_UScriptStruct_RigHierarchySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchySettings), 1524821739U) },
		{ FControlRigExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::NewStructOps, TEXT("ControlRigExecuteContext"), &Z_Registration_Info_UScriptStruct_ControlRigExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigExecuteContext), 2294738602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_3595130699(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
