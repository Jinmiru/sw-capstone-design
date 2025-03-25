// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/DeviceProfiles/DeviceProfileMatching.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileMatching() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingIfCondition();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestruct();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructA();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructB();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructC();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructD();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructE();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSelectedFragmentProperties();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSelectedFragmentProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SelectedFragmentProperties;
class UScriptStruct* FSelectedFragmentProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectedFragmentProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SelectedFragmentProperties"));
	}
	return Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSelectedFragmentProperties>()
{
	return FSelectedFragmentProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Comment", "// user defined 'Tag' for this fragment.\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
		{ "ToolTip", "user defined 'Tag' for this fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "Comment", "// Actual name of the fragment to select\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
		{ "ToolTip", "Actual name of the fragment to select" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "// whether the fragment's cvars will be applied\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
		{ "ToolTip", "whether the fragment's cvars will be applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Fragment;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectedFragmentProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectedFragmentProperties, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectedFragmentProperties, Fragment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
void Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FSelectedFragmentProperties*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSelectedFragmentProperties), &Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SelectedFragmentProperties",
	Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::PropPointers),
	sizeof(FSelectedFragmentProperties),
	alignof(FSelectedFragmentProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSelectedFragmentProperties()
{
	if (!Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.InnerSingleton, Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SelectedFragmentProperties.InnerSingleton;
}
// End ScriptStruct FSelectedFragmentProperties

// Begin ScriptStruct FDPMatchingIfCondition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingIfCondition;
class UScriptStruct* FDPMatchingIfCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingIfCondition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingIfCondition"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingIfCondition>()
{
	return FDPMatchingIfCondition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arg1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arg2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Operator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Arg1;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Arg2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingIfCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingIfCondition, Operator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg1 = { "Arg1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingIfCondition, Arg1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arg1_MetaData), NewProp_Arg1_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg2 = { "Arg2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingIfCondition, Arg2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arg2_MetaData), NewProp_Arg2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Operator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewProp_Arg2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DPMatchingIfCondition",
	Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::PropPointers),
	sizeof(FDPMatchingIfCondition),
	alignof(FDPMatchingIfCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingIfCondition()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingIfCondition.InnerSingleton;
}
// End ScriptStruct FDPMatchingIfCondition

// Begin ScriptStruct FDPMatchingRulestructBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase;
class UScriptStruct* FDPMatchingRulestructBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructBase"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructBase>()
{
	return FDPMatchingRulestructBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IfConditions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppendFragments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetUserVar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RuleName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IfConditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IfConditions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppendFragments;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SetUserVar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_RuleName = { "RuleName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructBase, RuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleName_MetaData), NewProp_RuleName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions_Inner = { "IfConditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingIfCondition, METADATA_PARAMS(0, nullptr) }; // 3370577453
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions = { "IfConditions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructBase, IfConditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IfConditions_MetaData), NewProp_IfConditions_MetaData) }; // 3370577453
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_AppendFragments = { "AppendFragments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructBase, AppendFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppendFragments_MetaData), NewProp_AppendFragments_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_SetUserVar = { "SetUserVar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructBase, SetUserVar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetUserVar_MetaData), NewProp_SetUserVar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_RuleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_IfConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_AppendFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewProp_SetUserVar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DPMatchingRulestructBase",
	Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::PropPointers),
	sizeof(FDPMatchingRulestructBase),
	alignof(FDPMatchingRulestructBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructBase()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase.InnerSingleton;
}
// End ScriptStruct FDPMatchingRulestructBase

// Begin ScriptStruct FDPMatchingRulestructA
static_assert(std::is_polymorphic<FDPMatchingRulestructA>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructA cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructA;
class UScriptStruct* FDPMatchingRulestructA::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructA, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructA"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructA>()
{
	return FDPMatchingRulestructA::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructA>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructBase, METADATA_PARAMS(0, nullptr) }; // 2056285823
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructA, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrue_MetaData), NewProp_OnTrue_MetaData) }; // 2056285823
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructBase, METADATA_PARAMS(0, nullptr) }; // 2056285823
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructA, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFalse_MetaData), NewProp_OnFalse_MetaData) }; // 2056285823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewProp_OnFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
	&NewStructOps,
	"DPMatchingRulestructA",
	Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::PropPointers),
	sizeof(FDPMatchingRulestructA),
	alignof(FDPMatchingRulestructA),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructA()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructA.InnerSingleton;
}
// End ScriptStruct FDPMatchingRulestructA

// Begin ScriptStruct FDPMatchingRulestructB
static_assert(std::is_polymorphic<FDPMatchingRulestructB>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructB cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructB;
class UScriptStruct* FDPMatchingRulestructB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructB, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructB"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructB>()
{
	return FDPMatchingRulestructB::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructA, METADATA_PARAMS(0, nullptr) }; // 267679340
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructB, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrue_MetaData), NewProp_OnTrue_MetaData) }; // 267679340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructA, METADATA_PARAMS(0, nullptr) }; // 267679340
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructB, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFalse_MetaData), NewProp_OnFalse_MetaData) }; // 267679340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewProp_OnFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
	&NewStructOps,
	"DPMatchingRulestructB",
	Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::PropPointers),
	sizeof(FDPMatchingRulestructB),
	alignof(FDPMatchingRulestructB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructB()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructB.InnerSingleton;
}
// End ScriptStruct FDPMatchingRulestructB

// Begin ScriptStruct FDPMatchingRulestructC
static_assert(std::is_polymorphic<FDPMatchingRulestructC>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructC cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructC;
class UScriptStruct* FDPMatchingRulestructC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructC, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructC"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructC>()
{
	return FDPMatchingRulestructC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructB, METADATA_PARAMS(0, nullptr) }; // 3209794866
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructC, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrue_MetaData), NewProp_OnTrue_MetaData) }; // 3209794866
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructB, METADATA_PARAMS(0, nullptr) }; // 3209794866
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructC, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFalse_MetaData), NewProp_OnFalse_MetaData) }; // 3209794866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewProp_OnFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
	&NewStructOps,
	"DPMatchingRulestructC",
	Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::PropPointers),
	sizeof(FDPMatchingRulestructC),
	alignof(FDPMatchingRulestructC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructC()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructC.InnerSingleton;
}
// End ScriptStruct FDPMatchingRulestructC

// Begin ScriptStruct FDPMatchingRulestructD
static_assert(std::is_polymorphic<FDPMatchingRulestructD>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructD cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructD;
class UScriptStruct* FDPMatchingRulestructD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructD, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructD"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructD>()
{
	return FDPMatchingRulestructD::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructD>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructC, METADATA_PARAMS(0, nullptr) }; // 2521970885
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructD, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrue_MetaData), NewProp_OnTrue_MetaData) }; // 2521970885
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructC, METADATA_PARAMS(0, nullptr) }; // 2521970885
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructD, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFalse_MetaData), NewProp_OnFalse_MetaData) }; // 2521970885
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewProp_OnFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
	&NewStructOps,
	"DPMatchingRulestructD",
	Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::PropPointers),
	sizeof(FDPMatchingRulestructD),
	alignof(FDPMatchingRulestructD),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructD()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructD.InnerSingleton;
}
// End ScriptStruct FDPMatchingRulestructD

// Begin ScriptStruct FDPMatchingRulestructE
static_assert(std::is_polymorphic<FDPMatchingRulestructE>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestructE cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestructE;
class UScriptStruct* FDPMatchingRulestructE::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestructE, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestructE"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestructE>()
{
	return FDPMatchingRulestructE::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestructE>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructD, METADATA_PARAMS(0, nullptr) }; // 952673606
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructE, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrue_MetaData), NewProp_OnTrue_MetaData) }; // 952673606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructD, METADATA_PARAMS(0, nullptr) }; // 952673606
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestructE, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFalse_MetaData), NewProp_OnFalse_MetaData) }; // 952673606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewProp_OnFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
	&NewStructOps,
	"DPMatchingRulestructE",
	Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::PropPointers),
	sizeof(FDPMatchingRulestructE),
	alignof(FDPMatchingRulestructE),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestructE()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestructE.InnerSingleton;
}
// End ScriptStruct FDPMatchingRulestructE

// Begin ScriptStruct FDPMatchingRulestruct
static_assert(std::is_polymorphic<FDPMatchingRulestruct>() == std::is_polymorphic<FDPMatchingRulestructBase>(), "USTRUCT FDPMatchingRulestruct cannot be polymorphic unless super FDPMatchingRulestructBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DPMatchingRulestruct;
class UScriptStruct* FDPMatchingRulestruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPMatchingRulestruct, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DPMatchingRulestruct"));
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDPMatchingRulestruct>()
{
	return FDPMatchingRulestruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileMatching.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnTrue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnTrue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnFalse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPMatchingRulestruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue_Inner = { "OnTrue", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructE, METADATA_PARAMS(0, nullptr) }; // 4133596186
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue = { "OnTrue", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestruct, OnTrue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTrue_MetaData), NewProp_OnTrue_MetaData) }; // 4133596186
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse_Inner = { "OnFalse", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestructE, METADATA_PARAMS(0, nullptr) }; // 4133596186
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse = { "OnFalse", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDPMatchingRulestruct, OnFalse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFalse_MetaData), NewProp_OnFalse_MetaData) }; // 4133596186
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnTrue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewProp_OnFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FDPMatchingRulestructBase,
	&NewStructOps,
	"DPMatchingRulestruct",
	Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::PropPointers),
	sizeof(FDPMatchingRulestruct),
	alignof(FDPMatchingRulestruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestruct()
{
	if (!Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.InnerSingleton, Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DPMatchingRulestruct.InnerSingleton;
}
// End ScriptStruct FDPMatchingRulestruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSelectedFragmentProperties::StaticStruct, Z_Construct_UScriptStruct_FSelectedFragmentProperties_Statics::NewStructOps, TEXT("SelectedFragmentProperties"), &Z_Registration_Info_UScriptStruct_SelectedFragmentProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectedFragmentProperties), 2825298625U) },
		{ FDPMatchingIfCondition::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingIfCondition_Statics::NewStructOps, TEXT("DPMatchingIfCondition"), &Z_Registration_Info_UScriptStruct_DPMatchingIfCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingIfCondition), 3370577453U) },
		{ FDPMatchingRulestructBase::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructBase_Statics::NewStructOps, TEXT("DPMatchingRulestructBase"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructBase), 2056285823U) },
		{ FDPMatchingRulestructA::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructA_Statics::NewStructOps, TEXT("DPMatchingRulestructA"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructA, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructA), 267679340U) },
		{ FDPMatchingRulestructB::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructB_Statics::NewStructOps, TEXT("DPMatchingRulestructB"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructB), 3209794866U) },
		{ FDPMatchingRulestructC::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructC_Statics::NewStructOps, TEXT("DPMatchingRulestructC"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructC), 2521970885U) },
		{ FDPMatchingRulestructD::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructD_Statics::NewStructOps, TEXT("DPMatchingRulestructD"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructD), 952673606U) },
		{ FDPMatchingRulestructE::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestructE_Statics::NewStructOps, TEXT("DPMatchingRulestructE"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestructE, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestructE), 4133596186U) },
		{ FDPMatchingRulestruct::StaticStruct, Z_Construct_UScriptStruct_FDPMatchingRulestruct_Statics::NewStructOps, TEXT("DPMatchingRulestruct"), &Z_Registration_Info_UScriptStruct_DPMatchingRulestruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDPMatchingRulestruct), 1876381570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_4219066449(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileMatching_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
