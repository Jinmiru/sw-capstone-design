// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRigDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigDefines() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigExecutionType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformGetterType();
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin Enum ETransformSpaceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformSpaceMode;
static UEnum* ETransformSpaceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformSpaceMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ETransformSpaceMode"));
	}
	return Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ETransformSpaceMode>()
{
	return ETransformSpaceMode_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BaseJoint.Comment", "/** Apply in base bone */" },
		{ "BaseJoint.Name", "ETransformSpaceMode::BaseJoint" },
		{ "BaseJoint.ToolTip", "Apply in base bone" },
		{ "BaseSpace.Comment", "/** Apply in Base space */" },
		{ "BaseSpace.Name", "ETransformSpaceMode::BaseSpace" },
		{ "BaseSpace.ToolTip", "Apply in Base space" },
		{ "Comment", "//#define DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT() \\\n//\x09""DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()\n" },
		{ "GlobalSpace.Comment", "/** Apply in rig space*/" },
		{ "GlobalSpace.Name", "ETransformSpaceMode::GlobalSpace" },
		{ "GlobalSpace.ToolTip", "Apply in rig space" },
		{ "LocalSpace.Comment", "/** Apply in parent space */" },
		{ "LocalSpace.Name", "ETransformSpaceMode::LocalSpace" },
		{ "LocalSpace.ToolTip", "Apply in parent space" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ETransformSpaceMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/ControlRigDefines.h" },
		{ "ToolTip", "#define DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT() \\\n       DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransformSpaceMode::LocalSpace", (int64)ETransformSpaceMode::LocalSpace },
		{ "ETransformSpaceMode::GlobalSpace", (int64)ETransformSpaceMode::GlobalSpace },
		{ "ETransformSpaceMode::BaseSpace", (int64)ETransformSpaceMode::BaseSpace },
		{ "ETransformSpaceMode::BaseJoint", (int64)ETransformSpaceMode::BaseJoint },
		{ "ETransformSpaceMode::Max", (int64)ETransformSpaceMode::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ETransformSpaceMode",
	"ETransformSpaceMode",
	Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode()
{
	if (!Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton, Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton;
}
// End Enum ETransformSpaceMode

// Begin Enum ETransformGetterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformGetterType;
static UEnum* ETransformGetterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformGetterType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ETransformGetterType"));
	}
	return Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ETransformGetterType>()
{
	return ETransformGetterType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Current.Name", "ETransformGetterType::Current" },
		{ "Initial.Name", "ETransformGetterType::Initial" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ETransformGetterType::Max" },
		{ "ModuleRelativePath", "Public/ControlRigDefines.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransformGetterType::Initial", (int64)ETransformGetterType::Initial },
		{ "ETransformGetterType::Current", (int64)ETransformGetterType::Current },
		{ "ETransformGetterType::Max", (int64)ETransformGetterType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ETransformGetterType",
	"ETransformGetterType",
	Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ETransformGetterType()
{
	if (!Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton, Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton;
}
// End Enum ETransformGetterType

// Begin Enum ERigExecutionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigExecutionType;
static UEnum* ERigExecutionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigExecutionType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigExecutionType"));
	}
	return Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton;
}
template<> CONTROLRIG_API UEnum* StaticEnum<ERigExecutionType>()
{
	return ERigExecutionType_StaticEnum();
}
struct Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// thought of mixing this with execution on\n// the problem is execution on is transient state, and \n// this execution type is something to be set per rig\n" },
		{ "Editing.Name", "ERigExecutionType::Editing" },
		{ "Max.Comment", "// editing time\n" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigExecutionType::Max" },
		{ "Max.ToolTip", "editing time" },
		{ "ModuleRelativePath", "Public/ControlRigDefines.h" },
		{ "Runtime.Name", "ERigExecutionType::Runtime" },
		{ "ToolTip", "thought of mixing this with execution on\nthe problem is execution on is transient state, and\nthis execution type is something to be set per rig" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERigExecutionType::Runtime", (int64)ERigExecutionType::Runtime },
		{ "ERigExecutionType::Editing", (int64)ERigExecutionType::Editing },
		{ "ERigExecutionType::Max", (int64)ERigExecutionType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	"ERigExecutionType",
	"ERigExecutionType",
	Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ControlRig_ERigExecutionType()
{
	if (!Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton;
}
// End Enum ERigExecutionType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETransformSpaceMode_StaticEnum, TEXT("ETransformSpaceMode"), &Z_Registration_Info_UEnum_ETransformSpaceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3718440355U) },
		{ ETransformGetterType_StaticEnum, TEXT("ETransformGetterType"), &Z_Registration_Info_UEnum_ETransformGetterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1721394999U) },
		{ ERigExecutionType_StaticEnum, TEXT("ERigExecutionType"), &Z_Registration_Info_UEnum_ERigExecutionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2095378819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_2947011871(TEXT("/Script/ControlRig"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
