// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/Misc/DataValidation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataValidation() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EDataValidationUsecase();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Enum EDataValidationUsecase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataValidationUsecase;
static UEnum* EDataValidationUsecase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataValidationUsecase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataValidationUsecase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_EDataValidationUsecase, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("EDataValidationUsecase"));
	}
	return Z_Registration_Info_UEnum_EDataValidationUsecase.OuterSingleton;
}
template<> COREUOBJECT_API UEnum* StaticEnum<EDataValidationUsecase>()
{
	return EDataValidationUsecase_StaticEnum();
}
struct Z_Construct_UEnum_CoreUObject_EDataValidationUsecase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Commandlet.Comment", "/** A commandlet invoked the validation */" },
		{ "Commandlet.Name", "EDataValidationUsecase::Commandlet" },
		{ "Commandlet.ToolTip", "A commandlet invoked the validation" },
		{ "Manual.Comment", "/** Triggered on user's demand */" },
		{ "Manual.Name", "EDataValidationUsecase::Manual" },
		{ "Manual.ToolTip", "Triggered on user's demand" },
		{ "ModuleRelativePath", "Public/Misc/DataValidation.h" },
		{ "None.Comment", "/** No usecase specified */" },
		{ "None.Name", "EDataValidationUsecase::None" },
		{ "None.ToolTip", "No usecase specified" },
		{ "PreSubmit.Comment", "/** Submit dialog triggered the validation */" },
		{ "PreSubmit.Name", "EDataValidationUsecase::PreSubmit" },
		{ "PreSubmit.ToolTip", "Submit dialog triggered the validation" },
		{ "Save.Comment", "/** Saving a package triggered the validation */" },
		{ "Save.Name", "EDataValidationUsecase::Save" },
		{ "Save.ToolTip", "Saving a package triggered the validation" },
		{ "Script.Comment", "/** Triggered by blueprint or c++ */" },
		{ "Script.Name", "EDataValidationUsecase::Script" },
		{ "Script.ToolTip", "Triggered by blueprint or c++" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataValidationUsecase::None", (int64)EDataValidationUsecase::None },
		{ "EDataValidationUsecase::Manual", (int64)EDataValidationUsecase::Manual },
		{ "EDataValidationUsecase::Commandlet", (int64)EDataValidationUsecase::Commandlet },
		{ "EDataValidationUsecase::Save", (int64)EDataValidationUsecase::Save },
		{ "EDataValidationUsecase::PreSubmit", (int64)EDataValidationUsecase::PreSubmit },
		{ "EDataValidationUsecase::Script", (int64)EDataValidationUsecase::Script },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreUObject_EDataValidationUsecase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	"EDataValidationUsecase",
	"EDataValidationUsecase",
	Z_Construct_UEnum_CoreUObject_EDataValidationUsecase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EDataValidationUsecase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CoreUObject_EDataValidationUsecase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CoreUObject_EDataValidationUsecase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CoreUObject_EDataValidationUsecase()
{
	if (!Z_Registration_Info_UEnum_EDataValidationUsecase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataValidationUsecase.InnerSingleton, Z_Construct_UEnum_CoreUObject_EDataValidationUsecase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataValidationUsecase.InnerSingleton;
}
// End Enum EDataValidationUsecase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_DataValidation_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataValidationUsecase_StaticEnum, TEXT("EDataValidationUsecase"), &Z_Registration_Info_UEnum_EDataValidationUsecase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1803610933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_DataValidation_h_2815843741(TEXT("/Script/CoreUObject"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_DataValidation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Misc_DataValidation_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
