// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SkyLightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyLightComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent();
ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOcclusionCombineMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ESkyLightSourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkyLightSourceType;
static UEnum* ESkyLightSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkyLightSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkyLightSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkyLightSourceType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkyLightSourceType"));
	}
	return Z_Registration_Info_UEnum_ESkyLightSourceType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESkyLightSourceType>()
{
	return ESkyLightSourceType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESkyLightSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "SLS_CapturedScene.Comment", "/** Construct the sky light from the captured scene, anything further than SkyDistanceThreshold from the sky light position will be included. */" },
		{ "SLS_CapturedScene.Name", "SLS_CapturedScene" },
		{ "SLS_CapturedScene.ToolTip", "Construct the sky light from the captured scene, anything further than SkyDistanceThreshold from the sky light position will be included." },
		{ "SLS_MAX.Name", "SLS_MAX" },
		{ "SLS_SpecifiedCubemap.Comment", "/** Construct the sky light from the specified cubemap. */" },
		{ "SLS_SpecifiedCubemap.Name", "SLS_SpecifiedCubemap" },
		{ "SLS_SpecifiedCubemap.ToolTip", "Construct the sky light from the specified cubemap." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SLS_CapturedScene", (int64)SLS_CapturedScene },
		{ "SLS_SpecifiedCubemap", (int64)SLS_SpecifiedCubemap },
		{ "SLS_MAX", (int64)SLS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkyLightSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESkyLightSourceType",
	"ESkyLightSourceType",
	Z_Construct_UEnum_Engine_ESkyLightSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkyLightSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkyLightSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESkyLightSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType()
{
	if (!Z_Registration_Info_UEnum_ESkyLightSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkyLightSourceType.InnerSingleton, Z_Construct_UEnum_Engine_ESkyLightSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkyLightSourceType.InnerSingleton;
}
// End Enum ESkyLightSourceType

// Begin Class USkyLightComponent Function RecaptureSky
struct Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "Comment", "/** \n\x09 * Recaptures the scene for the skylight. \n\x09 * This is useful for making sure the sky light is up to date after changing something in the world that it would capture.\n\x09 * Warning: this is very costly and will definitely cause a hitch.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Recaptures the scene for the skylight.\nThis is useful for making sure the sky light is up to date after changing something in the world that it would capture.\nWarning: this is very costly and will definitely cause a hitch." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "RecaptureSky", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USkyLightComponent_RecaptureSky()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_RecaptureSky_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execRecaptureSky)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecaptureSky();
	P_NATIVE_END;
}
// End Class USkyLightComponent Function RecaptureSky

// Begin Class USkyLightComponent Function SetCubemap
struct Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics
{
	struct SkyLightComponent_eventSetCubemap_Parms
	{
		UTextureCube* NewCubemap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkyLight" },
		{ "Comment", "/** Sets the cubemap used when SourceType is set to SpecifiedCubemap, and causes a skylight update on the next tick. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Sets the cubemap used when SourceType is set to SpecifiedCubemap, and causes a skylight update on the next tick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCubemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::NewProp_NewCubemap = { "NewCubemap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemap_Parms, NewCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::NewProp_NewCubemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetCubemap", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::SkyLightComponent_eventSetCubemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::SkyLightComponent_eventSetCubemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetCubemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetCubemap)
{
	P_GET_OBJECT(UTextureCube,Z_Param_NewCubemap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCubemap(Z_Param_NewCubemap);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetCubemap

// Begin Class USkyLightComponent Function SetCubemapBlend
struct Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics
{
	struct SkyLightComponent_eventSetCubemapBlend_Parms
	{
		UTextureCube* SourceCubemap;
		UTextureCube* DestinationCubemap;
		float InBlendFraction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkyLight" },
		{ "Comment", "/** \n\x09 * Creates sky lighting from a blend between two cubemaps, which is only valid when SourceType is set to SpecifiedCubemap. \n\x09 * This can be used to seamlessly transition sky lighting between different times of day.\n\x09 * The caller should continue to update the blend until BlendFraction is 0 or 1 to reduce rendering cost.\n\x09 * The caller is responsible for avoiding pops due to changing the source or destination.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Creates sky lighting from a blend between two cubemaps, which is only valid when SourceType is set to SpecifiedCubemap.\nThis can be used to seamlessly transition sky lighting between different times of day.\nThe caller should continue to update the blend until BlendFraction is 0 or 1 to reduce rendering cost.\nThe caller is responsible for avoiding pops due to changing the source or destination." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCubemap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationCubemap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBlendFraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_SourceCubemap = { "SourceCubemap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, SourceCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_DestinationCubemap = { "DestinationCubemap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, DestinationCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_InBlendFraction = { "InBlendFraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetCubemapBlend_Parms, InBlendFraction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_SourceCubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_DestinationCubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::NewProp_InBlendFraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetCubemapBlend", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::SkyLightComponent_eventSetCubemapBlend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::SkyLightComponent_eventSetCubemapBlend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetCubemapBlend)
{
	P_GET_OBJECT(UTextureCube,Z_Param_SourceCubemap);
	P_GET_OBJECT(UTextureCube,Z_Param_DestinationCubemap);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InBlendFraction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCubemapBlend(Z_Param_SourceCubemap,Z_Param_DestinationCubemap,Z_Param_InBlendFraction);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetCubemapBlend

// Begin Class USkyLightComponent Function SetIndirectLightingIntensity
struct Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics
{
	struct SkyLightComponent_eventSetIndirectLightingIntensity_Parms
	{
		float NewIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetIndirectLightingIntensity_Parms, NewIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetIndirectLightingIntensity", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::SkyLightComponent_eventSetIndirectLightingIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::SkyLightComponent_eventSetIndirectLightingIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetIndirectLightingIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIndirectLightingIntensity(Z_Param_NewIntensity);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetIndirectLightingIntensity

// Begin Class USkyLightComponent Function SetIntensity
struct Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics
{
	struct SkyLightComponent_eventSetIntensity_Parms
	{
		float NewIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::NewProp_NewIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetIntensity", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::SkyLightComponent_eventSetIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::SkyLightComponent_eventSetIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntensity(Z_Param_NewIntensity);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetIntensity

// Begin Class USkyLightComponent Function SetLightColor
struct Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics
{
	struct SkyLightComponent_eventSetLightColor_Parms
	{
		FLinearColor NewLightColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "Comment", "/** Set color of the light */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::NewProp_NewLightColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetLightColor", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::SkyLightComponent_eventSetLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::SkyLightComponent_eventSetLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetLightColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightColor(Z_Param_NewLightColor);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetLightColor

// Begin Class USkyLightComponent Function SetLowerHemisphereColor
struct Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics
{
	struct SkyLightComponent_eventSetLowerHemisphereColor_Parms
	{
		FLinearColor InLowerHemisphereColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLowerHemisphereColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLowerHemisphereColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::NewProp_InLowerHemisphereColor = { "InLowerHemisphereColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetLowerHemisphereColor_Parms, InLowerHemisphereColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLowerHemisphereColor_MetaData), NewProp_InLowerHemisphereColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::NewProp_InLowerHemisphereColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetLowerHemisphereColor", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::SkyLightComponent_eventSetLowerHemisphereColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::SkyLightComponent_eventSetLowerHemisphereColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetLowerHemisphereColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InLowerHemisphereColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLowerHemisphereColor(Z_Param_Out_InLowerHemisphereColor);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetLowerHemisphereColor

// Begin Class USkyLightComponent Function SetMinOcclusion
struct Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics
{
	struct SkyLightComponent_eventSetMinOcclusion_Parms
	{
		float InMinOcclusion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinOcclusion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::NewProp_InMinOcclusion = { "InMinOcclusion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetMinOcclusion_Parms, InMinOcclusion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::NewProp_InMinOcclusion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetMinOcclusion", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::SkyLightComponent_eventSetMinOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::SkyLightComponent_eventSetMinOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetMinOcclusion)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMinOcclusion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinOcclusion(Z_Param_InMinOcclusion);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetMinOcclusion

// Begin Class USkyLightComponent Function SetOcclusionContrast
struct Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics
{
	struct SkyLightComponent_eventSetOcclusionContrast_Parms
	{
		float InOcclusionContrast;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOcclusionContrast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::NewProp_InOcclusionContrast = { "InOcclusionContrast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionContrast_Parms, InOcclusionContrast), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::NewProp_InOcclusionContrast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetOcclusionContrast", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::SkyLightComponent_eventSetOcclusionContrast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::SkyLightComponent_eventSetOcclusionContrast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetOcclusionContrast)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOcclusionContrast);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOcclusionContrast(Z_Param_InOcclusionContrast);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetOcclusionContrast

// Begin Class USkyLightComponent Function SetOcclusionExponent
struct Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics
{
	struct SkyLightComponent_eventSetOcclusionExponent_Parms
	{
		float InOcclusionExponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOcclusionExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::NewProp_InOcclusionExponent = { "InOcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionExponent_Parms, InOcclusionExponent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::NewProp_InOcclusionExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetOcclusionExponent", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::SkyLightComponent_eventSetOcclusionExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::SkyLightComponent_eventSetOcclusionExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetOcclusionExponent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOcclusionExponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOcclusionExponent(Z_Param_InOcclusionExponent);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetOcclusionExponent

// Begin Class USkyLightComponent Function SetOcclusionTint
struct Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics
{
	struct SkyLightComponent_eventSetOcclusionTint_Parms
	{
		FColor InTint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::NewProp_InTint = { "InTint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetOcclusionTint_Parms, InTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTint_MetaData), NewProp_InTint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::NewProp_InTint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetOcclusionTint", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::SkyLightComponent_eventSetOcclusionTint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::SkyLightComponent_eventSetOcclusionTint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetOcclusionTint)
{
	P_GET_STRUCT_REF(FColor,Z_Param_Out_InTint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOcclusionTint(Z_Param_Out_InTint);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetOcclusionTint

// Begin Class USkyLightComponent Function SetSourceCubemapAngle
struct Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics
{
	struct SkyLightComponent_eventSetSourceCubemapAngle_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|SkyLight" },
		{ "Comment", "/** Sets the angle of the cubemap used when SourceType is set to SpecifiedCubemap and it is non static. It will cause the skylight to update on the next tick. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Sets the angle of the cubemap used when SourceType is set to SpecifiedCubemap and it is non static. It will cause the skylight to update on the next tick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetSourceCubemapAngle_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetSourceCubemapAngle", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::SkyLightComponent_eventSetSourceCubemapAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::SkyLightComponent_eventSetSourceCubemapAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetSourceCubemapAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSourceCubemapAngle(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetSourceCubemapAngle

// Begin Class USkyLightComponent Function SetVolumetricScatteringIntensity
struct Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics
{
	struct SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms
	{
		float NewIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms, NewIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyLightComponent, nullptr, "SetVolumetricScatteringIntensity", nullptr, nullptr, Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::SkyLightComponent_eventSetVolumetricScatteringIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyLightComponent::execSetVolumetricScatteringIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricScatteringIntensity(Z_Param_NewIntensity);
	P_NATIVE_END;
}
// End Class USkyLightComponent Function SetVolumetricScatteringIntensity

// Begin Class USkyLightComponent
void USkyLightComponent::StaticRegisterNativesUSkyLightComponent()
{
	UClass* Class = USkyLightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RecaptureSky", &USkyLightComponent::execRecaptureSky },
		{ "SetCubemap", &USkyLightComponent::execSetCubemap },
		{ "SetCubemapBlend", &USkyLightComponent::execSetCubemapBlend },
		{ "SetIndirectLightingIntensity", &USkyLightComponent::execSetIndirectLightingIntensity },
		{ "SetIntensity", &USkyLightComponent::execSetIntensity },
		{ "SetLightColor", &USkyLightComponent::execSetLightColor },
		{ "SetLowerHemisphereColor", &USkyLightComponent::execSetLowerHemisphereColor },
		{ "SetMinOcclusion", &USkyLightComponent::execSetMinOcclusion },
		{ "SetOcclusionContrast", &USkyLightComponent::execSetOcclusionContrast },
		{ "SetOcclusionExponent", &USkyLightComponent::execSetOcclusionExponent },
		{ "SetOcclusionTint", &USkyLightComponent::execSetOcclusionTint },
		{ "SetSourceCubemapAngle", &USkyLightComponent::execSetSourceCubemapAngle },
		{ "SetVolumetricScatteringIntensity", &USkyLightComponent::execSetVolumetricScatteringIntensity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyLightComponent);
UClass* Z_Construct_UClass_USkyLightComponent_NoRegister()
{
	return USkyLightComponent::StaticClass();
}
struct Z_Construct_UClass_USkyLightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SkyLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRealTimeCapture_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** When enabled, the sky will be captured and convolved to achieve dynamic diffuse and specular environment lighting. \n\x09 * SkyAtmosphere, VolumetricCloud Components as well as sky domes with Sky materials are taken into account. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "When enabled, the sky will be captured and convolved to achieve dynamic diffuse and specular environment lighting.\nSkyAtmosphere, VolumetricCloud Components as well as sky domes with Sky materials are taken into account." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Indicates where to get the light contribution from. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Indicates where to get the light contribution from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Cubemap to use for sky lighting if SourceType is set to SLS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Cubemap to use for sky lighting if SourceType is set to SLS_SpecifiedCubemap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Maximum resolution for the very top processed cubemap mip. Must be a power of 2. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Maximum resolution for the very top processed cubemap mip. Must be a power of 2." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyDistanceThreshold_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Distance from the sky light at which any geometry should be treated as part of the sky. \n\x09 * This is also used by reflection captures, so update reflection captures to see the impact.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Distance from the sky light at which any geometry should be treated as part of the sky.\nThis is also used by reflection captures, so update reflection captures to see the impact." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureEmissiveOnly_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Only capture emissive materials. Skips all lighting making the capture cheaper. Recomended when using CaptureEveryFrame */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Only capture emissive materials. Skips all lighting making the capture cheaper. Recomended when using CaptureEveryFrame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLowerHemisphereIsBlack_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether all distant lighting from the lower hemisphere should be set to LowerHemisphereColor.  \n\x09 * Enabling this is accurate when lighting a scene on a planet where the ground blocks the sky, \n\x09 * However disabling it can be useful to approximate skylight bounce lighting (eg Movable light).\n\x09 */" },
		{ "DisplayName", "Lower Hemisphere Is Solid Color" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Whether all distant lighting from the lower hemisphere should be set to LowerHemisphereColor.\nEnabling this is accurate when lighting a scene on a planet where the ground blocks the sky,\nHowever disabling it can be useful to approximate skylight bounce lighting (eg Movable light)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerHemisphereColor_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaxDistance_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "Comment", "/** \n\x09 * Max distance that the occlusion of one point will affect another.\n\x09 * Higher values increase the cost of Distance Field AO exponentially.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Max distance that the occlusion of one point will affect another.\nHigher values increase the cost of Distance Field AO exponentially." },
		{ "UIMax", "1500" },
		{ "UIMin", "200" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "Comment", "/** \n\x09 * Contrast S-curve applied to the computed AO.  A value of 0 means no contrast increase, 1 is a significant contrast increase.\n\x09 */" },
		{ "DisplayName", "Occlusion Contrast" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Contrast S-curve applied to the computed AO.  A value of 0 means no contrast increase, 1 is a significant contrast increase." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionExponent_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "Comment", "/** \n\x09 * Exponent applied to the computed AO.  Values lower than 1 brighten occlusion overall without losing contact shadows.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Exponent applied to the computed AO.  Values lower than 1 brighten occlusion overall without losing contact shadows." },
		{ "UIMax", "1.6" },
		{ "UIMin", ".6" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinOcclusion_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "Comment", "/** \n\x09 * Controls the darkest that a fully occluded area can get.  This tends to destroy contact shadows, use Contrast or OcclusionExponent instead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Controls the darkest that a fully occluded area can get.  This tends to destroy contact shadows, use Contrast or OcclusionExponent instead." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTint_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "Comment", "/** Tint color on occluded areas, artistic control. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Tint color on occluded areas, artistic control." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCloudAmbientOcclusion_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the cloud should occlude sky contribution within the atmosphere (progressively fading multiple scattering out) or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Whether the cloud should occlude sky contribution within the atmosphere (progressively fading multiple scattering out) or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudAmbientOcclusionStrength_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The strength of the ambient occlusion, higher value will block more light.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The strength of the ambient occlusion, higher value will block more light." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudAmbientOcclusionExtent_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The world space radius of the cloud ambient occlusion map around the camera in kilometers.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "The world space radius of the cloud ambient occlusion map around the camera in kilometers." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudAmbientOcclusionMapResolutionScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the cloud ambient occlusion map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.SkyAO.MaxResolution'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the cloud ambient occlusion map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.SkyAO.MaxResolution'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudAmbientOcclusionApertureScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Controls the cone aperture angle over which the sky occlusion due to volumetric clouds is evaluated. A value of 1 means `take into account the entire hemisphere` resulting in blurry occlusion, while a value of 0 means `take into account a single up occlusion direction up` resulting in sharp occlusion.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Controls the cone aperture angle over which the sky occlusion due to volumetric clouds is evaluated. A value of 1 means `take into account the entire hemisphere` resulting in blurry occlusion, while a value of 0 means `take into account a single up occlusion direction up` resulting in sharp occlusion." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionCombineMode_MetaData[] = {
		{ "Category", "DistanceFieldAmbientOcclusion" },
		{ "Comment", "/** Controls how occlusion from Distance Field Ambient Occlusion is combined with Screen Space Ambient Occlusion. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Controls how occlusion from Distance Field Ambient Occlusion is combined with Screen Space Ambient Occlusion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendDestinationCubemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRealTimeCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRealTimeCapture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkyDistanceThreshold;
	static void NewProp_bCaptureEmissiveOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureEmissiveOnly;
	static void NewProp_bLowerHemisphereIsBlack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowerHemisphereIsBlack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowerHemisphereColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinOcclusion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OcclusionTint;
	static void NewProp_bCloudAmbientOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloudAmbientOcclusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudAmbientOcclusionStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudAmbientOcclusionExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudAmbientOcclusionMapResolutionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudAmbientOcclusionApertureScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionCombineMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendDestinationCubemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyLightComponent_RecaptureSky, "RecaptureSky" }, // 1137326383
		{ &Z_Construct_UFunction_USkyLightComponent_SetCubemap, "SetCubemap" }, // 3926902862
		{ &Z_Construct_UFunction_USkyLightComponent_SetCubemapBlend, "SetCubemapBlend" }, // 4229618692
		{ &Z_Construct_UFunction_USkyLightComponent_SetIndirectLightingIntensity, "SetIndirectLightingIntensity" }, // 2923192207
		{ &Z_Construct_UFunction_USkyLightComponent_SetIntensity, "SetIntensity" }, // 745746529
		{ &Z_Construct_UFunction_USkyLightComponent_SetLightColor, "SetLightColor" }, // 4179750888
		{ &Z_Construct_UFunction_USkyLightComponent_SetLowerHemisphereColor, "SetLowerHemisphereColor" }, // 4245917306
		{ &Z_Construct_UFunction_USkyLightComponent_SetMinOcclusion, "SetMinOcclusion" }, // 1189950532
		{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionContrast, "SetOcclusionContrast" }, // 3597752860
		{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionExponent, "SetOcclusionExponent" }, // 404649837
		{ &Z_Construct_UFunction_USkyLightComponent_SetOcclusionTint, "SetOcclusionTint" }, // 1112365714
		{ &Z_Construct_UFunction_USkyLightComponent_SetSourceCubemapAngle, "SetSourceCubemapAngle" }, // 2098570915
		{ &Z_Construct_UFunction_USkyLightComponent_SetVolumetricScatteringIntensity, "SetVolumetricScatteringIntensity" }, // 3396380245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyLightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bRealTimeCapture_SetBit(void* Obj)
{
	((USkyLightComponent*)Obj)->bRealTimeCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bRealTimeCapture = { "bRealTimeCapture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkyLightComponent), &Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bRealTimeCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRealTimeCapture_MetaData), NewProp_bRealTimeCapture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, SourceType), Z_Construct_UEnum_Engine_ESkyLightSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 2296310417
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cubemap_MetaData), NewProp_Cubemap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceCubemapAngle = { "SourceCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, SourceCubemapAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCubemapAngle_MetaData), NewProp_SourceCubemapAngle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, CubemapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapResolution_MetaData), NewProp_CubemapResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SkyDistanceThreshold = { "SkyDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, SkyDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyDistanceThreshold_MetaData), NewProp_SkyDistanceThreshold_MetaData) };
void Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly_SetBit(void* Obj)
{
	((USkyLightComponent*)Obj)->bCaptureEmissiveOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly = { "bCaptureEmissiveOnly", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkyLightComponent), &Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureEmissiveOnly_MetaData), NewProp_bCaptureEmissiveOnly_MetaData) };
void Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack_SetBit(void* Obj)
{
	((USkyLightComponent*)Obj)->bLowerHemisphereIsBlack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack = { "bLowerHemisphereIsBlack", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USkyLightComponent), &Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLowerHemisphereIsBlack_MetaData), NewProp_bLowerHemisphereIsBlack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_LowerHemisphereColor = { "LowerHemisphereColor", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, LowerHemisphereColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerHemisphereColor_MetaData), NewProp_LowerHemisphereColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionMaxDistance = { "OcclusionMaxDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionMaxDistance_MetaData), NewProp_OcclusionMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionExponent = { "OcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionExponent_MetaData), NewProp_OcclusionExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_MinOcclusion = { "MinOcclusion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, MinOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinOcclusion_MetaData), NewProp_MinOcclusion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionTint = { "OcclusionTint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionTint_MetaData), NewProp_OcclusionTint_MetaData) };
void Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCloudAmbientOcclusion_SetBit(void* Obj)
{
	((USkyLightComponent*)Obj)->bCloudAmbientOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCloudAmbientOcclusion = { "bCloudAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkyLightComponent), &Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCloudAmbientOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCloudAmbientOcclusion_MetaData), NewProp_bCloudAmbientOcclusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionStrength = { "CloudAmbientOcclusionStrength", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, CloudAmbientOcclusionStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudAmbientOcclusionStrength_MetaData), NewProp_CloudAmbientOcclusionStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionExtent = { "CloudAmbientOcclusionExtent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, CloudAmbientOcclusionExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudAmbientOcclusionExtent_MetaData), NewProp_CloudAmbientOcclusionExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionMapResolutionScale = { "CloudAmbientOcclusionMapResolutionScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, CloudAmbientOcclusionMapResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudAmbientOcclusionMapResolutionScale_MetaData), NewProp_CloudAmbientOcclusionMapResolutionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionApertureScale = { "CloudAmbientOcclusionApertureScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, CloudAmbientOcclusionApertureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudAmbientOcclusionApertureScale_MetaData), NewProp_CloudAmbientOcclusionApertureScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionCombineMode = { "OcclusionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, OcclusionCombineMode), Z_Construct_UEnum_Engine_EOcclusionCombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionCombineMode_MetaData), NewProp_OcclusionCombineMode_MetaData) }; // 2130332720
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkyLightComponent_Statics::NewProp_BlendDestinationCubemap = { "BlendDestinationCubemap", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyLightComponent, BlendDestinationCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendDestinationCubemap_MetaData), NewProp_BlendDestinationCubemap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyLightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bRealTimeCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Cubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SourceCubemapAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CubemapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_SkyDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCaptureEmissiveOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bLowerHemisphereIsBlack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_LowerHemisphereColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_MinOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_bCloudAmbientOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionMapResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_CloudAmbientOcclusionApertureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_OcclusionCombineMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyLightComponent_Statics::NewProp_BlendDestinationCubemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkyLightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULightComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyLightComponent_Statics::ClassParams = {
	&USkyLightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkyLightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyLightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkyLightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkyLightComponent()
{
	if (!Z_Registration_Info_UClass_USkyLightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyLightComponent.OuterSingleton, Z_Construct_UClass_USkyLightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkyLightComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkyLightComponent>()
{
	return USkyLightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkyLightComponent);
USkyLightComponent::~USkyLightComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkyLightComponent)
// End Class USkyLightComponent

// Begin ScriptStruct FPrecomputedSkyLightInstanceData
static_assert(std::is_polymorphic<FPrecomputedSkyLightInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FPrecomputedSkyLightInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData;
class UScriptStruct* FPrecomputedSkyLightInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrecomputedSkyLightInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrecomputedSkyLightInstanceData>()
{
	return FPrecomputedSkyLightInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store lightmap data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightGuid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageBrightness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrecomputedSkyLightInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_LightGuid = { "LightGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedSkyLightInstanceData, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightGuid_MetaData), NewProp_LightGuid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_AverageBrightness = { "AverageBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedSkyLightInstanceData, AverageBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageBrightness_MetaData), NewProp_AverageBrightness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_LightGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewProp_AverageBrightness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSceneComponentInstanceData,
	&NewStructOps,
	"PrecomputedSkyLightInstanceData",
	Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::PropPointers),
	sizeof(FPrecomputedSkyLightInstanceData),
	alignof(FPrecomputedSkyLightInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData.InnerSingleton;
}
// End ScriptStruct FPrecomputedSkyLightInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkyLightSourceType_StaticEnum, TEXT("ESkyLightSourceType"), &Z_Registration_Info_UEnum_ESkyLightSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2296310417U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPrecomputedSkyLightInstanceData::StaticStruct, Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics::NewStructOps, TEXT("PrecomputedSkyLightInstanceData"), &Z_Registration_Info_UScriptStruct_PrecomputedSkyLightInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrecomputedSkyLightInstanceData), 2784625257U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkyLightComponent, USkyLightComponent::StaticClass, TEXT("USkyLightComponent"), &Z_Registration_Info_UClass_USkyLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyLightComponent), 1219975711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_1003419134(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
