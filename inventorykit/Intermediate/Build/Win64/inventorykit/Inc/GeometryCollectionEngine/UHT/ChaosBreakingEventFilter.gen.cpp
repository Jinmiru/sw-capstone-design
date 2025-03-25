// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/GeometryCollectionEngine/Public/ChaosBreakingEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosBreakingEventFilter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData();
GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References

// Begin ScriptStruct FChaosBreakingEventData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosBreakingEventData;
class UScriptStruct* FChaosBreakingEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakingEventData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosBreakingEventData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosBreakingEventData>()
{
	return FChaosBreakingEventData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A breaking event data structure. \n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "A breaking event data structure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Location of the breaking event (centroid)\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "Location of the breaking event (centroid)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The velocity of the breaking event\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The velocity of the breaking event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The mass of the breaking event\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The mass of the breaking event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakingEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventData, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"ChaosBreakingEventData",
	Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers),
	sizeof(FChaosBreakingEventData),
	alignof(FChaosBreakingEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.InnerSingleton, Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakingEventData.InnerSingleton;
}
// End ScriptStruct FChaosBreakingEventData

// Begin Enum EChaosBreakingSortMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosBreakingSortMethod;
static UEnum* EChaosBreakingSortMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosBreakingSortMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosBreakingSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosBreakingSortMethod"));
	}
	return Z_Registration_Info_UEnum_EChaosBreakingSortMethod.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosBreakingSortMethod>()
{
	return EChaosBreakingSortMethod_StaticEnum();
}
struct Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Enumeration defining how to sort breaking results\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EChaosBreakingSortMethod::Count" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "SortByHighestMass.Name", "EChaosBreakingSortMethod::SortByHighestMass" },
		{ "SortByHighestSpeed.Name", "EChaosBreakingSortMethod::SortByHighestSpeed" },
		{ "SortByNearestFirst.Name", "EChaosBreakingSortMethod::SortByNearestFirst" },
		{ "SortNone.Name", "EChaosBreakingSortMethod::SortNone" },
		{ "ToolTip", "Enumeration defining how to sort breaking results" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosBreakingSortMethod::SortNone", (int64)EChaosBreakingSortMethod::SortNone },
		{ "EChaosBreakingSortMethod::SortByHighestMass", (int64)EChaosBreakingSortMethod::SortByHighestMass },
		{ "EChaosBreakingSortMethod::SortByHighestSpeed", (int64)EChaosBreakingSortMethod::SortByHighestSpeed },
		{ "EChaosBreakingSortMethod::SortByNearestFirst", (int64)EChaosBreakingSortMethod::SortByNearestFirst },
		{ "EChaosBreakingSortMethod::Count", (int64)EChaosBreakingSortMethod::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	"EChaosBreakingSortMethod",
	"EChaosBreakingSortMethod",
	Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod()
{
	if (!Z_Registration_Info_UEnum_EChaosBreakingSortMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosBreakingSortMethod.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosBreakingSortMethod.InnerSingleton;
}
// End Enum EChaosBreakingSortMethod

// Begin ScriptStruct FChaosBreakingEventRequestSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings;
class UScriptStruct* FChaosBreakingEventRequestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosBreakingEventRequestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosBreakingEventRequestSettings>()
{
	return FChaosBreakingEventRequestSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Settings used to refine breaking event requests\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "Settings used to refine breaking event requests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum breaking radius threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum breaking radius threshold for the results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum speed threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum speed threshold for the results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum mass threshold for the results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the breaking events. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The method used to sort the breaking events." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfResults;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakingEventRequestSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults = { "MaxNumberOfResults", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MaxNumberOfResults), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfResults_MetaData), NewProp_MaxNumberOfResults_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRadius_MetaData), NewProp_MinRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMass_MetaData), NewProp_MinMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortMethod_MetaData), NewProp_SortMethod_MetaData) }; // 3259689623
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	nullptr,
	&NewStructOps,
	"ChaosBreakingEventRequestSettings",
	Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers),
	sizeof(FChaosBreakingEventRequestSettings),
	alignof(FChaosBreakingEventRequestSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.InnerSingleton, Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings.InnerSingleton;
}
// End ScriptStruct FChaosBreakingEventRequestSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosBreakingSortMethod_StaticEnum, TEXT("EChaosBreakingSortMethod"), &Z_Registration_Info_UEnum_EChaosBreakingSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3259689623U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosBreakingEventData::StaticStruct, Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewStructOps, TEXT("ChaosBreakingEventData"), &Z_Registration_Info_UScriptStruct_ChaosBreakingEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosBreakingEventData), 3805912913U) },
		{ FChaosBreakingEventRequestSettings::StaticStruct, Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewStructOps, TEXT("ChaosBreakingEventRequestSettings"), &Z_Registration_Info_UScriptStruct_ChaosBreakingEventRequestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosBreakingEventRequestSettings), 501564580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_314992639(TEXT("/Script/GeometryCollectionEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
