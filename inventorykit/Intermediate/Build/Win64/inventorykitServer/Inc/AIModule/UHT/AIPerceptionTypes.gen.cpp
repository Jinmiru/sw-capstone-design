// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionTypes() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EAISenseNotifyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAISenseNotifyType;
static UEnum* EAISenseNotifyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAISenseNotifyType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EAISenseNotifyType"));
	}
	return Z_Registration_Info_UEnum_EAISenseNotifyType.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EAISenseNotifyType>()
{
	return EAISenseNotifyType_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
		{ "OnEveryPerception.Comment", "/** Continuous update whenever target is perceived. */" },
		{ "OnEveryPerception.Name", "EAISenseNotifyType::OnEveryPerception" },
		{ "OnEveryPerception.ToolTip", "Continuous update whenever target is perceived." },
		{ "OnPerceptionChange.Comment", "/** From \"visible\" to \"not visible\" or vice versa. */" },
		{ "OnPerceptionChange.Name", "EAISenseNotifyType::OnPerceptionChange" },
		{ "OnPerceptionChange.ToolTip", "From \"visible\" to \"not visible\" or vice versa." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAISenseNotifyType::OnEveryPerception", (int64)EAISenseNotifyType::OnEveryPerception },
		{ "EAISenseNotifyType::OnPerceptionChange", (int64)EAISenseNotifyType::OnPerceptionChange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EAISenseNotifyType",
	"EAISenseNotifyType",
	Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType()
{
	if (!Z_Registration_Info_UEnum_EAISenseNotifyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAISenseNotifyType.InnerSingleton, Z_Construct_UEnum_AIModule_EAISenseNotifyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAISenseNotifyType.InnerSingleton;
}
// End Enum EAISenseNotifyType

// Begin ScriptStruct FAIStimulus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIStimulus;
class UScriptStruct* FAIStimulus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIStimulus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIStimulus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIStimulus, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIStimulus"));
	}
	return Z_Registration_Info_UScriptStruct_AIStimulus.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIStimulus>()
{
	return FAIStimulus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIStimulus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationAge_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StimulusLocation_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiverLocation_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccessfullySensed_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Age;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpirationAge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StimulusLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReceiverLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_bSuccessfullySensed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessfullySensed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIStimulus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIStimulus, Age), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Age_MetaData), NewProp_Age_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ExpirationAge = { "ExpirationAge", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIStimulus, ExpirationAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationAge_MetaData), NewProp_ExpirationAge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIStimulus, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_StimulusLocation = { "StimulusLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIStimulus, StimulusLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StimulusLocation_MetaData), NewProp_StimulusLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ReceiverLocation = { "ReceiverLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIStimulus, ReceiverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiverLocation_MetaData), NewProp_ReceiverLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIStimulus, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
void Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_SetBit(void* Obj)
{
	((FAIStimulus*)Obj)->bSuccessfullySensed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed = { "bSuccessfullySensed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAIStimulus), &Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccessfullySensed_MetaData), NewProp_bSuccessfullySensed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIStimulus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Age,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ExpirationAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_StimulusLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ReceiverLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIStimulus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AIStimulus",
	Z_Construct_UScriptStruct_FAIStimulus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::PropPointers),
	sizeof(FAIStimulus),
	alignof(FAIStimulus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIStimulus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus()
{
	if (!Z_Registration_Info_UScriptStruct_AIStimulus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIStimulus.InnerSingleton, Z_Construct_UScriptStruct_FAIStimulus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIStimulus.InnerSingleton;
}
// End ScriptStruct FAIStimulus

// Begin ScriptStruct FAISenseAffiliationFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter;
class UScriptStruct* FAISenseAffiliationFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISenseAffiliationFilter, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AISenseAffiliationFilter"));
	}
	return Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAISenseAffiliationFilter>()
{
	return FAISenseAffiliationFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectEnemies_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectNeutrals_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectFriendlies_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDetectEnemies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectEnemies;
	static void NewProp_bDetectNeutrals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectNeutrals;
	static void NewProp_bDetectFriendlies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectFriendlies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISenseAffiliationFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_SetBit(void* Obj)
{
	((FAISenseAffiliationFilter*)Obj)->bDetectEnemies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies = { "bDetectEnemies", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAISenseAffiliationFilter), &Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectEnemies_MetaData), NewProp_bDetectEnemies_MetaData) };
void Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_SetBit(void* Obj)
{
	((FAISenseAffiliationFilter*)Obj)->bDetectNeutrals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals = { "bDetectNeutrals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAISenseAffiliationFilter), &Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectNeutrals_MetaData), NewProp_bDetectNeutrals_MetaData) };
void Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_SetBit(void* Obj)
{
	((FAISenseAffiliationFilter*)Obj)->bDetectFriendlies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies = { "bDetectFriendlies", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAISenseAffiliationFilter), &Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectFriendlies_MetaData), NewProp_bDetectFriendlies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AISenseAffiliationFilter",
	Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::PropPointers),
	sizeof(FAISenseAffiliationFilter),
	alignof(FAISenseAffiliationFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter()
{
	if (!Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter.InnerSingleton, Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter.InnerSingleton;
}
// End ScriptStruct FAISenseAffiliationFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAISenseNotifyType_StaticEnum, TEXT("EAISenseNotifyType"), &Z_Registration_Info_UEnum_EAISenseNotifyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3081276004U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIStimulus::StaticStruct, Z_Construct_UScriptStruct_FAIStimulus_Statics::NewStructOps, TEXT("AIStimulus"), &Z_Registration_Info_UScriptStruct_AIStimulus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIStimulus), 177100813U) },
		{ FAISenseAffiliationFilter::StaticStruct, Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewStructOps, TEXT("AISenseAffiliationFilter"), &Z_Registration_Info_UScriptStruct_AISenseAffiliationFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISenseAffiliationFilter), 1287263908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_3601480799(TEXT("/Script/AIModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
