// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigHierarchyContainer.h"
#include "ControlRig/Public/Rigs/RigBoneHierarchy.h"
#include "ControlRig/Public/Rigs/RigControlHierarchy.h"
#include "ControlRig/Public/Rigs/RigCurveContainer.h"
#include "ControlRig/Public/Rigs/RigSpaceHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyContainer() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoneHierarchy();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlHierarchy();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurveContainer();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyContainer();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyRef();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSpaceHierarchy();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigHierarchyContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyContainer;
class UScriptStruct* FRigHierarchyContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyContainer, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyContainer"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyContainer>()
{
	return FRigHierarchyContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpaceHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneHierarchy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceHierarchy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlHierarchy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_BoneHierarchy = { "BoneHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyContainer, BoneHierarchy), Z_Construct_UScriptStruct_FRigBoneHierarchy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneHierarchy_MetaData), NewProp_BoneHierarchy_MetaData) }; // 2252505025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_SpaceHierarchy = { "SpaceHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyContainer, SpaceHierarchy), Z_Construct_UScriptStruct_FRigSpaceHierarchy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpaceHierarchy_MetaData), NewProp_SpaceHierarchy_MetaData) }; // 1616611735
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_ControlHierarchy = { "ControlHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyContainer, ControlHierarchy), Z_Construct_UScriptStruct_FRigControlHierarchy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlHierarchy_MetaData), NewProp_ControlHierarchy_MetaData) }; // 1551788975
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_CurveContainer = { "CurveContainer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigHierarchyContainer, CurveContainer), Z_Construct_UScriptStruct_FRigCurveContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveContainer_MetaData), NewProp_CurveContainer_MetaData) }; // 1449586731
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_BoneHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_SpaceHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_ControlHierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_CurveContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigHierarchyContainer",
	Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::PropPointers),
	sizeof(FRigHierarchyContainer),
	alignof(FRigHierarchyContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyContainer()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyContainer.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyContainer.InnerSingleton;
}
// End ScriptStruct FRigHierarchyContainer

// Begin ScriptStruct FRigHierarchyRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyRef;
class UScriptStruct* FRigHierarchyRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyRef, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyRef"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyRef.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyRef>()
{
	return FRigHierarchyRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigHierarchyRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// this struct is still here for backwards compatibility - but not used anywhere\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
		{ "ToolTip", "this struct is still here for backwards compatibility - but not used anywhere" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigHierarchyRef",
	nullptr,
	0,
	sizeof(FRigHierarchyRef),
	alignof(FRigHierarchyRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyRef()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyRef.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyRef.InnerSingleton;
}
// End ScriptStruct FRigHierarchyRef

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigHierarchyContainer::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewStructOps, TEXT("RigHierarchyContainer"), &Z_Registration_Info_UScriptStruct_RigHierarchyContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyContainer), 2490626061U) },
		{ FRigHierarchyRef::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::NewStructOps, TEXT("RigHierarchyRef"), &Z_Registration_Info_UScriptStruct_RigHierarchyRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyRef), 1110608074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_533126336(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
