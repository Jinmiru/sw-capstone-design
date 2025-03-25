// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/AutomationController/Public/IAutomationReport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAutomationReport() {}

// Begin Cross Module References
AUTOMATIONCONTROLLER_API UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType();
AUTOMATIONCONTROLLER_API UEnum* Z_Construct_UEnum_AutomationController_EComparisonFileTypes();
AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References

// Begin Enum EAutomationArtifactType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutomationArtifactType;
static UEnum* EAutomationArtifactType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationArtifactType, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("EAutomationArtifactType"));
	}
	return Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UEnum* StaticEnum<EAutomationArtifactType>()
{
	return EAutomationArtifactType_StaticEnum();
}
struct Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comparison.Name", "EAutomationArtifactType::Comparison" },
		{ "Image.Name", "EAutomationArtifactType::Image" },
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
		{ "None.Name", "EAutomationArtifactType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutomationArtifactType::None", (int64)EAutomationArtifactType::None },
		{ "EAutomationArtifactType::Image", (int64)EAutomationArtifactType::Image },
		{ "EAutomationArtifactType::Comparison", (int64)EAutomationArtifactType::Comparison },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	"EAutomationArtifactType",
	"EAutomationArtifactType",
	Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutomationController_EAutomationArtifactType()
{
	if (!Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton, Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton;
}
// End Enum EAutomationArtifactType

// Begin Enum EComparisonFileTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComparisonFileTypes;
static UEnum* EComparisonFileTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EComparisonFileTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EComparisonFileTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutomationController_EComparisonFileTypes, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("EComparisonFileTypes"));
	}
	return Z_Registration_Info_UEnum_EComparisonFileTypes.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UEnum* StaticEnum<EComparisonFileTypes>()
{
	return EComparisonFileTypes_StaticEnum();
}
struct Z_Construct_UEnum_AutomationController_EComparisonFileTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Approved.Name", "EComparisonFileTypes::Approved" },
		{ "Difference.Name", "EComparisonFileTypes::Difference" },
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
		{ "Unapproved.Name", "EComparisonFileTypes::Unapproved" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EComparisonFileTypes::Unapproved", (int64)EComparisonFileTypes::Unapproved },
		{ "EComparisonFileTypes::Approved", (int64)EComparisonFileTypes::Approved },
		{ "EComparisonFileTypes::Difference", (int64)EComparisonFileTypes::Difference },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutomationController_EComparisonFileTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	"EComparisonFileTypes",
	"EComparisonFileTypes",
	Z_Construct_UEnum_AutomationController_EComparisonFileTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationController_EComparisonFileTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationController_EComparisonFileTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AutomationController_EComparisonFileTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AutomationController_EComparisonFileTypes()
{
	if (!Z_Registration_Info_UEnum_EComparisonFileTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComparisonFileTypes.InnerSingleton, Z_Construct_UEnum_AutomationController_EComparisonFileTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EComparisonFileTypes.InnerSingleton;
}
// End Enum EComparisonFileTypes

// Begin ScriptStruct FAutomationArtifact
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationArtifact;
class UScriptStruct* FAutomationArtifact::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationArtifact.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationArtifact.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationArtifact, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomationArtifact"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationArtifact.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomationArtifact>()
{
	return FAutomationArtifact::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAutomationArtifact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAutomationReport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Files_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Files_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Files;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationArtifact>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationArtifact, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationArtifact, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationArtifact, Type), Z_Construct_UEnum_AutomationController_EAutomationArtifactType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2777619843
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_ValueProp = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp = { "Files_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_AutomationController_EComparisonFileTypes, METADATA_PARAMS(0, nullptr) }; // 875529539
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutomationArtifact, Files), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Files_MetaData), NewProp_Files_MetaData) }; // 875529539
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewProp_Files,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationArtifact_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	nullptr,
	&NewStructOps,
	"AutomationArtifact",
	Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::PropPointers),
	sizeof(FAutomationArtifact),
	alignof(FAutomationArtifact),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutomationArtifact_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAutomationArtifact()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationArtifact.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationArtifact.InnerSingleton, Z_Construct_UScriptStruct_FAutomationArtifact_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AutomationArtifact.InnerSingleton;
}
// End ScriptStruct FAutomationArtifact

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAutomationArtifactType_StaticEnum, TEXT("EAutomationArtifactType"), &Z_Registration_Info_UEnum_EAutomationArtifactType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2777619843U) },
		{ EComparisonFileTypes_StaticEnum, TEXT("EComparisonFileTypes"), &Z_Registration_Info_UEnum_EComparisonFileTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 875529539U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAutomationArtifact::StaticStruct, Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewStructOps, TEXT("AutomationArtifact"), &Z_Registration_Info_UScriptStruct_AutomationArtifact, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationArtifact), 853363158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_4105071309(TEXT("/Script/AutomationController"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
