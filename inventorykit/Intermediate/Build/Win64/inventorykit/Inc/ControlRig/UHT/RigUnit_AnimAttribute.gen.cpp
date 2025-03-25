// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Animation/RigUnit_AnimAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimAttribute() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigDispatch_AnimAttributeBase
static_assert(std::is_polymorphic<FRigDispatch_AnimAttributeBase>() == std::is_polymorphic<FRigDispatchFactory>(), "USTRUCT FRigDispatch_AnimAttributeBase cannot be polymorphic unless super FRigDispatchFactory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase;
class UScriptStruct* FRigDispatch_AnimAttributeBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_AnimAttributeBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_AnimAttributeBase>()
{
	return FRigDispatch_AnimAttributeBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Animation Attribute" },
		{ "Comment", "/**\n * Animation Attributes allow dynamically added data to flow from\n * one Anim Node to other Anim Nodes downstream in the Anim Graph\n * and accessible from deformer graph\n */" },
		{ "ModuleRelativePath", "Public/Units/Animation/RigUnit_AnimAttribute.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Animation Attributes allow dynamically added data to flow from\none Anim Node to other Anim Nodes downstream in the Anim Graph\nand accessible from deformer graph" },
		{ "Varying", "" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_AnimAttributeBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatchFactory,
	&NewStructOps,
	"RigDispatch_AnimAttributeBase",
	nullptr,
	0,
	sizeof(FRigDispatch_AnimAttributeBase),
	alignof(FRigDispatch_AnimAttributeBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase.InnerSingleton;
}
// End ScriptStruct FRigDispatch_AnimAttributeBase

// Begin ScriptStruct FRigDispatch_GetAnimAttribute
static_assert(std::is_polymorphic<FRigDispatch_GetAnimAttribute>() == std::is_polymorphic<FRigDispatch_AnimAttributeBase>(), "USTRUCT FRigDispatch_GetAnimAttribute cannot be polymorphic unless super FRigDispatch_AnimAttributeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute;
class UScriptStruct* FRigDispatch_GetAnimAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_GetAnimAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_GetAnimAttribute>()
{
	return FRigDispatch_GetAnimAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Get the value of an animation attribute from the skeletal mesh\n */" },
		{ "DisplayName", "Get Animation Attribute" },
		{ "ModuleRelativePath", "Public/Units/Animation/RigUnit_AnimAttribute.h" },
		{ "ToolTip", "* Get the value of an animation attribute from the skeletal mesh" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_GetAnimAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase,
	&NewStructOps,
	"RigDispatch_GetAnimAttribute",
	nullptr,
	0,
	sizeof(FRigDispatch_GetAnimAttribute),
	alignof(FRigDispatch_GetAnimAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute.InnerSingleton;
}
// End ScriptStruct FRigDispatch_GetAnimAttribute

// Begin ScriptStruct FRigDispatch_SetAnimAttribute
static_assert(std::is_polymorphic<FRigDispatch_SetAnimAttribute>() == std::is_polymorphic<FRigDispatch_AnimAttributeBase>(), "USTRUCT FRigDispatch_SetAnimAttribute cannot be polymorphic unless super FRigDispatch_AnimAttributeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute;
class UScriptStruct* FRigDispatch_SetAnimAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_SetAnimAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_SetAnimAttribute>()
{
	return FRigDispatch_SetAnimAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Modify an animation attribute if one is found, otherwise add a new animation attribute\n */" },
		{ "DisplayName", "Set Animation Attribute" },
		{ "ModuleRelativePath", "Public/Units/Animation/RigUnit_AnimAttribute.h" },
		{ "ToolTip", "* Modify an animation attribute if one is found, otherwise add a new animation attribute" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_SetAnimAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase,
	&NewStructOps,
	"RigDispatch_SetAnimAttribute",
	nullptr,
	0,
	sizeof(FRigDispatch_SetAnimAttribute),
	alignof(FRigDispatch_SetAnimAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute.InnerSingleton;
}
// End ScriptStruct FRigDispatch_SetAnimAttribute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Animation_RigUnit_AnimAttribute_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigDispatch_AnimAttributeBase::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_AnimAttributeBase_Statics::NewStructOps, TEXT("RigDispatch_AnimAttributeBase"), &Z_Registration_Info_UScriptStruct_RigDispatch_AnimAttributeBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_AnimAttributeBase), 1328253210U) },
		{ FRigDispatch_GetAnimAttribute::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_GetAnimAttribute_Statics::NewStructOps, TEXT("RigDispatch_GetAnimAttribute"), &Z_Registration_Info_UScriptStruct_RigDispatch_GetAnimAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_GetAnimAttribute), 363449168U) },
		{ FRigDispatch_SetAnimAttribute::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_SetAnimAttribute_Statics::NewStructOps, TEXT("RigDispatch_SetAnimAttribute"), &Z_Registration_Info_UScriptStruct_RigDispatch_SetAnimAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_SetAnimAttribute), 2423476468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Animation_RigUnit_AnimAttribute_h_2272633252(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Animation_RigUnit_AnimAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Animation_RigUnit_AnimAttribute_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
