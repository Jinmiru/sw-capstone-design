// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerMuteList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMuteList() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVoiceBlockReasons();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMuteList();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EVoiceBlockReasons
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceBlockReasons;
static UEnum* EVoiceBlockReasons_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoiceBlockReasons.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoiceBlockReasons.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVoiceBlockReasons, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVoiceBlockReasons"));
	}
	return Z_Registration_Info_UEnum_EVoiceBlockReasons.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVoiceBlockReasons>()
{
	return EVoiceBlockReasons_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Blocked.Comment", "// The player was muted for gameplay reasons\n" },
		{ "Blocked.Name", "EVoiceBlockReasons::Blocked" },
		{ "Blocked.ToolTip", "The player was muted for gameplay reasons" },
		{ "BlockedBy.Comment", "// The owning player controller has blocked the player\n" },
		{ "BlockedBy.Name", "EVoiceBlockReasons::BlockedBy" },
		{ "BlockedBy.ToolTip", "The owning player controller has blocked the player" },
		{ "Gameplay.Comment", "// The owning player controller has explicitly muted the player\n" },
		{ "Gameplay.Name", "EVoiceBlockReasons::Gameplay" },
		{ "Gameplay.ToolTip", "The owning player controller has explicitly muted the player" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
		{ "Muted.Comment", "// Communication with this client has no filter reasons\n" },
		{ "Muted.Name", "EVoiceBlockReasons::Muted" },
		{ "Muted.ToolTip", "Communication with this client has no filter reasons" },
		{ "None.Name", "EVoiceBlockReasons::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoiceBlockReasons::None", (int64)EVoiceBlockReasons::None },
		{ "EVoiceBlockReasons::Muted", (int64)EVoiceBlockReasons::Muted },
		{ "EVoiceBlockReasons::Gameplay", (int64)EVoiceBlockReasons::Gameplay },
		{ "EVoiceBlockReasons::Blocked", (int64)EVoiceBlockReasons::Blocked },
		{ "EVoiceBlockReasons::BlockedBy", (int64)EVoiceBlockReasons::BlockedBy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVoiceBlockReasons",
	"EVoiceBlockReasons",
	Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVoiceBlockReasons()
{
	if (!Z_Registration_Info_UEnum_EVoiceBlockReasons.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceBlockReasons.InnerSingleton, Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoiceBlockReasons.InnerSingleton;
}
// End Enum EVoiceBlockReasons

// Begin ScriptStruct FPlayerMuteList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMuteList;
class UScriptStruct* FPlayerMuteList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMuteList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMuteList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMuteList, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PlayerMuteList"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMuteList.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPlayerMuteList>()
{
	return FPlayerMuteList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerMuteList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Container responsible for managing the mute state of a player controller\n * at the gameplay level (VoiceInterface handles actual muting)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
		{ "ToolTip", "Container responsible for managing the mute state of a player controller\nat the gameplay level (VoiceInterface handles actual muting)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceHandshakeCompleted_MetaData[] = {
		{ "Comment", "/** Has server and client handshake completed */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
		{ "ToolTip", "Has server and client handshake completed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChannelIdx_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasVoiceHandshakeCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceHandshakeCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceChannelIdx;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMuteList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted_SetBit(void* Obj)
{
	((FPlayerMuteList*)Obj)->bHasVoiceHandshakeCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted = { "bHasVoiceHandshakeCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerMuteList), &Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasVoiceHandshakeCompleted_MetaData), NewProp_bHasVoiceHandshakeCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_VoiceChannelIdx = { "VoiceChannelIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMuteList, VoiceChannelIdx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChannelIdx_MetaData), NewProp_VoiceChannelIdx_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMuteList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_VoiceChannelIdx,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMuteList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PlayerMuteList",
	Z_Construct_UScriptStruct_FPlayerMuteList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::PropPointers),
	sizeof(FPlayerMuteList),
	alignof(FPlayerMuteList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerMuteList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerMuteList()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMuteList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMuteList.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMuteList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerMuteList.InnerSingleton;
}
// End ScriptStruct FPlayerMuteList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoiceBlockReasons_StaticEnum, TEXT("EVoiceBlockReasons"), &Z_Registration_Info_UEnum_EVoiceBlockReasons, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3303241508U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerMuteList::StaticStruct, Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewStructOps, TEXT("PlayerMuteList"), &Z_Registration_Info_UScriptStruct_PlayerMuteList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMuteList), 3605959674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_1497540681(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
