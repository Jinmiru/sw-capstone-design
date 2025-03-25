// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreOnline/Public/Online/CoreOnline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnline() {}

// Begin Cross Module References
COREONLINE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings();
COREONLINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
UPackage* Z_Construct_UPackage__Script_CoreOnline();
// End Cross Module References

// Begin ScriptStruct FJoinabilitySettings
struct Z_Construct_UScriptStruct_FJoinabilitySettings_Statics
{
	struct FJoinabilitySettings
	{
		FName SessionName;
		bool bPublicSearchable;
		bool bAllowInvites;
		bool bJoinViaPresence;
		bool bJoinViaPresenceFriendsOnly;
		int32 MaxPlayers;
		int32 MaxPartySize;
	};

	static_assert(sizeof(FJoinabilitySettings) < MAX_uint16);
	static_assert(alignof(FJoinabilitySettings) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** Name of session these settings affect */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Name of session these settings affect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPublicSearchable_MetaData[] = {
		{ "Comment", "/** Is this session now publicly searchable */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Is this session now publicly searchable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[] = {
		{ "Comment", "/** Does this session allow invites */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Does this session allow invites" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresence_MetaData[] = {
		{ "Comment", "/** Does this session allow public join via presence */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Does this session allow public join via presence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "Comment", "/** Does this session allow friends to join via presence */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Does this session allow friends to join via presence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Comment", "/** Current max players in this session */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Current max players in this session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPartySize_MetaData[] = {
		{ "Comment", "/** Current max party size in this session */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Current max party size in this session" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_bPublicSearchable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublicSearchable;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static void NewProp_bJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresence;
	static void NewProp_bJoinViaPresenceFriendsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresenceFriendsOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPartySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinabilitySettings, SessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionName_MetaData), NewProp_SessionName_MetaData) };
void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_SetBit(void* Obj)
{
	((FJoinabilitySettings*)Obj)->bPublicSearchable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable = { "bPublicSearchable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPublicSearchable_MetaData), NewProp_bPublicSearchable_MetaData) };
void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((FJoinabilitySettings*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInvites_MetaData), NewProp_bAllowInvites_MetaData) };
void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_SetBit(void* Obj)
{
	((FJoinabilitySettings*)Obj)->bJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence = { "bJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJoinViaPresence_MetaData), NewProp_bJoinViaPresence_MetaData) };
void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_SetBit(void* Obj)
{
	((FJoinabilitySettings*)Obj)->bJoinViaPresenceFriendsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly = { "bJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJoinViaPresenceFriendsOnly_MetaData), NewProp_bJoinViaPresenceFriendsOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinabilitySettings, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize = { "MaxPartySize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJoinabilitySettings, MaxPartySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPartySize_MetaData), NewProp_MaxPartySize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreOnline,
	nullptr,
	nullptr,
	"JoinabilitySettings",
	Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers),
	sizeof(FJoinabilitySettings),
	alignof(FJoinabilitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FJoinabilitySettings

// Begin ScriptStruct FUniqueNetIdWrapper
struct Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics
{
	struct FUniqueNetIdWrapper
	{
	};

	static_assert(sizeof(FUniqueNetIdWrapper) < MAX_uint16);
	static_assert(alignof(FUniqueNetIdWrapper) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* UE::Online */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "UE::Online" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreOnline,
	nullptr,
	nullptr,
	"UniqueNetIdWrapper",
	nullptr,
	0,
	sizeof(FUniqueNetIdWrapper),
	alignof(FUniqueNetIdWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FUniqueNetIdWrapper
PRAGMA_ENABLE_DEPRECATION_WARNINGS
