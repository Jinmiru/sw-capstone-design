// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerPlatformProperties() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFreezablePerPlatformInt();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFrameRate();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FPerPlatformInt
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformInt;
class UScriptStruct* FPerPlatformInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformInt, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformInt"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformInt.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformInt>()
{
	return FPerPlatformInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerPlatformInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** FPerPlatformInt - int32 property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformInt - int32 property with per-platform overrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerPlatform_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPlatformInt, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPlatformInt, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPlatform_MetaData), NewProp_PerPlatform_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PerPlatformInt",
	Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers),
	sizeof(FPerPlatformInt),
	alignof(FPerPlatformInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformInt.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformInt.InnerSingleton;
}
// End ScriptStruct FPerPlatformInt

// Begin ScriptStruct FFreezablePerPlatformInt
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt;
class UScriptStruct* FFreezablePerPlatformInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFreezablePerPlatformInt, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FreezablePerPlatformInt"));
	}
	return Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFreezablePerPlatformInt>()
{
	return FFreezablePerPlatformInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFreezablePerPlatformInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FreezablePerPlatformInt",
	nullptr,
	0,
	sizeof(FFreezablePerPlatformInt),
	alignof(FFreezablePerPlatformInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFreezablePerPlatformInt()
{
	if (!Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.InnerSingleton, Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt.InnerSingleton;
}
// End ScriptStruct FFreezablePerPlatformInt

// Begin ScriptStruct FPerPlatformFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformFloat;
class UScriptStruct* FPerPlatformFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformFloat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformFloat"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformFloat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformFloat>()
{
	return FPerPlatformFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerPlatformFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CanFlattenStruct", "" },
		{ "Comment", "/** FPerPlatformFloat - float property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformFloat - float property with per-platform overrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerPlatform_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPlatformFloat, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPlatformFloat, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPlatform_MetaData), NewProp_PerPlatform_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PerPlatformFloat",
	Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers),
	sizeof(FPerPlatformFloat),
	alignof(FPerPlatformFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformFloat.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformFloat.InnerSingleton;
}
// End ScriptStruct FPerPlatformFloat

// Begin ScriptStruct FPerPlatformBool
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformBool;
class UScriptStruct* FPerPlatformBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformBool, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformBool"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformBool.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformBool>()
{
	return FPerPlatformBool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerPlatformBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** FPerPlatformBool - bool property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformBool - bool property with per-platform overrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_Default_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PerPlatform_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformBool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_SetBit(void* Obj)
{
	((FPerPlatformBool*)Obj)->Default = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPerPlatformBool), &Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPlatformBool, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPlatform_MetaData), NewProp_PerPlatform_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformBool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PerPlatformBool",
	Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::PropPointers),
	sizeof(FPerPlatformBool),
	alignof(FPerPlatformBool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerPlatformBool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformBool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformBool.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformBool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformBool.InnerSingleton;
}
// End ScriptStruct FPerPlatformBool

// Begin ScriptStruct FPerPlatformFrameRate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformFrameRate;
class UScriptStruct* FPerPlatformFrameRate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformFrameRate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformFrameRate"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerPlatformFrameRate>()
{
	return FPerPlatformFrameRate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** FPerPlatformFrameRate - FFrameRate property with per-platform overrides */" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformFrameRate - FFrameRate property with per-platform overrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerPlatform_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformFrameRate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPlatformFrameRate, Default), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_ValueProp = { "PerPlatform", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_Key_KeyProp = { "PerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform = { "PerPlatform", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerPlatformFrameRate, PerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPlatform_MetaData), NewProp_PerPlatform_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_Default,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewProp_PerPlatform,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PerPlatformFrameRate",
	Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::PropPointers),
	sizeof(FPerPlatformFrameRate),
	alignof(FPerPlatformFrameRate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFrameRate()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformFrameRate.InnerSingleton;
}
// End ScriptStruct FPerPlatformFrameRate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerPlatformInt::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewStructOps, TEXT("PerPlatformInt"), &Z_Registration_Info_UScriptStruct_PerPlatformInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformInt), 1262733314U) },
		{ FFreezablePerPlatformInt::StaticStruct, Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::NewStructOps, TEXT("FreezablePerPlatformInt"), &Z_Registration_Info_UScriptStruct_FreezablePerPlatformInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFreezablePerPlatformInt), 3876028494U) },
		{ FPerPlatformFloat::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewStructOps, TEXT("PerPlatformFloat"), &Z_Registration_Info_UScriptStruct_PerPlatformFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformFloat), 50753708U) },
		{ FPerPlatformBool::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewStructOps, TEXT("PerPlatformBool"), &Z_Registration_Info_UScriptStruct_PerPlatformBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformBool), 846681800U) },
		{ FPerPlatformFrameRate::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewStructOps, TEXT("PerPlatformFrameRate"), &Z_Registration_Info_UScriptStruct_PerPlatformFrameRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformFrameRate), 422856478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_130865110(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerPlatformProperties_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
