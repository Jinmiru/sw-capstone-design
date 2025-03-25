// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Debug/RigUnit_DebugBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DebugBase() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigUnit_DebugBase
static_assert(std::is_polymorphic<FRigUnit_DebugBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_DebugBase cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugBase;
class UScriptStruct* FRigUnit_DebugBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugBase>()
{
	return FRigUnit_DebugBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_DebugBase",
	nullptr,
	0,
	sizeof(FRigUnit_DebugBase),
	alignof(FRigUnit_DebugBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.InnerSingleton;
}
// End ScriptStruct FRigUnit_DebugBase

// Begin ScriptStruct FRigUnit_DebugBaseMutable
static_assert(std::is_polymorphic<FRigUnit_DebugBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DebugBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable;
class UScriptStruct* FRigUnit_DebugBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugBaseMutable>()
{
	return FRigUnit_DebugBaseMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Units/Debug/RigUnit_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugBaseMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_DebugBaseMutable",
	nullptr,
	0,
	sizeof(FRigUnit_DebugBaseMutable),
	alignof(FRigUnit_DebugBaseMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.InnerSingleton;
}
// End ScriptStruct FRigUnit_DebugBaseMutable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_DebugBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::NewStructOps, TEXT("RigUnit_DebugBase"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugBase), 3645768918U) },
		{ FRigUnit_DebugBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::NewStructOps, TEXT("RigUnit_DebugBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugBaseMutable), 147839985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBase_h_2904426598(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
