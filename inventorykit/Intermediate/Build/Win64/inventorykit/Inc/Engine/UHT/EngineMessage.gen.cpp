// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineMessage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineMessage();
ENGINE_API UClass* Z_Construct_UClass_UEngineMessage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UEngineMessage
void UEngineMessage::StaticRegisterNativesUEngineMessage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineMessage);
UClass* Z_Construct_UClass_UEngineMessage_NoRegister()
{
	return UEngineMessage::StaticClass();
}
struct Z_Construct_UClass_UEngineMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/EngineMessage.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedPlaceMessage_MetaData[] = {
		{ "Comment", "/** Message displayed in message dialog when player pawn fails to spawn because no playerstart was available. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message displayed in message dialog when player pawn fails to spawn because no playerstart was available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxedOutMessage_MetaData[] = {
		{ "Comment", "/** Message when player join attempt is refused because the server is at capacity. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when player join attempt is refused because the server is at capacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteredMessage_MetaData[] = {
		{ "Comment", "/** Message when a new player enters the game. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new player enters the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMessage_MetaData[] = {
		{ "Comment", "/** Message when a player leaves the game. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a player leaves the game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalNameChange_MetaData[] = {
		{ "Comment", "/** Message when a player changes their name. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a player changes their name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecEnteredMessage_MetaData[] = {
		{ "Comment", "/** Message when a new spectator enters the server (if spectator has a player name). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new spectator enters the server (if spectator has a player name)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayerMessage_MetaData[] = {
		{ "Comment", "/** Message when a new player enters the server (if player is unnamed). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new player enters the server (if player is unnamed)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSpecMessage_MetaData[] = {
		{ "Comment", "/** Message when a new spectator enters the server (if spectator is unnamed). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new spectator enters the server (if spectator is unnamed)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailedPlaceMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaxedOutMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnteredMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeftMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalNameChange;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpecEnteredMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewPlayerMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewSpecMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage = { "FailedPlaceMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, FailedPlaceMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedPlaceMessage_MetaData), NewProp_FailedPlaceMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage = { "MaxedOutMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, MaxedOutMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxedOutMessage_MetaData), NewProp_MaxedOutMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage = { "EnteredMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, EnteredMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteredMessage_MetaData), NewProp_EnteredMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage = { "LeftMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, LeftMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMessage_MetaData), NewProp_LeftMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange = { "GlobalNameChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, GlobalNameChange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalNameChange_MetaData), NewProp_GlobalNameChange_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage = { "SpecEnteredMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, SpecEnteredMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecEnteredMessage_MetaData), NewProp_SpecEnteredMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage = { "NewPlayerMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, NewPlayerMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPlayerMessage_MetaData), NewProp_NewPlayerMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage = { "NewSpecMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEngineMessage, NewSpecMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSpecMessage_MetaData), NewProp_NewSpecMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEngineMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEngineMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalMessage,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineMessage_Statics::ClassParams = {
	&UEngineMessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEngineMessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEngineMessage()
{
	if (!Z_Registration_Info_UClass_UEngineMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineMessage.OuterSingleton, Z_Construct_UClass_UEngineMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEngineMessage.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UEngineMessage>()
{
	return UEngineMessage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineMessage);
UEngineMessage::~UEngineMessage() {}
// End Class UEngineMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEngineMessage, UEngineMessage::StaticClass, TEXT("UEngineMessage"), &Z_Registration_Info_UClass_UEngineMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineMessage), 930039542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_3915443366(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
