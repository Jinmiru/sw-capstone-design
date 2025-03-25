// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocationServicesBPLibrary/Classes/LocationServicesBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServices();
LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServices_NoRegister();
LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister();
LOCATIONSERVICESBPLIBRARY_API UEnum* Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy();
LOCATIONSERVICESBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature();
LOCATIONSERVICESBPLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FLocationServicesData();
UPackage* Z_Construct_UPackage__Script_LocationServicesBPLibrary();
// End Cross Module References

// Begin Enum ELocationAccuracy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocationAccuracy;
static UEnum* ELocationAccuracy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy, (UObject*)Z_Construct_UPackage__Script_LocationServicesBPLibrary(), TEXT("ELocationAccuracy"));
	}
	return Z_Registration_Info_UEnum_ELocationAccuracy.OuterSingleton;
}
template<> LOCATIONSERVICESBPLIBRARY_API UEnum* StaticEnum<ELocationAccuracy>()
{
	return ELocationAccuracy_StaticEnum();
}
struct Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nEnum used to determine what accuracy the Location Services should be run with. Based off the iOS kCLLocationAccuracy\nenums since those were the most restrictive (but convienently also had descriptive names)\n*/" },
		{ "LA_Best.DisplayName", "Best" },
		{ "LA_Best.Name", "ELocationAccuracy::LA_Best" },
		{ "LA_HundredMeters.DisplayName", "One Hundred Meters" },
		{ "LA_HundredMeters.Name", "ELocationAccuracy::LA_HundredMeters" },
		{ "LA_Navigation.DisplayName", "Best for Navigation" },
		{ "LA_Navigation.Name", "ELocationAccuracy::LA_Navigation" },
		{ "LA_OneKilometer.DisplayName", "One Kilometer" },
		{ "LA_OneKilometer.Name", "ELocationAccuracy::LA_OneKilometer" },
		{ "LA_TenMeters.DisplayName", "Ten Meters" },
		{ "LA_TenMeters.Name", "ELocationAccuracy::LA_TenMeters" },
		{ "LA_ThreeKilometers.DisplayName", "Three Kilometers" },
		{ "LA_ThreeKilometers.Name", "ELocationAccuracy::LA_ThreeKilometers" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Enum used to determine what accuracy the Location Services should be run with. Based off the iOS kCLLocationAccuracy\nenums since those were the most restrictive (but convienently also had descriptive names)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocationAccuracy::LA_ThreeKilometers", (int64)ELocationAccuracy::LA_ThreeKilometers },
		{ "ELocationAccuracy::LA_OneKilometer", (int64)ELocationAccuracy::LA_OneKilometer },
		{ "ELocationAccuracy::LA_HundredMeters", (int64)ELocationAccuracy::LA_HundredMeters },
		{ "ELocationAccuracy::LA_TenMeters", (int64)ELocationAccuracy::LA_TenMeters },
		{ "ELocationAccuracy::LA_Best", (int64)ELocationAccuracy::LA_Best },
		{ "ELocationAccuracy::LA_Navigation", (int64)ELocationAccuracy::LA_Navigation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
	nullptr,
	"ELocationAccuracy",
	"ELocationAccuracy",
	Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy()
{
	if (!Z_Registration_Info_UEnum_ELocationAccuracy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocationAccuracy.InnerSingleton, Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocationAccuracy.InnerSingleton;
}
// End Enum ELocationAccuracy

// Begin ScriptStruct FLocationServicesData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocationServicesData;
class UScriptStruct* FLocationServicesData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocationServicesData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocationServicesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationServicesData, (UObject*)Z_Construct_UPackage__Script_LocationServicesBPLibrary(), TEXT("LocationServicesData"));
	}
	return Z_Registration_Info_UScriptStruct_LocationServicesData.OuterSingleton;
}
template<> LOCATIONSERVICESBPLIBRARY_API UScriptStruct* StaticStruct<FLocationServicesData>()
{
	return FLocationServicesData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocationServicesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nStruct to hold relevant location data retrieved from the mobile implementation's Location Service\n*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Struct to hold relevant location data retrieved from the mobile implementation's Location Service" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* Timestamp from when this location data was taken (UTC time in milliseconds since 1 January 1970) */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Timestamp from when this location data was taken (UTC time in milliseconds since 1 January 1970)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAccuracy_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* Estimated horizontal (Android: overall) accuracy of the result, in meters */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Estimated horizontal (Android: overall) accuracy of the result, in meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAccuracy_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* Estimated accuracy of the result, in meters (iOS only) */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Estimated accuracy of the result, in meters (iOS only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[] = {
		{ "Category", "Location Data Struct" },
		{ "Comment", "/* In meters, if provided with the result */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "In meters, if provided with the result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalAccuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalAccuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Altitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationServicesData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationServicesData, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationServicesData, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Longitude_MetaData), NewProp_Longitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationServicesData, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Latitude_MetaData), NewProp_Latitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_HorizontalAccuracy = { "HorizontalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationServicesData, HorizontalAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAccuracy_MetaData), NewProp_HorizontalAccuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_VerticalAccuracy = { "VerticalAccuracy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationServicesData, VerticalAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAccuracy_MetaData), NewProp_VerticalAccuracy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationServicesData, Altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Altitude_MetaData), NewProp_Altitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocationServicesData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Longitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Latitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_HorizontalAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_VerticalAccuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewProp_Altitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocationServicesData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
	nullptr,
	&NewStructOps,
	"LocationServicesData",
	Z_Construct_UScriptStruct_FLocationServicesData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::PropPointers),
	sizeof(FLocationServicesData),
	alignof(FLocationServicesData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationServicesData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocationServicesData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocationServicesData()
{
	if (!Z_Registration_Info_UScriptStruct_LocationServicesData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocationServicesData.InnerSingleton, Z_Construct_UScriptStruct_FLocationServicesData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocationServicesData.InnerSingleton;
}
// End ScriptStruct FLocationServicesData

// Begin Delegate FLocationServicesData_OnLocationChanged
struct Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics
{
	struct _Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms
	{
		FLocationServicesData LocationData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::NewProp_LocationData = { "LocationData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms, LocationData), Z_Construct_UScriptStruct_FLocationServicesData, METADATA_PARAMS(0, nullptr) }; // 955336333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::NewProp_LocationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary, nullptr, "LocationServicesData_OnLocationChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::_Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::_Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLocationServicesData_OnLocationChanged_DelegateWrapper(const FMulticastScriptDelegate& LocationServicesData_OnLocationChanged, FLocationServicesData LocationData)
{
	struct _Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms
	{
		FLocationServicesData LocationData;
	};
	_Script_LocationServicesBPLibrary_eventLocationServicesData_OnLocationChanged_Parms Parms;
	Parms.LocationData=LocationData;
	LocationServicesData_OnLocationChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FLocationServicesData_OnLocationChanged

// Begin Class ULocationServices Function AreLocationServicesEnabled
struct Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics
{
	struct LocationServices_eventAreLocationServicesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/**\n\x09* Checks if the Location Services on the mobile device are enabled for this application\n\x09* @return - true if the mobile device has enabled the appropriate service for the app \n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Checks if the Location Services on the mobile device are enabled for this application\n@return - true if the mobile device has enabled the appropriate service for the app" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocationServices_eventAreLocationServicesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocationServices_eventAreLocationServicesEnabled_Parms), &Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "AreLocationServicesEnabled", nullptr, nullptr, Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::LocationServices_eventAreLocationServicesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::LocationServices_eventAreLocationServicesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocationServices::execAreLocationServicesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocationServices::AreLocationServicesEnabled();
	P_NATIVE_END;
}
// End Class ULocationServices Function AreLocationServicesEnabled

// Begin Class ULocationServices Function GetLastKnownLocation
struct Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics
{
	struct LocationServices_eventGetLastKnownLocation_Parms
	{
		FLocationServicesData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/**\n\x09* Returns the last location information returned by the location service. If no location update has been made, will return\n\x09* a default-value-filled struct. \n\x09* @return - the last known location from updates \n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Returns the last location information returned by the location service. If no location update has been made, will return\na default-value-filled struct.\n@return - the last known location from updates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocationServices_eventGetLastKnownLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLocationServicesData, METADATA_PARAMS(0, nullptr) }; // 955336333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "GetLastKnownLocation", nullptr, nullptr, Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::LocationServices_eventGetLastKnownLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::LocationServices_eventGetLastKnownLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocationServices_GetLastKnownLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocationServices_GetLastKnownLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocationServices::execGetLastKnownLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLocationServicesData*)Z_Param__Result=ULocationServices::GetLastKnownLocation();
	P_NATIVE_END;
}
// End Class ULocationServices Function GetLastKnownLocation

// Begin Class ULocationServices Function GetLocationServicesImpl
struct Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics
{
	struct LocationServices_eventGetLocationServicesImpl_Parms
	{
		ULocationServicesImpl* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/*\n\x09* Returns the Location Services implementation object. Intended to be used to set up the FLocationServicesData_OnLocationChanged\n\x09* delegate in Blueprints.\n\x09* @return - the Android or IOS impl object\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "* Returns the Location Services implementation object. Intended to be used to set up the FLocationServicesData_OnLocationChanged\n* delegate in Blueprints.\n* @return - the Android or IOS impl object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocationServices_eventGetLocationServicesImpl_Parms, ReturnValue), Z_Construct_UClass_ULocationServicesImpl_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "GetLocationServicesImpl", nullptr, nullptr, Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::LocationServices_eventGetLocationServicesImpl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::LocationServices_eventGetLocationServicesImpl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocationServices::execGetLocationServicesImpl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULocationServicesImpl**)Z_Param__Result=ULocationServices::GetLocationServicesImpl();
	P_NATIVE_END;
}
// End Class ULocationServices Function GetLocationServicesImpl

// Begin Class ULocationServices Function InitLocationServices
struct Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics
{
	struct LocationServices_eventInitLocationServices_Parms
	{
		ELocationAccuracy Accuracy;
		float UpdateFrequency;
		float MinDistanceFilter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/** \n\x09 * Called to set up the Location Service before use\n\x09 * \n\x09 * @param Accuracy - as seen in the enum above\n\x09 * @param UpdateFrequency - in milliseconds. (Android only)\n\x09 * @param MinDistance - minDistance before a location update, in meters. 0 here means \"update asap\"\n\x09 * @return - true if Initialization was succesful\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Called to set up the Location Service before use\n\n@param Accuracy - as seen in the enum above\n@param UpdateFrequency - in milliseconds. (Android only)\n@param MinDistance - minDistance before a location update, in meters. 0 here means \"update asap\"\n@return - true if Initialization was succesful" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Accuracy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Accuracy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceFilter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocationServices_eventInitLocationServices_Parms, Accuracy), Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy, METADATA_PARAMS(0, nullptr) }; // 2323192060
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocationServices_eventInitLocationServices_Parms, UpdateFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_MinDistanceFilter = { "MinDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocationServices_eventInitLocationServices_Parms, MinDistanceFilter), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocationServices_eventInitLocationServices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocationServices_eventInitLocationServices_Parms), &Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_UpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_MinDistanceFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "InitLocationServices", nullptr, nullptr, Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::LocationServices_eventInitLocationServices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::LocationServices_eventInitLocationServices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocationServices_InitLocationServices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocationServices_InitLocationServices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocationServices::execInitLocationServices)
{
	P_GET_ENUM(ELocationAccuracy,Z_Param_Accuracy);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateFrequency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinDistanceFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocationServices::InitLocationServices(ELocationAccuracy(Z_Param_Accuracy),Z_Param_UpdateFrequency,Z_Param_MinDistanceFilter);
	P_NATIVE_END;
}
// End Class ULocationServices Function InitLocationServices

// Begin Class ULocationServices Function IsLocationAccuracyAvailable
struct Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics
{
	struct LocationServices_eventIsLocationAccuracyAvailable_Parms
	{
		ELocationAccuracy Accuracy;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/**\n\x09* Checks if the supplied Accuracy is available on the current device.\n\x09* @param Accuracy - the accuracy to check\n\x09* @return - true if the mobile device can support the Accuracy, false if it will use a different accuracy\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Checks if the supplied Accuracy is available on the current device.\n@param Accuracy - the accuracy to check\n@return - true if the mobile device can support the Accuracy, false if it will use a different accuracy" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Accuracy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Accuracy;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocationServices_eventIsLocationAccuracyAvailable_Parms, Accuracy), Z_Construct_UEnum_LocationServicesBPLibrary_ELocationAccuracy, METADATA_PARAMS(0, nullptr) }; // 2323192060
void Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocationServices_eventIsLocationAccuracyAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocationServices_eventIsLocationAccuracyAvailable_Parms), &Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_Accuracy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "IsLocationAccuracyAvailable", nullptr, nullptr, Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::LocationServices_eventIsLocationAccuracyAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::LocationServices_eventIsLocationAccuracyAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocationServices::execIsLocationAccuracyAvailable)
{
	P_GET_ENUM(ELocationAccuracy,Z_Param_Accuracy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocationServices::IsLocationAccuracyAvailable(ELocationAccuracy(Z_Param_Accuracy));
	P_NATIVE_END;
}
// End Class ULocationServices Function IsLocationAccuracyAvailable

// Begin Class ULocationServices Function StartLocationServices
struct Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics
{
	struct LocationServices_eventStartLocationServices_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/** \n\x09 * Starts requesting location updates from the appropriate Location Service\n\x09 * @return - true if startup successful\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Starts requesting location updates from the appropriate Location Service\n@return - true if startup successful" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocationServices_eventStartLocationServices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocationServices_eventStartLocationServices_Parms), &Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "StartLocationServices", nullptr, nullptr, Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::LocationServices_eventStartLocationServices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::LocationServices_eventStartLocationServices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocationServices_StartLocationServices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocationServices_StartLocationServices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocationServices::execStartLocationServices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocationServices::StartLocationServices();
	P_NATIVE_END;
}
// End Class ULocationServices Function StartLocationServices

// Begin Class ULocationServices Function StopLocationServices
struct Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics
{
	struct LocationServices_eventStopLocationServices_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "Comment", "/** \n\x09* Stops the updates of location from the Location Service that was started with StartLocationService\n\x09* @return - true if stop is successful\n\x09*/" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
		{ "ToolTip", "Stops the updates of location from the Location Service that was started with StartLocationService\n@return - true if stop is successful" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocationServices_eventStopLocationServices_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocationServices_eventStopLocationServices_Parms), &Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationServices, nullptr, "StopLocationServices", nullptr, nullptr, Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::LocationServices_eventStopLocationServices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::LocationServices_eventStopLocationServices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocationServices_StopLocationServices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocationServices_StopLocationServices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocationServices::execStopLocationServices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocationServices::StopLocationServices();
	P_NATIVE_END;
}
// End Class ULocationServices Function StopLocationServices

// Begin Class ULocationServices
void ULocationServices::StaticRegisterNativesULocationServices()
{
	UClass* Class = ULocationServices::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreLocationServicesEnabled", &ULocationServices::execAreLocationServicesEnabled },
		{ "GetLastKnownLocation", &ULocationServices::execGetLastKnownLocation },
		{ "GetLocationServicesImpl", &ULocationServices::execGetLocationServicesImpl },
		{ "InitLocationServices", &ULocationServices::execInitLocationServices },
		{ "IsLocationAccuracyAvailable", &ULocationServices::execIsLocationAccuracyAvailable },
		{ "StartLocationServices", &ULocationServices::execStartLocationServices },
		{ "StopLocationServices", &ULocationServices::execStopLocationServices },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationServices);
UClass* Z_Construct_UClass_ULocationServices_NoRegister()
{
	return ULocationServices::StaticClass();
}
struct Z_Construct_UClass_ULocationServices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LocationServicesBPLibrary.h" },
		{ "ModuleRelativePath", "Classes/LocationServicesBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocationServices_AreLocationServicesEnabled, "AreLocationServicesEnabled" }, // 825300138
		{ &Z_Construct_UFunction_ULocationServices_GetLastKnownLocation, "GetLastKnownLocation" }, // 1101662057
		{ &Z_Construct_UFunction_ULocationServices_GetLocationServicesImpl, "GetLocationServicesImpl" }, // 1863988612
		{ &Z_Construct_UFunction_ULocationServices_InitLocationServices, "InitLocationServices" }, // 122419880
		{ &Z_Construct_UFunction_ULocationServices_IsLocationAccuracyAvailable, "IsLocationAccuracyAvailable" }, // 2545199675
		{ &Z_Construct_UFunction_ULocationServices_StartLocationServices, "StartLocationServices" }, // 2943582807
		{ &Z_Construct_UFunction_ULocationServices_StopLocationServices, "StopLocationServices" }, // 2594187781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationServices>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocationServices_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServices_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationServices_Statics::ClassParams = {
	&ULocationServices::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServices_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocationServices_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocationServices()
{
	if (!Z_Registration_Info_UClass_ULocationServices.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationServices.OuterSingleton, Z_Construct_UClass_ULocationServices_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocationServices.OuterSingleton;
}
template<> LOCATIONSERVICESBPLIBRARY_API UClass* StaticClass<ULocationServices>()
{
	return ULocationServices::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationServices);
ULocationServices::~ULocationServices() {}
// End Class ULocationServices

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocationAccuracy_StaticEnum, TEXT("ELocationAccuracy"), &Z_Registration_Info_UEnum_ELocationAccuracy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2323192060U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocationServicesData::StaticStruct, Z_Construct_UScriptStruct_FLocationServicesData_Statics::NewStructOps, TEXT("LocationServicesData"), &Z_Registration_Info_UScriptStruct_LocationServicesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocationServicesData), 955336333U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocationServices, ULocationServices::StaticClass, TEXT("ULocationServices"), &Z_Registration_Info_UClass_ULocationServices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationServices), 3088019436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_3901489322(TEXT("/Script/LocationServicesBPLibrary"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
