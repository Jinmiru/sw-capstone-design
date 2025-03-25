// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FAIDataProviderValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderValue;
class UScriptStruct* FAIDataProviderValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderValue>()
{
	return FAIDataProviderValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDataProviderValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * AIDataProvider is an object that can provide collection of properties\n * associated with bound pawn owner or request Id.\n *\n * Editable properties are used to set up provider instance,\n * creating additional filters or ways of accessing data (e.g. gameplay tag of ability)\n *\n * Non editable properties are holding data\n */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "AIDataProvider is an object that can provide collection of properties\nassociated with bound pawn owner or request Id.\n\nEditable properties are used to set up provider instance,\ncreating additional filters or ways of accessing data (e.g. gameplay tag of ability)\n\nNon editable properties are holding data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataBinding_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** (optional) provider for dynamic data binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "(optional) provider for dynamic data binding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataField_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** name of provider's value property */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "name of provider's value property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataBinding;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding = { "DataBinding", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDataProviderValue, DataBinding), Z_Construct_UClass_UAIDataProvider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataBinding_MetaData), NewProp_DataBinding_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField = { "DataField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDataProviderValue, DataField), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataField_MetaData), NewProp_DataField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AIDataProviderValue",
	Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers),
	sizeof(FAIDataProviderValue),
	alignof(FAIDataProviderValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderValue.InnerSingleton;
}
// End ScriptStruct FAIDataProviderValue

// Begin ScriptStruct FAIDataProviderTypedValue
static_assert(std::is_polymorphic<FAIDataProviderTypedValue>() == std::is_polymorphic<FAIDataProviderValue>(), "USTRUCT FAIDataProviderTypedValue cannot be polymorphic unless super FAIDataProviderValue is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue;
class UScriptStruct* FAIDataProviderTypedValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderTypedValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderTypedValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderTypedValue>()
{
	return FAIDataProviderTypedValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[] = {
		{ "Comment", "/** type of value */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "type of value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PropertyType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderTypedValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDataProviderTypedValue, PropertyType_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyType_MetaData), NewProp_PropertyType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FAIDataProviderValue,
	&NewStructOps,
	"AIDataProviderTypedValue",
	Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers),
	sizeof(FAIDataProviderTypedValue),
	alignof(FAIDataProviderTypedValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.InnerSingleton;
}
// End ScriptStruct FAIDataProviderTypedValue

// Begin ScriptStruct FAIDataProviderStructValue
static_assert(std::is_polymorphic<FAIDataProviderStructValue>() == std::is_polymorphic<FAIDataProviderValue>(), "USTRUCT FAIDataProviderStructValue cannot be polymorphic unless super FAIDataProviderValue is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderStructValue;
class UScriptStruct* FAIDataProviderStructValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderStructValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderStructValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderStructValue>()
{
	return FAIDataProviderStructValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderStructValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FAIDataProviderValue,
	&NewStructOps,
	"AIDataProviderStructValue",
	nullptr,
	0,
	sizeof(FAIDataProviderStructValue),
	alignof(FAIDataProviderStructValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.InnerSingleton;
}
// End ScriptStruct FAIDataProviderStructValue

// Begin ScriptStruct FAIDataProviderIntValue
static_assert(std::is_polymorphic<FAIDataProviderIntValue>() == std::is_polymorphic<FAIDataProviderTypedValue>(), "USTRUCT FAIDataProviderIntValue cannot be polymorphic unless super FAIDataProviderTypedValue is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderIntValue;
class UScriptStruct* FAIDataProviderIntValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderIntValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderIntValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderIntValue>()
{
	return FAIDataProviderIntValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderIntValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDataProviderIntValue, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
	&NewStructOps,
	"AIDataProviderIntValue",
	Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers),
	sizeof(FAIDataProviderIntValue),
	alignof(FAIDataProviderIntValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.InnerSingleton;
}
// End ScriptStruct FAIDataProviderIntValue

// Begin ScriptStruct FAIDataProviderFloatValue
static_assert(std::is_polymorphic<FAIDataProviderFloatValue>() == std::is_polymorphic<FAIDataProviderTypedValue>(), "USTRUCT FAIDataProviderFloatValue cannot be polymorphic unless super FAIDataProviderTypedValue is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue;
class UScriptStruct* FAIDataProviderFloatValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderFloatValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderFloatValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderFloatValue>()
{
	return FAIDataProviderFloatValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderFloatValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDataProviderFloatValue, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
	&NewStructOps,
	"AIDataProviderFloatValue",
	Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers),
	sizeof(FAIDataProviderFloatValue),
	alignof(FAIDataProviderFloatValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.InnerSingleton;
}
// End ScriptStruct FAIDataProviderFloatValue

// Begin ScriptStruct FAIDataProviderBoolValue
static_assert(std::is_polymorphic<FAIDataProviderBoolValue>() == std::is_polymorphic<FAIDataProviderTypedValue>(), "USTRUCT FAIDataProviderBoolValue cannot be polymorphic unless super FAIDataProviderTypedValue is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue;
class UScriptStruct* FAIDataProviderBoolValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderBoolValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderBoolValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderBoolValue>()
{
	return FAIDataProviderBoolValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderBoolValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((FAIDataProviderBoolValue*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAIDataProviderBoolValue), &Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
	&NewStructOps,
	"AIDataProviderBoolValue",
	Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers),
	sizeof(FAIDataProviderBoolValue),
	alignof(FAIDataProviderBoolValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.InnerSingleton;
}
// End ScriptStruct FAIDataProviderBoolValue

// Begin Class UAIDataProvider
void UAIDataProvider::StaticRegisterNativesUAIDataProvider()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIDataProvider);
UClass* Z_Construct_UClass_UAIDataProvider_NoRegister()
{
	return UAIDataProvider::StaticClass();
}
struct Z_Construct_UClass_UAIDataProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "IncludePath", "DataProviders/AIDataProvider.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAIDataProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_Statics::ClassParams = {
	&UAIDataProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIDataProvider()
{
	if (!Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton, Z_Construct_UClass_UAIDataProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAIDataProvider>()
{
	return UAIDataProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider);
UAIDataProvider::~UAIDataProvider() {}
// End Class UAIDataProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIDataProviderValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewStructOps, TEXT("AIDataProviderValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderValue), 438644032U) },
		{ FAIDataProviderTypedValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewStructOps, TEXT("AIDataProviderTypedValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderTypedValue), 124757904U) },
		{ FAIDataProviderStructValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::NewStructOps, TEXT("AIDataProviderStructValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderStructValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderStructValue), 331778516U) },
		{ FAIDataProviderIntValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewStructOps, TEXT("AIDataProviderIntValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderIntValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderIntValue), 1636286199U) },
		{ FAIDataProviderFloatValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewStructOps, TEXT("AIDataProviderFloatValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderFloatValue), 1384630506U) },
		{ FAIDataProviderBoolValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewStructOps, TEXT("AIDataProviderBoolValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderBoolValue), 4208764161U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIDataProvider, UAIDataProvider::StaticClass, TEXT("UAIDataProvider"), &Z_Registration_Info_UClass_UAIDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIDataProvider), 48414228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_1353844271(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
