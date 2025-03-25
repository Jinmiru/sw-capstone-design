// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/BuiltInAttributeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltInAttributeTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UBuiltInAttributesExtensions();
ENGINE_API UClass* Z_Construct_UClass_UBuiltInAttributesExtensions_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegerAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQuaternionAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformAnimationAttribute();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorAnimationAttribute();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FFloatAnimationAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatAnimationAttribute;
class UScriptStruct* FFloatAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FloatAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFloatAnimationAttribute>()
{
	return FFloatAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Attribute type supporting the legacy TVariant<float> atttributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<float> atttributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "FloatAnimationAttribute" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatAnimationAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FloatAnimationAttribute",
	Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::PropPointers),
	sizeof(FFloatAnimationAttribute),
	alignof(FFloatAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FFloatAnimationAttribute

// Begin ScriptStruct FIntegerAnimationAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute;
class UScriptStruct* FIntegerAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegerAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("IntegerAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegerAnimationAttribute>()
{
	return FIntegerAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Attribute type supporting the legacy TVariant<int32> atttributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<int32> atttributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "IntegerAnimationAttribute" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegerAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegerAnimationAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"IntegerAnimationAttribute",
	Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::PropPointers),
	sizeof(FIntegerAnimationAttribute),
	alignof(FIntegerAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntegerAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FIntegerAnimationAttribute

// Begin ScriptStruct FStringAnimationAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringAnimationAttribute;
class UScriptStruct* FStringAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StringAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_StringAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStringAnimationAttribute>()
{
	return FStringAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Attribute type supporting the legacy TVariant<FString> attributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<FString> attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "StringAnimationAttribute" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringAnimationAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StringAnimationAttribute",
	Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::PropPointers),
	sizeof(FStringAnimationAttribute),
	alignof(FStringAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStringAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_StringAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StringAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FStringAnimationAttribute

// Begin ScriptStruct FTransformAnimationAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformAnimationAttribute;
class UScriptStruct* FTransformAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TransformAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTransformAnimationAttribute>()
{
	return FTransformAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Attribute type supporting the legacy TVariant<FTransform> attributes */" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ToolTip", "Attribute type supporting the legacy TVariant<FTransform> attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "TransformAnimationAttribute" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformAnimationAttribute, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TransformAnimationAttribute",
	Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::PropPointers),
	sizeof(FTransformAnimationAttribute),
	alignof(FTransformAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransformAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransformAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FTransformAnimationAttribute

// Begin ScriptStruct FVectorAnimationAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorAnimationAttribute;
class UScriptStruct* FVectorAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VectorAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_VectorAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVectorAnimationAttribute>()
{
	return FVectorAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "VectorAnimationAttribute" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorAnimationAttribute, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VectorAnimationAttribute",
	Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::PropPointers),
	sizeof(FVectorAnimationAttribute),
	alignof(FVectorAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVectorAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_VectorAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VectorAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FVectorAnimationAttribute

// Begin ScriptStruct FQuaternionAnimationAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute;
class UScriptStruct* FQuaternionAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuaternionAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("QuaternionAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQuaternionAnimationAttribute>()
{
	return FQuaternionAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "QuaternionAnimationAttribute" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuaternionAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuaternionAnimationAttribute, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"QuaternionAnimationAttribute",
	Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::PropPointers),
	sizeof(FQuaternionAnimationAttribute),
	alignof(FQuaternionAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuaternionAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FQuaternionAnimationAttribute

// Begin ScriptStruct FNonBlendableQuaternionAnimationAttribute
static_assert(std::is_polymorphic<FNonBlendableQuaternionAnimationAttribute>() == std::is_polymorphic<FQuaternionAnimationAttribute>(), "USTRUCT FNonBlendableQuaternionAnimationAttribute cannot be polymorphic unless super FQuaternionAnimationAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute;
class UScriptStruct* FNonBlendableQuaternionAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableQuaternionAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableQuaternionAnimationAttribute>()
{
	return FNonBlendableQuaternionAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableQuaternionAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FQuaternionAnimationAttribute,
	&NewStructOps,
	"NonBlendableQuaternionAnimationAttribute",
	nullptr,
	0,
	sizeof(FNonBlendableQuaternionAnimationAttribute),
	alignof(FNonBlendableQuaternionAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FNonBlendableQuaternionAnimationAttribute

// Begin ScriptStruct FNonBlendableVectorAnimationAttribute
static_assert(std::is_polymorphic<FNonBlendableVectorAnimationAttribute>() == std::is_polymorphic<FVectorAnimationAttribute>(), "USTRUCT FNonBlendableVectorAnimationAttribute cannot be polymorphic unless super FVectorAnimationAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute;
class UScriptStruct* FNonBlendableVectorAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableVectorAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableVectorAnimationAttribute>()
{
	return FNonBlendableVectorAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableVectorAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FVectorAnimationAttribute,
	&NewStructOps,
	"NonBlendableVectorAnimationAttribute",
	nullptr,
	0,
	sizeof(FNonBlendableVectorAnimationAttribute),
	alignof(FNonBlendableVectorAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FNonBlendableVectorAnimationAttribute

// Begin ScriptStruct FNonBlendableTransformAnimationAttribute
static_assert(std::is_polymorphic<FNonBlendableTransformAnimationAttribute>() == std::is_polymorphic<FTransformAnimationAttribute>(), "USTRUCT FNonBlendableTransformAnimationAttribute cannot be polymorphic unless super FTransformAnimationAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute;
class UScriptStruct* FNonBlendableTransformAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableTransformAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableTransformAnimationAttribute>()
{
	return FNonBlendableTransformAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableTransformAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FTransformAnimationAttribute,
	&NewStructOps,
	"NonBlendableTransformAnimationAttribute",
	nullptr,
	0,
	sizeof(FNonBlendableTransformAnimationAttribute),
	alignof(FNonBlendableTransformAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FNonBlendableTransformAnimationAttribute

// Begin ScriptStruct FNonBlendableFloatAnimationAttribute
static_assert(std::is_polymorphic<FNonBlendableFloatAnimationAttribute>() == std::is_polymorphic<FFloatAnimationAttribute>(), "USTRUCT FNonBlendableFloatAnimationAttribute cannot be polymorphic unless super FFloatAnimationAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute;
class UScriptStruct* FNonBlendableFloatAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableFloatAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableFloatAnimationAttribute>()
{
	return FNonBlendableFloatAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableFloatAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FFloatAnimationAttribute,
	&NewStructOps,
	"NonBlendableFloatAnimationAttribute",
	nullptr,
	0,
	sizeof(FNonBlendableFloatAnimationAttribute),
	alignof(FNonBlendableFloatAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FNonBlendableFloatAnimationAttribute

// Begin ScriptStruct FNonBlendableIntegerAnimationAttribute
static_assert(std::is_polymorphic<FNonBlendableIntegerAnimationAttribute>() == std::is_polymorphic<FIntegerAnimationAttribute>(), "USTRUCT FNonBlendableIntegerAnimationAttribute cannot be polymorphic unless super FIntegerAnimationAttribute is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute;
class UScriptStruct* FNonBlendableIntegerAnimationAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NonBlendableIntegerAnimationAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNonBlendableIntegerAnimationAttribute>()
{
	return FNonBlendableIntegerAnimationAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonBlendableIntegerAnimationAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FIntegerAnimationAttribute,
	&NewStructOps,
	"NonBlendableIntegerAnimationAttribute",
	nullptr,
	0,
	sizeof(FNonBlendableIntegerAnimationAttribute),
	alignof(FNonBlendableIntegerAnimationAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.InnerSingleton, Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute.InnerSingleton;
}
// End ScriptStruct FNonBlendableIntegerAnimationAttribute

// Begin Class UBuiltInAttributesExtensions Function AddTransformAttribute
#if WITH_EDITOR
struct Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics
{
	struct BuiltInAttributesExtensions_eventAddTransformAttribute_Parms
	{
		UAnimSequenceBase* AnimSequenceBase;
		FName AttributeName;
		FName BoneName;
		TArray<float> Keys;
		TArray<FTransform> Values;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequenceBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AnimSequenceBase = { "AnimSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, AnimSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
void Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BuiltInAttributesExtensions_eventAddTransformAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BuiltInAttributesExtensions_eventAddTransformAttribute_Parms), &Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AnimSequenceBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBuiltInAttributesExtensions, nullptr, "AddTransformAttribute", nullptr, nullptr, Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::BuiltInAttributesExtensions_eventAddTransformAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::BuiltInAttributesExtensions_eventAddTransformAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UBuiltInAttributesExtensions::execAddTransformAttribute)
{
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimSequenceBase);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_TARRAY_REF(float,Z_Param_Out_Keys);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_Values);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBuiltInAttributesExtensions::AddTransformAttribute(Z_Param_AnimSequenceBase,Z_Param_Out_AttributeName,Z_Param_Out_BoneName,Z_Param_Out_Keys,Z_Param_Out_Values);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UBuiltInAttributesExtensions Function AddTransformAttribute

// Begin Class UBuiltInAttributesExtensions
void UBuiltInAttributesExtensions::StaticRegisterNativesUBuiltInAttributesExtensions()
{
#if WITH_EDITOR
	UClass* Class = UBuiltInAttributesExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTransformAttribute", &UBuiltInAttributesExtensions::execAddTransformAttribute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuiltInAttributesExtensions);
UClass* Z_Construct_UClass_UBuiltInAttributesExtensions_NoRegister()
{
	return UBuiltInAttributesExtensions::StaticClass();
}
struct Z_Construct_UClass_UBuiltInAttributesExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/BuiltInAttributeTypes.h" },
		{ "ModuleRelativePath", "Classes/Animation/BuiltInAttributeTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuiltInAttributesExtensions_AddTransformAttribute, "AddTransformAttribute" }, // 3283014586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuiltInAttributesExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::ClassParams = {
	&UBuiltInAttributesExtensions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuiltInAttributesExtensions()
{
	if (!Z_Registration_Info_UClass_UBuiltInAttributesExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuiltInAttributesExtensions.OuterSingleton, Z_Construct_UClass_UBuiltInAttributesExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuiltInAttributesExtensions.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBuiltInAttributesExtensions>()
{
	return UBuiltInAttributesExtensions::StaticClass();
}
UBuiltInAttributesExtensions::UBuiltInAttributesExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuiltInAttributesExtensions);
UBuiltInAttributesExtensions::~UBuiltInAttributesExtensions() {}
// End Class UBuiltInAttributesExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFloatAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics::NewStructOps, TEXT("FloatAnimationAttribute"), &Z_Registration_Info_UScriptStruct_FloatAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatAnimationAttribute), 3831326406U) },
		{ FIntegerAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics::NewStructOps, TEXT("IntegerAnimationAttribute"), &Z_Registration_Info_UScriptStruct_IntegerAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegerAnimationAttribute), 973132498U) },
		{ FStringAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics::NewStructOps, TEXT("StringAnimationAttribute"), &Z_Registration_Info_UScriptStruct_StringAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringAnimationAttribute), 655289075U) },
		{ FTransformAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics::NewStructOps, TEXT("TransformAnimationAttribute"), &Z_Registration_Info_UScriptStruct_TransformAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformAnimationAttribute), 95784421U) },
		{ FVectorAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics::NewStructOps, TEXT("VectorAnimationAttribute"), &Z_Registration_Info_UScriptStruct_VectorAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorAnimationAttribute), 3385294663U) },
		{ FQuaternionAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics::NewStructOps, TEXT("QuaternionAnimationAttribute"), &Z_Registration_Info_UScriptStruct_QuaternionAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuaternionAnimationAttribute), 1202779092U) },
		{ FNonBlendableQuaternionAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableQuaternionAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableQuaternionAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableQuaternionAnimationAttribute), 3396403308U) },
		{ FNonBlendableVectorAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableVectorAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableVectorAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableVectorAnimationAttribute), 2392706268U) },
		{ FNonBlendableTransformAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableTransformAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableTransformAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableTransformAnimationAttribute), 3770185061U) },
		{ FNonBlendableFloatAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableFloatAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableFloatAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableFloatAnimationAttribute), 4242964832U) },
		{ FNonBlendableIntegerAnimationAttribute::StaticStruct, Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics::NewStructOps, TEXT("NonBlendableIntegerAnimationAttribute"), &Z_Registration_Info_UScriptStruct_NonBlendableIntegerAnimationAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonBlendableIntegerAnimationAttribute), 2145821494U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuiltInAttributesExtensions, UBuiltInAttributesExtensions::StaticClass, TEXT("UBuiltInAttributesExtensions"), &Z_Registration_Info_UClass_UBuiltInAttributesExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuiltInAttributesExtensions), 3838023896U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_277684548(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
