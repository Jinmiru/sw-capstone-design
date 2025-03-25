// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/VectorVM/Public/VectorVMCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorVMCommon() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VectorVM();
VECTORVM_API UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes();
VECTORVM_API UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation();
// End Cross Module References

// Begin Enum EVectorVMBaseTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorVMBaseTypes;
static UEnum* EVectorVMBaseTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes, (UObject*)Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMBaseTypes"));
	}
	return Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton;
}
template<> VECTORVM_API UEnum* StaticEnum<EVectorVMBaseTypes>()
{
	return EVectorVMBaseTypes_StaticEnum();
}
struct Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EVectorVMBaseTypes::Bool" },
		{ "Float.Name", "EVectorVMBaseTypes::Float" },
		{ "Int.Name", "EVectorVMBaseTypes::Int" },
		{ "ModuleRelativePath", "Public/VectorVMCommon.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EVectorVMBaseTypes::Num" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVectorVMBaseTypes::Float", (int64)EVectorVMBaseTypes::Float },
		{ "EVectorVMBaseTypes::Int", (int64)EVectorVMBaseTypes::Int },
		{ "EVectorVMBaseTypes::Bool", (int64)EVectorVMBaseTypes::Bool },
		{ "EVectorVMBaseTypes::Num", (int64)EVectorVMBaseTypes::Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VectorVM,
	nullptr,
	"EVectorVMBaseTypes",
	"EVectorVMBaseTypes",
	Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes()
{
	if (!Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton, Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton;
}
// End Enum EVectorVMBaseTypes

// Begin Enum EVectorVMOperandLocation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorVMOperandLocation;
static UEnum* EVectorVMOperandLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation, (UObject*)Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMOperandLocation"));
	}
	return Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton;
}
template<> VECTORVM_API UEnum* StaticEnum<EVectorVMOperandLocation>()
{
	return EVectorVMOperandLocation_StaticEnum();
}
struct Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.Name", "EVectorVMOperandLocation::Constant" },
		{ "ModuleRelativePath", "Public/VectorVMCommon.h" },
		{ "Num.Name", "EVectorVMOperandLocation::Num" },
		{ "Register.Name", "EVectorVMOperandLocation::Register" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVectorVMOperandLocation::Register", (int64)EVectorVMOperandLocation::Register },
		{ "EVectorVMOperandLocation::Constant", (int64)EVectorVMOperandLocation::Constant },
		{ "EVectorVMOperandLocation::Num", (int64)EVectorVMOperandLocation::Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VectorVM,
	nullptr,
	"EVectorVMOperandLocation",
	"EVectorVMOperandLocation",
	Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation()
{
	if (!Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton, Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton;
}
// End Enum EVectorVMOperandLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVectorVMBaseTypes_StaticEnum, TEXT("EVectorVMBaseTypes"), &Z_Registration_Info_UEnum_EVectorVMBaseTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3638524719U) },
		{ EVectorVMOperandLocation_StaticEnum, TEXT("EVectorVMOperandLocation"), &Z_Registration_Info_UEnum_EVectorVMOperandLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2173223114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_2679844951(TEXT("/Script/VectorVM"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
