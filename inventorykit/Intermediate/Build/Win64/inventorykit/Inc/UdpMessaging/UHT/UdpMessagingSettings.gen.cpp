// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdpMessaging/Public/Shared/UdpMessagingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessagingSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings();
UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister();
UDPMESSAGING_API UEnum* Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat();
UPackage* Z_Construct_UPackage__Script_UdpMessaging();
// End Cross Module References

// Begin Enum EUdpMessageFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUdpMessageFormat;
static UEnum* EUdpMessageFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUdpMessageFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUdpMessageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat, (UObject*)Z_Construct_UPackage__Script_UdpMessaging(), TEXT("EUdpMessageFormat"));
	}
	return Z_Registration_Info_UEnum_EUdpMessageFormat.OuterSingleton;
}
template<> UDPMESSAGING_API UEnum* StaticEnum<EUdpMessageFormat>()
{
	return EUdpMessageFormat_StaticEnum();
}
struct Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CborPlatformEndianness.Comment", "/**\n\x09 * UDP messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\n\x09 * if generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead.\n\x09 */" },
		{ "CborPlatformEndianness.DisplayName", "CBOR (Platform Endianness)" },
		{ "CborPlatformEndianness.Name", "EUdpMessageFormat::CborPlatformEndianness" },
		{ "CborPlatformEndianness.ToolTip", "UDP messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\nif generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead." },
		{ "CborStandardEndianness.Comment", "/**\n\x09 * UDP messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\n\x09 * Useful if the UDP messages needs to be analyzed/consumed outside the Unreal Engine.\n\x09 */" },
		{ "CborStandardEndianness.DisplayName", "CBOR (Standard Endianness)" },
		{ "CborStandardEndianness.Name", "EUdpMessageFormat::CborStandardEndianness" },
		{ "CborStandardEndianness.ToolTip", "UDP messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\nUseful if the UDP messages needs to be analyzed/consumed outside the Unreal Engine." },
		{ "Comment", "/** Defines the UDP message format available (how the message data is encoded). */" },
		{ "Json.Comment", "/** JSON format specified. Legacy - Not exposed to user.*/" },
		{ "Json.Hidden", "" },
		{ "Json.Name", "EUdpMessageFormat::Json" },
		{ "Json.ToolTip", "JSON format specified. Legacy - Not exposed to user." },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "None.Comment", "/** No format specified. Legacy - Not exposed to user.*/" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUdpMessageFormat::None" },
		{ "None.ToolTip", "No format specified. Legacy - Not exposed to user." },
		{ "TaggedProperty.Comment", "/** Tagged property format specified. Legacy - Not exposed to user.*/" },
		{ "TaggedProperty.Hidden", "" },
		{ "TaggedProperty.Name", "EUdpMessageFormat::TaggedProperty" },
		{ "TaggedProperty.ToolTip", "Tagged property format specified. Legacy - Not exposed to user." },
		{ "ToolTip", "Defines the UDP message format available (how the message data is encoded)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUdpMessageFormat::None", (int64)EUdpMessageFormat::None },
		{ "EUdpMessageFormat::Json", (int64)EUdpMessageFormat::Json },
		{ "EUdpMessageFormat::TaggedProperty", (int64)EUdpMessageFormat::TaggedProperty },
		{ "EUdpMessageFormat::CborPlatformEndianness", (int64)EUdpMessageFormat::CborPlatformEndianness },
		{ "EUdpMessageFormat::CborStandardEndianness", (int64)EUdpMessageFormat::CborStandardEndianness },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UdpMessaging,
	nullptr,
	"EUdpMessageFormat",
	"EUdpMessageFormat",
	Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat()
{
	if (!Z_Registration_Info_UEnum_EUdpMessageFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUdpMessageFormat.InnerSingleton, Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUdpMessageFormat.InnerSingleton;
}
// End Enum EUdpMessageFormat

// Begin Class UUdpMessagingSettings
void UUdpMessagingSettings::StaticRegisterNativesUUdpMessagingSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUdpMessagingSettings);
UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister()
{
	return UUdpMessagingSettings::StaticClass();
}
struct Z_Construct_UClass_UUdpMessagingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/UdpMessagingSettings.h" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledByDefault_MetaData[] = {
		{ "Category", "Availability" },
		{ "Comment", "/**\n\x09 * Whether UDP messaging is enabled by default. If false -messaging will need to be added\n\x09 * to the commandline when running non-editor builds.\n\x09 *\n\x09 * (Note - in Shipping builds ALLOW_UDP_MESSAGING_SHIPPING=1 must also be defined in TargetRules\n\x09 * for messaging to be available with or without this setting)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether UDP messaging is enabled by default. If false -messaging will need to be added\nto the commandline when running non-editor builds.\n\n(Note - in Shipping builds ALLOW_UDP_MESSAGING_SHIPPING=1 must also be defined in TargetRules\nfor messaging to be available with or without this setting)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableTransport_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether the UDP transport channel is enabled.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP transport channel is enabled.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRepair_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** Whether the UDP transport channel should try to auto repair when in error. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP transport channel should try to auto repair when in error." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendRate_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** \n\x09 * Maximum sustained transmission rate in Gbit / s. \n\x09 *\n\x09 * The default value is 1 Gbit/s.\n\x09 *\n\x09 * This is to control transmission of larger packages over the network. Without a limit, it is\n\x09 * possible for packet data loss to occur because more data may be sent then may be supported\n\x09 * by your network card.\n\x09 *\n\x09 * Adjust this value higher or lower depending on your network capacity.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Maximum sustained transmission rate in Gbit / s.\n\nThe default value is 1 Gbit/s.\n\nThis is to control transmission of larger packages over the network. Without a limit, it is\npossible for packet data loss to occur because more data may be sent then may be supported\nby your network card.\n\nAdjust this value higher or lower depending on your network capacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRepairAttemptLimit_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The number of consecutive attempt the auto repair routine will try to repair. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The number of consecutive attempt the auto repair routine will try to repair." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkQueueSize_MetaData[] = {
		{ "Category", "Transport" },
		{ "ClampMin", "1024" },
		{ "Comment", "/**\n\x09 * The buffer size for the working send queues. Each node connections\n\x09 * gets a send queue and new messages to send are put on that queue.  The send\n\x09 * scheduler will fairly send data on this queue and re-queue when partial data is\n\x09 * sent or waiting for a reliable message. Can be specified on the command line with\n\x09 * `-UDPMESSAGING_WORK_QUEUE_SIZE=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The buffer size for the working send queues. Each node connections\ngets a send queue and new messages to send are put on that queue.  The send\nscheduler will fairly send data on this queue and re-queue when partial data is\nsent or waiting for a reliable message. Can be specified on the command line with\n`-UDPMESSAGING_WORK_QUEUE_SIZE=`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopServiceWhenAppDeactivates_MetaData[] = {
		{ "Comment", "/** Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnicastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * 0.0.0.0:0 will bind to the default network adapter on Windows,\n\x09 * and all available network adapters on other operating systems.\n\x09 * Specifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\n\x09 * Specifying both the IP and Port will allow usage of static endpoint to reach this client\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\n0.0.0.0:0 will bind to the default network adapter on Windows,\nand all available network adapters on other operating systems.\nSpecifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\nSpecifying both the IP and Port will allow usage of static endpoint to reach this client\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MulticastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageFormat_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The format used to serialize the UDP message payload. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The format used to serialize the UDP message payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MulticastTimeToLive_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The time-to-live (TTL) for sent multicast packets. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The time-to-live (TTL) for sent multicast packets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoints of static devices.\n\x09 *\n\x09 * Use this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of static devices.\n\nUse this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * List of IP addresses that are banned from communicating with this client. Wildcard IPv4 addresses can be specified by using '*' and '?'\n\x09 * characters.\n\x09 *\n\x09 * For example, 192.168.12.* will deny all addresses on the .12 subnet for the class C network.\n\x09 * The string 192.16?.12.10 will deny all addresses in the range 192.160.12.10-192.169.12.10.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.  If port number is 0 then all ports are blocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "List of IP addresses that are banned from communicating with this client. Wildcard IPv4 addresses can be specified by using '*' and '?'\ncharacters.\n\nFor example, 192.168.12.* will deny all addresses on the .12 subnet for the class C network.\nThe string 192.16?.12.10 will deny all addresses in the range 192.160.12.10-192.169.12.10.\n\nThe format is IP_ADDRESS:PORT_NUMBER.  If port number is 0 then all ports are blocked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShareKnownNodesWithActiveConnections_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether to share our list of known endpoints with those endpoints.  This allows message processors to completely mesh their networks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether to share our list of known endpoints with those endpoints.  This allows message processors to completely mesh their networks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableTunnel_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/** Whether the UDP tunnel is enabled. */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP tunnel is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TunnelUnicastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The local IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The local IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TunnelMulticastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteTunnelEndpoints_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoints of remote tunnel nodes.\n\x09 *\n\x09 * Use this setting to connect to remote tunnel services.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of remote tunnel nodes.\n\nUse this setting to connect to remote tunnel services.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif // WITH_METADATA
	static void NewProp_EnabledByDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnabledByDefault;
	static void NewProp_EnableTransport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableTransport;
	static void NewProp_bAutoRepair_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRepair;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendRate;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AutoRepairAttemptLimit;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_WorkQueueSize;
	static void NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopServiceWhenAppDeactivates;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnicastEndpoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MulticastEndpoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MessageFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MulticastTimeToLive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StaticEndpoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticEndpoints;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedEndpoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedEndpoints;
	static void NewProp_bShareKnownNodesWithActiveConnections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShareKnownNodesWithActiveConnections;
	static void NewProp_EnableTunnel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableTunnel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TunnelUnicastEndpoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TunnelMulticastEndpoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteTunnelEndpoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemoteTunnelEndpoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUdpMessagingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault_SetBit(void* Obj)
{
	((UUdpMessagingSettings*)Obj)->EnabledByDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault = { "EnabledByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledByDefault_MetaData), NewProp_EnabledByDefault_MetaData) };
void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void* Obj)
{
	((UUdpMessagingSettings*)Obj)->EnableTransport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport = { "EnableTransport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableTransport_MetaData), NewProp_EnableTransport_MetaData) };
void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_SetBit(void* Obj)
{
	((UUdpMessagingSettings*)Obj)->bAutoRepair = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair = { "bAutoRepair", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoRepair_MetaData), NewProp_bAutoRepair_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MaxSendRate = { "MaxSendRate", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, MaxSendRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSendRate_MetaData), NewProp_MaxSendRate_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit = { "AutoRepairAttemptLimit", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, AutoRepairAttemptLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRepairAttemptLimit_MetaData), NewProp_AutoRepairAttemptLimit_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_WorkQueueSize = { "WorkQueueSize", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, WorkQueueSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkQueueSize_MetaData), NewProp_WorkQueueSize_MetaData) };
void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj)
{
	((UUdpMessagingSettings*)Obj)->bStopServiceWhenAppDeactivates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates = { "bStopServiceWhenAppDeactivates", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopServiceWhenAppDeactivates_MetaData), NewProp_bStopServiceWhenAppDeactivates_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint = { "UnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, UnicastEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnicastEndpoint_MetaData), NewProp_UnicastEndpoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint = { "MulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, MulticastEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MulticastEndpoint_MetaData), NewProp_MulticastEndpoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat = { "MessageFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, MessageFormat), Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageFormat_MetaData), NewProp_MessageFormat_MetaData) }; // 3615421382
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive = { "MulticastTimeToLive", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, MulticastTimeToLive), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MulticastTimeToLive_MetaData), NewProp_MulticastTimeToLive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, StaticEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticEndpoints_MetaData), NewProp_StaticEndpoints_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints_Inner = { "ExcludedEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints = { "ExcludedEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, ExcludedEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedEndpoints_MetaData), NewProp_ExcludedEndpoints_MetaData) };
void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bShareKnownNodesWithActiveConnections_SetBit(void* Obj)
{
	((UUdpMessagingSettings*)Obj)->bShareKnownNodesWithActiveConnections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bShareKnownNodesWithActiveConnections = { "bShareKnownNodesWithActiveConnections", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bShareKnownNodesWithActiveConnections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShareKnownNodesWithActiveConnections_MetaData), NewProp_bShareKnownNodesWithActiveConnections_MetaData) };
void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit(void* Obj)
{
	((UUdpMessagingSettings*)Obj)->EnableTunnel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel = { "EnableTunnel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableTunnel_MetaData), NewProp_EnableTunnel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint = { "TunnelUnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, TunnelUnicastEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TunnelUnicastEndpoint_MetaData), NewProp_TunnelUnicastEndpoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint = { "TunnelMulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, TunnelMulticastEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TunnelMulticastEndpoint_MetaData), NewProp_TunnelMulticastEndpoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUdpMessagingSettings, RemoteTunnelEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteTunnelEndpoints_MetaData), NewProp_RemoteTunnelEndpoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnabledByDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MaxSendRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_AutoRepairAttemptLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_WorkQueueSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_ExcludedEndpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bShareKnownNodesWithActiveConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUdpMessagingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UdpMessaging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams = {
	&UUdpMessagingSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUdpMessagingSettings()
{
	if (!Z_Registration_Info_UClass_UUdpMessagingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUdpMessagingSettings.OuterSingleton, Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUdpMessagingSettings.OuterSingleton;
}
template<> UDPMESSAGING_API UClass* StaticClass<UUdpMessagingSettings>()
{
	return UUdpMessagingSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUdpMessagingSettings);
UUdpMessagingSettings::~UUdpMessagingSettings() {}
// End Class UUdpMessagingSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUdpMessageFormat_StaticEnum, TEXT("EUdpMessageFormat"), &Z_Registration_Info_UEnum_EUdpMessageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3615421382U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUdpMessagingSettings, UUdpMessagingSettings::StaticClass, TEXT("UUdpMessagingSettings"), &Z_Registration_Info_UClass_UUdpMessagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUdpMessagingSettings), 3029586325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_2805598924(TEXT("/Script/UdpMessaging"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Public_Shared_UdpMessagingSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
