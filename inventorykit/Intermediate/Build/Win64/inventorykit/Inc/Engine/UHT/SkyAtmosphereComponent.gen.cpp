// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SkyAtmosphereComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyAtmosphereComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_ASkyAtmosphere();
ENGINE_API UClass* Z_Construct_UClass_ASkyAtmosphere_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent();
ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTentDistribution();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FTentDistribution
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TentDistribution;
class UScriptStruct* FTentDistribution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TentDistribution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TentDistribution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTentDistribution, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TentDistribution"));
	}
	return Z_Registration_Info_UScriptStruct_TentDistribution.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTentDistribution>()
{
	return FTentDistribution::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTentDistribution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipAltitude_MetaData[] = {
		{ "Category", "Tent" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "UIMax", "60.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TipValue_MetaData[] = {
		{ "Category", "Tent" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Tent" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.010000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TipAltitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TipValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTentDistribution>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude = { "TipAltitude", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTentDistribution, TipAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipAltitude_MetaData), NewProp_TipAltitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue = { "TipValue", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTentDistribution, TipValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TipValue_MetaData), NewProp_TipValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTentDistribution, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTentDistribution_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TentDistribution",
	Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers),
	sizeof(FTentDistribution),
	alignof(FTentDistribution),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTentDistribution()
{
	if (!Z_Registration_Info_UScriptStruct_TentDistribution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TentDistribution.InnerSingleton, Z_Construct_UScriptStruct_FTentDistribution_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TentDistribution.InnerSingleton;
}
// End ScriptStruct FTentDistribution

// Begin Enum ESkyAtmosphereTransformMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode;
static UEnum* ESkyAtmosphereTransformMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkyAtmosphereTransformMode"));
	}
	return Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ESkyAtmosphereTransformMode>()
{
	return ESkyAtmosphereTransformMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "PlanetCenterAtComponentTransform.Name", "ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform" },
		{ "PlanetTopAtAbsoluteWorldOrigin.Name", "ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin" },
		{ "PlanetTopAtComponentTransform.Name", "ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin", (int64)ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin },
		{ "ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform", (int64)ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform },
		{ "ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform", (int64)ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ESkyAtmosphereTransformMode",
	"ESkyAtmosphereTransformMode",
	Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode()
{
	if (!Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.InnerSingleton, Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode.InnerSingleton;
}
// End Enum ESkyAtmosphereTransformMode

// Begin Class USkyAtmosphereComponent Function GetAtmosphereTransmitanceOnGroundAtPlanetTop
struct Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics
{
	struct SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms
	{
		UDirectionalLightComponent* DirectionalLight;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "DisplayName", "Get Atmosphere Transmitance On Ground At Planet Top" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLight_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionalLight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_DirectionalLight = { "DirectionalLight", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms, DirectionalLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionalLight_MetaData), NewProp_DirectionalLight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_DirectionalLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "GetAtmosphereTransmitanceOnGroundAtPlanetTop", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::SkyAtmosphereComponent_eventGetAtmosphereTransmitanceOnGroundAtPlanetTop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execGetAtmosphereTransmitanceOnGroundAtPlanetTop)
{
	P_GET_OBJECT(UDirectionalLightComponent,Z_Param_DirectionalLight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetAtmosphereTransmitanceOnGroundAtPlanetTop(Z_Param_DirectionalLight);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function GetAtmosphereTransmitanceOnGroundAtPlanetTop

// Begin Class USkyAtmosphereComponent Function GetOverridenAtmosphereLightDirection
struct Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics
{
	struct SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms
	{
		int32 AtmosphereLightIndex;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms, AtmosphereLightIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "GetOverridenAtmosphereLightDirection", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::SkyAtmosphereComponent_eventGetOverridenAtmosphereLightDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execGetOverridenAtmosphereLightDirection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetOverridenAtmosphereLightDirection(Z_Param_AtmosphereLightIndex);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function GetOverridenAtmosphereLightDirection

// Begin Class USkyAtmosphereComponent Function IsAtmosphereLightDirectionOverriden
struct Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics
{
	struct SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms
	{
		int32 AtmosphereLightIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms, AtmosphereLightIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms), &Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_AtmosphereLightIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "IsAtmosphereLightDirectionOverriden", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::SkyAtmosphereComponent_eventIsAtmosphereLightDirectionOverriden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execIsAtmosphereLightDirectionOverriden)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAtmosphereLightDirectionOverriden(Z_Param_AtmosphereLightIndex);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function IsAtmosphereLightDirectionOverriden

// Begin Class USkyAtmosphereComponent Function OverrideAtmosphereLightDirection
struct Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics
{
	struct SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms
	{
		int32 AtmosphereLightIndex;
		FVector LightDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms, AtmosphereLightIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection = { "LightDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms, LightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightDirection_MetaData), NewProp_LightDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "OverrideAtmosphereLightDirection", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execOverrideAtmosphereLightDirection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LightDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideAtmosphereLightDirection(Z_Param_AtmosphereLightIndex,Z_Param_Out_LightDirection);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function OverrideAtmosphereLightDirection

// Begin Class USkyAtmosphereComponent Function ResetAtmosphereLightDirectionOverride
struct Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics
{
	struct SkyAtmosphereComponent_eventResetAtmosphereLightDirectionOverride_Parms
	{
		int32 AtmosphereLightIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventResetAtmosphereLightDirectionOverride_Parms, AtmosphereLightIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::NewProp_AtmosphereLightIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "ResetAtmosphereLightDirectionOverride", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::SkyAtmosphereComponent_eventResetAtmosphereLightDirectionOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::SkyAtmosphereComponent_eventResetAtmosphereLightDirectionOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execResetAtmosphereLightDirectionOverride)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAtmosphereLightDirectionOverride(Z_Param_AtmosphereLightIndex);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function ResetAtmosphereLightDirectionOverride

// Begin Class USkyAtmosphereComponent Function SetAerialPespectiveViewDistanceScale
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics
{
	struct SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetAerialPespectiveViewDistanceScale", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetAerialPespectiveViewDistanceScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAerialPespectiveViewDistanceScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetAerialPespectiveViewDistanceScale

// Begin Class USkyAtmosphereComponent Function SetAtmosphereHeight
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics
{
	struct SkyAtmosphereComponent_eventSetAtmosphereHeight_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetAtmosphereHeight_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetAtmosphereHeight", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::SkyAtmosphereComponent_eventSetAtmosphereHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::SkyAtmosphereComponent_eventSetAtmosphereHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetAtmosphereHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAtmosphereHeight(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetAtmosphereHeight

// Begin Class USkyAtmosphereComponent Function SetBottomRadius
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics
{
	struct SkyAtmosphereComponent_eventSetBottomRadius_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Ground Radius" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetBottomRadius_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetBottomRadius", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::SkyAtmosphereComponent_eventSetBottomRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::SkyAtmosphereComponent_eventSetBottomRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetBottomRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBottomRadius(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetBottomRadius

// Begin Class USkyAtmosphereComponent Function SetGroundAlbedo
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics
{
	struct SkyAtmosphereComponent_eventSetGroundAlbedo_Parms
	{
		FColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetGroundAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetGroundAlbedo", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::SkyAtmosphereComponent_eventSetGroundAlbedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::SkyAtmosphereComponent_eventSetGroundAlbedo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetGroundAlbedo)
{
	P_GET_STRUCT_REF(FColor,Z_Param_Out_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroundAlbedo(Z_Param_Out_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetGroundAlbedo

// Begin Class USkyAtmosphereComponent Function SetHeightFogContribution
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics
{
	struct SkyAtmosphereComponent_eventSetHeightFogContribution_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetHeightFogContribution_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetHeightFogContribution", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::SkyAtmosphereComponent_eventSetHeightFogContribution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::SkyAtmosphereComponent_eventSetHeightFogContribution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetHeightFogContribution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightFogContribution(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetHeightFogContribution

// Begin Class USkyAtmosphereComponent Function SetHoldout
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics
{
	struct SkyAtmosphereComponent_eventSetHoldout_Parms
	{
		bool bNewHoldout;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewHoldout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHoldout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::NewProp_bNewHoldout_SetBit(void* Obj)
{
	((SkyAtmosphereComponent_eventSetHoldout_Parms*)Obj)->bNewHoldout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::NewProp_bNewHoldout = { "bNewHoldout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyAtmosphereComponent_eventSetHoldout_Parms), &Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::NewProp_bNewHoldout_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::NewProp_bNewHoldout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetHoldout", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::SkyAtmosphereComponent_eventSetHoldout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::SkyAtmosphereComponent_eventSetHoldout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetHoldout)
{
	P_GET_UBOOL(Z_Param_bNewHoldout);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoldout(Z_Param_bNewHoldout);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetHoldout

// Begin Class USkyAtmosphereComponent Function SetMieAbsorption
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics
{
	struct SkyAtmosphereComponent_eventSetMieAbsorption_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAbsorption_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAbsorption", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::SkyAtmosphereComponent_eventSetMieAbsorption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::SkyAtmosphereComponent_eventSetMieAbsorption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAbsorption)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMieAbsorption(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetMieAbsorption

// Begin Class USkyAtmosphereComponent Function SetMieAbsorptionScale
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics
{
	struct SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAbsorptionScale", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAbsorptionScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMieAbsorptionScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetMieAbsorptionScale

// Begin Class USkyAtmosphereComponent Function SetMieAnisotropy
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics
{
	struct SkyAtmosphereComponent_eventSetMieAnisotropy_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAnisotropy_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAnisotropy", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::SkyAtmosphereComponent_eventSetMieAnisotropy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::SkyAtmosphereComponent_eventSetMieAnisotropy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAnisotropy)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMieAnisotropy(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetMieAnisotropy

// Begin Class USkyAtmosphereComponent Function SetMieExponentialDistribution
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics
{
	struct SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieExponentialDistribution", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieExponentialDistribution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMieExponentialDistribution(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetMieExponentialDistribution

// Begin Class USkyAtmosphereComponent Function SetMieScattering
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics
{
	struct SkyAtmosphereComponent_eventSetMieScattering_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieScattering_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieScattering", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::SkyAtmosphereComponent_eventSetMieScattering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::SkyAtmosphereComponent_eventSetMieScattering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieScattering)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMieScattering(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetMieScattering

// Begin Class USkyAtmosphereComponent Function SetMieScatteringScale
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics
{
	struct SkyAtmosphereComponent_eventSetMieScatteringScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieScatteringScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieScatteringScale", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::SkyAtmosphereComponent_eventSetMieScatteringScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::SkyAtmosphereComponent_eventSetMieScatteringScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieScatteringScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMieScatteringScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetMieScatteringScale

// Begin Class USkyAtmosphereComponent Function SetMultiScatteringFactor
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics
{
	struct SkyAtmosphereComponent_eventSetMultiScatteringFactor_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMultiScatteringFactor_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMultiScatteringFactor", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::SkyAtmosphereComponent_eventSetMultiScatteringFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::SkyAtmosphereComponent_eventSetMultiScatteringFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMultiScatteringFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMultiScatteringFactor(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetMultiScatteringFactor

// Begin Class USkyAtmosphereComponent Function SetOtherAbsorption
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics
{
	struct SkyAtmosphereComponent_eventSetOtherAbsorption_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Absorption" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetOtherAbsorption_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetOtherAbsorption", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::SkyAtmosphereComponent_eventSetOtherAbsorption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::SkyAtmosphereComponent_eventSetOtherAbsorption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetOtherAbsorption)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOtherAbsorption(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetOtherAbsorption

// Begin Class USkyAtmosphereComponent Function SetOtherAbsorptionScale
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics
{
	struct SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Absorption Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetOtherAbsorptionScale", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetOtherAbsorptionScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOtherAbsorptionScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetOtherAbsorptionScale

// Begin Class USkyAtmosphereComponent Function SetRayleighExponentialDistribution
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics
{
	struct SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighExponentialDistribution", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighExponentialDistribution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRayleighExponentialDistribution(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetRayleighExponentialDistribution

// Begin Class USkyAtmosphereComponent Function SetRayleighScattering
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics
{
	struct SkyAtmosphereComponent_eventSetRayleighScattering_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighScattering_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighScattering", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::SkyAtmosphereComponent_eventSetRayleighScattering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::SkyAtmosphereComponent_eventSetRayleighScattering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighScattering)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRayleighScattering(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetRayleighScattering

// Begin Class USkyAtmosphereComponent Function SetRayleighScatteringScale
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics
{
	struct SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighScatteringScale", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighScatteringScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRayleighScatteringScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetRayleighScatteringScale

// Begin Class USkyAtmosphereComponent Function SetRenderInMainPass
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics
{
	struct SkyAtmosphereComponent_eventSetRenderInMainPass_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((SkyAtmosphereComponent_eventSetRenderInMainPass_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkyAtmosphereComponent_eventSetRenderInMainPass_Parms), &Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRenderInMainPass", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::SkyAtmosphereComponent_eventSetRenderInMainPass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::SkyAtmosphereComponent_eventSetRenderInMainPass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRenderInMainPass)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderInMainPass(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetRenderInMainPass

// Begin Class USkyAtmosphereComponent Function SetSkyLuminanceFactor
struct Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics
{
	struct SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetSkyLuminanceFactor", nullptr, nullptr, Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USkyAtmosphereComponent::execSetSkyLuminanceFactor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkyLuminanceFactor(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USkyAtmosphereComponent Function SetSkyLuminanceFactor

// Begin Class USkyAtmosphereComponent
void USkyAtmosphereComponent::StaticRegisterNativesUSkyAtmosphereComponent()
{
	UClass* Class = USkyAtmosphereComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAtmosphereTransmitanceOnGroundAtPlanetTop", &USkyAtmosphereComponent::execGetAtmosphereTransmitanceOnGroundAtPlanetTop },
		{ "GetOverridenAtmosphereLightDirection", &USkyAtmosphereComponent::execGetOverridenAtmosphereLightDirection },
		{ "IsAtmosphereLightDirectionOverriden", &USkyAtmosphereComponent::execIsAtmosphereLightDirectionOverriden },
		{ "OverrideAtmosphereLightDirection", &USkyAtmosphereComponent::execOverrideAtmosphereLightDirection },
		{ "ResetAtmosphereLightDirectionOverride", &USkyAtmosphereComponent::execResetAtmosphereLightDirectionOverride },
		{ "SetAerialPespectiveViewDistanceScale", &USkyAtmosphereComponent::execSetAerialPespectiveViewDistanceScale },
		{ "SetAtmosphereHeight", &USkyAtmosphereComponent::execSetAtmosphereHeight },
		{ "SetBottomRadius", &USkyAtmosphereComponent::execSetBottomRadius },
		{ "SetGroundAlbedo", &USkyAtmosphereComponent::execSetGroundAlbedo },
		{ "SetHeightFogContribution", &USkyAtmosphereComponent::execSetHeightFogContribution },
		{ "SetHoldout", &USkyAtmosphereComponent::execSetHoldout },
		{ "SetMieAbsorption", &USkyAtmosphereComponent::execSetMieAbsorption },
		{ "SetMieAbsorptionScale", &USkyAtmosphereComponent::execSetMieAbsorptionScale },
		{ "SetMieAnisotropy", &USkyAtmosphereComponent::execSetMieAnisotropy },
		{ "SetMieExponentialDistribution", &USkyAtmosphereComponent::execSetMieExponentialDistribution },
		{ "SetMieScattering", &USkyAtmosphereComponent::execSetMieScattering },
		{ "SetMieScatteringScale", &USkyAtmosphereComponent::execSetMieScatteringScale },
		{ "SetMultiScatteringFactor", &USkyAtmosphereComponent::execSetMultiScatteringFactor },
		{ "SetOtherAbsorption", &USkyAtmosphereComponent::execSetOtherAbsorption },
		{ "SetOtherAbsorptionScale", &USkyAtmosphereComponent::execSetOtherAbsorptionScale },
		{ "SetRayleighExponentialDistribution", &USkyAtmosphereComponent::execSetRayleighExponentialDistribution },
		{ "SetRayleighScattering", &USkyAtmosphereComponent::execSetRayleighScattering },
		{ "SetRayleighScatteringScale", &USkyAtmosphereComponent::execSetRayleighScatteringScale },
		{ "SetRenderInMainPass", &USkyAtmosphereComponent::execSetRenderInMainPass },
		{ "SetSkyLuminanceFactor", &USkyAtmosphereComponent::execSetSkyLuminanceFactor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyAtmosphereComponent);
UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister()
{
	return USkyAtmosphereComponent::StaticClass();
}
struct Z_Construct_UClass_USkyAtmosphereComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * A component that represents a planet atmosphere material and simulates sky and light scattering within it.\n * @see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SkyAtmosphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "A component that represents a planet atmosphere material and simulates sky and light scattering within it.\n@see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomRadius_MetaData[] = {
		{ "Category", "Planet" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The radius in kilometers from the center of the planet to the ground level. */" },
		{ "DisplayName", "Ground Radius" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The radius in kilometers from the center of the planet to the ground level." },
		{ "UIMax", "7000.000000" },
		{ "UIMin", "1.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The ground albedo that will tint the atmosphere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereHeight_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The height of the atmosphere layer above the ground in kilometers. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The height of the atmosphere layer above the ground in kilometers." },
		{ "UIMax", "200.000000" },
		{ "UIMin", "1.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringFactor_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Factor applied to multiple scattering only (after the sun light has bounced around in the atmosphere at least once). \n\x09 * Multiple scattering is evaluated using a dual scattering approach. \n\x09 * A value of 2 is recommended to better represent default atmosphere when r.SkyAtmosphere.MultiScatteringLUT.HighQuality=0. \n\x09 */" },
		{ "DisplayName", "MultiScattering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Factor applied to multiple scattering only (after the sun light has bounced around in the atmosphere at least once).\nMultiple scattering is evaluated using a dual scattering approach.\nA value of 2 is recommended to better represent default atmosphere when r.SkyAtmosphere.MultiScatteringLUT.HighQuality=0." },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceSampleCountScale_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the atmosphere tracing sample count. Quality level scalability\n\x09 * The sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 0.\n\x09 * The sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.FastSkyLUT.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 1.\n\x09 * The sample count is still clamped for aerial perspective according to  'r.SkyAtmosphere.AerialPerspectiveLUT.SampleCountMaxPerSlice'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "Scale the atmosphere tracing sample count. Quality level scalability\nThe sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 0.\nThe sample count is still clamped according to scalability setting to 'r.SkyAtmosphere.FastSkyLUT.SampleCountMax' when 'r.SkyAtmosphere.FastSkyLUT' is 1.\nThe sample count is still clamped for aerial perspective according to  'r.SkyAtmosphere.AerialPerspectiveLUT.SampleCountMaxPerSlice'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Rayleigh scattering coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Rayleigh scattering coefficient scale." },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScattering_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "Comment", "/** The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayleighExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%." },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MieScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Mie scattering coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie scattering coefficient scale." },
		{ "UIMax", "5.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MieScattering_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "Comment", "/** The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be scattered more. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be scattered more." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Mie absorption coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie absorption coefficient scale." },
		{ "UIMax", "5.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorption_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "Comment", "/** The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be absorbed more. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be absorbed more." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MieAnisotropy_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMax", "0.999000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** A value of 0 mean light is uniformly scattered. A value closer to 1 means lights will scatter more forward, resulting in halos around light sources. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "A value of 0 mean light is uniformly scattered. A value closer to 1 means lights will scatter more forward, resulting in halos around light sources." },
		{ "UIMax", "0.999000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MieExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The altitude in kilometer at which Mie effects are reduced to 40%.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Mie effects are reduced to 40%." },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherAbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. This approximates ozone molecules distribution in the Earth atmosphere. */" },
		{ "DisplayName", "Absorption Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. This approximates ozone molecules distribution in the Earth atmosphere." },
		{ "UIMax", "0.200000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherAbsorption_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "Comment", "/** Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. The default values represents ozone molecules absorption in the Earth atmosphere. */" },
		{ "DisplayName", "Absorption" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. The default values represents ozone molecules absorption in the Earth atmosphere." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherTentDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "Comment", "/** Represents the altitude based tent distribution of absorption particles in the atmosphere. */" },
		{ "DisplayName", "Tent Distribution" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Represents the altitude based tent distribution of absorption particles in the atmosphere." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyLuminanceFactor_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "Comment", "/** Scales the luminance of pixels representing the sky. This will impact the captured sky light. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Scales the luminance of pixels representing the sky. This will impact the captured sky light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveViewDistanceScale_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Makes the aerial perspective look thicker by scaling distances from view to surfaces (opaque and translucent). */" },
		{ "DisplayName", "Aerial Perspective View Distance Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Makes the aerial perspective look thicker by scaling distances from view to surfaces (opaque and translucent)." },
		{ "UIMax", "3.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogContribution_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Scale the sky and atmosphere lights contribution to the height fog when SupportSkyAtmosphereAffectsHeightFog project setting is true.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Scale the sky and atmosphere lights contribution to the height fog when SupportSkyAtmosphereAffectsHeightFog project setting is true." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceMinLightElevationAngle_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "-90.000000" },
		{ "Comment", "/** The minimum elevation angle in degree that should be used to evaluate the sun transmittance to the ground. Useful to maintain a visible sun light and shadow on meshes even when the sun has started going below the horizon. This does not affect the aerial perspective.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The minimum elevation angle in degree that should be used to evaluate the sun transmittance to the ground. Useful to maintain a visible sun light and shadow on meshes even when the sun has started going below the horizon. This does not affect the aerial perspective." },
		{ "UIMax", "90.000000" },
		{ "UIMin", "-90.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialPerspectiveStartDepth_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The distance (kilometers) at which we start evaluating the aerial perspective. Having the aerial perspective starts away from the camera can help with performance: pixels not affected by the aerial perspective will have their computation skipped using early depth test.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The distance (kilometers) at which we start evaluating the aerial perspective. Having the aerial perspective starts away from the camera can help with performance: pixels not affected by the aerial perspective will have their computation skipped using early depth test." },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.001000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoldout_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\". */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInMainPass_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be rendered in the main pass (basepass, transparency) */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "If true, this component will be rendered in the main pass (basepass, transparency)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticLightingBuiltGUID_MetaData[] = {
		{ "Comment", "/**\n\x09 * GUID used to associate a atmospheric component with precomputed lighting/shadowing information across levels.\n\x09 * The GUID changes whenever the atmospheric properties change, e.g. LUTs.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "GUID used to associate a atmospheric component with precomputed lighting/shadowing information across levels.\nThe GUID changes whenever the atmospheric properties change, e.g. LUTs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AtmosphereHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceSampleCountScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighScatteringScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayleighScattering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighExponentialDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MieScatteringScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MieScattering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAbsorptionScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MieAbsorption;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAnisotropy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MieExponentialDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OtherAbsorptionScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherAbsorption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherTentDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLuminanceFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveViewDistanceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogContribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmittanceMinLightElevationAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPerspectiveStartDepth;
	static void NewProp_bHoldout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldout;
	static void NewProp_bRenderInMainPass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInMainPass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bStaticLightingBuiltGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_GetAtmosphereTransmitanceOnGroundAtPlanetTop, "GetAtmosphereTransmitanceOnGroundAtPlanetTop" }, // 1059967658
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_GetOverridenAtmosphereLightDirection, "GetOverridenAtmosphereLightDirection" }, // 4176536394
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_IsAtmosphereLightDirectionOverriden, "IsAtmosphereLightDirectionOverriden" }, // 1107882359
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection, "OverrideAtmosphereLightDirection" }, // 978678416
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_ResetAtmosphereLightDirectionOverride, "ResetAtmosphereLightDirectionOverride" }, // 4226497123
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale, "SetAerialPespectiveViewDistanceScale" }, // 3124622190
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetAtmosphereHeight, "SetAtmosphereHeight" }, // 275462837
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetBottomRadius, "SetBottomRadius" }, // 2580960962
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetGroundAlbedo, "SetGroundAlbedo" }, // 810050457
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution, "SetHeightFogContribution" }, // 2622537659
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetHoldout, "SetHoldout" }, // 1910988101
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption, "SetMieAbsorption" }, // 483737736
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale, "SetMieAbsorptionScale" }, // 4128271970
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy, "SetMieAnisotropy" }, // 1526075674
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution, "SetMieExponentialDistribution" }, // 1564188361
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering, "SetMieScattering" }, // 3138923324
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale, "SetMieScatteringScale" }, // 3729363187
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMultiScatteringFactor, "SetMultiScatteringFactor" }, // 2988455684
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption, "SetOtherAbsorption" }, // 4131089785
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale, "SetOtherAbsorptionScale" }, // 2391070102
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution, "SetRayleighExponentialDistribution" }, // 3182776470
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering, "SetRayleighScattering" }, // 1117900929
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale, "SetRayleighScatteringScale" }, // 2701993399
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRenderInMainPass, "SetRenderInMainPass" }, // 3520145752
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor, "SetSkyLuminanceFactor" }, // 1116093134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyAtmosphereComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, TransformMode), Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformMode_MetaData), NewProp_TransformMode_MetaData) }; // 3754713179
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius = { "BottomRadius", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, BottomRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomRadius_MetaData), NewProp_BottomRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, GroundAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundAlbedo_MetaData), NewProp_GroundAlbedo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight = { "AtmosphereHeight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, AtmosphereHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtmosphereHeight_MetaData), NewProp_AtmosphereHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor = { "MultiScatteringFactor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MultiScatteringFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiScatteringFactor_MetaData), NewProp_MultiScatteringFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TraceSampleCountScale = { "TraceSampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, TraceSampleCountScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceSampleCountScale_MetaData), NewProp_TraceSampleCountScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale = { "RayleighScatteringScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayleighScatteringScale_MetaData), NewProp_RayleighScatteringScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering = { "RayleighScattering", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayleighScattering_MetaData), NewProp_RayleighScattering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution = { "RayleighExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighExponentialDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayleighExponentialDistribution_MetaData), NewProp_RayleighExponentialDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale = { "MieScatteringScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MieScatteringScale_MetaData), NewProp_MieScatteringScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering = { "MieScattering", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MieScattering_MetaData), NewProp_MieScattering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale = { "MieAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieAbsorptionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MieAbsorptionScale_MetaData), NewProp_MieAbsorptionScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption = { "MieAbsorption", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MieAbsorption_MetaData), NewProp_MieAbsorption_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy = { "MieAnisotropy", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieAnisotropy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MieAnisotropy_MetaData), NewProp_MieAnisotropy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution = { "MieExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieExponentialDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MieExponentialDistribution_MetaData), NewProp_MieExponentialDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale = { "OtherAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, OtherAbsorptionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherAbsorptionScale_MetaData), NewProp_OtherAbsorptionScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption = { "OtherAbsorption", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, OtherAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherAbsorption_MetaData), NewProp_OtherAbsorption_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution = { "OtherTentDistribution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, OtherTentDistribution), Z_Construct_UScriptStruct_FTentDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherTentDistribution_MetaData), NewProp_OtherTentDistribution_MetaData) }; // 4175820675
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor = { "SkyLuminanceFactor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, SkyLuminanceFactor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyLuminanceFactor_MetaData), NewProp_SkyLuminanceFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale = { "AerialPespectiveViewDistanceScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, AerialPespectiveViewDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialPespectiveViewDistanceScale_MetaData), NewProp_AerialPespectiveViewDistanceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution = { "HeightFogContribution", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, HeightFogContribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFogContribution_MetaData), NewProp_HeightFogContribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle = { "TransmittanceMinLightElevationAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, TransmittanceMinLightElevationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmittanceMinLightElevationAngle_MetaData), NewProp_TransmittanceMinLightElevationAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPerspectiveStartDepth = { "AerialPerspectiveStartDepth", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, AerialPerspectiveStartDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialPerspectiveStartDepth_MetaData), NewProp_AerialPerspectiveStartDepth_MetaData) };
void Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bHoldout_SetBit(void* Obj)
{
	((USkyAtmosphereComponent*)Obj)->bHoldout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bHoldout = { "bHoldout", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkyAtmosphereComponent), &Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bHoldout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoldout_MetaData), NewProp_bHoldout_MetaData) };
void Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bRenderInMainPass_SetBit(void* Obj)
{
	((USkyAtmosphereComponent*)Obj)->bRenderInMainPass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bRenderInMainPass = { "bRenderInMainPass", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USkyAtmosphereComponent), &Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bRenderInMainPass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInMainPass_MetaData), NewProp_bRenderInMainPass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID = { "bStaticLightingBuiltGUID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkyAtmosphereComponent, bStaticLightingBuiltGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticLightingBuiltGUID_MetaData), NewProp_bStaticLightingBuiltGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TraceSampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPerspectiveStartDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bHoldout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bRenderInMainPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkyAtmosphereComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::ClassParams = {
	&USkyAtmosphereComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkyAtmosphereComponent()
{
	if (!Z_Registration_Info_UClass_USkyAtmosphereComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyAtmosphereComponent.OuterSingleton, Z_Construct_UClass_USkyAtmosphereComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkyAtmosphereComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USkyAtmosphereComponent>()
{
	return USkyAtmosphereComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkyAtmosphereComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkyAtmosphereComponent)
// End Class USkyAtmosphereComponent

// Begin Class ASkyAtmosphere
void ASkyAtmosphere::StaticRegisterNativesASkyAtmosphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkyAtmosphere);
UClass* Z_Construct_UClass_ASkyAtmosphere_NoRegister()
{
	return ASkyAtmosphere::StaticClass();
}
struct Z_Construct_UClass_ASkyAtmosphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * A placeable actor that represents a planet atmosphere material and simulates sky and light scattering within it.\n * @see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Components/SkyAtmosphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that represents a planet atmosphere material and simulates sky and light scattering within it.\n@see https://docs.unrealengine.com/en-US/Engine/Actors/FogEffects/SkyAtmosphere/index.html" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** Arrow component to indicate default sun rotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Arrow component to indicate default sun rotation" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyAtmosphereComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkyAtmosphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent = { "SkyAtmosphereComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkyAtmosphere, SkyAtmosphereComponent), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyAtmosphereComponent_MetaData), NewProp_SkyAtmosphereComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkyAtmosphere, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASkyAtmosphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkyAtmosphere_Statics::ClassParams = {
	&ASkyAtmosphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams), Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASkyAtmosphere()
{
	if (!Z_Registration_Info_UClass_ASkyAtmosphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkyAtmosphere.OuterSingleton, Z_Construct_UClass_ASkyAtmosphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASkyAtmosphere.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ASkyAtmosphere>()
{
	return ASkyAtmosphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyAtmosphere);
ASkyAtmosphere::~ASkyAtmosphere() {}
// End Class ASkyAtmosphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESkyAtmosphereTransformMode_StaticEnum, TEXT("ESkyAtmosphereTransformMode"), &Z_Registration_Info_UEnum_ESkyAtmosphereTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3754713179U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTentDistribution::StaticStruct, Z_Construct_UScriptStruct_FTentDistribution_Statics::NewStructOps, TEXT("TentDistribution"), &Z_Registration_Info_UScriptStruct_TentDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTentDistribution), 4175820675U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkyAtmosphereComponent, USkyAtmosphereComponent::StaticClass, TEXT("USkyAtmosphereComponent"), &Z_Registration_Info_UClass_USkyAtmosphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyAtmosphereComponent), 2619284136U) },
		{ Z_Construct_UClass_ASkyAtmosphere, ASkyAtmosphere::StaticClass, TEXT("ASkyAtmosphere"), &Z_Registration_Info_UClass_ASkyAtmosphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkyAtmosphere), 3192297004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_2837092557(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
