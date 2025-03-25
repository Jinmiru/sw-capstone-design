// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigBoneHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigBoneHierarchy() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBone();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoneHierarchy();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElement();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigBone
static_assert(std::is_polymorphic<FRigBone>() == std::is_polymorphic<FRigElement>(), "USTRUCT FRigBone cannot be polymorphic unless super FRigElement is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBone;
class UScriptStruct* FRigBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBone, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBone"));
	}
	return Z_Registration_Info_UScriptStruct_RigBone.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBone>()
{
	return FRigBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "Comment", "/* Initial global transform that is saved in this rig */" },
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
		{ "ToolTip", "Initial global transform that is saved in this rig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTransform_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependents_MetaData[] = {
		{ "Comment", "/** dependent list - direct dependent for child or anything that needs to update due to this */" },
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
		{ "ToolTip", "dependent list - direct dependent for child or anything that needs to update due to this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "Comment", "/** the source of the bone to differentiate procedurally generated, imported etc */" },
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
		{ "ToolTip", "the source of the bone to differentiate procedurally generated, imported etc" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dependents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependents;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBone, ParentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentName_MetaData), NewProp_ParentName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBone, ParentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentIndex_MetaData), NewProp_ParentIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBone, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTransform_MetaData), NewProp_InitialTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_GlobalTransform = { "GlobalTransform", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBone, GlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalTransform_MetaData), NewProp_GlobalTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBone, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTransform_MetaData), NewProp_LocalTransform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Dependents_Inner = { "Dependents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Dependents = { "Dependents", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBone, Dependents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependents_MetaData), NewProp_Dependents_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBone, Type), Z_Construct_UEnum_ControlRig_ERigBoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 3895347495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_ParentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_ParentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_InitialTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_GlobalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_LocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Dependents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Dependents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBone_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigElement,
	&NewStructOps,
	"RigBone",
	Z_Construct_UScriptStruct_FRigBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBone_Statics::PropPointers),
	sizeof(FRigBone),
	alignof(FRigBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigBone()
{
	if (!Z_Registration_Info_UScriptStruct_RigBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBone.InnerSingleton, Z_Construct_UScriptStruct_FRigBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigBone.InnerSingleton;
}
// End ScriptStruct FRigBone

// Begin ScriptStruct FRigBoneHierarchy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigBoneHierarchy;
class UScriptStruct* FRigBoneHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoneHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigBoneHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigBoneHierarchy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigBoneHierarchy"));
	}
	return Z_Registration_Info_UScriptStruct_RigBoneHierarchy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigBoneHierarchy>()
{
	return FRigBoneHierarchy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[] = {
		{ "Category", "FRigBoneHierarchy" },
		{ "ModuleRelativePath", "Public/Rigs/RigBoneHierarchy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigBoneHierarchy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigBone, METADATA_PARAMS(0, nullptr) }; // 2754707618
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigBoneHierarchy, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bones_MetaData), NewProp_Bones_MetaData) }; // 2754707618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::NewProp_Bones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::NewProp_Bones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigBoneHierarchy",
	Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::PropPointers),
	sizeof(FRigBoneHierarchy),
	alignof(FRigBoneHierarchy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigBoneHierarchy()
{
	if (!Z_Registration_Info_UScriptStruct_RigBoneHierarchy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigBoneHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigBoneHierarchy.InnerSingleton;
}
// End ScriptStruct FRigBoneHierarchy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigBoneHierarchy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigBone::StaticStruct, Z_Construct_UScriptStruct_FRigBone_Statics::NewStructOps, TEXT("RigBone"), &Z_Registration_Info_UScriptStruct_RigBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBone), 2754707618U) },
		{ FRigBoneHierarchy::StaticStruct, Z_Construct_UScriptStruct_FRigBoneHierarchy_Statics::NewStructOps, TEXT("RigBoneHierarchy"), &Z_Registration_Info_UScriptStruct_RigBoneHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigBoneHierarchy), 2252505025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigBoneHierarchy_h_3540344708(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigBoneHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigBoneHierarchy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
