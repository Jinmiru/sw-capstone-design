// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/RigUnit_HighlevelBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_HighlevelBase() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum EControlRigVectorKind
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigVectorKind;
static UEnum* EControlRigVectorKind_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigVectorKind, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigVectorKind"));
	}
	return Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigVectorKind>()
{
	return EControlRigVectorKind_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Direction.Name", "EControlRigVectorKind::Direction" },
		{ "Location.Name", "EControlRigVectorKind::Location" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/RigUnit_HighlevelBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControlRigVectorKind::Direction", (int64)EControlRigVectorKind::Direction },
		{ "EControlRigVectorKind::Location", (int64)EControlRigVectorKind::Location },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"EControlRigVectorKind",
	"EControlRigVectorKind",
	Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind()
{
	if (!Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton;
}
// End Enum EControlRigVectorKind

// Begin ScriptStruct FRigUnit_HighlevelBase
static_assert(std::is_polymorphic<FRigUnit_HighlevelBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_HighlevelBase cannot be polymorphic unless super FRigUnit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase;
class UScriptStruct* FRigUnit_HighlevelBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HighlevelBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HighlevelBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HighlevelBase>()
{
	return FRigUnit_HighlevelBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/RigUnit_HighlevelBase.h" },
		{ "NodeColor", "0.462745 1.0 0.329412" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HighlevelBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit,
	&NewStructOps,
	"RigUnit_HighlevelBase",
	nullptr,
	0,
	sizeof(FRigUnit_HighlevelBase),
	alignof(FRigUnit_HighlevelBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.InnerSingleton;
}
// End ScriptStruct FRigUnit_HighlevelBase

// Begin ScriptStruct FRigUnit_HighlevelBaseMutable
static_assert(std::is_polymorphic<FRigUnit_HighlevelBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_HighlevelBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable;
class UScriptStruct* FRigUnit_HighlevelBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HighlevelBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HighlevelBaseMutable>()
{
	return FRigUnit_HighlevelBaseMutable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/RigUnit_HighlevelBase.h" },
		{ "NodeColor", "0 0.364706 1.0" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HighlevelBaseMutable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_HighlevelBaseMutable",
	nullptr,
	0,
	sizeof(FRigUnit_HighlevelBaseMutable),
	alignof(FRigUnit_HighlevelBaseMutable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.InnerSingleton;
}
// End ScriptStruct FRigUnit_HighlevelBaseMutable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EControlRigVectorKind_StaticEnum, TEXT("EControlRigVectorKind"), &Z_Registration_Info_UEnum_EControlRigVectorKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3851874651U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_HighlevelBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::NewStructOps, TEXT("RigUnit_HighlevelBase"), &Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HighlevelBase), 1119518211U) },
		{ FRigUnit_HighlevelBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::NewStructOps, TEXT("RigUnit_HighlevelBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HighlevelBaseMutable), 2928335093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_946894694(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
