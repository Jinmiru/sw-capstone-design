// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraStackTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraStackTypes() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FDummySpacerCameraTypes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes;
class UScriptStruct* FDummySpacerCameraTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummySpacerCameraTypes, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DummySpacerCameraTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDummySpacerCameraTypes>()
{
	return FDummySpacerCameraTypes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// NOTE:\n// This code is work in progress - do not use these types until this comment is removed.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
		{ "ToolTip", "NOTE:\nThis code is work in progress - do not use these types until this comment is removed." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDummySpacerCameraTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DummySpacerCameraTypes",
	nullptr,
	0,
	sizeof(FDummySpacerCameraTypes),
	alignof(FDummySpacerCameraTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes()
{
	if (!Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.InnerSingleton, Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.InnerSingleton;
}
// End ScriptStruct FDummySpacerCameraTypes

// Begin Enum ECameraAlphaBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAlphaBlendMode;
static UEnum* ECameraAlphaBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraAlphaBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraAlphaBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraAlphaBlendMode"));
	}
	return Z_Registration_Info_UEnum_ECameraAlphaBlendMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECameraAlphaBlendMode::Type>()
{
	return ECameraAlphaBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CABM_Cubic.DisplayName", "Cubic" },
		{ "CABM_Cubic.Name", "ECameraAlphaBlendMode::CABM_Cubic" },
		{ "CABM_Linear.DisplayName", "Linear" },
		{ "CABM_Linear.Name", "ECameraAlphaBlendMode::CABM_Linear" },
		{ "Comment", "//@TODO: Document\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraAlphaBlendMode::CABM_Linear", (int64)ECameraAlphaBlendMode::CABM_Linear },
		{ "ECameraAlphaBlendMode::CABM_Cubic", (int64)ECameraAlphaBlendMode::CABM_Cubic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECameraAlphaBlendMode",
	"ECameraAlphaBlendMode::Type",
	Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode()
{
	if (!Z_Registration_Info_UEnum_ECameraAlphaBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAlphaBlendMode.InnerSingleton, Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraAlphaBlendMode.InnerSingleton;
}
// End Enum ECameraAlphaBlendMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraAlphaBlendMode_StaticEnum, TEXT("ECameraAlphaBlendMode"), &Z_Registration_Info_UEnum_ECameraAlphaBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3696760159U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDummySpacerCameraTypes::StaticStruct, Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::NewStructOps, TEXT("DummySpacerCameraTypes"), &Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDummySpacerCameraTypes), 2108605292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_4136542002(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
