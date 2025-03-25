// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Rigs/RigConnectionRules.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigConnectionRules() {}

// Begin Cross Module References
CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigAndConnectionRule();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectionRule();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigConnectionRuleStash();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigOrConnectionRule();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigTagConnectionRule();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigTypeConnectionRule();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRigConnectionRuleStash
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigConnectionRuleStash;
class UScriptStruct* FRigConnectionRuleStash::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectionRuleStash.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigConnectionRuleStash.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectionRuleStash, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigConnectionRuleStash"));
	}
	return Z_Registration_Info_UScriptStruct_RigConnectionRuleStash.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigConnectionRuleStash>()
{
	return FRigConnectionRuleStash::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructPath_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportedText_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptStructPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExportedText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigConnectionRuleStash>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::NewProp_ScriptStructPath = { "ScriptStructPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectionRuleStash, ScriptStructPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptStructPath_MetaData), NewProp_ScriptStructPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::NewProp_ExportedText = { "ExportedText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigConnectionRuleStash, ExportedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportedText_MetaData), NewProp_ExportedText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::NewProp_ScriptStructPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::NewProp_ExportedText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigConnectionRuleStash",
	Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::PropPointers),
	sizeof(FRigConnectionRuleStash),
	alignof(FRigConnectionRuleStash),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigConnectionRuleStash()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectionRuleStash.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigConnectionRuleStash.InnerSingleton, Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigConnectionRuleStash.InnerSingleton;
}
// End ScriptStruct FRigConnectionRuleStash

// Begin ScriptStruct FRigConnectionRule
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigConnectionRule;
class UScriptStruct* FRigConnectionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigConnectionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectionRule, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigConnectionRule"));
	}
	return Z_Registration_Info_UScriptStruct_RigConnectionRule.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigConnectionRule>()
{
	return FRigConnectionRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigConnectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigConnectionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigConnectionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RigConnectionRule",
	nullptr,
	0,
	sizeof(FRigConnectionRule),
	alignof(FRigConnectionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigConnectionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigConnectionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigConnectionRule()
{
	if (!Z_Registration_Info_UScriptStruct_RigConnectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigConnectionRule.InnerSingleton, Z_Construct_UScriptStruct_FRigConnectionRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigConnectionRule.InnerSingleton;
}
// End ScriptStruct FRigConnectionRule

// Begin ScriptStruct FRigAndConnectionRule
static_assert(std::is_polymorphic<FRigAndConnectionRule>() == std::is_polymorphic<FRigConnectionRule>(), "USTRUCT FRigAndConnectionRule cannot be polymorphic unless super FRigConnectionRule is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigAndConnectionRule;
class UScriptStruct* FRigAndConnectionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigAndConnectionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigAndConnectionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigAndConnectionRule, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigAndConnectionRule"));
	}
	return Z_Registration_Info_UScriptStruct_RigAndConnectionRule.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigAndConnectionRule>()
{
	return FRigAndConnectionRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "And Rule" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigAndConnectionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::NewProp_ChildRules_Inner = { "ChildRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigConnectionRuleStash, METADATA_PARAMS(0, nullptr) }; // 3484496758
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::NewProp_ChildRules = { "ChildRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigAndConnectionRule, ChildRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildRules_MetaData), NewProp_ChildRules_MetaData) }; // 3484496758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::NewProp_ChildRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::NewProp_ChildRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigConnectionRule,
	&NewStructOps,
	"RigAndConnectionRule",
	Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::PropPointers),
	sizeof(FRigAndConnectionRule),
	alignof(FRigAndConnectionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigAndConnectionRule()
{
	if (!Z_Registration_Info_UScriptStruct_RigAndConnectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigAndConnectionRule.InnerSingleton, Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigAndConnectionRule.InnerSingleton;
}
// End ScriptStruct FRigAndConnectionRule

// Begin ScriptStruct FRigOrConnectionRule
static_assert(std::is_polymorphic<FRigOrConnectionRule>() == std::is_polymorphic<FRigConnectionRule>(), "USTRUCT FRigOrConnectionRule cannot be polymorphic unless super FRigConnectionRule is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigOrConnectionRule;
class UScriptStruct* FRigOrConnectionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigOrConnectionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigOrConnectionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigOrConnectionRule, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigOrConnectionRule"));
	}
	return Z_Registration_Info_UScriptStruct_RigOrConnectionRule.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigOrConnectionRule>()
{
	return FRigOrConnectionRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Or Rule" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigOrConnectionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::NewProp_ChildRules_Inner = { "ChildRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigConnectionRuleStash, METADATA_PARAMS(0, nullptr) }; // 3484496758
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::NewProp_ChildRules = { "ChildRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigOrConnectionRule, ChildRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildRules_MetaData), NewProp_ChildRules_MetaData) }; // 3484496758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::NewProp_ChildRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::NewProp_ChildRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigConnectionRule,
	&NewStructOps,
	"RigOrConnectionRule",
	Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::PropPointers),
	sizeof(FRigOrConnectionRule),
	alignof(FRigOrConnectionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigOrConnectionRule()
{
	if (!Z_Registration_Info_UScriptStruct_RigOrConnectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigOrConnectionRule.InnerSingleton, Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigOrConnectionRule.InnerSingleton;
}
// End ScriptStruct FRigOrConnectionRule

// Begin ScriptStruct FRigTypeConnectionRule
static_assert(std::is_polymorphic<FRigTypeConnectionRule>() == std::is_polymorphic<FRigConnectionRule>(), "USTRUCT FRigTypeConnectionRule cannot be polymorphic unless super FRigConnectionRule is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTypeConnectionRule;
class UScriptStruct* FRigTypeConnectionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTypeConnectionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTypeConnectionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTypeConnectionRule, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigTypeConnectionRule"));
	}
	return Z_Registration_Info_UScriptStruct_RigTypeConnectionRule.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigTypeConnectionRule>()
{
	return FRigTypeConnectionRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Type Rule" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTypeConnectionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigTypeConnectionRule, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementType_MetaData), NewProp_ElementType_MetaData) }; // 1289171826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::NewProp_ElementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::NewProp_ElementType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigConnectionRule,
	&NewStructOps,
	"RigTypeConnectionRule",
	Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::PropPointers),
	sizeof(FRigTypeConnectionRule),
	alignof(FRigTypeConnectionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigTypeConnectionRule()
{
	if (!Z_Registration_Info_UScriptStruct_RigTypeConnectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTypeConnectionRule.InnerSingleton, Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigTypeConnectionRule.InnerSingleton;
}
// End ScriptStruct FRigTypeConnectionRule

// Begin ScriptStruct FRigTagConnectionRule
static_assert(std::is_polymorphic<FRigTagConnectionRule>() == std::is_polymorphic<FRigConnectionRule>(), "USTRUCT FRigTagConnectionRule cannot be polymorphic unless super FRigConnectionRule is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigTagConnectionRule;
class UScriptStruct* FRigTagConnectionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigTagConnectionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigTagConnectionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigTagConnectionRule, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigTagConnectionRule"));
	}
	return Z_Registration_Info_UScriptStruct_RigTagConnectionRule.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigTagConnectionRule>()
{
	return FRigTagConnectionRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Tag Rule" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigTagConnectionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigTagConnectionRule, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigConnectionRule,
	&NewStructOps,
	"RigTagConnectionRule",
	Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::PropPointers),
	sizeof(FRigTagConnectionRule),
	alignof(FRigTagConnectionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigTagConnectionRule()
{
	if (!Z_Registration_Info_UScriptStruct_RigTagConnectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigTagConnectionRule.InnerSingleton, Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigTagConnectionRule.InnerSingleton;
}
// End ScriptStruct FRigTagConnectionRule

// Begin ScriptStruct FRigChildOfPrimaryConnectionRule
static_assert(std::is_polymorphic<FRigChildOfPrimaryConnectionRule>() == std::is_polymorphic<FRigConnectionRule>(), "USTRUCT FRigChildOfPrimaryConnectionRule cannot be polymorphic unless super FRigConnectionRule is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule;
class UScriptStruct* FRigChildOfPrimaryConnectionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigChildOfPrimaryConnectionRule"));
	}
	return Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigChildOfPrimaryConnectionRule>()
{
	return FRigChildOfPrimaryConnectionRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Child of Primary" },
		{ "ModuleRelativePath", "Public/Rigs/RigConnectionRules.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigChildOfPrimaryConnectionRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigConnectionRule,
	&NewStructOps,
	"RigChildOfPrimaryConnectionRule",
	nullptr,
	0,
	sizeof(FRigChildOfPrimaryConnectionRule),
	alignof(FRigChildOfPrimaryConnectionRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule()
{
	if (!Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule.InnerSingleton, Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule.InnerSingleton;
}
// End ScriptStruct FRigChildOfPrimaryConnectionRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigConnectionRules_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigConnectionRuleStash::StaticStruct, Z_Construct_UScriptStruct_FRigConnectionRuleStash_Statics::NewStructOps, TEXT("RigConnectionRuleStash"), &Z_Registration_Info_UScriptStruct_RigConnectionRuleStash, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigConnectionRuleStash), 3484496758U) },
		{ FRigConnectionRule::StaticStruct, Z_Construct_UScriptStruct_FRigConnectionRule_Statics::NewStructOps, TEXT("RigConnectionRule"), &Z_Registration_Info_UScriptStruct_RigConnectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigConnectionRule), 1451533494U) },
		{ FRigAndConnectionRule::StaticStruct, Z_Construct_UScriptStruct_FRigAndConnectionRule_Statics::NewStructOps, TEXT("RigAndConnectionRule"), &Z_Registration_Info_UScriptStruct_RigAndConnectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigAndConnectionRule), 2718863773U) },
		{ FRigOrConnectionRule::StaticStruct, Z_Construct_UScriptStruct_FRigOrConnectionRule_Statics::NewStructOps, TEXT("RigOrConnectionRule"), &Z_Registration_Info_UScriptStruct_RigOrConnectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigOrConnectionRule), 445256568U) },
		{ FRigTypeConnectionRule::StaticStruct, Z_Construct_UScriptStruct_FRigTypeConnectionRule_Statics::NewStructOps, TEXT("RigTypeConnectionRule"), &Z_Registration_Info_UScriptStruct_RigTypeConnectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTypeConnectionRule), 1690105074U) },
		{ FRigTagConnectionRule::StaticStruct, Z_Construct_UScriptStruct_FRigTagConnectionRule_Statics::NewStructOps, TEXT("RigTagConnectionRule"), &Z_Registration_Info_UScriptStruct_RigTagConnectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigTagConnectionRule), 1772709668U) },
		{ FRigChildOfPrimaryConnectionRule::StaticStruct, Z_Construct_UScriptStruct_FRigChildOfPrimaryConnectionRule_Statics::NewStructOps, TEXT("RigChildOfPrimaryConnectionRule"), &Z_Registration_Info_UScriptStruct_RigChildOfPrimaryConnectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigChildOfPrimaryConnectionRule), 2331083832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigConnectionRules_h_3733511432(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigConnectionRules_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigConnectionRules_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
