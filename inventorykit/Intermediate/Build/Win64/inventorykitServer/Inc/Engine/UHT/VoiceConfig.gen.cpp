// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Net/VoiceConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics();
ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker();
ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FVoiceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceSettings;
class UScriptStruct* FVoiceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VoiceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVoiceSettings>()
{
	return FVoiceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVoiceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[] = {
		{ "Category", "Audio|Voice|Spatialization" },
		{ "Comment", "// Optionally attach the voice source to a Scene Component to give the appearance\n// that the voice is coming from that scene component.\n// If this is not set, the voice will not be spatialized.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optionally attach the voice source to a Scene Component to give the appearance\nthat the voice is coming from that scene component.\nIf this is not set, the voice will not be spatialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Audio|Voice|Spatialization" },
		{ "Comment", "// Optional attenuation settings to attach to this player's voice.\n// This should only be used when ComponentToAttachTo is set.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optional attenuation settings to attach to this player's voice.\nThis should only be used when ComponentToAttachTo is set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Audio|Voice|Effects" },
		{ "Comment", "// Optional audio effects to apply to this player's voice.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optional audio effects to apply to this player's voice." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToAttachTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo = { "ComponentToAttachTo", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceSettings, ComponentToAttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentToAttachTo_MetaData), NewProp_ComponentToAttachTo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceSettings, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceSettings, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEffectChain_MetaData), NewProp_SourceEffectChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VoiceSettings",
	Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers),
	sizeof(FVoiceSettings),
	alignof(FVoiceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoiceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VoiceSettings.InnerSingleton;
}
// End ScriptStruct FVoiceSettings

// Begin Class UVOIPTalker Function BPOnTalkingBegin
struct VOIPTalker_eventBPOnTalkingBegin_Parms
{
	UAudioComponent* AudioComponent;
};
static FName NAME_UVOIPTalker_BPOnTalkingBegin = FName(TEXT("BPOnTalkingBegin"));
void UVOIPTalker::BPOnTalkingBegin(UAudioComponent* AudioComponent)
{
	VOIPTalker_eventBPOnTalkingBegin_Parms Parms;
	Parms.AudioComponent=AudioComponent;
	ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingBegin),&Parms);
}
struct Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// Blueprint native event for when this player starts speaking.\n" },
		{ "DisplayName", "Begin Talking" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Blueprint native event for when this player starts speaking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VOIPTalker_eventBPOnTalkingBegin_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "BPOnTalkingBegin", nullptr, nullptr, Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers), sizeof(VOIPTalker_eventBPOnTalkingBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(VOIPTalker_eventBPOnTalkingBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVOIPTalker::execBPOnTalkingBegin)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPOnTalkingBegin_Implementation(Z_Param_AudioComponent);
	P_NATIVE_END;
}
// End Class UVOIPTalker Function BPOnTalkingBegin

// Begin Class UVOIPTalker Function BPOnTalkingEnd
static FName NAME_UVOIPTalker_BPOnTalkingEnd = FName(TEXT("BPOnTalkingEnd"));
void UVOIPTalker::BPOnTalkingEnd()
{
	ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingEnd),NULL);
}
struct Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// Blueprint native event for when this player stops speaking.\n" },
		{ "DisplayName", "End Talking" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Blueprint native event for when this player stops speaking." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "BPOnTalkingEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVOIPTalker::execBPOnTalkingEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPOnTalkingEnd_Implementation();
	P_NATIVE_END;
}
// End Class UVOIPTalker Function BPOnTalkingEnd

// Begin Class UVOIPTalker Function CreateTalkerForPlayer
struct Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics
{
	struct VOIPTalker_eventCreateTalkerForPlayer_Parms
	{
		APlayerState* OwningState;
		UVOIPTalker* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// function for creating and registering a UVOIPTalker.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "function for creating and registering a UVOIPTalker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_OwningState = { "OwningState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, ReturnValue), Z_Construct_UClass_UVOIPTalker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_OwningState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "CreateTalkerForPlayer", nullptr, nullptr, Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::VOIPTalker_eventCreateTalkerForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::VOIPTalker_eventCreateTalkerForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVOIPTalker::execCreateTalkerForPlayer)
{
	P_GET_OBJECT(APlayerState,Z_Param_OwningState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVOIPTalker**)Z_Param__Result=UVOIPTalker::CreateTalkerForPlayer(Z_Param_OwningState);
	P_NATIVE_END;
}
// End Class UVOIPTalker Function CreateTalkerForPlayer

// Begin Class UVOIPTalker Function GetVoiceLevel
struct Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics
{
	struct VOIPTalker_eventGetVoiceLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// Get the current level of how loud this player is speaking. Will return 0.0\n// if player is not talking.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Get the current level of how loud this player is speaking. Will return 0.0\nif player is not talking." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VOIPTalker_eventGetVoiceLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "GetVoiceLevel", nullptr, nullptr, Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::VOIPTalker_eventGetVoiceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::VOIPTalker_eventGetVoiceLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVOIPTalker::execGetVoiceLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVoiceLevel();
	P_NATIVE_END;
}
// End Class UVOIPTalker Function GetVoiceLevel

// Begin Class UVOIPTalker Function RegisterWithPlayerState
struct Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics
{
	struct VOIPTalker_eventRegisterWithPlayerState_Parms
	{
		APlayerState* OwningState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "Comment", "// This function sets up this talker with a specific player.\n// It is necessary to use this to properly control a specific player's voice\n// and receive events.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "This function sets up this talker with a specific player.\nIt is necessary to use this to properly control a specific player's voice\nand receive events." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::NewProp_OwningState = { "OwningState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VOIPTalker_eventRegisterWithPlayerState_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::NewProp_OwningState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "RegisterWithPlayerState", nullptr, nullptr, Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::VOIPTalker_eventRegisterWithPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::VOIPTalker_eventRegisterWithPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVOIPTalker::execRegisterWithPlayerState)
{
	P_GET_OBJECT(APlayerState,Z_Param_OwningState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWithPlayerState(Z_Param_OwningState);
	P_NATIVE_END;
}
// End Class UVOIPTalker Function RegisterWithPlayerState

// Begin Class UVOIPTalker
void UVOIPTalker::StaticRegisterNativesUVOIPTalker()
{
	UClass* Class = UVOIPTalker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPOnTalkingBegin", &UVOIPTalker::execBPOnTalkingBegin },
		{ "BPOnTalkingEnd", &UVOIPTalker::execBPOnTalkingEnd },
		{ "CreateTalkerForPlayer", &UVOIPTalker::execCreateTalkerForPlayer },
		{ "GetVoiceLevel", &UVOIPTalker::execGetVoiceLevel },
		{ "RegisterWithPlayerState", &UVOIPTalker::execRegisterWithPlayerState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVOIPTalker);
UClass* Z_Construct_UClass_UVOIPTalker_NoRegister()
{
	return UVOIPTalker::StaticClass();
}
struct Z_Construct_UClass_UVOIPTalker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VOIP" },
		{ "IncludePath", "Net/VoiceConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A VOIPTalker is a component that can be used to control the audio characteristics of a player's voice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Voice" },
		{ "Comment", "// Configurable settings for this player's voice. When set, this will update the next time the player speaks.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Configurable settings for this player's voice. When set, this will update the next time the player speaks." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin, "BPOnTalkingBegin" }, // 850898530
		{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd, "BPOnTalkingEnd" }, // 2827081682
		{ &Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer, "CreateTalkerForPlayer" }, // 186789561
		{ &Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel, "GetVoiceLevel" }, // 1702636203
		{ &Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState, "RegisterWithPlayerState" }, // 3261986573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVOIPTalker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVOIPTalker, Settings), Z_Construct_UScriptStruct_FVoiceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 2236769299
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVOIPTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVOIPTalker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVOIPTalker_Statics::ClassParams = {
	&UVOIPTalker::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVOIPTalker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams), Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVOIPTalker()
{
	if (!Z_Registration_Info_UClass_UVOIPTalker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVOIPTalker.OuterSingleton, Z_Construct_UClass_UVOIPTalker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVOIPTalker.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVOIPTalker>()
{
	return UVOIPTalker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPTalker);
// End Class UVOIPTalker

// Begin Class UVOIPStatics Function SetMicThreshold
struct Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics
{
	struct VOIPStatics_eventSetMicThreshold_Parms
	{
		float InThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Mic" },
		{ "Comment", "// This function sets the Mic threshold for VOIP chat.\n" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "This function sets the Mic threshold for VOIP chat." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::NewProp_InThreshold = { "InThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VOIPStatics_eventSetMicThreshold_Parms, InThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::NewProp_InThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPStatics, nullptr, "SetMicThreshold", nullptr, nullptr, Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::VOIPStatics_eventSetMicThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::VOIPStatics_eventSetMicThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVOIPStatics_SetMicThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVOIPStatics::execSetMicThreshold)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVOIPStatics::SetMicThreshold(Z_Param_InThreshold);
	P_NATIVE_END;
}
// End Class UVOIPStatics Function SetMicThreshold

// Begin Class UVOIPStatics
void UVOIPStatics::StaticRegisterNativesUVOIPStatics()
{
	UClass* Class = UVOIPStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMicThreshold", &UVOIPStatics::execSetMicThreshold },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVOIPStatics);
UClass* Z_Construct_UClass_UVOIPStatics_NoRegister()
{
	return UVOIPStatics::StaticClass();
}
struct Z_Construct_UClass_UVOIPStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/VoiceConfig.h" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVOIPStatics_SetMicThreshold, "SetMicThreshold" }, // 3359469038
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVOIPStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVOIPStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVOIPStatics_Statics::ClassParams = {
	&UVOIPStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVOIPStatics()
{
	if (!Z_Registration_Info_UClass_UVOIPStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVOIPStatics.OuterSingleton, Z_Construct_UClass_UVOIPStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVOIPStatics.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVOIPStatics>()
{
	return UVOIPStatics::StaticClass();
}
UVOIPStatics::UVOIPStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPStatics);
UVOIPStatics::~UVOIPStatics() {}
// End Class UVOIPStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoiceSettings::StaticStruct, Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewStructOps, TEXT("VoiceSettings"), &Z_Registration_Info_UScriptStruct_VoiceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceSettings), 2236769299U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVOIPTalker, UVOIPTalker::StaticClass, TEXT("UVOIPTalker"), &Z_Registration_Info_UClass_UVOIPTalker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVOIPTalker), 3263174971U) },
		{ Z_Construct_UClass_UVOIPStatics, UVOIPStatics::StaticClass, TEXT("UVOIPStatics"), &Z_Registration_Info_UClass_UVOIPStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVOIPStatics), 2520398619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_4165301360(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
