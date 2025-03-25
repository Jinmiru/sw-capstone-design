// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/UserSettings/EnhancedInputUserSettings.h"
#include "Runtime/Engine/Classes/GameFramework/InputSettings.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputUserSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareDeviceIdentifier();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot();
ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature();
ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature();
ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature();
ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMappingRow();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FMapPlayerKeyArgs();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerKeyMapping();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Enum EPlayerMappableKeySlot
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerMappableKeySlot;
static UEnum* EPlayerMappableKeySlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerMappableKeySlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerMappableKeySlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EPlayerMappableKeySlot"));
	}
	return Z_Registration_Info_UEnum_EPlayerMappableKeySlot.OuterSingleton;
}
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EPlayerMappableKeySlot>()
{
	return EPlayerMappableKeySlot_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The \"Slot\" that a player mappable key is in.\n * Used by UI to allow for multiple keys to be bound by the player for a single player mapping\n * \n * | <Mapping Name>  | Slot 1 | Slot 2 | Slot 3 | Slot.... N |\n */" },
		{ "Fifth.Name", "EPlayerMappableKeySlot::Fifth" },
		{ "First.Comment", "// The first key slot\n" },
		{ "First.Name", "EPlayerMappableKeySlot::First" },
		{ "First.ToolTip", "The first key slot" },
		{ "Fourth.Name", "EPlayerMappableKeySlot::Fourth" },
		{ "Max.Name", "EPlayerMappableKeySlot::Max" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "Second.Comment", "// The second mappable key slot. This is the default max in the project settings\n" },
		{ "Second.Name", "EPlayerMappableKeySlot::Second" },
		{ "Second.ToolTip", "The second mappable key slot. This is the default max in the project settings" },
		{ "Seventh.Name", "EPlayerMappableKeySlot::Seventh" },
		{ "Sixth.Name", "EPlayerMappableKeySlot::Sixth" },
		{ "Third.Name", "EPlayerMappableKeySlot::Third" },
		{ "ToolTip", "The \"Slot\" that a player mappable key is in.\nUsed by UI to allow for multiple keys to be bound by the player for a single player mapping\n\n| <Mapping Name>  | Slot 1 | Slot 2 | Slot 3 | Slot.... N |" },
		{ "Unspecified.Comment", "// A key that isn't in any slot\n" },
		{ "Unspecified.Name", "EPlayerMappableKeySlot::Unspecified" },
		{ "Unspecified.ToolTip", "A key that isn't in any slot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerMappableKeySlot::First", (int64)EPlayerMappableKeySlot::First },
		{ "EPlayerMappableKeySlot::Second", (int64)EPlayerMappableKeySlot::Second },
		{ "EPlayerMappableKeySlot::Third", (int64)EPlayerMappableKeySlot::Third },
		{ "EPlayerMappableKeySlot::Fourth", (int64)EPlayerMappableKeySlot::Fourth },
		{ "EPlayerMappableKeySlot::Fifth", (int64)EPlayerMappableKeySlot::Fifth },
		{ "EPlayerMappableKeySlot::Sixth", (int64)EPlayerMappableKeySlot::Sixth },
		{ "EPlayerMappableKeySlot::Seventh", (int64)EPlayerMappableKeySlot::Seventh },
		{ "EPlayerMappableKeySlot::Unspecified", (int64)EPlayerMappableKeySlot::Unspecified },
		{ "EPlayerMappableKeySlot::Max", (int64)EPlayerMappableKeySlot::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	"EPlayerMappableKeySlot",
	"EPlayerMappableKeySlot",
	Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot()
{
	if (!Z_Registration_Info_UEnum_EPlayerMappableKeySlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerMappableKeySlot.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerMappableKeySlot.InnerSingleton;
}
// End Enum EPlayerMappableKeySlot

// Begin ScriptStruct FMapPlayerKeyArgs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs;
class UScriptStruct* FMapPlayerKeyArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapPlayerKeyArgs, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("MapPlayerKeyArgs"));
	}
	return Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FMapPlayerKeyArgs>()
{
	return FMapPlayerKeyArgs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Arguments that can be used when mapping a player key */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Arguments that can be used when mapping a player key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * The name of the mapping for this key. This is either the default mapping name from an Input Action asset, or one\n\x09 * that is overridden in the Input Mapping Context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The name of the mapping for this key. This is either the default mapping name from an Input Action asset, or one\nthat is overridden in the Input Mapping Context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** What slot this key mapping is for */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "What slot this key mapping is for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewKey_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The new Key that this should be mapped to */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The new Key that this should be mapped to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDeviceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** An OPTIONAL specifier about what kind of hardware this mapping is for. */" },
		{ "EditCondition", "bFilterByHardwareDeviceId == true" },
		{ "GetOptions", "Engine.InputPlatformSettings.GetAllHardwareDeviceNames" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "An OPTIONAL specifier about what kind of hardware this mapping is for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The Key Mapping Profile identifier that this mapping should be set on. If this is empty, then the currently equipped profile will be used. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The Key Mapping Profile identifier that this mapping should be set on. If this is empty, then the currently equipped profile will be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMatchingSlotIfNeeded_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** If there is not a player mapping already with the same Slot and Hardware Device ID, then create a new mapping for this slot. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "If there is not a player mapping already with the same Slot and Hardware Device ID, then create a new mapping for this slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeferOnSettingsChangedBroadcast_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Defers setting changed delegates until the next frame if set to true. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Defers setting changed delegates until the next frame if set to true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HardwareDeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileId;
	static void NewProp_bCreateMatchingSlotIfNeeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMatchingSlotIfNeeded;
	static void NewProp_bDeferOnSettingsChangedBroadcast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferOnSettingsChangedBroadcast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapPlayerKeyArgs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapPlayerKeyArgs, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapPlayerKeyArgs, Slot), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 2567049235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapPlayerKeyArgs, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewKey_MetaData), NewProp_NewKey_MetaData) }; // 658672854
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_HardwareDeviceId = { "HardwareDeviceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapPlayerKeyArgs, HardwareDeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareDeviceId_MetaData), NewProp_HardwareDeviceId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_ProfileId = { "ProfileId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapPlayerKeyArgs, ProfileId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileId_MetaData), NewProp_ProfileId_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bCreateMatchingSlotIfNeeded_SetBit(void* Obj)
{
	((FMapPlayerKeyArgs*)Obj)->bCreateMatchingSlotIfNeeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bCreateMatchingSlotIfNeeded = { "bCreateMatchingSlotIfNeeded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMapPlayerKeyArgs), &Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bCreateMatchingSlotIfNeeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMatchingSlotIfNeeded_MetaData), NewProp_bCreateMatchingSlotIfNeeded_MetaData) };
void Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bDeferOnSettingsChangedBroadcast_SetBit(void* Obj)
{
	((FMapPlayerKeyArgs*)Obj)->bDeferOnSettingsChangedBroadcast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bDeferOnSettingsChangedBroadcast = { "bDeferOnSettingsChangedBroadcast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMapPlayerKeyArgs), &Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bDeferOnSettingsChangedBroadcast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeferOnSettingsChangedBroadcast_MetaData), NewProp_bDeferOnSettingsChangedBroadcast_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_NewKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_HardwareDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_ProfileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bCreateMatchingSlotIfNeeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewProp_bDeferOnSettingsChangedBroadcast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"MapPlayerKeyArgs",
	Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::PropPointers),
	sizeof(FMapPlayerKeyArgs),
	alignof(FMapPlayerKeyArgs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapPlayerKeyArgs()
{
	if (!Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs.InnerSingleton, Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs.InnerSingleton;
}
// End ScriptStruct FMapPlayerKeyArgs

// Begin ScriptStruct FPlayerKeyMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerKeyMapping;
class UScriptStruct* FPlayerKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerKeyMapping, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("PlayerKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerKeyMapping.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FPlayerKeyMapping>()
{
	return FPlayerKeyMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a single key mapping that is set by the player */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Represents a single key mapping that is set by the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The name of the mapping for this key */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The name of the mapping for this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Localized display name of this mapping */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Localized display name of this mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayCategory_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Localized display category of this mapping */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Localized display category of this mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** What slot this key is mapped to */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "What slot this key is mapped to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** True if this key mapping is dirty (i.e. has been changed by the player) */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "True if this key mapping is dirty (i.e. has been changed by the player)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultKey_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The default key that this mapping was set to in its input mapping context */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The default key that this mapping was set to in its input mapping context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentKey_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The key that the player has mapped to */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The key that the player has mapped to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDeviceId_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** An optional Hardware Device specifier for this mapping */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "An optional Hardware Device specifier for this mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedInputAction_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The input action associated with this player key mapping */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The input action associated with this player key mapping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayCategory;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static void NewProp_bIsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HardwareDeviceId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerKeyMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_DisplayCategory = { "DisplayCategory", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, DisplayCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayCategory_MetaData), NewProp_DisplayCategory_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, Slot), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) }; // 2567049235
void Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_bIsDirty_SetBit(void* Obj)
{
	((FPlayerKeyMapping*)Obj)->bIsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPlayerKeyMapping), &Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDirty_MetaData), NewProp_bIsDirty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_DefaultKey = { "DefaultKey", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, DefaultKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultKey_MetaData), NewProp_DefaultKey_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_CurrentKey = { "CurrentKey", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, CurrentKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentKey_MetaData), NewProp_CurrentKey_MetaData) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_HardwareDeviceId = { "HardwareDeviceId", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, HardwareDeviceId), Z_Construct_UScriptStruct_FHardwareDeviceIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardwareDeviceId_MetaData), NewProp_HardwareDeviceId_MetaData) }; // 359882396
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_AssociatedInputAction = { "AssociatedInputAction", nullptr, (EPropertyFlags)0x0124080000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerKeyMapping, AssociatedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedInputAction_MetaData), NewProp_AssociatedInputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_DisplayCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_bIsDirty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_DefaultKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_CurrentKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_HardwareDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewProp_AssociatedInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"PlayerKeyMapping",
	Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::PropPointers),
	sizeof(FPlayerKeyMapping),
	alignof(FPlayerKeyMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerKeyMapping()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerKeyMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerKeyMapping.InnerSingleton;
}
// End ScriptStruct FPlayerKeyMapping

// Begin ScriptStruct FKeyMappingRow
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyMappingRow;
class UScriptStruct* FKeyMappingRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyMappingRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyMappingRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyMappingRow, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("KeyMappingRow"));
	}
	return Z_Registration_Info_UScriptStruct_KeyMappingRow.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FKeyMappingRow>()
{
	return FKeyMappingRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FKeyMappingRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores all mappings bound to a single mapping name.\n *\n * Since a single mapping can have multiple bindings to it and this system should be Blueprint friendly,\n * this needs to be a struct (blueprint don't support nested containers).\n */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Stores all mappings bound to a single mapping name.\n\nSince a single mapping can have multiple bindings to it and this system should be Blueprint friendly,\nthis needs to be a struct (blueprint don't support nested containers)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mappings_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Mappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyMappingRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyMappingRow_Statics::NewProp_Mappings_ElementProp = { "Mappings", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerKeyMapping, METADATA_PARAMS(0, nullptr) }; // 295282626
static_assert(TModels_V<CGetTypeHashable, FPlayerKeyMapping>, "The structure 'FPlayerKeyMapping' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FKeyMappingRow_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FKeyMappingRow, Mappings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mappings_MetaData), NewProp_Mappings_MetaData) }; // 295282626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyMappingRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingRow_Statics::NewProp_Mappings_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyMappingRow_Statics::NewProp_Mappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyMappingRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"KeyMappingRow",
	Z_Construct_UScriptStruct_FKeyMappingRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingRow_Statics::PropPointers),
	sizeof(FKeyMappingRow),
	alignof(FKeyMappingRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyMappingRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKeyMappingRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKeyMappingRow()
{
	if (!Z_Registration_Info_UScriptStruct_KeyMappingRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyMappingRow.InnerSingleton, Z_Construct_UScriptStruct_FKeyMappingRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_KeyMappingRow.InnerSingleton;
}
// End ScriptStruct FKeyMappingRow

// Begin ScriptStruct FPlayerMappableKeyQueryOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions;
class UScriptStruct* FPlayerMappableKeyQueryOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("PlayerMappableKeyQueryOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FPlayerMappableKeyQueryOptions>()
{
	return FPlayerMappableKeyQueryOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* Options when querying what keys are mapped to a specific action on the player mappable\n* key profile. \n*/" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Options when querying what keys are mapped to a specific action on the player mappable\nkey profile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "Category", "Query Options" },
		{ "Comment", "/** The mapping name to search for */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The mapping name to search for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyToMatch_MetaData[] = {
		{ "Category", "Query Options" },
		{ "Comment", "/** If specified, then this key will be used to match against when checking if the key types and axis are the same. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "If specified, then this key will be used to match against when checking if the key types and axis are the same." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotToMatch_MetaData[] = {
		{ "Category", "Query Options" },
		{ "Comment", "/** The key slot that will be required to match if set. By default this is EPlayerMappableKeySlot::Unspecified, which will not filter by the slot at all. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The key slot that will be required to match if set. By default this is EPlayerMappableKeySlot::Unspecified, which will not filter by the slot at all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchBasicKeyTypes_MetaData[] = {
		{ "Category", "Query Options" },
		{ "Comment", "/** If true, then only keys that have the same value for IsGamepadKey, IsTouch, and IsGesture will be included in the results of this query */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "If true, then only keys that have the same value for IsGamepadKey, IsTouch, and IsGesture will be included in the results of this query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchKeyAxisType_MetaData[] = {
		{ "Category", "Query Options" },
		{ "Comment", "/** If true, then only keys that have the same value of IsAxis1D, IsAxis2D, and IsAxis3D will be included in the results of this query */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "If true, then only keys that have the same value of IsAxis1D, IsAxis2D, and IsAxis3D will be included in the results of this query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDeviceType_MetaData[] = {
		{ "Category", "Query Options" },
		{ "Comment", "/** If set, then only player mappings whose hardware device identifier that has the same primary input device type will be included in the results of this query */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "If set, then only player mappings whose hardware device identifier that has the same primary input device type will be included in the results of this query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDeviceFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Engine.EHardwareDeviceSupportedFeatures" },
		{ "Category", "Query Options" },
		{ "Comment", "/** If set, then only player mappings whose Hardware Device Identifier that has the same flags as this will be included in the results */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "If set, then only player mappings whose Hardware Device Identifier that has the same flags as this will be included in the results" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SlotToMatch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotToMatch;
	static void NewProp_bMatchBasicKeyTypes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchBasicKeyTypes;
	static void NewProp_bMatchKeyAxisType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchKeyAxisType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredDeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredDeviceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredDeviceFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMappableKeyQueryOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyQueryOptions, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyQueryOptions, KeyToMatch), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyToMatch_MetaData), NewProp_KeyToMatch_MetaData) }; // 658672854
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_SlotToMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_SlotToMatch = { "SlotToMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyQueryOptions, SlotToMatch), Z_Construct_UEnum_EnhancedInput_EPlayerMappableKeySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotToMatch_MetaData), NewProp_SlotToMatch_MetaData) }; // 2567049235
void Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchBasicKeyTypes_SetBit(void* Obj)
{
	((FPlayerMappableKeyQueryOptions*)Obj)->bMatchBasicKeyTypes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchBasicKeyTypes = { "bMatchBasicKeyTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPlayerMappableKeyQueryOptions), &Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchBasicKeyTypes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchBasicKeyTypes_MetaData), NewProp_bMatchBasicKeyTypes_MetaData) };
void Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchKeyAxisType_SetBit(void* Obj)
{
	((FPlayerMappableKeyQueryOptions*)Obj)->bMatchKeyAxisType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchKeyAxisType = { "bMatchKeyAxisType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPlayerMappableKeyQueryOptions), &Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchKeyAxisType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchKeyAxisType_MetaData), NewProp_bMatchKeyAxisType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_RequiredDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_RequiredDeviceType = { "RequiredDeviceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyQueryOptions, RequiredDeviceType), Z_Construct_UEnum_Engine_EHardwareDevicePrimaryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredDeviceType_MetaData), NewProp_RequiredDeviceType_MetaData) }; // 2367033142
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_RequiredDeviceFlags = { "RequiredDeviceFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyQueryOptions, RequiredDeviceFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredDeviceFlags_MetaData), NewProp_RequiredDeviceFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_KeyToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_SlotToMatch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_SlotToMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchBasicKeyTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_bMatchKeyAxisType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_RequiredDeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_RequiredDeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewProp_RequiredDeviceFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"PlayerMappableKeyQueryOptions",
	Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::PropPointers),
	sizeof(FPlayerMappableKeyQueryOptions),
	alignof(FPlayerMappableKeyQueryOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions.InnerSingleton;
}
// End ScriptStruct FPlayerMappableKeyQueryOptions

// Begin Class UEnhancedPlayerMappableKeyProfile Function DoesMappingPassQueryOptions
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventDoesMappingPassQueryOptions_Parms
	{
		FPlayerKeyMapping PlayerMapping;
		FPlayerMappableKeyQueryOptions Options;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Returns true if the given player key mapping passes the query filter provided. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Returns true if the given player key mapping passes the query filter provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_PlayerMapping = { "PlayerMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventDoesMappingPassQueryOptions_Parms, PlayerMapping), Z_Construct_UScriptStruct_FPlayerKeyMapping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMapping_MetaData), NewProp_PlayerMapping_MetaData) }; // 295282626
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventDoesMappingPassQueryOptions_Parms, Options), Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 835598065
void Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedPlayerMappableKeyProfile_eventDoesMappingPassQueryOptions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedPlayerMappableKeyProfile_eventDoesMappingPassQueryOptions_Parms), &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_PlayerMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "DoesMappingPassQueryOptions", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::EnhancedPlayerMappableKeyProfile_eventDoesMappingPassQueryOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::EnhancedPlayerMappableKeyProfile_eventDoesMappingPassQueryOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execDoesMappingPassQueryOptions)
{
	P_GET_STRUCT_REF(FPlayerKeyMapping,Z_Param_Out_PlayerMapping);
	P_GET_STRUCT_REF(FPlayerMappableKeyQueryOptions,Z_Param_Out_Options);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesMappingPassQueryOptions(Z_Param_Out_PlayerMapping,Z_Param_Out_Options);
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function DoesMappingPassQueryOptions

// Begin Class UEnhancedPlayerMappableKeyProfile Function DumpProfileToLog
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DumpProfileToLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** A helper function to print out all the current profile settings to the log. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "A helper function to print out all the current profile settings to the log." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DumpProfileToLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "DumpProfileToLog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DumpProfileToLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DumpProfileToLog_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DumpProfileToLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DumpProfileToLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execDumpProfileToLog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpProfileToLog();
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function DumpProfileToLog

// Begin Class UEnhancedPlayerMappableKeyProfile Function GetMappedKeysInRow
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventGetMappedKeysInRow_Parms
	{
		FName MappingName;
		TArray<FKey> OutKeys;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/*OUT*/" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ReturnDisplayName", "Number of keys" },
		{ "ToolTip", "OUT" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetMappedKeysInRow_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetMappedKeysInRow_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetMappedKeysInRow_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_OutKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_OutKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "GetMappedKeysInRow", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::EnhancedPlayerMappableKeyProfile_eventGetMappedKeysInRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::EnhancedPlayerMappableKeyProfile_eventGetMappedKeysInRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execGetMappedKeysInRow)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_GET_TARRAY_REF(FKey,Z_Param_Out_OutKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMappedKeysInRow(Z_Param_MappingName,Z_Param_Out_OutKeys);
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function GetMappedKeysInRow

// Begin Class UEnhancedPlayerMappableKeyProfile Function GetMappingNamesForKey
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventGetMappingNamesForKey_Parms
	{
		FKey InKey;
		TArray<FName> OutMappingNames;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/*OUT*/" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ReturnDisplayName", "Number of mappings" },
		{ "ToolTip", "OUT" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutMappingNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappingNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetMappingNamesForKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InKey_MetaData), NewProp_InKey_MetaData) }; // 658672854
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_OutMappingNames_Inner = { "OutMappingNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_OutMappingNames = { "OutMappingNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetMappingNamesForKey_Parms, OutMappingNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetMappingNamesForKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_OutMappingNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_OutMappingNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "GetMappingNamesForKey", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::EnhancedPlayerMappableKeyProfile_eventGetMappingNamesForKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::EnhancedPlayerMappableKeyProfile_eventGetMappingNamesForKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execGetMappingNamesForKey)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutMappingNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMappingNamesForKey(Z_Param_Out_InKey,Z_Param_Out_OutMappingNames);
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function GetMappingNamesForKey

// Begin Class UEnhancedPlayerMappableKeyProfile Function GetPlayerMappingRows
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventGetPlayerMappingRows_Parms
	{
		TMap<FName,FKeyMappingRow> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Get all known key mappings for this profile.\n\x09 *\n\x09 * This returns a map of \"Mapping Name\" -> Player Mappings to that name\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Get all known key mappings for this profile.\n\nThis returns a map of \"Mapping Name\" -> Player Mappings to that name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FKeyMappingRow, METADATA_PARAMS(0, nullptr) }; // 3484097074
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetPlayerMappingRows_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3484097074
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "GetPlayerMappingRows", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::EnhancedPlayerMappableKeyProfile_eventGetPlayerMappingRows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::EnhancedPlayerMappableKeyProfile_eventGetPlayerMappingRows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execGetPlayerMappingRows)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FKeyMappingRow>*)Z_Param__Result=P_THIS->GetPlayerMappingRows();
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function GetPlayerMappingRows

// Begin Class UEnhancedPlayerMappableKeyProfile Function GetProfileDisplayName
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventGetProfileDisplayName_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Get the localized display name for this profile */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Get the localized display name for this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetProfileDisplayName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "GetProfileDisplayName", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::EnhancedPlayerMappableKeyProfile_eventGetProfileDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::EnhancedPlayerMappableKeyProfile_eventGetProfileDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execGetProfileDisplayName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetProfileDisplayName();
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function GetProfileDisplayName

// Begin Class UEnhancedPlayerMappableKeyProfile Function GetProfileIdentifer
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventGetProfileIdentifer_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventGetProfileIdentifer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "GetProfileIdentifer", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::EnhancedPlayerMappableKeyProfile_eventGetProfileIdentifer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::EnhancedPlayerMappableKeyProfile_eventGetProfileIdentifer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execGetProfileIdentifer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetProfileIdentifer();
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function GetProfileIdentifer

// Begin Class UEnhancedPlayerMappableKeyProfile Function K2_FindKeyMapping
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventK2_FindKeyMapping_Parms
	{
		FPlayerKeyMapping OutKeyMapping;
		FMapPlayerKeyArgs InArgs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OutKeyMapping" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "DisplayName", "Find Key Mapping" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeyMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InArgs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::NewProp_OutKeyMapping = { "OutKeyMapping", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventK2_FindKeyMapping_Parms, OutKeyMapping), Z_Construct_UScriptStruct_FPlayerKeyMapping, METADATA_PARAMS(0, nullptr) }; // 295282626
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventK2_FindKeyMapping_Parms, InArgs), Z_Construct_UScriptStruct_FMapPlayerKeyArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArgs_MetaData), NewProp_InArgs_MetaData) }; // 294279126
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::NewProp_OutKeyMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::NewProp_InArgs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "K2_FindKeyMapping", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::EnhancedPlayerMappableKeyProfile_eventK2_FindKeyMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::EnhancedPlayerMappableKeyProfile_eventK2_FindKeyMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execK2_FindKeyMapping)
{
	P_GET_STRUCT_REF(FPlayerKeyMapping,Z_Param_Out_OutKeyMapping);
	P_GET_STRUCT_REF(FMapPlayerKeyArgs,Z_Param_Out_InArgs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_FindKeyMapping(Z_Param_Out_OutKeyMapping,Z_Param_Out_InArgs);
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function K2_FindKeyMapping

// Begin Class UEnhancedPlayerMappableKeyProfile Function QueryPlayerMappedKeys
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventQueryPlayerMappedKeys_Parms
	{
		FPlayerMappableKeyQueryOptions Options;
		TArray<FKey> OutKeys;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/*OUT*/" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ReturnDisplayName", "Number of mappings" },
		{ "ToolTip", "OUT" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventQueryPlayerMappedKeys_Parms, Options), Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 835598065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventQueryPlayerMappedKeys_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventQueryPlayerMappedKeys_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_OutKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_OutKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "QueryPlayerMappedKeys", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::EnhancedPlayerMappableKeyProfile_eventQueryPlayerMappedKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::EnhancedPlayerMappableKeyProfile_eventQueryPlayerMappedKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execQueryPlayerMappedKeys)
{
	P_GET_STRUCT_REF(FPlayerMappableKeyQueryOptions,Z_Param_Out_Options);
	P_GET_TARRAY_REF(FKey,Z_Param_Out_OutKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->QueryPlayerMappedKeys(Z_Param_Out_Options,Z_Param_Out_OutKeys);
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function QueryPlayerMappedKeys

// Begin Class UEnhancedPlayerMappableKeyProfile Function ResetMappingToDefault
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventResetMappingToDefault_Parms
	{
		FName InMappingName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Resets every player key mapping to this mapping back to it's default value */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Resets every player key mapping to this mapping back to it's default value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InMappingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::NewProp_InMappingName = { "InMappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventResetMappingToDefault_Parms, InMappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMappingName_MetaData), NewProp_InMappingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::NewProp_InMappingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "ResetMappingToDefault", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::EnhancedPlayerMappableKeyProfile_eventResetMappingToDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::EnhancedPlayerMappableKeyProfile_eventResetMappingToDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execResetMappingToDefault)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InMappingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMappingToDefault(Z_Param_InMappingName);
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function ResetMappingToDefault

// Begin Class UEnhancedPlayerMappableKeyProfile Function ResetToDefault
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Resets all the key mappings in this profile to their default value from their Input Mapping Context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Resets all the key mappings in this profile to their default value from their Input Mapping Context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "ResetToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execResetToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefault();
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function ResetToDefault

// Begin Class UEnhancedPlayerMappableKeyProfile Function SetDisplayName
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventSetDisplayName_Parms
	{
		FText NewDisplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "//~ End UObject Interface\n" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventSetDisplayName_Parms, NewDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDisplayName_MetaData), NewProp_NewDisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::NewProp_NewDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::EnhancedPlayerMappableKeyProfile_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::EnhancedPlayerMappableKeyProfile_eventSetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execSetDisplayName)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewDisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisplayName(Z_Param_Out_NewDisplayName);
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function SetDisplayName

// Begin Class UEnhancedPlayerMappableKeyProfile Function ToString
struct Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics
{
	struct EnhancedPlayerMappableKeyProfile_eventToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Returns a string that can be used to debug the current key mappings.  */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Returns a string that can be used to debug the current key mappings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedPlayerMappableKeyProfile_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::EnhancedPlayerMappableKeyProfile_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::EnhancedPlayerMappableKeyProfile_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedPlayerMappableKeyProfile::execToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString();
	P_NATIVE_END;
}
// End Class UEnhancedPlayerMappableKeyProfile Function ToString

// Begin Class UEnhancedPlayerMappableKeyProfile
void UEnhancedPlayerMappableKeyProfile::StaticRegisterNativesUEnhancedPlayerMappableKeyProfile()
{
	UClass* Class = UEnhancedPlayerMappableKeyProfile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoesMappingPassQueryOptions", &UEnhancedPlayerMappableKeyProfile::execDoesMappingPassQueryOptions },
		{ "DumpProfileToLog", &UEnhancedPlayerMappableKeyProfile::execDumpProfileToLog },
		{ "GetMappedKeysInRow", &UEnhancedPlayerMappableKeyProfile::execGetMappedKeysInRow },
		{ "GetMappingNamesForKey", &UEnhancedPlayerMappableKeyProfile::execGetMappingNamesForKey },
		{ "GetPlayerMappingRows", &UEnhancedPlayerMappableKeyProfile::execGetPlayerMappingRows },
		{ "GetProfileDisplayName", &UEnhancedPlayerMappableKeyProfile::execGetProfileDisplayName },
		{ "GetProfileIdentifer", &UEnhancedPlayerMappableKeyProfile::execGetProfileIdentifer },
		{ "K2_FindKeyMapping", &UEnhancedPlayerMappableKeyProfile::execK2_FindKeyMapping },
		{ "QueryPlayerMappedKeys", &UEnhancedPlayerMappableKeyProfile::execQueryPlayerMappedKeys },
		{ "ResetMappingToDefault", &UEnhancedPlayerMappableKeyProfile::execResetMappingToDefault },
		{ "ResetToDefault", &UEnhancedPlayerMappableKeyProfile::execResetToDefault },
		{ "SetDisplayName", &UEnhancedPlayerMappableKeyProfile::execSetDisplayName },
		{ "ToString", &UEnhancedPlayerMappableKeyProfile::execToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedPlayerMappableKeyProfile);
UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister()
{
	return UEnhancedPlayerMappableKeyProfile::StaticClass();
}
struct Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents one \"Profile\" that a user can have for their player mappable keys */" },
		{ "IncludePath", "UserSettings/EnhancedInputUserSettings.h" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Represents one \"Profile\" that a user can have for their player mappable keys" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIdentifier_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The ID of this profile. This can be used by each Key Mapping to filter down which profile is required for it be equipped. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The ID of this profile. This can be used by each Key Mapping to filter down which profile is required for it be equipped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningUserId_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The platform user id of the owning Local Player of this profile. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The platform user id of the owning Local Player of this profile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The localized display name of this profile */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The localized display name of this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappedKeys_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * A map of \"Mapping Row Name\" to all key mappings associated with it.\n\x09 * Note: Dirty mappings will be serialized from UEnhancedInputUserSettings::Serialize\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "A map of \"Mapping Row Name\" to all key mappings associated with it.\nNote: Dirty mappings will be serialized from UEnhancedInputUserSettings::Serialize" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningUserId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMappedKeys_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerMappedKeys_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerMappedKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions, "DoesMappingPassQueryOptions" }, // 1436985156
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_DumpProfileToLog, "DumpProfileToLog" }, // 3124280069
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow, "GetMappedKeysInRow" }, // 2130328490
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey, "GetMappingNamesForKey" }, // 741856181
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows, "GetPlayerMappingRows" }, // 1226680019
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName, "GetProfileDisplayName" }, // 1642091541
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer, "GetProfileIdentifer" }, // 4163471493
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping, "K2_FindKeyMapping" }, // 2797731152
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys, "QueryPlayerMappedKeys" }, // 2311820047
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault, "ResetMappingToDefault" }, // 2558650552
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ResetToDefault, "ResetToDefault" }, // 3119717350
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_SetDisplayName, "SetDisplayName" }, // 3078056752
		{ &Z_Construct_UFunction_UEnhancedPlayerMappableKeyProfile_ToString, "ToString" }, // 4198135562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedPlayerMappableKeyProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_ProfileIdentifier = { "ProfileIdentifier", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerMappableKeyProfile, ProfileIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileIdentifier_MetaData), NewProp_ProfileIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_OwningUserId = { "OwningUserId", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerMappableKeyProfile, OwningUserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningUserId_MetaData), NewProp_OwningUserId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerMappableKeyProfile, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_PlayerMappedKeys_ValueProp = { "PlayerMappedKeys", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FKeyMappingRow, METADATA_PARAMS(0, nullptr) }; // 3484097074
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_PlayerMappedKeys_Key_KeyProp = { "PlayerMappedKeys_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_PlayerMappedKeys = { "PlayerMappedKeys", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerMappableKeyProfile, PlayerMappedKeys), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMappedKeys_MetaData), NewProp_PlayerMappedKeys_MetaData) }; // 3484097074
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_ProfileIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_OwningUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_PlayerMappedKeys_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_PlayerMappedKeys_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::NewProp_PlayerMappedKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::ClassParams = {
	&UEnhancedPlayerMappableKeyProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile()
{
	if (!Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.OuterSingleton, Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedPlayerMappableKeyProfile>()
{
	return UEnhancedPlayerMappableKeyProfile::StaticClass();
}
UEnhancedPlayerMappableKeyProfile::UEnhancedPlayerMappableKeyProfile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedPlayerMappableKeyProfile);
UEnhancedPlayerMappableKeyProfile::~UEnhancedPlayerMappableKeyProfile() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEnhancedPlayerMappableKeyProfile)
// End Class UEnhancedPlayerMappableKeyProfile

// Begin ScriptStruct FPlayerMappableKeyProfileCreationArgs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs;
class UScriptStruct* FPlayerMappableKeyProfileCreationArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("PlayerMappableKeyProfileCreationArgs"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FPlayerMappableKeyProfileCreationArgs>()
{
	return FPlayerMappableKeyProfileCreationArgs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Arguments that can be used when creating a new mapping profile */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Arguments that can be used when creating a new mapping profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileType_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIdentifier_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The uniqiue identifier that this profile should have */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The uniqiue identifier that this profile should have" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The user ID of the ULocalPlayer that this profile is associated with */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The user ID of the ULocalPlayer that this profile is associated with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** The display name of this profile */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The display name of this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetAsCurrentProfile_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProfileType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static void NewProp_bSetAsCurrentProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetAsCurrentProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMappableKeyProfileCreationArgs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_ProfileType = { "ProfileType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyProfileCreationArgs, ProfileType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileType_MetaData), NewProp_ProfileType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_ProfileIdentifier = { "ProfileIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyProfileCreationArgs, ProfileIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileIdentifier_MetaData), NewProp_ProfileIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyProfileCreationArgs, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserId_MetaData), NewProp_UserId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerMappableKeyProfileCreationArgs, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
void Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_bSetAsCurrentProfile_SetBit(void* Obj)
{
	((FPlayerMappableKeyProfileCreationArgs*)Obj)->bSetAsCurrentProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_bSetAsCurrentProfile = { "bSetAsCurrentProfile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FPlayerMappableKeyProfileCreationArgs), &Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_bSetAsCurrentProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetAsCurrentProfile_MetaData), NewProp_bSetAsCurrentProfile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_ProfileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_ProfileIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_UserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewProp_bSetAsCurrentProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	nullptr,
	&NewStructOps,
	"PlayerMappableKeyProfileCreationArgs",
	Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::PropPointers),
	sizeof(FPlayerMappableKeyProfileCreationArgs),
	alignof(FPlayerMappableKeyProfileCreationArgs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs.InnerSingleton;
}
// End ScriptStruct FPlayerMappableKeyProfileCreationArgs

// Begin Delegate FEnhancedInputUserSettingsChanged
struct Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics
{
	struct EnhancedInputUserSettings_eventEnhancedInputUserSettingsChanged_Parms
	{
		UEnhancedInputUserSettings* Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Fired when the user settings have changed, such as their key mappings. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Fired when the user settings have changed, such as their key mappings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventEnhancedInputUserSettingsChanged_Parms, Settings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "EnhancedInputUserSettingsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::EnhancedInputUserSettings_eventEnhancedInputUserSettingsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::EnhancedInputUserSettings_eventEnhancedInputUserSettingsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEnhancedInputUserSettings::FEnhancedInputUserSettingsChanged_DelegateWrapper(const FMulticastScriptDelegate& EnhancedInputUserSettingsChanged, UEnhancedInputUserSettings* Settings)
{
	struct EnhancedInputUserSettings_eventEnhancedInputUserSettingsChanged_Parms
	{
		UEnhancedInputUserSettings* Settings;
	};
	EnhancedInputUserSettings_eventEnhancedInputUserSettingsChanged_Parms Parms;
	Parms.Settings=Settings;
	EnhancedInputUserSettingsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEnhancedInputUserSettingsChanged

// Begin Delegate FEnhancedInputUserSettingsApplied
struct Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called after the settings have been applied from the ApplySettings call. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Called after the settings have been applied from the ApplySettings call." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "EnhancedInputUserSettingsApplied__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEnhancedInputUserSettings::FEnhancedInputUserSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& EnhancedInputUserSettingsApplied)
{
	EnhancedInputUserSettingsApplied.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FEnhancedInputUserSettingsApplied

// Begin Delegate FMappableKeyProfileChanged
struct Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics
{
	struct EnhancedInputUserSettings_eventMappableKeyProfileChanged_Parms
	{
		const UEnhancedPlayerMappableKeyProfile* NewProfile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Fired when you equip a different key profile  */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Fired when you equip a different key profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::NewProp_NewProfile = { "NewProfile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventMappableKeyProfileChanged_Parms, NewProfile), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewProfile_MetaData), NewProp_NewProfile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::NewProp_NewProfile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "MappableKeyProfileChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::EnhancedInputUserSettings_eventMappableKeyProfileChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::EnhancedInputUserSettings_eventMappableKeyProfileChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEnhancedInputUserSettings::FMappableKeyProfileChanged_DelegateWrapper(const FMulticastScriptDelegate& MappableKeyProfileChanged, const UEnhancedPlayerMappableKeyProfile* NewProfile)
{
	struct EnhancedInputUserSettings_eventMappableKeyProfileChanged_Parms
	{
		const UEnhancedPlayerMappableKeyProfile* NewProfile;
	};
	EnhancedInputUserSettings_eventMappableKeyProfileChanged_Parms Parms;
	Parms.NewProfile=NewProfile;
	MappableKeyProfileChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMappableKeyProfileChanged

// Begin Delegate FMappingContextRegisteredWithSettings
struct Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics
{
	struct EnhancedInputUserSettings_eventMappingContextRegisteredWithSettings_Parms
	{
		const UInputMappingContext* IMC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Fired when a new input mapping context is registered. Useful if you need to update your UI */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Fired when a new input mapping context is registered. Useful if you need to update your UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::NewProp_IMC = { "IMC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventMappingContextRegisteredWithSettings_Parms, IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_MetaData), NewProp_IMC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::NewProp_IMC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "MappingContextRegisteredWithSettings__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::EnhancedInputUserSettings_eventMappingContextRegisteredWithSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::EnhancedInputUserSettings_eventMappingContextRegisteredWithSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEnhancedInputUserSettings::FMappingContextRegisteredWithSettings_DelegateWrapper(const FMulticastScriptDelegate& MappingContextRegisteredWithSettings, const UInputMappingContext* IMC)
{
	struct EnhancedInputUserSettings_eventMappingContextRegisteredWithSettings_Parms
	{
		const UInputMappingContext* IMC;
	};
	EnhancedInputUserSettings_eventMappingContextRegisteredWithSettings_Parms Parms;
	Parms.IMC=IMC;
	MappingContextRegisteredWithSettings.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMappingContextRegisteredWithSettings

// Begin Class UEnhancedInputUserSettings Function ApplySettings
struct Z_Construct_UFunction_UEnhancedInputUserSettings_ApplySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Apply any custom input settings to your user. By default, this will just broadcast the OnSettingsApplied delegate\n\x09 * which is a useful hook to maybe rebuild some UI or do other user facing updates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Apply any custom input settings to your user. By default, this will just broadcast the OnSettingsApplied delegate\nwhich is a useful hook to maybe rebuild some UI or do other user facing updates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_ApplySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "ApplySettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_ApplySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_ApplySettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_ApplySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_ApplySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execApplySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySettings();
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function ApplySettings

// Begin Class UEnhancedInputUserSettings Function AsyncSaveSettings
struct Z_Construct_UFunction_UEnhancedInputUserSettings_AsyncSaveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Asynchronously save the settings to a hardcoded save game slot. This will work for simple games,\n\x09 * but if you need to integrate it into an advanced save system you should Serialize this object out with the rest of your save data.\n\x09 *\n\x09 * OnAsyncSaveComplete will be called upon save completion.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Asynchronously save the settings to a hardcoded save game slot. This will work for simple games,\nbut if you need to integrate it into an advanced save system you should Serialize this object out with the rest of your save data.\n\nOnAsyncSaveComplete will be called upon save completion." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_AsyncSaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "AsyncSaveSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_AsyncSaveSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_AsyncSaveSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_AsyncSaveSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_AsyncSaveSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execAsyncSaveSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AsyncSaveSettings();
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function AsyncSaveSettings

// Begin Class UEnhancedInputUserSettings Function CreateNewKeyProfile
struct Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics
{
	struct EnhancedInputUserSettings_eventCreateNewKeyProfile_Parms
	{
		FPlayerMappableKeyProfileCreationArgs InArgs;
		UEnhancedPlayerMappableKeyProfile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Creates a new profile with this name and type.\n\x09 */" },
		{ "DeterminesOutputType", "InArgs.ProfileType" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Creates a new profile with this name and type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InArgs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventCreateNewKeyProfile_Parms, InArgs), Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArgs_MetaData), NewProp_InArgs_MetaData) }; // 1318223840
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventCreateNewKeyProfile_Parms, ReturnValue), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::NewProp_InArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "CreateNewKeyProfile", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::EnhancedInputUserSettings_eventCreateNewKeyProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::EnhancedInputUserSettings_eventCreateNewKeyProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execCreateNewKeyProfile)
{
	P_GET_STRUCT_REF(FPlayerMappableKeyProfileCreationArgs,Z_Param_Out_InArgs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedPlayerMappableKeyProfile**)Z_Param__Result=P_THIS->CreateNewKeyProfile(Z_Param_Out_InArgs);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function CreateNewKeyProfile

// Begin Class UEnhancedInputUserSettings Function FindMappingsInRow
struct Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics
{
	struct EnhancedInputUserSettings_eventFindMappingsInRow_Parms
	{
		FName MappingName;
		TSet<FPlayerKeyMapping> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Returns a set of all player key mappings for the given mapping name. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Returns a set of all player key mappings for the given mapping name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "GetOptions", "EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventFindMappingsInRow_Parms, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerKeyMapping, METADATA_PARAMS(0, nullptr) }; // 295282626
static_assert(TModels_V<CGetTypeHashable, FPlayerKeyMapping>, "The structure 'FPlayerKeyMapping' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventFindMappingsInRow_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 295282626
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::NewProp_MappingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "FindMappingsInRow", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::EnhancedInputUserSettings_eventFindMappingsInRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::EnhancedInputUserSettings_eventFindMappingsInRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execFindMappingsInRow)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FPlayerKeyMapping>*)Z_Param__Result=P_THIS->FindMappingsInRow(Z_Param_MappingName);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function FindMappingsInRow

// Begin Class UEnhancedInputUserSettings Function GetCurrentKeyProfile
struct Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics
{
	struct EnhancedInputUserSettings_eventGetCurrentKeyProfile_Parms
	{
		UEnhancedPlayerMappableKeyProfile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Get the current key profile that the user has set */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Get the current key profile that the user has set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventGetCurrentKeyProfile_Parms, ReturnValue), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "GetCurrentKeyProfile", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::EnhancedInputUserSettings_eventGetCurrentKeyProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::EnhancedInputUserSettings_eventGetCurrentKeyProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execGetCurrentKeyProfile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedPlayerMappableKeyProfile**)Z_Param__Result=P_THIS->GetCurrentKeyProfile();
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function GetCurrentKeyProfile

// Begin Class UEnhancedInputUserSettings Function GetCurrentKeyProfileIdentifier
struct Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics
{
	struct EnhancedInputUserSettings_eventGetCurrentKeyProfileIdentifier_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Gets the currently selected key profile */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Gets the currently selected key profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventGetCurrentKeyProfileIdentifier_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "GetCurrentKeyProfileIdentifier", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::EnhancedInputUserSettings_eventGetCurrentKeyProfileIdentifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::EnhancedInputUserSettings_eventGetCurrentKeyProfileIdentifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execGetCurrentKeyProfileIdentifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentKeyProfileIdentifier();
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function GetCurrentKeyProfileIdentifier

// Begin Class UEnhancedInputUserSettings Function GetKeyProfileWithIdentifier
struct Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics
{
	struct EnhancedInputUserSettings_eventGetKeyProfileWithIdentifier_Parms
	{
		FGameplayTag ProfileId;
		UEnhancedPlayerMappableKeyProfile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Returns the key profile with the given name if one exists. Null if one doesn't exist */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Returns the key profile with the given name if one exists. Null if one doesn't exist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::NewProp_ProfileId = { "ProfileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventGetKeyProfileWithIdentifier_Parms, ProfileId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileId_MetaData), NewProp_ProfileId_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventGetKeyProfileWithIdentifier_Parms, ReturnValue), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::NewProp_ProfileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "GetKeyProfileWithIdentifier", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::EnhancedInputUserSettings_eventGetKeyProfileWithIdentifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::EnhancedInputUserSettings_eventGetKeyProfileWithIdentifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execGetKeyProfileWithIdentifier)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ProfileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnhancedPlayerMappableKeyProfile**)Z_Param__Result=P_THIS->GetKeyProfileWithIdentifier(Z_Param_Out_ProfileId);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function GetKeyProfileWithIdentifier

// Begin Class UEnhancedInputUserSettings Function IsMappingContextRegistered
struct Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics
{
	struct EnhancedInputUserSettings_eventIsMappingContextRegistered_Parms
	{
		const UInputMappingContext* IMC;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Returns true if this mapping context is currently registered with the settings */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Returns true if this mapping context is currently registered with the settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::NewProp_IMC = { "IMC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventIsMappingContextRegistered_Parms, IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_MetaData), NewProp_IMC_MetaData) };
void Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputUserSettings_eventIsMappingContextRegistered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputUserSettings_eventIsMappingContextRegistered_Parms), &Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::NewProp_IMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "IsMappingContextRegistered", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::EnhancedInputUserSettings_eventIsMappingContextRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::EnhancedInputUserSettings_eventIsMappingContextRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execIsMappingContextRegistered)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_IMC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMappingContextRegistered(Z_Param_IMC);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function IsMappingContextRegistered

// Begin Class UEnhancedInputUserSettings Function MapPlayerKey
struct Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics
{
	struct EnhancedInputUserSettings_eventMapPlayerKey_Parms
	{
		FMapPlayerKeyArgs InArgs;
		FGameplayTagContainer FailureReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FailureReason" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Sets the player mapped key on the current key profile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Sets the player mapped key on the current key profile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InArgs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventMapPlayerKey_Parms, InArgs), Z_Construct_UScriptStruct_FMapPlayerKeyArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArgs_MetaData), NewProp_InArgs_MetaData) }; // 294279126
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventMapPlayerKey_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::NewProp_InArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "MapPlayerKey", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::EnhancedInputUserSettings_eventMapPlayerKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::EnhancedInputUserSettings_eventMapPlayerKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execMapPlayerKey)
{
	P_GET_STRUCT_REF(FMapPlayerKeyArgs,Z_Param_Out_InArgs);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MapPlayerKey(Z_Param_Out_InArgs,Z_Param_Out_FailureReason);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function MapPlayerKey

// Begin Class UEnhancedInputUserSettings Function RegisterInputMappingContext
struct Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics
{
	struct EnhancedInputUserSettings_eventRegisterInputMappingContext_Parms
	{
		const UInputMappingContext* IMC;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Registers this mapping context with the user settings. This will iterate all the key mappings\n\x09 * in the context and create an initial Player Mappable Key for every mapping that is marked as mappable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Registers this mapping context with the user settings. This will iterate all the key mappings\nin the context and create an initial Player Mappable Key for every mapping that is marked as mappable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::NewProp_IMC = { "IMC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventRegisterInputMappingContext_Parms, IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_MetaData), NewProp_IMC_MetaData) };
void Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputUserSettings_eventRegisterInputMappingContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputUserSettings_eventRegisterInputMappingContext_Parms), &Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::NewProp_IMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "RegisterInputMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::EnhancedInputUserSettings_eventRegisterInputMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::EnhancedInputUserSettings_eventRegisterInputMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execRegisterInputMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_IMC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterInputMappingContext(Z_Param_IMC);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function RegisterInputMappingContext

// Begin Class UEnhancedInputUserSettings Function RegisterInputMappingContexts
struct Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics
{
	struct EnhancedInputUserSettings_eventRegisterInputMappingContexts_Parms
	{
		TSet<UInputMappingContext*> MappingContexts;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Registers multiple mapping contexts with the settings */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Registers multiple mapping contexts with the settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContexts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MappingContexts;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_MappingContexts_ElementProp = { "MappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_MappingContexts = { "MappingContexts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventRegisterInputMappingContexts_Parms, MappingContexts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContexts_MetaData), NewProp_MappingContexts_MetaData) };
void Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputUserSettings_eventRegisterInputMappingContexts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputUserSettings_eventRegisterInputMappingContexts_Parms), &Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_MappingContexts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_MappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "RegisterInputMappingContexts", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::EnhancedInputUserSettings_eventRegisterInputMappingContexts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::EnhancedInputUserSettings_eventRegisterInputMappingContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execRegisterInputMappingContexts)
{
	P_GET_TSET_REF(UInputMappingContext*,Z_Param_Out_MappingContexts);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterInputMappingContexts(Z_Param_Out_MappingContexts);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function RegisterInputMappingContexts

// Begin Class UEnhancedInputUserSettings Function ResetAllPlayerKeysInRow
struct Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics
{
	struct EnhancedInputUserSettings_eventResetAllPlayerKeysInRow_Parms
	{
		FMapPlayerKeyArgs InArgs;
		FGameplayTagContainer FailureReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FailureReason" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09* Resets each player mapped key to it's default value from the Input Mapping Context that it was registered from.\n\x09* If a key did not come from an IMC (i.e. it was added additionally by the player) then it will be reset to EKeys::Invalid.\n\x09* \n\x09* @param InArgs\x09\x09\x09\x09""Arguments that contain the mapping name and profile ID to find the mapping to reset.\n\x09* @param FailureReason\x09\x09Populated with failure reasons if the operation fails.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Resets each player mapped key to it's default value from the Input Mapping Context that it was registered from.\nIf a key did not come from an IMC (i.e. it was added additionally by the player) then it will be reset to EKeys::Invalid.\n\n@param InArgs                         Arguments that contain the mapping name and profile ID to find the mapping to reset.\n@param FailureReason          Populated with failure reasons if the operation fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InArgs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventResetAllPlayerKeysInRow_Parms, InArgs), Z_Construct_UScriptStruct_FMapPlayerKeyArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArgs_MetaData), NewProp_InArgs_MetaData) }; // 294279126
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventResetAllPlayerKeysInRow_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::NewProp_InArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "ResetAllPlayerKeysInRow", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::EnhancedInputUserSettings_eventResetAllPlayerKeysInRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::EnhancedInputUserSettings_eventResetAllPlayerKeysInRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execResetAllPlayerKeysInRow)
{
	P_GET_STRUCT_REF(FMapPlayerKeyArgs,Z_Param_Out_InArgs);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllPlayerKeysInRow(Z_Param_Out_InArgs,Z_Param_Out_FailureReason);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function ResetAllPlayerKeysInRow

// Begin Class UEnhancedInputUserSettings Function ResetKeyProfileToDefault
struct Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics
{
	struct EnhancedInputUserSettings_eventResetKeyProfileToDefault_Parms
	{
		FGameplayTag ProfileId;
		FGameplayTagContainer FailureReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FailureReason" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Resets the given key profile to default key mappings\n\x09 *\n\x09 * @param ProfileId\x09\x09The ID of the key profile to reset\n\x09 * @param FailureReason\x09Populated with failure reasons if the operation fails.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Resets the given key profile to default key mappings\n\n@param ProfileId             The ID of the key profile to reset\n@param FailureReason Populated with failure reasons if the operation fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::NewProp_ProfileId = { "ProfileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventResetKeyProfileToDefault_Parms, ProfileId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileId_MetaData), NewProp_ProfileId_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventResetKeyProfileToDefault_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::NewProp_ProfileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "ResetKeyProfileToDefault", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::EnhancedInputUserSettings_eventResetKeyProfileToDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::EnhancedInputUserSettings_eventResetKeyProfileToDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execResetKeyProfileToDefault)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ProfileId);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetKeyProfileToDefault(Z_Param_Out_ProfileId,Z_Param_Out_FailureReason);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function ResetKeyProfileToDefault

// Begin Class UEnhancedInputUserSettings Function SaveSettings
struct Z_Construct_UFunction_UEnhancedInputUserSettings_SaveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Synchronously save the settings to a hardcoded save game slot. This will work for simple games,\n\x09 * but if you need to integrate it into an advanced save system you should Serialize this object out with the rest of your save data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Synchronously save the settings to a hardcoded save game slot. This will work for simple games,\nbut if you need to integrate it into an advanced save system you should Serialize this object out with the rest of your save data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_SaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "SaveSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_SaveSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_SaveSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_SaveSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_SaveSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execSaveSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveSettings();
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function SaveSettings

// Begin Class UEnhancedInputUserSettings Function SetKeyProfile
struct Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics
{
	struct EnhancedInputUserSettings_eventSetKeyProfile_Parms
	{
		FGameplayTag InProfileId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n\x09 * Changes the currently active key profile to the one with the given name. Returns true if the operation was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ReturnDisplayName", "Was Successful" },
		{ "ToolTip", "Changes the currently active key profile to the one with the given name. Returns true if the operation was successful." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InProfileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InProfileId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::NewProp_InProfileId = { "InProfileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventSetKeyProfile_Parms, InProfileId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InProfileId_MetaData), NewProp_InProfileId_MetaData) }; // 1298103297
void Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputUserSettings_eventSetKeyProfile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputUserSettings_eventSetKeyProfile_Parms), &Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::NewProp_InProfileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "SetKeyProfile", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::EnhancedInputUserSettings_eventSetKeyProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::EnhancedInputUserSettings_eventSetKeyProfile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execSetKeyProfile)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InProfileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetKeyProfile(Z_Param_Out_InProfileId);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function SetKeyProfile

// Begin Class UEnhancedInputUserSettings Function UnMapPlayerKey
struct Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics
{
	struct EnhancedInputUserSettings_eventUnMapPlayerKey_Parms
	{
		FMapPlayerKeyArgs InArgs;
		FGameplayTagContainer FailureReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FailureReason" },
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** \n\x09* Unmaps a single player mapping that matches the given Mapping name, slot, and hardware device.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Unmaps a single player mapping that matches the given Mapping name, slot, and hardware device." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InArgs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventUnMapPlayerKey_Parms, InArgs), Z_Construct_UScriptStruct_FMapPlayerKeyArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArgs_MetaData), NewProp_InArgs_MetaData) }; // 294279126
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventUnMapPlayerKey_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::NewProp_InArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "UnMapPlayerKey", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::EnhancedInputUserSettings_eventUnMapPlayerKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::EnhancedInputUserSettings_eventUnMapPlayerKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execUnMapPlayerKey)
{
	P_GET_STRUCT_REF(FMapPlayerKeyArgs,Z_Param_Out_InArgs);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnMapPlayerKey(Z_Param_Out_InArgs,Z_Param_Out_FailureReason);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function UnMapPlayerKey

// Begin Class UEnhancedInputUserSettings Function UnregisterInputMappingContext
struct Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics
{
	struct EnhancedInputUserSettings_eventUnregisterInputMappingContext_Parms
	{
		const UInputMappingContext* IMC;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Removes this mapping context from the registered mapping contexts */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Removes this mapping context from the registered mapping contexts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::NewProp_IMC = { "IMC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventUnregisterInputMappingContext_Parms, IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_MetaData), NewProp_IMC_MetaData) };
void Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputUserSettings_eventUnregisterInputMappingContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputUserSettings_eventUnregisterInputMappingContext_Parms), &Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::NewProp_IMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "UnregisterInputMappingContext", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::EnhancedInputUserSettings_eventUnregisterInputMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::EnhancedInputUserSettings_eventUnregisterInputMappingContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execUnregisterInputMappingContext)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_IMC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterInputMappingContext(Z_Param_IMC);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function UnregisterInputMappingContext

// Begin Class UEnhancedInputUserSettings Function UnregisterInputMappingContexts
struct Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics
{
	struct EnhancedInputUserSettings_eventUnregisterInputMappingContexts_Parms
	{
		TSet<UInputMappingContext*> MappingContexts;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/** Removes multiple mapping contexts from the registered mapping contexts */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Removes multiple mapping contexts from the registered mapping contexts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContexts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MappingContexts;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_MappingContexts_ElementProp = { "MappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_MappingContexts = { "MappingContexts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnhancedInputUserSettings_eventUnregisterInputMappingContexts_Parms, MappingContexts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContexts_MetaData), NewProp_MappingContexts_MetaData) };
void Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnhancedInputUserSettings_eventUnregisterInputMappingContexts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnhancedInputUserSettings_eventUnregisterInputMappingContexts_Parms), &Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_MappingContexts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_MappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputUserSettings, nullptr, "UnregisterInputMappingContexts", nullptr, nullptr, Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::EnhancedInputUserSettings_eventUnregisterInputMappingContexts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::EnhancedInputUserSettings_eventUnregisterInputMappingContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnhancedInputUserSettings::execUnregisterInputMappingContexts)
{
	P_GET_TSET_REF(UInputMappingContext*,Z_Param_Out_MappingContexts);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterInputMappingContexts(Z_Param_Out_MappingContexts);
	P_NATIVE_END;
}
// End Class UEnhancedInputUserSettings Function UnregisterInputMappingContexts

// Begin Class UEnhancedInputUserSettings
void UEnhancedInputUserSettings::StaticRegisterNativesUEnhancedInputUserSettings()
{
	UClass* Class = UEnhancedInputUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplySettings", &UEnhancedInputUserSettings::execApplySettings },
		{ "AsyncSaveSettings", &UEnhancedInputUserSettings::execAsyncSaveSettings },
		{ "CreateNewKeyProfile", &UEnhancedInputUserSettings::execCreateNewKeyProfile },
		{ "FindMappingsInRow", &UEnhancedInputUserSettings::execFindMappingsInRow },
		{ "GetCurrentKeyProfile", &UEnhancedInputUserSettings::execGetCurrentKeyProfile },
		{ "GetCurrentKeyProfileIdentifier", &UEnhancedInputUserSettings::execGetCurrentKeyProfileIdentifier },
		{ "GetKeyProfileWithIdentifier", &UEnhancedInputUserSettings::execGetKeyProfileWithIdentifier },
		{ "IsMappingContextRegistered", &UEnhancedInputUserSettings::execIsMappingContextRegistered },
		{ "MapPlayerKey", &UEnhancedInputUserSettings::execMapPlayerKey },
		{ "RegisterInputMappingContext", &UEnhancedInputUserSettings::execRegisterInputMappingContext },
		{ "RegisterInputMappingContexts", &UEnhancedInputUserSettings::execRegisterInputMappingContexts },
		{ "ResetAllPlayerKeysInRow", &UEnhancedInputUserSettings::execResetAllPlayerKeysInRow },
		{ "ResetKeyProfileToDefault", &UEnhancedInputUserSettings::execResetKeyProfileToDefault },
		{ "SaveSettings", &UEnhancedInputUserSettings::execSaveSettings },
		{ "SetKeyProfile", &UEnhancedInputUserSettings::execSetKeyProfile },
		{ "UnMapPlayerKey", &UEnhancedInputUserSettings::execUnMapPlayerKey },
		{ "UnregisterInputMappingContext", &UEnhancedInputUserSettings::execUnregisterInputMappingContext },
		{ "UnregisterInputMappingContexts", &UEnhancedInputUserSettings::execUnregisterInputMappingContexts },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputUserSettings);
UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister()
{
	return UEnhancedInputUserSettings::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "Comment", "/**\n * The Enhanced Input User Settings class is a place where you can put all of your Input Related settings\n * that you want your user to be able to change. Things like their key mappings, aim sensitivity, accessibility\n * settings, etc. This also provides a Registration point for Input Mappings Contexts (IMC) from possibly unloaded\n * plugins (i.e. Game Feature Plugins). You can register your IMC from a Game Feature Action plugin here, and then\n * have access to all the key mappings available. This is very useful for building settings screens because you can\n * now access all the mappings in your game, even if the entire plugin isn't loaded yet. \n *\n * The user settings are stored on each UEnhancedPlayerInput object, so each instance of the settings can represent\n * a single User or Local Player.\n *\n * To customize this for your game, you can create a subclass of it and change the \"UserSettingsClass\" in the\n * Enhanced Input Project Settings.\n */" },
		{ "DisplayName", "Enhanced Input User Settings (Experimental)" },
		{ "IncludePath", "UserSettings/EnhancedInputUserSettings.h" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The Enhanced Input User Settings class is a place where you can put all of your Input Related settings\nthat you want your user to be able to change. Things like their key mappings, aim sensitivity, accessibility\nsettings, etc. This also provides a Registration point for Input Mappings Contexts (IMC) from possibly unloaded\nplugins (i.e. Game Feature Plugins). You can register your IMC from a Game Feature Action plugin here, and then\nhave access to all the key mappings available. This is very useful for building settings screens because you can\nnow access all the mappings in your game, even if the entire plugin isn't loaded yet.\n\nThe user settings are stored on each UEnhancedPlayerInput object, so each instance of the settings can represent\na single User or Local Player.\n\nTo customize this for your game, you can create a subclass of it and change the \"UserSettingsClass\" in the\nEnhanced Input Project Settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingsChanged_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingsApplied_MetaData[] = {
		{ "Category", "Enhanced Input|User Settings" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProfileIdentifier_MetaData[] = {
		{ "Comment", "/** The current key profile that is equipped by the user. */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The current key profile that is equipped by the user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedKeyProfiles_MetaData[] = {
		{ "Comment", "/**\n\x09 * All of the known Key Profiles for this user, including the currently active profile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "All of the known Key Profiles for this user, including the currently active profile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningLocalPlayer_MetaData[] = {
		{ "Comment", "/** The owning Local Player object of these settings */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "The owning Local Player object of these settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredMappingContexts_MetaData[] = {
		{ "Comment", "/**\n\x09 * Set of currently registered input mapping contexts that may not be currently\n\x09 * active on the user, but you want to track for creating a menu for key mappings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserSettings/EnhancedInputUserSettings.h" },
		{ "ToolTip", "Set of currently registered input mapping contexts that may not be currently\nactive on the user, but you want to track for creating a menu for key mappings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsApplied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentProfileIdentifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SavedKeyProfiles_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedKeyProfiles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SavedKeyProfiles;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningLocalPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredMappingContexts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RegisteredMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_ApplySettings, "ApplySettings" }, // 3264508728
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_AsyncSaveSettings, "AsyncSaveSettings" }, // 589085641
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_CreateNewKeyProfile, "CreateNewKeyProfile" }, // 1028252535
		{ &Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature, "EnhancedInputUserSettingsApplied__DelegateSignature" }, // 4285579896
		{ &Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature, "EnhancedInputUserSettingsChanged__DelegateSignature" }, // 2876203500
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_FindMappingsInRow, "FindMappingsInRow" }, // 965955095
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfile, "GetCurrentKeyProfile" }, // 1593695989
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier, "GetCurrentKeyProfileIdentifier" }, // 2362855579
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_GetKeyProfileWithIdentifier, "GetKeyProfileWithIdentifier" }, // 1693431959
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_IsMappingContextRegistered, "IsMappingContextRegistered" }, // 1115858456
		{ &Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature, "MappableKeyProfileChanged__DelegateSignature" }, // 1507640867
		{ &Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature, "MappingContextRegisteredWithSettings__DelegateSignature" }, // 4282257659
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_MapPlayerKey, "MapPlayerKey" }, // 926312096
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContext, "RegisterInputMappingContext" }, // 2298878636
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_RegisterInputMappingContexts, "RegisterInputMappingContexts" }, // 4011469057
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_ResetAllPlayerKeysInRow, "ResetAllPlayerKeysInRow" }, // 1586865126
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_ResetKeyProfileToDefault, "ResetKeyProfileToDefault" }, // 668354231
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_SaveSettings, "SaveSettings" }, // 3514551664
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_SetKeyProfile, "SetKeyProfile" }, // 1462241003
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_UnMapPlayerKey, "UnMapPlayerKey" }, // 1931941048
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContext, "UnregisterInputMappingContext" }, // 3252686565
		{ &Z_Construct_UFunction_UEnhancedInputUserSettings_UnregisterInputMappingContexts, "UnregisterInputMappingContexts" }, // 600815183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_OnSettingsChanged = { "OnSettingsChanged", nullptr, (EPropertyFlags)0x0010000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputUserSettings, OnSettingsChanged), Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingsChanged_MetaData), NewProp_OnSettingsChanged_MetaData) }; // 2876203500
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_OnSettingsApplied = { "OnSettingsApplied", nullptr, (EPropertyFlags)0x0010000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputUserSettings, OnSettingsApplied), Z_Construct_UDelegateFunction_UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingsApplied_MetaData), NewProp_OnSettingsApplied_MetaData) }; // 4285579896
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_CurrentProfileIdentifier = { "CurrentProfileIdentifier", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputUserSettings, CurrentProfileIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProfileIdentifier_MetaData), NewProp_CurrentProfileIdentifier_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_SavedKeyProfiles_ValueProp = { "SavedKeyProfiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_SavedKeyProfiles_Key_KeyProp = { "SavedKeyProfiles_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_SavedKeyProfiles = { "SavedKeyProfiles", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputUserSettings, SavedKeyProfiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedKeyProfiles_MetaData), NewProp_SavedKeyProfiles_MetaData) }; // 1298103297
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_OwningLocalPlayer = { "OwningLocalPlayer", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputUserSettings, OwningLocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningLocalPlayer_MetaData), NewProp_OwningLocalPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_RegisteredMappingContexts_ElementProp = { "RegisteredMappingContexts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_RegisteredMappingContexts = { "RegisteredMappingContexts", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputUserSettings, RegisteredMappingContexts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredMappingContexts_MetaData), NewProp_RegisteredMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_OnSettingsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_OnSettingsApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_CurrentProfileIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_SavedKeyProfiles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_SavedKeyProfiles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_SavedKeyProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_OwningLocalPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_RegisteredMappingContexts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputUserSettings_Statics::NewProp_RegisteredMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputUserSettings_Statics::ClassParams = {
	&UEnhancedInputUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnhancedInputUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputUserSettings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputUserSettings()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputUserSettings.OuterSingleton, Z_Construct_UClass_UEnhancedInputUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputUserSettings.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputUserSettings>()
{
	return UEnhancedInputUserSettings::StaticClass();
}
UEnhancedInputUserSettings::UEnhancedInputUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputUserSettings);
UEnhancedInputUserSettings::~UEnhancedInputUserSettings() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEnhancedInputUserSettings)
// End Class UEnhancedInputUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerMappableKeySlot_StaticEnum, TEXT("EPlayerMappableKeySlot"), &Z_Registration_Info_UEnum_EPlayerMappableKeySlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2567049235U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapPlayerKeyArgs::StaticStruct, Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics::NewStructOps, TEXT("MapPlayerKeyArgs"), &Z_Registration_Info_UScriptStruct_MapPlayerKeyArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapPlayerKeyArgs), 294279126U) },
		{ FPlayerKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics::NewStructOps, TEXT("PlayerKeyMapping"), &Z_Registration_Info_UScriptStruct_PlayerKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerKeyMapping), 295282626U) },
		{ FKeyMappingRow::StaticStruct, Z_Construct_UScriptStruct_FKeyMappingRow_Statics::NewStructOps, TEXT("KeyMappingRow"), &Z_Registration_Info_UScriptStruct_KeyMappingRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyMappingRow), 3484097074U) },
		{ FPlayerMappableKeyQueryOptions::StaticStruct, Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics::NewStructOps, TEXT("PlayerMappableKeyQueryOptions"), &Z_Registration_Info_UScriptStruct_PlayerMappableKeyQueryOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMappableKeyQueryOptions), 835598065U) },
		{ FPlayerMappableKeyProfileCreationArgs::StaticStruct, Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics::NewStructOps, TEXT("PlayerMappableKeyProfileCreationArgs"), &Z_Registration_Info_UScriptStruct_PlayerMappableKeyProfileCreationArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMappableKeyProfileCreationArgs), 1318223840U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile, UEnhancedPlayerMappableKeyProfile::StaticClass, TEXT("UEnhancedPlayerMappableKeyProfile"), &Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedPlayerMappableKeyProfile), 193803335U) },
		{ Z_Construct_UClass_UEnhancedInputUserSettings, UEnhancedInputUserSettings::StaticClass, TEXT("UEnhancedInputUserSettings"), &Z_Registration_Info_UClass_UEnhancedInputUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputUserSettings), 4276629179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_721155355(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
