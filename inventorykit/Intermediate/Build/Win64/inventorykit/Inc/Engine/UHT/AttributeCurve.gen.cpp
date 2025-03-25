// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AttributeCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeCurve() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeKey();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAttributeKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeKey;
class UScriptStruct* FAttributeKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AttributeKey"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAttributeKey>()
{
	return FAttributeKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributeKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AttributeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The keyed time */" },
		{ "ModuleRelativePath", "Classes/Animation/AttributeCurve.h" },
		{ "ToolTip", "The keyed time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttributeKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeKey, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeKey_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AttributeKey",
	Z_Construct_UScriptStruct_FAttributeKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeKey_Statics::PropPointers),
	sizeof(FAttributeKey),
	alignof(FAttributeKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeKey()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeKey.InnerSingleton, Z_Construct_UScriptStruct_FAttributeKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributeKey.InnerSingleton;
}
// End ScriptStruct FAttributeKey

// Begin ScriptStruct FAttributeCurve
static_assert(std::is_polymorphic<FAttributeCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FAttributeCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeCurve;
class UScriptStruct* FAttributeCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AttributeCurve"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAttributeCurve>()
{
	return FAttributeCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributeCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AttributeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Custom Attributes" },
		{ "Comment", "/** The keys, ordered by time */" },
		{ "ModuleRelativePath", "Classes/Animation/AttributeCurve.h" },
		{ "ToolTip", "The keys, ordered by time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStructPath_MetaData[] = {
		{ "Category", "Custom Attributes" },
		{ "Comment", "/* Path to UScriptStruct to be loaded */" },
		{ "ModuleRelativePath", "Classes/Animation/AttributeCurve.h" },
		{ "ToolTip", "Path to UScriptStruct to be loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptStruct_MetaData[] = {
		{ "Category", "Custom Attributes" },
		{ "Comment", "/* Transient UScriptStruct instance representing the underlying value type for the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/AttributeCurve.h" },
		{ "ToolTip", "Transient UScriptStruct instance representing the underlying value type for the curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldInterpolate_MetaData[] = {
		{ "Category", "Custom Attributes" },
		{ "Comment", "/** Whether or not to interpolate between keys of ScripStruct type */" },
		{ "ModuleRelativePath", "Classes/Animation/AttributeCurve.h" },
		{ "ToolTip", "Whether or not to interpolate between keys of ScripStruct type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptStructPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptStruct;
	static void NewProp_bShouldInterpolate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldInterpolate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttributeKey, METADATA_PARAMS(0, nullptr) }; // 836123287
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 836123287
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_ScriptStructPath = { "ScriptStructPath", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeCurve, ScriptStructPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptStructPath_MetaData), NewProp_ScriptStructPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_ScriptStruct = { "ScriptStruct", nullptr, (EPropertyFlags)0x0124080000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttributeCurve, ScriptStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptStruct_MetaData), NewProp_ScriptStruct_MetaData) };
void Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_bShouldInterpolate_SetBit(void* Obj)
{
	((FAttributeCurve*)Obj)->bShouldInterpolate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_bShouldInterpolate = { "bShouldInterpolate", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttributeCurve), &Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_bShouldInterpolate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldInterpolate_MetaData), NewProp_bShouldInterpolate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_ScriptStructPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_ScriptStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewProp_bShouldInterpolate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FIndexedCurve,
	&NewStructOps,
	"AttributeCurve",
	Z_Construct_UScriptStruct_FAttributeCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeCurve_Statics::PropPointers),
	sizeof(FAttributeCurve),
	alignof(FAttributeCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributeCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributeCurve()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeCurve.InnerSingleton, Z_Construct_UScriptStruct_FAttributeCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributeCurve.InnerSingleton;
}
// End ScriptStruct FAttributeCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AttributeCurve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttributeKey::StaticStruct, Z_Construct_UScriptStruct_FAttributeKey_Statics::NewStructOps, TEXT("AttributeKey"), &Z_Registration_Info_UScriptStruct_AttributeKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeKey), 836123287U) },
		{ FAttributeCurve::StaticStruct, Z_Construct_UScriptStruct_FAttributeCurve_Statics::NewStructOps, TEXT("AttributeCurve"), &Z_Registration_Info_UScriptStruct_AttributeCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeCurve), 1210399308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AttributeCurve_h_2412137147(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AttributeCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AttributeCurve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
