// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueTypes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EGrammaticalGender
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrammaticalGender;
static UEnum* EGrammaticalGender_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGrammaticalGender.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGrammaticalGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalGender, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalGender"));
	}
	return Z_Registration_Info_UEnum_EGrammaticalGender.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EGrammaticalGender::Type>()
{
	return EGrammaticalGender_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EGrammaticalGender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Feminine.DisplayName", "Feminine" },
		{ "Feminine.Name", "EGrammaticalGender::Feminine" },
		{ "Masculine.DisplayName", "Masculine" },
		{ "Masculine.Name", "EGrammaticalGender::Masculine" },
		{ "Mixed.DisplayName", "Mixed" },
		{ "Mixed.Name", "EGrammaticalGender::Mixed" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "Neuter.DisplayName", "Neuter" },
		{ "Neuter.Name", "EGrammaticalGender::Neuter" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGrammaticalGender::Neuter", (int64)EGrammaticalGender::Neuter },
		{ "EGrammaticalGender::Masculine", (int64)EGrammaticalGender::Masculine },
		{ "EGrammaticalGender::Feminine", (int64)EGrammaticalGender::Feminine },
		{ "EGrammaticalGender::Mixed", (int64)EGrammaticalGender::Mixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EGrammaticalGender",
	"EGrammaticalGender::Type",
	Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender()
{
	if (!Z_Registration_Info_UEnum_EGrammaticalGender.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrammaticalGender.InnerSingleton, Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGrammaticalGender.InnerSingleton;
}
// End Enum EGrammaticalGender

// Begin Enum EGrammaticalNumber
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrammaticalNumber;
static UEnum* EGrammaticalNumber_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGrammaticalNumber.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGrammaticalNumber.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalNumber, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalNumber"));
	}
	return Z_Registration_Info_UEnum_EGrammaticalNumber.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EGrammaticalNumber::Type>()
{
	return EGrammaticalNumber_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "Plural.DisplayName", "Plural" },
		{ "Plural.Name", "EGrammaticalNumber::Plural" },
		{ "Singular.DisplayName", "Singular" },
		{ "Singular.Name", "EGrammaticalNumber::Singular" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGrammaticalNumber::Singular", (int64)EGrammaticalNumber::Singular },
		{ "EGrammaticalNumber::Plural", (int64)EGrammaticalNumber::Plural },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EGrammaticalNumber",
	"EGrammaticalNumber::Type",
	Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber()
{
	if (!Z_Registration_Info_UEnum_EGrammaticalNumber.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrammaticalNumber.InnerSingleton, Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGrammaticalNumber.InnerSingleton;
}
// End Enum EGrammaticalNumber

// Begin ScriptStruct FDialogueContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueContext;
class UScriptStruct* FDialogueContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DialogueContext"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueContext>()
{
	return FDialogueContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Category", "DialogueContext" },
		{ "Comment", "/** The person speaking the dialogue. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The person speaking the dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[] = {
		{ "Category", "DialogueContext" },
		{ "Comment", "/** The people being spoken to. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The people being spoken to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueContext, Speaker), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueContext, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targets_MetaData), NewProp_Targets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DialogueContext",
	Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers),
	sizeof(FDialogueContext),
	alignof(FDialogueContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueContext.InnerSingleton, Z_Construct_UScriptStruct_FDialogueContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueContext.InnerSingleton;
}
// End ScriptStruct FDialogueContext

// Begin ScriptStruct FDialogueWaveParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueWaveParameter;
class UScriptStruct* FDialogueWaveParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueWaveParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueWaveParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueWaveParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DialogueWaveParameter"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueWaveParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueWaveParameter>()
{
	return FDialogueWaveParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[] = {
		{ "Category", "DialogueWaveParameter" },
		{ "Comment", "/** The dialogue wave to play. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The dialogue wave to play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "Category", "DialogueWaveParameter" },
		{ "Comment", "/** The context to use for the dialogue wave. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The context to use for the dialogue wave." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueWaveParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueWaveParameter, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWave_MetaData), NewProp_DialogueWave_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueWaveParameter, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1415671134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DialogueWaveParameter",
	Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers),
	sizeof(FDialogueWaveParameter),
	alignof(FDialogueWaveParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueWaveParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueWaveParameter.InnerSingleton, Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueWaveParameter.InnerSingleton;
}
// End ScriptStruct FDialogueWaveParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGrammaticalGender_StaticEnum, TEXT("EGrammaticalGender"), &Z_Registration_Info_UEnum_EGrammaticalGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1979437957U) },
		{ EGrammaticalNumber_StaticEnum, TEXT("EGrammaticalNumber"), &Z_Registration_Info_UEnum_EGrammaticalNumber, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1514099662U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueContext::StaticStruct, Z_Construct_UScriptStruct_FDialogueContext_Statics::NewStructOps, TEXT("DialogueContext"), &Z_Registration_Info_UScriptStruct_DialogueContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueContext), 1415671134U) },
		{ FDialogueWaveParameter::StaticStruct, Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewStructOps, TEXT("DialogueWaveParameter"), &Z_Registration_Info_UScriptStruct_DialogueWaveParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueWaveParameter), 2807783347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_3694123136(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
