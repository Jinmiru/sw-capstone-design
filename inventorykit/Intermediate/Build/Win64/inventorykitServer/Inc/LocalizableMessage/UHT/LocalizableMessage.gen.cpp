// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalizableMessage/Public/LocalizableMessage.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizableMessage() {}

// Begin Cross Module References
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessage();
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_LocalizableMessage();
// End Cross Module References

// Begin ScriptStruct FLocalizableMessageParameterEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry;
class UScriptStruct* FLocalizableMessageParameterEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessageParameterEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessageParameterEntry>()
{
	return FLocalizableMessageParameterEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessageParameterEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterEntry, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterEntry, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
	nullptr,
	&NewStructOps,
	"LocalizableMessageParameterEntry",
	Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::PropPointers),
	sizeof(FLocalizableMessageParameterEntry),
	alignof(FLocalizableMessageParameterEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry.InnerSingleton;
}
// End ScriptStruct FLocalizableMessageParameterEntry

// Begin ScriptStruct FLocalizableMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessage;
class UScriptStruct* FLocalizableMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessage, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessage.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessage>()
{
	return FLocalizableMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizableMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultText_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Substitutions_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Substitutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Substitutions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessage, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_DefaultText = { "DefaultText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessage, DefaultText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultText_MetaData), NewProp_DefaultText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions_Inner = { "Substitutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry, METADATA_PARAMS(0, nullptr) }; // 3801933430
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions = { "Substitutions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessage, Substitutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Substitutions_MetaData), NewProp_Substitutions_MetaData) }; // 3801933430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_DefaultText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewProp_Substitutions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
	nullptr,
	&NewStructOps,
	"LocalizableMessage",
	Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::PropPointers),
	sizeof(FLocalizableMessage),
	alignof(FLocalizableMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessage.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessage.InnerSingleton;
}
// End ScriptStruct FLocalizableMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocalizableMessageParameterEntry::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessageParameterEntry_Statics::NewStructOps, TEXT("LocalizableMessageParameterEntry"), &Z_Registration_Info_UScriptStruct_LocalizableMessageParameterEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessageParameterEntry), 3801933430U) },
		{ FLocalizableMessage::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessage_Statics::NewStructOps, TEXT("LocalizableMessage"), &Z_Registration_Info_UScriptStruct_LocalizableMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessage), 277901026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_2379403856(TEXT("/Script/LocalizableMessage"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
