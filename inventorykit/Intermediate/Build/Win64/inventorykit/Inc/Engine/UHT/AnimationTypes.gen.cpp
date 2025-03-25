// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNamedFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedFloat;
class UScriptStruct* FNamedFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFloat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedFloat"));
	}
	return Z_Registration_Info_UScriptStruct_NamedFloat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedFloat>()
{
	return FNamedFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named float */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named float" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedFloat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedFloat, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NamedFloat",
	Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers),
	sizeof(FNamedFloat),
	alignof(FNamedFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat()
{
	if (!Z_Registration_Info_UScriptStruct_NamedFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedFloat.InnerSingleton, Z_Construct_UScriptStruct_FNamedFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedFloat.InnerSingleton;
}
// End ScriptStruct FNamedFloat

// Begin ScriptStruct FNamedVector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedVector;
class UScriptStruct* FNamedVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedVector, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedVector"));
	}
	return Z_Registration_Info_UScriptStruct_NamedVector.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedVector>()
{
	return FNamedVector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named float */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named float" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Vector" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Vector" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedVector, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NamedVector",
	Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers),
	sizeof(FNamedVector),
	alignof(FNamedVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedVector()
{
	if (!Z_Registration_Info_UScriptStruct_NamedVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedVector.InnerSingleton, Z_Construct_UScriptStruct_FNamedVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedVector.InnerSingleton;
}
// End ScriptStruct FNamedVector

// Begin ScriptStruct FNamedColor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedColor;
class UScriptStruct* FNamedColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedColor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedColor"));
	}
	return Z_Registration_Info_UScriptStruct_NamedColor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedColor>()
{
	return FNamedColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named color */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedColor, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedColor, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NamedColor",
	Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers),
	sizeof(FNamedColor),
	alignof(FNamedColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedColor()
{
	if (!Z_Registration_Info_UScriptStruct_NamedColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedColor.InnerSingleton, Z_Construct_UScriptStruct_FNamedColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedColor.InnerSingleton;
}
// End ScriptStruct FNamedColor

// Begin ScriptStruct FNamedTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedTransform;
class UScriptStruct* FNamedTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedTransform, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedTransform"));
	}
	return Z_Registration_Info_UScriptStruct_NamedTransform.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedTransform>()
{
	return FNamedTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNamedTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named transform */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNamedTransform, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NamedTransform",
	Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers),
	sizeof(FNamedTransform),
	alignof(FNamedTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform()
{
	if (!Z_Registration_Info_UScriptStruct_NamedTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedTransform.InnerSingleton, Z_Construct_UScriptStruct_FNamedTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NamedTransform.InnerSingleton;
}
// End ScriptStruct FNamedTransform

// Begin ScriptStruct FLocalSpacePose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalSpacePose;
class UScriptStruct* FLocalSpacePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalSpacePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalSpacePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalSpacePose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LocalSpacePose"));
	}
	return Z_Registration_Info_UScriptStruct_LocalSpacePose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLocalSpacePose>()
{
	return FLocalSpacePose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalSpacePose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A pose in local space (i.e. each transform is relative to its parent) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A pose in local space (i.e. each transform is relative to its parent)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalSpacePose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalSpacePose, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalSpacePose, Names), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Names_MetaData), NewProp_Names_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LocalSpacePose",
	Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers),
	sizeof(FLocalSpacePose),
	alignof(FLocalSpacePose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose()
{
	if (!Z_Registration_Info_UScriptStruct_LocalSpacePose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalSpacePose.InnerSingleton, Z_Construct_UScriptStruct_FLocalSpacePose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalSpacePose.InnerSingleton;
}
// End ScriptStruct FLocalSpacePose

// Begin ScriptStruct FComponentSpacePose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSpacePose;
class UScriptStruct* FComponentSpacePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSpacePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSpacePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSpacePose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSpacePose"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSpacePose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentSpacePose>()
{
	return FComponentSpacePose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentSpacePose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A pose in component space (i.e. each transform is relative to the component's transform) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A pose in component space (i.e. each transform is relative to the component's transform)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSpacePose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentSpacePose, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentSpacePose, Names), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Names_MetaData), NewProp_Names_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ComponentSpacePose",
	Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers),
	sizeof(FComponentSpacePose),
	alignof(FComponentSpacePose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSpacePose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSpacePose.InnerSingleton, Z_Construct_UScriptStruct_FComponentSpacePose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentSpacePose.InnerSingleton;
}
// End ScriptStruct FComponentSpacePose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNamedFloat::StaticStruct, Z_Construct_UScriptStruct_FNamedFloat_Statics::NewStructOps, TEXT("NamedFloat"), &Z_Registration_Info_UScriptStruct_NamedFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedFloat), 570208444U) },
		{ FNamedVector::StaticStruct, Z_Construct_UScriptStruct_FNamedVector_Statics::NewStructOps, TEXT("NamedVector"), &Z_Registration_Info_UScriptStruct_NamedVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedVector), 1010932715U) },
		{ FNamedColor::StaticStruct, Z_Construct_UScriptStruct_FNamedColor_Statics::NewStructOps, TEXT("NamedColor"), &Z_Registration_Info_UScriptStruct_NamedColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedColor), 3680357164U) },
		{ FNamedTransform::StaticStruct, Z_Construct_UScriptStruct_FNamedTransform_Statics::NewStructOps, TEXT("NamedTransform"), &Z_Registration_Info_UScriptStruct_NamedTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedTransform), 1270964639U) },
		{ FLocalSpacePose::StaticStruct, Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewStructOps, TEXT("LocalSpacePose"), &Z_Registration_Info_UScriptStruct_LocalSpacePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalSpacePose), 2611049778U) },
		{ FComponentSpacePose::StaticStruct, Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewStructOps, TEXT("ComponentSpacePose"), &Z_Registration_Info_UScriptStruct_ComponentSpacePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSpacePose), 2849365545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_1167991205(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
