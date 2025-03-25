// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyCache() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FCachedRigElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedRigElement;
class UScriptStruct* FCachedRigElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedRigElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedRigElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedRigElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CachedRigElement"));
	}
	return Z_Registration_Info_UScriptStruct_CachedRigElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCachedRigElement>()
{
	return FCachedRigElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCachedRigElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ContainerVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedRigElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedRigElement, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 1447557315
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedRigElement, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_ContainerVersion = { "ContainerVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCachedRigElement, ContainerVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerVersion_MetaData), NewProp_ContainerVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedRigElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_ContainerVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"CachedRigElement",
	Z_Construct_UScriptStruct_FCachedRigElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::PropPointers),
	sizeof(FCachedRigElement),
	alignof(FCachedRigElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCachedRigElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement()
{
	if (!Z_Registration_Info_UScriptStruct_CachedRigElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedRigElement.InnerSingleton, Z_Construct_UScriptStruct_FCachedRigElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CachedRigElement.InnerSingleton;
}
// End ScriptStruct FCachedRigElement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCachedRigElement::StaticStruct, Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewStructOps, TEXT("CachedRigElement"), &Z_Registration_Info_UScriptStruct_CachedRigElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedRigElement), 2782416853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_2060799867(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
