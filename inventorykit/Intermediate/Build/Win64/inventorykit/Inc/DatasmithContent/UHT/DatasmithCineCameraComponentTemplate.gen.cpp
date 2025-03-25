// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraComponentTemplate() {}

// Begin Cross Module References
CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate();
DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin ScriptStruct FDatasmithCameraFilmbackSettingsTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate;
class UScriptStruct* FDatasmithCameraFilmbackSettingsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraFilmbackSettingsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraFilmbackSettingsTemplate>()
{
	return FDatasmithCameraFilmbackSettingsTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraFilmbackSettingsTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithCameraFilmbackSettingsTemplate, SensorWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorWidth_MetaData), NewProp_SensorWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithCameraFilmbackSettingsTemplate, SensorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensorHeight_MetaData), NewProp_SensorHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewProp_SensorHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithCameraFilmbackSettingsTemplate",
	Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::PropPointers),
	sizeof(FDatasmithCameraFilmbackSettingsTemplate),
	alignof(FDatasmithCameraFilmbackSettingsTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithCameraFilmbackSettingsTemplate

// Begin ScriptStruct FDatasmithCameraLensSettingsTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate;
class UScriptStruct* FDatasmithCameraLensSettingsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraLensSettingsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraLensSettingsTemplate>()
{
	return FDatasmithCameraLensSettingsTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFStop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraLensSettingsTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewProp_MaxFStop = { "MaxFStop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithCameraLensSettingsTemplate, MaxFStop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFStop_MetaData), NewProp_MaxFStop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewProp_MaxFStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithCameraLensSettingsTemplate",
	Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::PropPointers),
	sizeof(FDatasmithCameraLensSettingsTemplate),
	alignof(FDatasmithCameraLensSettingsTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithCameraLensSettingsTemplate

// Begin ScriptStruct FDatasmithCameraFocusSettingsTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate;
class UScriptStruct* FDatasmithCameraFocusSettingsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraFocusSettingsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraFocusSettingsTemplate>()
{
	return FDatasmithCameraFocusSettingsTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FocusMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FocusMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraFocusSettingsTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod = { "FocusMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithCameraFocusSettingsTemplate, FocusMethod), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusMethod_MetaData), NewProp_FocusMethod_MetaData) }; // 1406648363
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithCameraFocusSettingsTemplate, ManualFocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualFocusDistance_MetaData), NewProp_ManualFocusDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_FocusMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewProp_ManualFocusDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithCameraFocusSettingsTemplate",
	Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::PropPointers),
	sizeof(FDatasmithCameraFocusSettingsTemplate),
	alignof(FDatasmithCameraFocusSettingsTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithCameraFocusSettingsTemplate

// Begin ScriptStruct FDatasmithPostProcessSettingsTemplate
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate;
class UScriptStruct* FDatasmithPostProcessSettingsTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithPostProcessSettingsTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithPostProcessSettingsTemplate>()
{
	return FDatasmithPostProcessSettingsTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_VignetteIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraISO_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraShutterSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFstop_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraISO_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShutterSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
	static void NewProp_bOverride_ColorSaturation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturation;
	static void NewProp_bOverride_VignetteIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_VignetteIntensity;
	static void NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMethod;
	static void NewProp_bOverride_CameraISO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraISO;
	static void NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraShutterSpeed;
	static void NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFstop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorSaturation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoExposureMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShutterSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithPostProcessSettingsTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
{
	((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_WhiteTemp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp = { "bOverride_WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_WhiteTemp_MetaData), NewProp_bOverride_WhiteTemp_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation_SetBit(void* Obj)
{
	((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_ColorSaturation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation = { "bOverride_ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorSaturation_MetaData), NewProp_bOverride_ColorSaturation_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity_SetBit(void* Obj)
{
	((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_VignetteIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity = { "bOverride_VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_VignetteIntensity_MetaData), NewProp_bOverride_VignetteIntensity_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj)
{
	((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_AutoExposureMethod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod = { "bOverride_AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AutoExposureMethod_MetaData), NewProp_bOverride_AutoExposureMethod_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO_SetBit(void* Obj)
{
	((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_CameraISO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO = { "bOverride_CameraISO", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_CameraISO_MetaData), NewProp_bOverride_CameraISO_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj)
{
	((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_CameraShutterSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed = { "bOverride_CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_CameraShutterSpeed_MetaData), NewProp_bOverride_CameraShutterSpeed_MetaData) };
void Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj)
{
	((FDatasmithPostProcessSettingsTemplate*)Obj)->bOverride_DepthOfFieldFstop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop = { "bOverride_DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FDatasmithPostProcessSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldFstop_MetaData), NewProp_bOverride_DepthOfFieldFstop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_WhiteTemp = { "WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, WhiteTemp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteTemp_MetaData), NewProp_WhiteTemp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_VignetteIntensity = { "VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, VignetteIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteIntensity_MetaData), NewProp_VignetteIntensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_ColorSaturation = { "ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, ColorSaturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSaturation_MetaData), NewProp_ColorSaturation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_AutoExposureMethod = { "AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, AutoExposureMethod), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoExposureMethod_MetaData), NewProp_AutoExposureMethod_MetaData) }; // 968920102
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraISO = { "CameraISO", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, CameraISO), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraISO_MetaData), NewProp_CameraISO_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraShutterSpeed = { "CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, CameraShutterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShutterSpeed_MetaData), NewProp_CameraShutterSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatasmithPostProcessSettingsTemplate, DepthOfFieldFstop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthOfFieldFstop_MetaData), NewProp_DepthOfFieldFstop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_WhiteTemp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_ColorSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_VignetteIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_AutoExposureMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraISO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_CameraShutterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_bOverride_DepthOfFieldFstop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_WhiteTemp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_VignetteIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_ColorSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_AutoExposureMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraISO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_CameraShutterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewProp_DepthOfFieldFstop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	&NewStructOps,
	"DatasmithPostProcessSettingsTemplate",
	Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::PropPointers),
	sizeof(FDatasmithPostProcessSettingsTemplate),
	alignof(FDatasmithPostProcessSettingsTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate.InnerSingleton;
}
// End ScriptStruct FDatasmithPostProcessSettingsTemplate

// Begin Class UDatasmithCineCameraComponentTemplate
void UDatasmithCineCameraComponentTemplate::StaticRegisterNativesUDatasmithCineCameraComponentTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithCineCameraComponentTemplate);
UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_NoRegister()
{
	return UDatasmithCineCameraComponentTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCineCameraComponentTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, FilmbackSettings), Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmbackSettings_MetaData), NewProp_FilmbackSettings_MetaData) }; // 211796177
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, LensSettings), Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensSettings_MetaData), NewProp_LensSettings_MetaData) }; // 3129448688
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, FocusSettings), Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusSettings_MetaData), NewProp_FocusSettings_MetaData) }; // 844839857
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFocalLength_MetaData), NewProp_CurrentFocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAperture_MetaData), NewProp_CurrentAperture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithCineCameraComponentTemplate, PostProcessSettings), Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 2507605793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FilmbackSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_LensSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_FocusSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentFocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_CurrentAperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::NewProp_PostProcessSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::ClassParams = {
	&UDatasmithCineCameraComponentTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithCineCameraComponentTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithCineCameraComponentTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCineCameraComponentTemplate>()
{
	return UDatasmithCineCameraComponentTemplate::StaticClass();
}
UDatasmithCineCameraComponentTemplate::UDatasmithCineCameraComponentTemplate() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCineCameraComponentTemplate);
UDatasmithCineCameraComponentTemplate::~UDatasmithCineCameraComponentTemplate() {}
// End Class UDatasmithCineCameraComponentTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatasmithCameraFilmbackSettingsTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate_Statics::NewStructOps, TEXT("DatasmithCameraFilmbackSettingsTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithCameraFilmbackSettingsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithCameraFilmbackSettingsTemplate), 211796177U) },
		{ FDatasmithCameraLensSettingsTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate_Statics::NewStructOps, TEXT("DatasmithCameraLensSettingsTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithCameraLensSettingsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithCameraLensSettingsTemplate), 3129448688U) },
		{ FDatasmithCameraFocusSettingsTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate_Statics::NewStructOps, TEXT("DatasmithCameraFocusSettingsTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithCameraFocusSettingsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithCameraFocusSettingsTemplate), 844839857U) },
		{ FDatasmithPostProcessSettingsTemplate::StaticStruct, Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate_Statics::NewStructOps, TEXT("DatasmithPostProcessSettingsTemplate"), &Z_Registration_Info_UScriptStruct_DatasmithPostProcessSettingsTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithPostProcessSettingsTemplate), 2507605793U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithCineCameraComponentTemplate, UDatasmithCineCameraComponentTemplate::StaticClass, TEXT("UDatasmithCineCameraComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithCineCameraComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithCineCameraComponentTemplate), 3880120154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h_2263242630(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithCineCameraComponentTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
