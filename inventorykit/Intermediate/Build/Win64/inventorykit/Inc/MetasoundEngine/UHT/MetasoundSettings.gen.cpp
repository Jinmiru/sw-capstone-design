// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEngine/Public/MetasoundSettings.h"
#include "MetasoundFrontend/Public/MetasoundFrontendDocument.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundQualityHelper();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundQualityHelper_NoRegister();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSettings();
METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSettings_NoRegister();
METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings();
METASOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundQualitySettings();
METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendClassName();
UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References

// Begin Enum EMetaSoundMessageLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaSoundMessageLevel;
static UEnum* EMetaSoundMessageLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("EMetaSoundMessageLevel"));
	}
	return Z_Registration_Info_UEnum_EMetaSoundMessageLevel.OuterSingleton;
}
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundMessageLevel>()
{
	return EMetaSoundMessageLevel_StaticEnum();
}
struct Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "EMetaSoundMessageLevel::Error" },
		{ "Info.Name", "EMetaSoundMessageLevel::Info" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "Warning.Name", "EMetaSoundMessageLevel::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetaSoundMessageLevel::Error", (int64)EMetaSoundMessageLevel::Error },
		{ "EMetaSoundMessageLevel::Warning", (int64)EMetaSoundMessageLevel::Warning },
		{ "EMetaSoundMessageLevel::Info", (int64)EMetaSoundMessageLevel::Info },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	"EMetaSoundMessageLevel",
	"EMetaSoundMessageLevel",
	Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel()
{
	if (!Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton, Z_Construct_UEnum_MetasoundEngine_EMetaSoundMessageLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetaSoundMessageLevel.InnerSingleton;
}
// End Enum EMetaSoundMessageLevel

// Begin ScriptStruct FDefaultMetaSoundAssetAutoUpdateSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings;
class UScriptStruct* FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("DefaultMetaSoundAssetAutoUpdateSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FDefaultMetaSoundAssetAutoUpdateSettings>()
{
	return FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaSound_MetaData[] = {
		{ "AllowedClasses", "/Script/MetasoundEngine.MetaSound, /Script/MetasoundEngine.MetaSoundSource" },
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** MetaSound to prevent from AutoUpdate. */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "MetaSound to prevent from AutoUpdate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetaSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultMetaSoundAssetAutoUpdateSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound = { "MetaSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultMetaSoundAssetAutoUpdateSettings, MetaSound), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaSound_MetaData), NewProp_MetaSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewProp_MetaSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"DefaultMetaSoundAssetAutoUpdateSettings",
	Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::PropPointers),
	sizeof(FDefaultMetaSoundAssetAutoUpdateSettings),
	alignof(FDefaultMetaSoundAssetAutoUpdateSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings.InnerSingleton;
}
// End ScriptStruct FDefaultMetaSoundAssetAutoUpdateSettings

// Begin Class UMetaSoundQualityHelper Function GetQualityList
struct Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics
{
	struct MetaSoundQualityHelper_eventGetQualityList_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Returns a list of quality settings to present to a combobox\n\x09* */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Returns a list of quality settings to present to a combobox" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MetaSoundQualityHelper_eventGetQualityList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetaSoundQualityHelper, nullptr, "GetQualityList", nullptr, nullptr, Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::MetaSoundQualityHelper_eventGetQualityList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::MetaSoundQualityHelper_eventGetQualityList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMetaSoundQualityHelper::execGetQualityList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UMetaSoundQualityHelper::GetQualityList();
	P_NATIVE_END;
}
// End Class UMetaSoundQualityHelper Function GetQualityList

// Begin Class UMetaSoundQualityHelper
void UMetaSoundQualityHelper::StaticRegisterNativesUMetaSoundQualityHelper()
{
	UClass* Class = UMetaSoundQualityHelper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetQualityList", &UMetaSoundQualityHelper::execGetQualityList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundQualityHelper);
UClass* Z_Construct_UClass_UMetaSoundQualityHelper_NoRegister()
{
	return UMetaSoundQualityHelper::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundQualityHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundSettings.h" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetaSoundQualityHelper_GetQualityList, "GetQualityList" }, // 1777837658
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundQualityHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMetaSoundQualityHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundQualityHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundQualityHelper_Statics::ClassParams = {
	&UMetaSoundQualityHelper::StaticClass,
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
	0x011000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundQualityHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundQualityHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundQualityHelper()
{
	if (!Z_Registration_Info_UClass_UMetaSoundQualityHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundQualityHelper.OuterSingleton, Z_Construct_UClass_UMetaSoundQualityHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundQualityHelper.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundQualityHelper>()
{
	return UMetaSoundQualityHelper::StaticClass();
}
UMetaSoundQualityHelper::UMetaSoundQualityHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundQualityHelper);
UMetaSoundQualityHelper::~UMetaSoundQualityHelper() {}
// End Class UMetaSoundQualityHelper

// Begin ScriptStruct FMetaSoundQualitySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings;
class UScriptStruct* FMetaSoundQualitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundQualitySettings, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("MetaSoundQualitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<FMetaSoundQualitySettings>()
{
	return FMetaSoundQualitySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[] = {
		{ "Comment", "/** A hidden GUID that will be generated once when adding a new entry. This prevents orphaning of renamed entries. **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "A hidden GUID that will be generated once when adding a new entry. This prevents orphaning of renamed entries. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Quality" },
		{ "Comment", "/** Name of this quality setting. This will appear in the quality dropdown list.\n\x09\x09The names should be unique and adequately describe the Entry. \"High\", \"Low\" etc. **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Name of this quality setting. This will appear in the quality dropdown list.\n              The names should be unique and adequately describe the Entry. \"High\", \"Low\" etc. *" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMax", "96000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sample Rate (in Hz). NOTE: A Zero value will have no effect and use the Device Rate. **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Sample Rate (in Hz). NOTE: A Zero value will have no effect and use the Device Rate. *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockRate_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Block Rate (in Hz). NOTE: A Zero value will have no effect and use the Default (100)  **/" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Block Rate (in Hz). NOTE: A Zero value will have no effect and use the Default (100)  *" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetaSoundQualitySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueId_MetaData), NewProp_UniqueId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, SampleRate), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleRate_MetaData), NewProp_SampleRate_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_BlockRate = { "BlockRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetaSoundQualitySettings, BlockRate), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockRate_MetaData), NewProp_BlockRate_MetaData) }; // 50753708
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_UniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_Name,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewProp_BlockRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	nullptr,
	&NewStructOps,
	"MetaSoundQualitySettings",
	Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::PropPointers),
	sizeof(FMetaSoundQualitySettings),
	alignof(FMetaSoundQualitySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetaSoundQualitySettings()
{
	if (!Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.InnerSingleton, Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings.InnerSingleton;
}
// End ScriptStruct FMetaSoundQualitySettings

// Begin Class UMetaSoundSettings
void UMetaSoundSettings::StaticRegisterNativesUMetaSoundSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSettings);
UClass* Z_Construct_UClass_UMetaSoundSettings_NoRegister()
{
	return UMetaSoundSettings::StaticClass();
}
struct Z_Construct_UClass_UMetaSoundSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "MetaSounds" },
		{ "IncludePath", "MetasoundSettings.h" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateEnabled_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** If true, AutoUpdate is enabled, increasing load times.  If false, skips AutoUpdate on load, but can result in MetaSounds failing to load, \n\x09  * register, and execute if interface differences are present. */" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "If true, AutoUpdate is enabled, increasing load times.  If false, skips AutoUpdate on load, but can result in MetaSounds failing to load,\nregister, and execute if interface differences are present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoUpdateDenylist_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** List of native MetaSound classes whose node references should not be AutoUpdated. */" },
		{ "DisplayName", "DenyList" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "List of native MetaSound classes whose node references should not be AutoUpdated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoUpdateAssetDenylist_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** List of MetaSound assets whose node references should not be AutoUpdated. */" },
		{ "DisplayName", "Asset DenyList" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "List of MetaSound assets whose node references should not be AutoUpdated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData[] = {
		{ "Category", "AutoUpdate" },
		{ "Comment", "/** If true, warnings will be logged if updating a node results in existing connections being discarded. */" },
		{ "DisplayName", "Log Warning on Dropped Connection" },
		{ "EditCondition", "bAutoUpdateEnabled" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "If true, warnings will be logged if updating a node results in existing connections being discarded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToRegister_MetaData[] = {
		{ "Category", "Registration" },
		{ "Comment", "/** Directories to scan & automatically register MetaSound post initial asset scan on engine start-up.\n\x09  * May speed up subsequent calls to playback MetaSounds post asset scan but increases application load time.\n\x09  * See 'MetaSoundAssetSubsystem::RegisterAssetClassesInDirectories' to dynamically register or \n\x09  * 'MetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories' to unregister asset classes.\n\x09  */" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Directories to scan & automatically register MetaSound post initial asset scan on engine start-up.\nMay speed up subsequent calls to playback MetaSounds post asset scan but increases application load time.\nSee 'MetaSoundAssetSubsystem::RegisterAssetClassesInDirectories' to dynamically register or\n'MetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories' to unregister asset classes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DenyListCacheChangeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualitySettings_MetaData[] = {
		{ "Category", "Quality" },
		{ "Comment", "/** Array of possible quality settings for Metasounds to chose from */// NOTE: Ideally this would be wrapped with WITH_EDITORONLY_DATA, but standalone \"-game\" requires\n// it to exist. Access is limited to the accessor above, which enforces it correctly.\n" },
		{ "ModuleRelativePath", "Public/MetasoundSettings.h" },
		{ "ToolTip", "Array of possible quality settings for Metasounds to chose from // NOTE: Ideally this would be wrapped with WITH_EDITORONLY_DATA, but standalone \"-game\" requires\n// it to exist. Access is limited to the accessor above, which enforces it correctly." },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoUpdateEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoUpdateDenylist_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoUpdateDenylist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoUpdateAssetDenylist_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoUpdateAssetDenylist;
	static void NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateLogWarningOnDroppedConnection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesToRegister_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToRegister;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DenyListCacheChangeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualitySettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QualitySettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_SetBit(void* Obj)
{
	((UMetaSoundSettings*)Obj)->bAutoUpdateEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled = { "bAutoUpdateEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundSettings), &Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateEnabled_MetaData), NewProp_bAutoUpdateEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_Inner = { "AutoUpdateDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetasoundFrontendClassName, METADATA_PARAMS(0, nullptr) }; // 2449018862
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist = { "AutoUpdateDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, AutoUpdateDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoUpdateDenylist_MetaData), NewProp_AutoUpdateDenylist_MetaData) }; // 2449018862
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_Inner = { "AutoUpdateAssetDenylist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings, METADATA_PARAMS(0, nullptr) }; // 3724857141
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist = { "AutoUpdateAssetDenylist", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, AutoUpdateAssetDenylist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoUpdateAssetDenylist_MetaData), NewProp_AutoUpdateAssetDenylist_MetaData) }; // 3724857141
void Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit(void* Obj)
{
	((UMetaSoundSettings*)Obj)->bAutoUpdateLogWarningOnDroppedConnection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection = { "bAutoUpdateLogWarningOnDroppedConnection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMetaSoundSettings), &Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData), NewProp_bAutoUpdateLogWarningOnDroppedConnection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_Inner = { "DirectoriesToRegister", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister = { "DirectoriesToRegister", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, DirectoriesToRegister), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoriesToRegister_MetaData), NewProp_DirectoriesToRegister_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID = { "DenyListCacheChangeID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, DenyListCacheChangeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DenyListCacheChangeID_MetaData), NewProp_DenyListCacheChangeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings_Inner = { "QualitySettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetaSoundQualitySettings, METADATA_PARAMS(0, nullptr) }; // 4069111974
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings = { "QualitySettings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaSoundSettings, QualitySettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualitySettings_MetaData), NewProp_QualitySettings_MetaData) }; // 4069111974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateDenylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_AutoUpdateAssetDenylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_bAutoUpdateLogWarningOnDroppedConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DirectoriesToRegister,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_DenyListCacheChangeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundSettings_Statics::NewProp_QualitySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMetaSoundSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSettings_Statics::ClassParams = {
	&UMetaSoundSettings::StaticClass,
	"MetaSound",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaSoundSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMetaSoundSettings()
{
	if (!Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton, Z_Construct_UClass_UMetaSoundSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMetaSoundSettings.OuterSingleton;
}
template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundSettings>()
{
	return UMetaSoundSettings::StaticClass();
}
UMetaSoundSettings::UMetaSoundSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSettings);
UMetaSoundSettings::~UMetaSoundSettings() {}
// End Class UMetaSoundSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetaSoundMessageLevel_StaticEnum, TEXT("EMetaSoundMessageLevel"), &Z_Registration_Info_UEnum_EMetaSoundMessageLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3163770845U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDefaultMetaSoundAssetAutoUpdateSettings::StaticStruct, Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics::NewStructOps, TEXT("DefaultMetaSoundAssetAutoUpdateSettings"), &Z_Registration_Info_UScriptStruct_DefaultMetaSoundAssetAutoUpdateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultMetaSoundAssetAutoUpdateSettings), 3724857141U) },
		{ FMetaSoundQualitySettings::StaticStruct, Z_Construct_UScriptStruct_FMetaSoundQualitySettings_Statics::NewStructOps, TEXT("MetaSoundQualitySettings"), &Z_Registration_Info_UScriptStruct_MetaSoundQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetaSoundQualitySettings), 4069111974U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundQualityHelper, UMetaSoundQualityHelper::StaticClass, TEXT("UMetaSoundQualityHelper"), &Z_Registration_Info_UClass_UMetaSoundQualityHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundQualityHelper), 1903133799U) },
		{ Z_Construct_UClass_UMetaSoundSettings, UMetaSoundSettings::StaticClass, TEXT("UMetaSoundSettings"), &Z_Registration_Info_UClass_UMetaSoundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSettings), 2458170243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_982784500(TEXT("/Script/MetasoundEngine"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
