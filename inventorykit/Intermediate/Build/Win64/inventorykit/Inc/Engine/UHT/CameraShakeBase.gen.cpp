// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternScrubParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternStartParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternStopParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCameraShakePatternStartParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams;
class UScriptStruct* FCameraShakePatternStartParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakePatternStartParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakePatternStartParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakePatternStartParams>()
{
	return FCameraShakePatternStartParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for starting a camera shake pattern.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for starting a camera shake pattern." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRestarting_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Whether the camera shake is restarting while playing */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Whether the camera shake is restarting while playing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDuration_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Whether the camera shake's duration is overriden (see DurationOverride) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Whether the camera shake's duration is overriden (see DurationOverride)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationOverride_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** An optional override for the camera shake's duration */" },
		{ "EditCondition", "bOverrideDuration" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "An optional override for the camera shake's duration" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsRestarting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRestarting;
	static void NewProp_bOverrideDuration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakePatternStartParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bIsRestarting_SetBit(void* Obj)
{
	((FCameraShakePatternStartParams*)Obj)->bIsRestarting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bIsRestarting = { "bIsRestarting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraShakePatternStartParams), &Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bIsRestarting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRestarting_MetaData), NewProp_bIsRestarting_MetaData) };
void Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bOverrideDuration_SetBit(void* Obj)
{
	((FCameraShakePatternStartParams*)Obj)->bOverrideDuration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bOverrideDuration = { "bOverrideDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraShakePatternStartParams), &Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bOverrideDuration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDuration_MetaData), NewProp_bOverrideDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_DurationOverride = { "DurationOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternStartParams, DurationOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationOverride_MetaData), NewProp_DurationOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bIsRestarting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_bOverrideDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewProp_DurationOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraShakePatternStartParams",
	Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::PropPointers),
	sizeof(FCameraShakePatternStartParams),
	alignof(FCameraShakePatternStartParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternStartParams()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams.InnerSingleton;
}
// End ScriptStruct FCameraShakePatternStartParams

// Begin ScriptStruct FCameraShakePatternUpdateParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams;
class UScriptStruct* FCameraShakePatternUpdateParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakePatternUpdateParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakePatternUpdateParams>()
{
	return FCameraShakePatternUpdateParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for updating a camera shake pattern.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for updating a camera shake pattern." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The time elapsed since last update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The time elapsed since last update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The base scale for this shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The base scale for this shake" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The dynamic scale being passed down from the camera manger for the next update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The dynamic scale being passed down from the camera manger for the next update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The current view that this camera shake should modify */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The current view that this camera shake should modify" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakePatternUpdateParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternUpdateParams, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternUpdateParams, ShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeScale_MetaData), NewProp_ShakeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_DynamicScale = { "DynamicScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternUpdateParams, DynamicScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicScale_MetaData), NewProp_DynamicScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternUpdateParams, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POV_MetaData), NewProp_POV_MetaData) }; // 994039058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_ShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_DynamicScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewProp_POV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraShakePatternUpdateParams",
	Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::PropPointers),
	sizeof(FCameraShakePatternUpdateParams),
	alignof(FCameraShakePatternUpdateParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams.InnerSingleton;
}
// End ScriptStruct FCameraShakePatternUpdateParams

// Begin ScriptStruct FCameraShakePatternScrubParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams;
class UScriptStruct* FCameraShakePatternScrubParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakePatternScrubParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakePatternScrubParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakePatternScrubParams>()
{
	return FCameraShakePatternScrubParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for scrubbing a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for scrubbing a camera shake." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The time to scrub to */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The time to scrub to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The base scale for this shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The base scale for this shake" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The dynamic scale being passed down from the camera manger for the next update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The dynamic scale being passed down from the camera manger for the next update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The current view that this camera shake should modify */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The current view that this camera shake should modify" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_POV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakePatternScrubParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_AbsoluteTime = { "AbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternScrubParams, AbsoluteTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteTime_MetaData), NewProp_AbsoluteTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternScrubParams, ShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeScale_MetaData), NewProp_ShakeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_DynamicScale = { "DynamicScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternScrubParams, DynamicScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicScale_MetaData), NewProp_DynamicScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakePatternScrubParams, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_POV_MetaData), NewProp_POV_MetaData) }; // 994039058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_AbsoluteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_ShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_DynamicScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewProp_POV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraShakePatternScrubParams",
	Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::PropPointers),
	sizeof(FCameraShakePatternScrubParams),
	alignof(FCameraShakePatternScrubParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternScrubParams()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams.InnerSingleton;
}
// End ScriptStruct FCameraShakePatternScrubParams

// Begin Enum ECameraShakePatternUpdateResultFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags;
static UEnum* ECameraShakePatternUpdateResultFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakePatternUpdateResultFlags"));
	}
	return Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECameraShakePatternUpdateResultFlags>()
{
	return ECameraShakePatternUpdateResultFlags_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyAsAbsolute.Comment", "/** Apply the result location, rotation, and field of view as absolute values, instead of additive values. */" },
		{ "ApplyAsAbsolute.Name", "ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute" },
		{ "ApplyAsAbsolute.ToolTip", "Apply the result location, rotation, and field of view as absolute values, instead of additive values." },
		{ "Comment", "/**\n * Flags that camera shake patterns can return to change base-class behaviour.\n */" },
		{ "Default.Comment", "/** Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest. */" },
		{ "Default.Name", "ECameraShakePatternUpdateResultFlags::Default" },
		{ "Default.ToolTip", "Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest." },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "SkipAutoPlaySpace.Comment", "/** Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set. */" },
		{ "SkipAutoPlaySpace.Name", "ECameraShakePatternUpdateResultFlags::SkipAutoPlaySpace" },
		{ "SkipAutoPlaySpace.ToolTip", "Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set." },
		{ "SkipAutoScale.Comment", "/** Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set. */" },
		{ "SkipAutoScale.Name", "ECameraShakePatternUpdateResultFlags::SkipAutoScale" },
		{ "SkipAutoScale.ToolTip", "Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set." },
		{ "ToolTip", "Flags that camera shake patterns can return to change base-class behaviour." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute", (int64)ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute },
		{ "ECameraShakePatternUpdateResultFlags::SkipAutoScale", (int64)ECameraShakePatternUpdateResultFlags::SkipAutoScale },
		{ "ECameraShakePatternUpdateResultFlags::SkipAutoPlaySpace", (int64)ECameraShakePatternUpdateResultFlags::SkipAutoPlaySpace },
		{ "ECameraShakePatternUpdateResultFlags::Default", (int64)ECameraShakePatternUpdateResultFlags::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECameraShakePatternUpdateResultFlags",
	"ECameraShakePatternUpdateResultFlags",
	Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags()
{
	if (!Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakePatternUpdateResultFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags.InnerSingleton;
}
// End Enum ECameraShakePatternUpdateResultFlags

// Begin ScriptStruct FCameraShakePatternUpdateResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult;
class UScriptStruct* FCameraShakePatternUpdateResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakePatternUpdateResult"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakePatternUpdateResult>()
{
	return FCameraShakePatternUpdateResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The result of a camera shake pattern update.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The result of a camera shake pattern update." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakePatternUpdateResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraShakePatternUpdateResult",
	nullptr,
	0,
	sizeof(FCameraShakePatternUpdateResult),
	alignof(FCameraShakePatternUpdateResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult.InnerSingleton;
}
// End ScriptStruct FCameraShakePatternUpdateResult

// Begin ScriptStruct FCameraShakePatternStopParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams;
class UScriptStruct* FCameraShakePatternStopParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakePatternStopParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakePatternStopParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakePatternStopParams>()
{
	return FCameraShakePatternStopParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for stopping a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for stopping a camera shake." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImmediately_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakePatternStopParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::NewProp_bImmediately_SetBit(void* Obj)
{
	((FCameraShakePatternStopParams*)Obj)->bImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraShakePatternStopParams), &Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImmediately_MetaData), NewProp_bImmediately_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::NewProp_bImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraShakePatternStopParams",
	Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::PropPointers),
	sizeof(FCameraShakePatternStopParams),
	alignof(FCameraShakePatternStopParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakePatternStopParams()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams.InnerSingleton;
}
// End ScriptStruct FCameraShakePatternStopParams

// Begin Enum ECameraShakeDurationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakeDurationType;
static UEnum* ECameraShakeDurationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraShakeDurationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraShakeDurationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeDurationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeDurationType"));
	}
	return Z_Registration_Info_UEnum_ECameraShakeDurationType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeDurationType>()
{
	return ECameraShakeDurationType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Camera shake duration type.\n */" },
		{ "Custom.Comment", "/** Camera shake has custom/dynamic duration */" },
		{ "Custom.Name", "ECameraShakeDurationType::Custom" },
		{ "Custom.ToolTip", "Camera shake has custom/dynamic duration" },
		{ "Fixed.Comment", "/** Camera shake has a fixed duration */" },
		{ "Fixed.Name", "ECameraShakeDurationType::Fixed" },
		{ "Fixed.ToolTip", "Camera shake has a fixed duration" },
		{ "Infinite.Comment", "/** Camera shake is playing indefinitely, until explicitly stopped */" },
		{ "Infinite.Name", "ECameraShakeDurationType::Infinite" },
		{ "Infinite.ToolTip", "Camera shake is playing indefinitely, until explicitly stopped" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Camera shake duration type." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraShakeDurationType::Fixed", (int64)ECameraShakeDurationType::Fixed },
		{ "ECameraShakeDurationType::Infinite", (int64)ECameraShakeDurationType::Infinite },
		{ "ECameraShakeDurationType::Custom", (int64)ECameraShakeDurationType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECameraShakeDurationType",
	"ECameraShakeDurationType",
	Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType()
{
	if (!Z_Registration_Info_UEnum_ECameraShakeDurationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakeDurationType.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraShakeDurationType.InnerSingleton;
}
// End Enum ECameraShakeDurationType

// Begin ScriptStruct FCameraShakeDuration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeDuration;
class UScriptStruct* FCameraShakeDuration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeDuration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeDuration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeDuration, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeDuration"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeDuration.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeDuration>()
{
	return FCameraShakeDuration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera shake duration.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Camera shake duration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeDuration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeDuration, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeDuration, Type), Z_Construct_UEnum_Engine_ECameraShakeDurationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2023584666
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraShakeDuration",
	Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers),
	sizeof(FCameraShakeDuration),
	alignof(FCameraShakeDuration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeDuration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeDuration.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeDuration.InnerSingleton;
}
// End ScriptStruct FCameraShakeDuration

// Begin ScriptStruct FCameraShakeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeInfo;
class UScriptStruct* FCameraShakeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeInfo>()
{
	return FCameraShakeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a camera shake class.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Information about a camera shake class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Comment", "/** The duration of the camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The duration of the camera shake" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[] = {
		{ "Comment", "/** How much blending-in the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-in the camera shake should have" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[] = {
		{ "Comment", "/** How much blending-out the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-out the camera shake should have" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeInfo, Duration), Z_Construct_UScriptStruct_FCameraShakeDuration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) }; // 1924220806
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeInfo, BlendIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendIn_MetaData), NewProp_BlendIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraShakeInfo, BlendOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOut_MetaData), NewProp_BlendOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CameraShakeInfo",
	Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers),
	sizeof(FCameraShakeInfo),
	alignof(FCameraShakeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeInfo.InnerSingleton;
}
// End ScriptStruct FCameraShakeInfo

// Begin Class UCameraShakeBase Function GetRootShakePattern
struct Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics
{
	struct CameraShakeBase_eventGetRootShakePattern_Parms
	{
		UCameraShakePattern* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Gets the root pattern of this camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Gets the root pattern of this camera shake" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeBase_eventGetRootShakePattern_Parms, ReturnValue), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeBase, nullptr, "GetRootShakePattern", nullptr, nullptr, Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::CameraShakeBase_eventGetRootShakePattern_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::CameraShakeBase_eventGetRootShakePattern_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraShakeBase::execGetRootShakePattern)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraShakePattern**)Z_Param__Result=P_THIS->GetRootShakePattern();
	P_NATIVE_END;
}
// End Class UCameraShakeBase Function GetRootShakePattern

// Begin Class UCameraShakeBase Function SetRootShakePattern
struct Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics
{
	struct CameraShakeBase_eventSetRootShakePattern_Parms
	{
		UCameraShakePattern* InPattern;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Sets the root pattern of this camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Sets the root pattern of this camera shake" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::NewProp_InPattern = { "InPattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeBase_eventSetRootShakePattern_Parms, InPattern), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::NewProp_InPattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeBase, nullptr, "SetRootShakePattern", nullptr, nullptr, Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::CameraShakeBase_eventSetRootShakePattern_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::CameraShakeBase_eventSetRootShakePattern_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraShakeBase::execSetRootShakePattern)
{
	P_GET_OBJECT(UCameraShakePattern,Z_Param_InPattern);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRootShakePattern(Z_Param_InPattern);
	P_NATIVE_END;
}
// End Class UCameraShakeBase Function SetRootShakePattern

// Begin Class UCameraShakeBase
void UCameraShakeBase::StaticRegisterNativesUCameraShakeBase()
{
	UClass* Class = UCameraShakeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRootShakePattern", &UCameraShakeBase::execGetRootShakePattern },
		{ "SetRootShakePattern", &UCameraShakeBase::execSetRootShakePattern },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraShakeBase);
UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister()
{
	return UCameraShakeBase::StaticClass();
}
struct Z_Construct_UClass_UCameraShakeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for a camera shake. A camera shake contains a root shake \"pattern\" which is\n * the object that contains the actual logic driving how the camera is shaken. Keeping the two\n * separate makes it possible to completely change how a shake works without having to create\n * a completely different asset.\n */" },
		{ "IncludePath", "Camera/CameraShakeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a camera shake. A camera shake contains a root shake \"pattern\" which is\nthe object that contains the actual logic driving how the camera is shaken. Keeping the two\nseparate makes it possible to completely change how a shake works without having to create\na completely different asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleInstance_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** \n\x09 *  If true to only allow a single instance of this shake class to play at any given time.\n\x09 *  Subsequent attempts to play this shake will simply restart the timer.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "If true to only allow a single instance of this shake class to play at any given time.\nSubsequent attempts to play this shake will simply restart the timer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The overall scale to apply to the shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The overall scale to apply to the shake. Only valid when the shake is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootShakePattern_MetaData[] = {
		{ "Category", "CameraShakePattern" },
		{ "Comment", "/** The root pattern for this camera shake */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The root pattern for this camera shake" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[] = {
		{ "Comment", "/** The camera manager owning this camera shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The camera manager owning this camera shake. Only valid when the shake is active." },
	};
#endif // WITH_METADATA
	static void NewProp_bSingleInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootShakePattern;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern, "GetRootShakePattern" }, // 3122633295
		{ &Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern, "SetRootShakePattern" }, // 2681227569
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
{
	((UCameraShakeBase*)Obj)->bSingleInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraShakeBase), &Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleInstance_MetaData), NewProp_bSingleInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeBase, ShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeScale_MetaData), NewProp_ShakeScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern = { "RootShakePattern", nullptr, (EPropertyFlags)0x0146000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeBase, RootShakePattern), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootShakePattern_MetaData), NewProp_RootShakePattern_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeBase, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraManager_MetaData), NewProp_CameraManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraShakeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams = {
	&UCameraShakeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers),
	0,
	0x008810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraShakeBase()
{
	if (!Z_Registration_Info_UClass_UCameraShakeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraShakeBase.OuterSingleton, Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraShakeBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCameraShakeBase>()
{
	return UCameraShakeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeBase);
UCameraShakeBase::~UCameraShakeBase() {}
// End Class UCameraShakeBase

// Begin Class UCameraShakePattern
void UCameraShakePattern::StaticRegisterNativesUCameraShakePattern()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraShakePattern);
UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister()
{
	return UCameraShakePattern::StaticClass();
}
struct Z_Construct_UClass_UCameraShakePattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A shake \"pattern\" defines how a camera should be effectively shaken. Examples of shake patterns\n * are sinewave oscillation, perlin noise, or FBX animation.\n *\n */" },
		{ "IncludePath", "Camera/CameraShakeBase.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A shake \"pattern\" defines how a camera should be effectively shaken. Examples of shake patterns\nare sinewave oscillation, perlin noise, or FBX animation." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakePattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCameraShakePattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakePattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakePattern_Statics::ClassParams = {
	&UCameraShakePattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraShakePattern()
{
	if (!Z_Registration_Info_UClass_UCameraShakePattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraShakePattern.OuterSingleton, Z_Construct_UClass_UCameraShakePattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraShakePattern.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCameraShakePattern>()
{
	return UCameraShakePattern::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakePattern);
UCameraShakePattern::~UCameraShakePattern() {}
// End Class UCameraShakePattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraShakePatternUpdateResultFlags_StaticEnum, TEXT("ECameraShakePatternUpdateResultFlags"), &Z_Registration_Info_UEnum_ECameraShakePatternUpdateResultFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 679260440U) },
		{ ECameraShakeDurationType_StaticEnum, TEXT("ECameraShakeDurationType"), &Z_Registration_Info_UEnum_ECameraShakeDurationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2023584666U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraShakePatternStartParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics::NewStructOps, TEXT("CameraShakePatternStartParams"), &Z_Registration_Info_UScriptStruct_CameraShakePatternStartParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakePatternStartParams), 2104903300U) },
		{ FCameraShakePatternUpdateParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics::NewStructOps, TEXT("CameraShakePatternUpdateParams"), &Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakePatternUpdateParams), 2549702424U) },
		{ FCameraShakePatternScrubParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics::NewStructOps, TEXT("CameraShakePatternScrubParams"), &Z_Registration_Info_UScriptStruct_CameraShakePatternScrubParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakePatternScrubParams), 463825994U) },
		{ FCameraShakePatternUpdateResult::StaticStruct, Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics::NewStructOps, TEXT("CameraShakePatternUpdateResult"), &Z_Registration_Info_UScriptStruct_CameraShakePatternUpdateResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakePatternUpdateResult), 251797938U) },
		{ FCameraShakePatternStopParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics::NewStructOps, TEXT("CameraShakePatternStopParams"), &Z_Registration_Info_UScriptStruct_CameraShakePatternStopParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakePatternStopParams), 3287579937U) },
		{ FCameraShakeDuration::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewStructOps, TEXT("CameraShakeDuration"), &Z_Registration_Info_UScriptStruct_CameraShakeDuration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeDuration), 1924220806U) },
		{ FCameraShakeInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewStructOps, TEXT("CameraShakeInfo"), &Z_Registration_Info_UScriptStruct_CameraShakeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeInfo), 4092815072U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraShakeBase, UCameraShakeBase::StaticClass, TEXT("UCameraShakeBase"), &Z_Registration_Info_UClass_UCameraShakeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraShakeBase), 3583884719U) },
		{ Z_Construct_UClass_UCameraShakePattern, UCameraShakePattern::StaticClass, TEXT("UCameraShakePattern"), &Z_Registration_Info_UClass_UCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraShakePattern), 1429689329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_2119509497(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
