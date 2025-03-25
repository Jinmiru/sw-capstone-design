// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineMessages/Public/EngineServiceMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineServiceMessages() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong();
ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate();
UPackage* Z_Construct_UPackage__Script_EngineMessages();
// End Cross Module References

// Begin ScriptStruct FEngineServicePing
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServicePing;
class UScriptStruct* FEngineServicePing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServicePing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServicePing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePing, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePing"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServicePing.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServicePing>()
{
	return FEngineServicePing::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineServicePing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for discovering engine instances on the network.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for discovering engine instances on the network." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServicePing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"EngineServicePing",
	nullptr,
	0,
	sizeof(FEngineServicePing),
	alignof(FEngineServicePing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServicePing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServicePing.InnerSingleton, Z_Construct_UScriptStruct_FEngineServicePing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineServicePing.InnerSingleton;
}
// End ScriptStruct FEngineServicePing

// Begin ScriptStruct FEngineServicePong
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServicePong;
class UScriptStruct* FEngineServicePong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServicePong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServicePong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePong, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePong"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServicePong.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServicePong>()
{
	return FEngineServicePong::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineServicePong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for responding to a request to discover engine instances on the network.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for responding to a request to discover engine instances on the network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the currently loaded level, if any. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the currently loaded level, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the engine version. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the engine version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasBegunPlay_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether game play has begun. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether game play has begun." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the instance identifier. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the instance identifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the type of the engine instance. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the type of the engine instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the identifier of the session that the application belongs to. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the session that the application belongs to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the time in seconds since the world was loaded. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the world was loaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EngineVersion;
	static void NewProp_HasBegunPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBegunPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldTimeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePong>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServicePong, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServicePong, EngineVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineVersion_MetaData), NewProp_EngineVersion_MetaData) };
void Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_SetBit(void* Obj)
{
	((FEngineServicePong*)Obj)->HasBegunPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay = { "HasBegunPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEngineServicePong), &Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasBegunPlay_MetaData), NewProp_HasBegunPlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServicePong, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceId_MetaData), NewProp_InstanceId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServicePong, InstanceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceType_MetaData), NewProp_InstanceType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServicePong, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionId_MetaData), NewProp_SessionId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds = { "WorldTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServicePong, WorldTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTimeSeconds_MetaData), NewProp_WorldTimeSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"EngineServicePong",
	Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers),
	sizeof(FEngineServicePong),
	alignof(FEngineServicePong),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServicePong.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServicePong.InnerSingleton, Z_Construct_UScriptStruct_FEngineServicePong_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineServicePong.InnerSingleton;
}
// End ScriptStruct FEngineServicePong

// Begin ScriptStruct FEngineServiceAuthDeny
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny;
class UScriptStruct* FEngineServiceAuthDeny::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthDeny, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthDeny"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceAuthDeny>()
{
	return FEngineServiceAuthDeny::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for denying service access to a remote user.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for denying service access to a remote user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that denied access. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that denied access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserToDeny_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that access is denied to. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that access is denied to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserToDeny;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthDeny>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceAuthDeny, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny = { "UserToDeny", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceAuthDeny, UserToDeny), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserToDeny_MetaData), NewProp_UserToDeny_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"EngineServiceAuthDeny",
	Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers),
	sizeof(FEngineServiceAuthDeny),
	alignof(FEngineServiceAuthDeny),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.InnerSingleton;
}
// End ScriptStruct FEngineServiceAuthDeny

// Begin ScriptStruct FEngineServiceAuthGrant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant;
class UScriptStruct* FEngineServiceAuthGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthGrant, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthGrant"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceAuthGrant>()
{
	return FEngineServiceAuthGrant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for granting service access to a remote user.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for granting service access to a remote user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that granted access. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that granted access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserToGrant_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that access is granted to. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that access is granted to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthGrant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceAuthGrant, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant = { "UserToGrant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceAuthGrant, UserToGrant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserToGrant_MetaData), NewProp_UserToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"EngineServiceAuthGrant",
	Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers),
	sizeof(FEngineServiceAuthGrant),
	alignof(FEngineServiceAuthGrant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.InnerSingleton;
}
// End ScriptStruct FEngineServiceAuthGrant

// Begin ScriptStruct FEngineServiceExecuteCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand;
class UScriptStruct* FEngineServiceExecuteCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceExecuteCommand"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceExecuteCommand>()
{
	return FEngineServiceExecuteCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for executing a console command.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for executing a console command." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the command to execute. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the command to execute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that wants to execute the command. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wants to execute the command." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceExecuteCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceExecuteCommand, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceExecuteCommand, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"EngineServiceExecuteCommand",
	Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers),
	sizeof(FEngineServiceExecuteCommand),
	alignof(FEngineServiceExecuteCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.InnerSingleton;
}
// End ScriptStruct FEngineServiceExecuteCommand

// Begin ScriptStruct FEngineServiceTerminate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceTerminate;
class UScriptStruct* FEngineServiceTerminate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceTerminate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceTerminate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceTerminate, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceTerminate"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceTerminate.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceTerminate>()
{
	return FEngineServiceTerminate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for terminating the engine.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for terminating the engine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that wants to terminate the engine. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wants to terminate the engine." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceTerminate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceTerminate, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserName_MetaData), NewProp_UserName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"EngineServiceTerminate",
	Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers),
	sizeof(FEngineServiceTerminate),
	alignof(FEngineServiceTerminate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceTerminate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceTerminate.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceTerminate.InnerSingleton;
}
// End ScriptStruct FEngineServiceTerminate

// Begin ScriptStruct FEngineServiceNotification
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceNotification;
class UScriptStruct* FEngineServiceNotification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceNotification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceNotification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceNotification, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceNotification"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceNotification.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceNotification>()
{
	return FEngineServiceNotification::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineServiceNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that contains a notification or log output.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message that contains a notification or log output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the notification text. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the notification text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the time in seconds since the engine started. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the engine started." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceNotification>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceNotification, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineServiceNotification, TimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSeconds_MetaData), NewProp_TimeSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
	nullptr,
	&NewStructOps,
	"EngineServiceNotification",
	Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers),
	sizeof(FEngineServiceNotification),
	alignof(FEngineServiceNotification),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceNotification.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceNotification.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceNotification.InnerSingleton;
}
// End ScriptStruct FEngineServiceNotification

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEngineServicePing::StaticStruct, Z_Construct_UScriptStruct_FEngineServicePing_Statics::NewStructOps, TEXT("EngineServicePing"), &Z_Registration_Info_UScriptStruct_EngineServicePing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServicePing), 1283124179U) },
		{ FEngineServicePong::StaticStruct, Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewStructOps, TEXT("EngineServicePong"), &Z_Registration_Info_UScriptStruct_EngineServicePong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServicePong), 470452184U) },
		{ FEngineServiceAuthDeny::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewStructOps, TEXT("EngineServiceAuthDeny"), &Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceAuthDeny), 1799405342U) },
		{ FEngineServiceAuthGrant::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewStructOps, TEXT("EngineServiceAuthGrant"), &Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceAuthGrant), 2992771599U) },
		{ FEngineServiceExecuteCommand::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewStructOps, TEXT("EngineServiceExecuteCommand"), &Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceExecuteCommand), 781698509U) },
		{ FEngineServiceTerminate::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewStructOps, TEXT("EngineServiceTerminate"), &Z_Registration_Info_UScriptStruct_EngineServiceTerminate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceTerminate), 2314062835U) },
		{ FEngineServiceNotification::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewStructOps, TEXT("EngineServiceNotification"), &Z_Registration_Info_UScriptStruct_EngineServiceNotification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceNotification), 4100854909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_2303129091(TEXT("/Script/EngineMessages"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
