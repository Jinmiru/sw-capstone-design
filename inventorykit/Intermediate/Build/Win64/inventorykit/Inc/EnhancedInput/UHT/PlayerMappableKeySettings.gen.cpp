// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/PlayerMappableKeySettings.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMappableKeySettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References

// Begin Class UPlayerMappableKeySettings Function GetKnownMappingNames
#if WITH_EDITOR
struct Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics
{
	struct PlayerMappableKeySettings_eventGetKnownMappingNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Get the known mapping names that are current in use. This is a helper function if you want to use a \"GetOptions\" metadata on a UPROPERTY.\n\x09 * For example, the following will display a little drop down menu to select from all current mapping names:\n\x09 *\n\x09 *  UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions=\"EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames\"))\n\x09 *  FName MappingName;\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "Get the known mapping names that are current in use. This is a helper function if you want to use a \"GetOptions\" metadata on a UPROPERTY.\nFor example, the following will display a little drop down menu to select from all current mapping names:\n\n UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(GetOptions=\"EnhancedInput.PlayerMappableKeySettings.GetKnownMappingNames\"))\n FName MappingName;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerMappableKeySettings_eventGetKnownMappingNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerMappableKeySettings, nullptr, "GetKnownMappingNames", nullptr, nullptr, Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::PlayerMappableKeySettings_eventGetKnownMappingNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::PlayerMappableKeySettings_eventGetKnownMappingNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UPlayerMappableKeySettings::execGetKnownMappingNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UPlayerMappableKeySettings::GetKnownMappingNames();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UPlayerMappableKeySettings Function GetKnownMappingNames

// Begin Class UPlayerMappableKeySettings
void UPlayerMappableKeySettings::StaticRegisterNativesUPlayerMappableKeySettings()
{
#if WITH_EDITOR
	UClass* Class = UPlayerMappableKeySettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetKnownMappingNames", &UPlayerMappableKeySettings::execGetKnownMappingNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMappableKeySettings);
UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister()
{
	return UPlayerMappableKeySettings::StaticClass();
}
struct Z_Construct_UClass_UPlayerMappableKeySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Hold setting information of an Action Input or a Action Key Mapping for setting screen and save purposes.\n* Experimental: Do not count on long term support for this structure.\n*/" },
		{ "DisplayName", "Player Mappable Key Settings (Experimental)" },
		{ "IncludePath", "PlayerMappableKeySettings.h" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "Hold setting information of an Action Input or a Action Key Mapping for setting screen and save purposes.\nExperimental: Do not count on long term support for this structure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Metadata that can used to store any other related items to this key mapping such as icons, ability assets, etc. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "Metadata that can used to store any other related items to this key mapping such as icons, ability assets, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A unique name for this player mapping to be saved with. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "A unique name for this player mapping to be saved with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The localized display name of this key mapping. Use this when displaying the mappings to a user. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "The localized display name of this key mapping. Use this when displaying the mappings to a user." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayCategory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The category that this player mapping is in */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "The category that this player mapping is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedKeyProfiles_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09* If this key mapping should only be added when a specific key profile is equipped, then set those here.\n\x09* \n\x09* If this is empty, then the key mapping will not be filtered out based on the current profile.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "If this key mapping should only be added when a specific key profile is equipped, then set those here.\n\nIf this is empty, then the key mapping will not be filtered out based on the current profile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedKeyProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerMappableKeySettings_GetKnownMappingNames, "GetKnownMappingNames" }, // 968684167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMappableKeySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMappableKeySettings, Metadata), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMappableKeySettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMappableKeySettings, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayCategory = { "DisplayCategory", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMappableKeySettings, DisplayCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayCategory_MetaData), NewProp_DisplayCategory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_SupportedKeyProfiles = { "SupportedKeyProfiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerMappableKeySettings, SupportedKeyProfiles), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedKeyProfiles_MetaData), NewProp_SupportedKeyProfiles_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMappableKeySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_SupportedKeyProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerMappableKeySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::ClassParams = {
	&UPlayerMappableKeySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UPlayerMappableKeySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMappableKeySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMappableKeySettings()
{
	if (!Z_Registration_Info_UClass_UPlayerMappableKeySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMappableKeySettings.OuterSingleton, Z_Construct_UClass_UPlayerMappableKeySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMappableKeySettings.OuterSingleton;
}
template<> ENHANCEDINPUT_API UClass* StaticClass<UPlayerMappableKeySettings>()
{
	return UPlayerMappableKeySettings::StaticClass();
}
UPlayerMappableKeySettings::UPlayerMappableKeySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMappableKeySettings);
UPlayerMappableKeySettings::~UPlayerMappableKeySettings() {}
// End Class UPlayerMappableKeySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMappableKeySettings, UPlayerMappableKeySettings::StaticClass, TEXT("UPlayerMappableKeySettings"), &Z_Registration_Info_UClass_UPlayerMappableKeySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMappableKeySettings), 247752816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_1361757572(TEXT("/Script/EnhancedInput"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
