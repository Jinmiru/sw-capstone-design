// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalizableMessage/Public/LocalizableMessageBaseParameters.h"
#include "LocalizableMessage/Public/LocalizableMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizableMessageBaseParameters() {}

// Begin Cross Module References
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessage();
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat();
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterInt();
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage();
LOCALIZABLEMESSAGE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterString();
UPackage* Z_Construct_UPackage__Script_LocalizableMessage();
// End Cross Module References

// Begin ScriptStruct FLocalizableMessageParameterInt
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt;
class UScriptStruct* FLocalizableMessageParameterInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessageParameterInt"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessageParameterInt>()
{
	return FLocalizableMessageParameterInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessageParameterInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterInt, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
	nullptr,
	&NewStructOps,
	"LocalizableMessageParameterInt",
	Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::PropPointers),
	sizeof(FLocalizableMessageParameterInt),
	alignof(FLocalizableMessageParameterInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterInt()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt.InnerSingleton;
}
// End ScriptStruct FLocalizableMessageParameterInt

// Begin ScriptStruct FLocalizableMessageParameterFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat;
class UScriptStruct* FLocalizableMessageParameterFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessageParameterFloat"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessageParameterFloat>()
{
	return FLocalizableMessageParameterFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessageParameterFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterFloat, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
	nullptr,
	&NewStructOps,
	"LocalizableMessageParameterFloat",
	Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::PropPointers),
	sizeof(FLocalizableMessageParameterFloat),
	alignof(FLocalizableMessageParameterFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat.InnerSingleton;
}
// End ScriptStruct FLocalizableMessageParameterFloat

// Begin ScriptStruct FLocalizableMessageParameterString
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString;
class UScriptStruct* FLocalizableMessageParameterString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterString, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessageParameterString"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessageParameterString>()
{
	return FLocalizableMessageParameterString::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessageParameterString>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterString, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
	nullptr,
	&NewStructOps,
	"LocalizableMessageParameterString",
	Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::PropPointers),
	sizeof(FLocalizableMessageParameterString),
	alignof(FLocalizableMessageParameterString),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterString()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString.InnerSingleton;
}
// End ScriptStruct FLocalizableMessageParameterString

// Begin ScriptStruct FLocalizableMessageParameterMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage;
class UScriptStruct* FLocalizableMessageParameterMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage, (UObject*)Z_Construct_UPackage__Script_LocalizableMessage(), TEXT("LocalizableMessageParameterMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage.OuterSingleton;
}
template<> LOCALIZABLEMESSAGE_API UScriptStruct* StaticStruct<FLocalizableMessageParameterMessage>()
{
	return FLocalizableMessageParameterMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizableMessageBaseParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizableMessageParameterMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocalizableMessageParameterMessage, Value), Z_Construct_UScriptStruct_FLocalizableMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 277901026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LocalizableMessage,
	nullptr,
	&NewStructOps,
	"LocalizableMessageParameterMessage",
	Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::PropPointers),
	sizeof(FLocalizableMessageParameterMessage),
	alignof(FLocalizableMessageParameterMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage.InnerSingleton, Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage.InnerSingleton;
}
// End ScriptStruct FLocalizableMessageParameterMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessageBaseParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocalizableMessageParameterInt::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessageParameterInt_Statics::NewStructOps, TEXT("LocalizableMessageParameterInt"), &Z_Registration_Info_UScriptStruct_LocalizableMessageParameterInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessageParameterInt), 3562916046U) },
		{ FLocalizableMessageParameterFloat::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat_Statics::NewStructOps, TEXT("LocalizableMessageParameterFloat"), &Z_Registration_Info_UScriptStruct_LocalizableMessageParameterFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessageParameterFloat), 3332995013U) },
		{ FLocalizableMessageParameterString::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessageParameterString_Statics::NewStructOps, TEXT("LocalizableMessageParameterString"), &Z_Registration_Info_UScriptStruct_LocalizableMessageParameterString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessageParameterString), 3956054395U) },
		{ FLocalizableMessageParameterMessage::StaticStruct, Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage_Statics::NewStructOps, TEXT("LocalizableMessageParameterMessage"), &Z_Registration_Info_UScriptStruct_LocalizableMessageParameterMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizableMessageParameterMessage), 491015021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessageBaseParameters_h_2154363865(TEXT("/Script/LocalizableMessage"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessageBaseParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LocalizableMessage_Source_LocalizableMessage_Public_LocalizableMessageBaseParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
