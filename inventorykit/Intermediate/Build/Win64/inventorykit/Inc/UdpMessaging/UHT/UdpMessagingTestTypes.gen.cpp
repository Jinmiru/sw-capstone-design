// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdpMessaging/Private/Tests/UdpMessagingTestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessagingTestTypes() {}

// Begin Cross Module References
UDPMESSAGING_API UScriptStruct* Z_Construct_UScriptStruct_FUdpMockMessage();
UPackage* Z_Construct_UPackage__Script_UdpMessaging();
// End Cross Module References

// Begin ScriptStruct FUdpMockMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UdpMockMessage;
class UScriptStruct* FUdpMockMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UdpMockMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UdpMockMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUdpMockMessage, (UObject*)Z_Construct_UPackage__Script_UdpMessaging(), TEXT("UdpMockMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UdpMockMessage.OuterSingleton;
}
template<> UDPMESSAGING_API UScriptStruct* StaticStruct<FUdpMockMessage>()
{
	return FUdpMockMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUdpMockMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UdpMessagingTestTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/UdpMessagingTestTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUdpMockMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUdpMockMessage, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UdpMessaging,
	nullptr,
	&NewStructOps,
	"UdpMockMessage",
	Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers),
	sizeof(FUdpMockMessage),
	alignof(FUdpMockMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUdpMockMessage()
{
	if (!Z_Registration_Info_UScriptStruct_UdpMockMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UdpMockMessage.InnerSingleton, Z_Construct_UScriptStruct_FUdpMockMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UdpMockMessage.InnerSingleton;
}
// End ScriptStruct FUdpMockMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUdpMockMessage::StaticStruct, Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewStructOps, TEXT("UdpMockMessage"), &Z_Registration_Info_UScriptStruct_UdpMockMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUdpMockMessage), 4125334157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_3695134005(TEXT("/Script/UdpMessaging"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
