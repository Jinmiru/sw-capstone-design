// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/VolumetricCloudComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricCloudComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_AVolumetricCloud();
ENGINE_API UClass* Z_Construct_UClass_AVolumetricCloud_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent();
ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EVolumetricCloudTracingMaxDistanceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode;
static UEnum* EVolumetricCloudTracingMaxDistanceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVolumetricCloudTracingMaxDistanceMode"));
	}
	return Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVolumetricCloudTracingMaxDistanceMode>()
{
	return EVolumetricCloudTracingMaxDistanceMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DistanceFromCloudLayerEntryPoint.Name", "EVolumetricCloudTracingMaxDistanceMode::DistanceFromCloudLayerEntryPoint" },
		{ "DistanceFromPointOfView.Name", "EVolumetricCloudTracingMaxDistanceMode::DistanceFromPointOfView" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVolumetricCloudTracingMaxDistanceMode::DistanceFromCloudLayerEntryPoint", (int64)EVolumetricCloudTracingMaxDistanceMode::DistanceFromCloudLayerEntryPoint },
		{ "EVolumetricCloudTracingMaxDistanceMode::DistanceFromPointOfView", (int64)EVolumetricCloudTracingMaxDistanceMode::DistanceFromPointOfView },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVolumetricCloudTracingMaxDistanceMode",
	"EVolumetricCloudTracingMaxDistanceMode",
	Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode()
{
	if (!Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode.InnerSingleton, Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode.InnerSingleton;
}
// End Enum EVolumetricCloudTracingMaxDistanceMode

// Begin Class UVolumetricCloudComponent Function SetbUsePerSampleAtmosphericLightTransmittance
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics
{
	struct VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Use Per Sample Atmospheric Light Transmittance" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms), &Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetbUsePerSampleAtmosphericLightTransmittance", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::VolumetricCloudComponent_eventSetbUsePerSampleAtmosphericLightTransmittance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetbUsePerSampleAtmosphericLightTransmittance)
{
	P_GET_UBOOL(Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetbUsePerSampleAtmosphericLightTransmittance(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetbUsePerSampleAtmosphericLightTransmittance

// Begin Class UVolumetricCloudComponent Function SetGroundAlbedo
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics
{
	struct VolumetricCloudComponent_eventSetGroundAlbedo_Parms
	{
		FColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetGroundAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetGroundAlbedo", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::VolumetricCloudComponent_eventSetGroundAlbedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::VolumetricCloudComponent_eventSetGroundAlbedo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetGroundAlbedo)
{
	P_GET_STRUCT(FColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGroundAlbedo(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetGroundAlbedo

// Begin Class UVolumetricCloudComponent Function SetHoldout
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics
{
	struct VolumetricCloudComponent_eventSetHoldout_Parms
	{
		bool bNewHoldout;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewHoldout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHoldout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::NewProp_bNewHoldout_SetBit(void* Obj)
{
	((VolumetricCloudComponent_eventSetHoldout_Parms*)Obj)->bNewHoldout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::NewProp_bNewHoldout = { "bNewHoldout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumetricCloudComponent_eventSetHoldout_Parms), &Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::NewProp_bNewHoldout_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::NewProp_bNewHoldout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetHoldout", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::VolumetricCloudComponent_eventSetHoldout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::VolumetricCloudComponent_eventSetHoldout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetHoldout)
{
	P_GET_UBOOL(Z_Param_bNewHoldout);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoldout(Z_Param_bNewHoldout);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetHoldout

// Begin Class UVolumetricCloudComponent Function SetLayerBottomAltitude
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics
{
	struct VolumetricCloudComponent_eventSetLayerBottomAltitude_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetLayerBottomAltitude_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetLayerBottomAltitude", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::VolumetricCloudComponent_eventSetLayerBottomAltitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::VolumetricCloudComponent_eventSetLayerBottomAltitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetLayerBottomAltitude)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayerBottomAltitude(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetLayerBottomAltitude

// Begin Class UVolumetricCloudComponent Function SetLayerHeight
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics
{
	struct VolumetricCloudComponent_eventSetLayerHeight_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetLayerHeight_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetLayerHeight", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::VolumetricCloudComponent_eventSetLayerHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::VolumetricCloudComponent_eventSetLayerHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetLayerHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayerHeight(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetLayerHeight

// Begin Class UVolumetricCloudComponent Function SetMaterial
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics
{
	struct VolumetricCloudComponent_eventSetMaterial_Parms
	{
		UMaterialInterface* NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetMaterial_Parms, NewValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetMaterial", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::VolumetricCloudComponent_eventSetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::VolumetricCloudComponent_eventSetMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaterial(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetMaterial

// Begin Class UVolumetricCloudComponent Function SetPlanetRadius
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics
{
	struct VolumetricCloudComponent_eventSetPlanetRadius_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetPlanetRadius_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetPlanetRadius", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::VolumetricCloudComponent_eventSetPlanetRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::VolumetricCloudComponent_eventSetPlanetRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetPlanetRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanetRadius(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetPlanetRadius

// Begin Class UVolumetricCloudComponent Function SetReflectionSampleCountScale
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics
{
	struct VolumetricCloudComponent_eventSetReflectionSampleCountScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by SetReflectionViewSampleCountScale." },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetReflectionSampleCountScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetReflectionSampleCountScale", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::VolumetricCloudComponent_eventSetReflectionSampleCountScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::VolumetricCloudComponent_eventSetReflectionSampleCountScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetReflectionSampleCountScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReflectionSampleCountScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetReflectionSampleCountScale

// Begin Class UVolumetricCloudComponent Function SetReflectionViewSampleCountScale
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics
{
	struct VolumetricCloudComponent_eventSetReflectionViewSampleCountScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetReflectionViewSampleCountScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetReflectionViewSampleCountScale", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetReflectionViewSampleCountScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetReflectionViewSampleCountScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetReflectionViewSampleCountScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReflectionViewSampleCountScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetReflectionViewSampleCountScale

// Begin Class UVolumetricCloudComponent Function SetRenderInMainPass
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics
{
	struct VolumetricCloudComponent_eventSetRenderInMainPass_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((VolumetricCloudComponent_eventSetRenderInMainPass_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VolumetricCloudComponent_eventSetRenderInMainPass_Parms), &Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetRenderInMainPass", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::VolumetricCloudComponent_eventSetRenderInMainPass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::VolumetricCloudComponent_eventSetRenderInMainPass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetRenderInMainPass)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderInMainPass(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetRenderInMainPass

// Begin Class UVolumetricCloudComponent Function SetShadowReflectionSampleCountScale
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics
{
	struct VolumetricCloudComponent_eventSetShadowReflectionSampleCountScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by SetShadowReflectionViewSampleCountScale." },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetShadowReflectionSampleCountScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetShadowReflectionSampleCountScale", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::VolumetricCloudComponent_eventSetShadowReflectionSampleCountScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::VolumetricCloudComponent_eventSetShadowReflectionSampleCountScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetShadowReflectionSampleCountScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowReflectionSampleCountScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetShadowReflectionSampleCountScale

// Begin Class UVolumetricCloudComponent Function SetShadowReflectionViewSampleCountScale
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics
{
	struct VolumetricCloudComponent_eventSetShadowReflectionViewSampleCountScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetShadowReflectionViewSampleCountScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetShadowReflectionViewSampleCountScale", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetShadowReflectionViewSampleCountScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetShadowReflectionViewSampleCountScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetShadowReflectionViewSampleCountScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowReflectionViewSampleCountScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetShadowReflectionViewSampleCountScale

// Begin Class UVolumetricCloudComponent Function SetShadowTracingDistance
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics
{
	struct VolumetricCloudComponent_eventSetShadowTracingDistance_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetShadowTracingDistance_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetShadowTracingDistance", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::VolumetricCloudComponent_eventSetShadowTracingDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::VolumetricCloudComponent_eventSetShadowTracingDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetShadowTracingDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowTracingDistance(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetShadowTracingDistance

// Begin Class UVolumetricCloudComponent Function SetShadowViewSampleCountScale
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics
{
	struct VolumetricCloudComponent_eventSetShadowViewSampleCountScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetShadowViewSampleCountScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetShadowViewSampleCountScale", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetShadowViewSampleCountScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetShadowViewSampleCountScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetShadowViewSampleCountScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowViewSampleCountScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetShadowViewSampleCountScale

// Begin Class UVolumetricCloudComponent Function SetSkyLightCloudBottomOcclusion
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics
{
	struct VolumetricCloudComponent_eventSetSkyLightCloudBottomOcclusion_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetSkyLightCloudBottomOcclusion_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetSkyLightCloudBottomOcclusion", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::VolumetricCloudComponent_eventSetSkyLightCloudBottomOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::VolumetricCloudComponent_eventSetSkyLightCloudBottomOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetSkyLightCloudBottomOcclusion)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkyLightCloudBottomOcclusion(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetSkyLightCloudBottomOcclusion

// Begin Class UVolumetricCloudComponent Function SetStopTracingTransmittanceThreshold
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics
{
	struct VolumetricCloudComponent_eventSetStopTracingTransmittanceThreshold_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetStopTracingTransmittanceThreshold_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetStopTracingTransmittanceThreshold", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::VolumetricCloudComponent_eventSetStopTracingTransmittanceThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::VolumetricCloudComponent_eventSetStopTracingTransmittanceThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetStopTracingTransmittanceThreshold)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStopTracingTransmittanceThreshold(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetStopTracingTransmittanceThreshold

// Begin Class UVolumetricCloudComponent Function SetTracingMaxDistance
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics
{
	struct VolumetricCloudComponent_eventSetTracingMaxDistance_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetTracingMaxDistance_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetTracingMaxDistance", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::VolumetricCloudComponent_eventSetTracingMaxDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::VolumetricCloudComponent_eventSetTracingMaxDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetTracingMaxDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTracingMaxDistance(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetTracingMaxDistance

// Begin Class UVolumetricCloudComponent Function SetTracingStartDistanceFromCamera
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics
{
	struct VolumetricCloudComponent_eventSetTracingStartDistanceFromCamera_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetTracingStartDistanceFromCamera_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetTracingStartDistanceFromCamera", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::VolumetricCloudComponent_eventSetTracingStartDistanceFromCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::VolumetricCloudComponent_eventSetTracingStartDistanceFromCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetTracingStartDistanceFromCamera)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTracingStartDistanceFromCamera(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetTracingStartDistanceFromCamera

// Begin Class UVolumetricCloudComponent Function SetTracingStartMaxDistance
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics
{
	struct VolumetricCloudComponent_eventSetTracingStartMaxDistance_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetTracingStartMaxDistance_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetTracingStartMaxDistance", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::VolumetricCloudComponent_eventSetTracingStartMaxDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::VolumetricCloudComponent_eventSetTracingStartMaxDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetTracingStartMaxDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTracingStartMaxDistance(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetTracingStartMaxDistance

// Begin Class UVolumetricCloudComponent Function SetViewSampleCountScale
struct Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics
{
	struct VolumetricCloudComponent_eventSetViewSampleCountScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VolumetricCloudComponent_eventSetViewSampleCountScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVolumetricCloudComponent, nullptr, "SetViewSampleCountScale", nullptr, nullptr, Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetViewSampleCountScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::VolumetricCloudComponent_eventSetViewSampleCountScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVolumetricCloudComponent::execSetViewSampleCountScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewSampleCountScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UVolumetricCloudComponent Function SetViewSampleCountScale

// Begin Class UVolumetricCloudComponent
void UVolumetricCloudComponent::StaticRegisterNativesUVolumetricCloudComponent()
{
	UClass* Class = UVolumetricCloudComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetbUsePerSampleAtmosphericLightTransmittance", &UVolumetricCloudComponent::execSetbUsePerSampleAtmosphericLightTransmittance },
		{ "SetGroundAlbedo", &UVolumetricCloudComponent::execSetGroundAlbedo },
		{ "SetHoldout", &UVolumetricCloudComponent::execSetHoldout },
		{ "SetLayerBottomAltitude", &UVolumetricCloudComponent::execSetLayerBottomAltitude },
		{ "SetLayerHeight", &UVolumetricCloudComponent::execSetLayerHeight },
		{ "SetMaterial", &UVolumetricCloudComponent::execSetMaterial },
		{ "SetPlanetRadius", &UVolumetricCloudComponent::execSetPlanetRadius },
		{ "SetReflectionSampleCountScale", &UVolumetricCloudComponent::execSetReflectionSampleCountScale },
		{ "SetReflectionViewSampleCountScale", &UVolumetricCloudComponent::execSetReflectionViewSampleCountScale },
		{ "SetRenderInMainPass", &UVolumetricCloudComponent::execSetRenderInMainPass },
		{ "SetShadowReflectionSampleCountScale", &UVolumetricCloudComponent::execSetShadowReflectionSampleCountScale },
		{ "SetShadowReflectionViewSampleCountScale", &UVolumetricCloudComponent::execSetShadowReflectionViewSampleCountScale },
		{ "SetShadowTracingDistance", &UVolumetricCloudComponent::execSetShadowTracingDistance },
		{ "SetShadowViewSampleCountScale", &UVolumetricCloudComponent::execSetShadowViewSampleCountScale },
		{ "SetSkyLightCloudBottomOcclusion", &UVolumetricCloudComponent::execSetSkyLightCloudBottomOcclusion },
		{ "SetStopTracingTransmittanceThreshold", &UVolumetricCloudComponent::execSetStopTracingTransmittanceThreshold },
		{ "SetTracingMaxDistance", &UVolumetricCloudComponent::execSetTracingMaxDistance },
		{ "SetTracingStartDistanceFromCamera", &UVolumetricCloudComponent::execSetTracingStartDistanceFromCamera },
		{ "SetTracingStartMaxDistance", &UVolumetricCloudComponent::execSetTracingStartMaxDistance },
		{ "SetViewSampleCountScale", &UVolumetricCloudComponent::execSetViewSampleCountScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumetricCloudComponent);
UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister()
{
	return UVolumetricCloudComponent::StaticClass();
}
struct Z_Construct_UClass_UVolumetricCloudComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * A component that represents a participating media material around a planet, e.g. clouds.\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Components/VolumetricCloudComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "A component that represents a participating media material around a planet, e.g. clouds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerBottomAltitude_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** The altitude at which the cloud layer starts. (kilometers above the ground) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The altitude at which the cloud layer starts. (kilometers above the ground)" },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerHeight_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The height of the the cloud layer. (kilometers above the layer bottom altitude) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The height of the the cloud layer. (kilometers above the layer bottom altitude)" },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracingStartMaxDistance_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "/** The maximum distance of the volumetric surface, i.e. cloud layer upper and lower bound, before which we will accept to start tracing. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The maximum distance of the volumetric surface, i.e. cloud layer upper and lower bound, before which we will accept to start tracing. (kilometers)" },
		{ "UIMax", "500.000000" },
		{ "UIMin", "100.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracingStartDistanceFromCamera_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The distance from which the tracing will start. This is useful when the camera for instance is inside the layer of cloud. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "The distance from which the tracing will start. This is useful when the camera for instance is inside the layer of cloud. (kilometers)" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracingMaxDistanceMode_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "/** Mode to select how the tracing max distance should be interpreted. DistanceFromPointOfView is useful to avoid the top of the cloud layer to be clipped when TracingMaxDistance is shorten for performance. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "Mode to select how the tracing max distance should be interpreted. DistanceFromPointOfView is useful to avoid the top of the cloud layer to be clipped when TracingMaxDistance is shorten for performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracingMaxDistance_MetaData[] = {
		{ "Category", "Layer" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The maximum distance that will be traced inside the cloud layer. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The maximum distance that will be traced inside the cloud layer. (kilometers)" },
		{ "UIMax", "500.000000" },
		{ "UIMin", "1.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanetRadius_MetaData[] = {
		{ "Category", "Planet" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The planet radius used when there is not SkyAtmosphere component present in the scene. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "The planet radius used when there is not SkyAtmosphere component present in the scene." },
		{ "UIMax", "7000.000000" },
		{ "UIMin", "100.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** \n\x09 * The ground albedo used to light the cloud from below with respect to the sun light and sky atmosphere. \n\x09 * This is only used by the cloud material when the 'Volumetric Advanced' node have GroundContribution enabled.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "The ground albedo used to light the cloud from below with respect to the sun light and sky atmosphere.\nThis is only used by the cloud material when the 'Volumetric Advanced' node have GroundContribution enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Cloud Material" },
		{ "Comment", "/** The material describing the cloud volume. It must be a Volume domain material. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "The material describing the cloud volume. It must be a Volume domain material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePerSampleAtmosphericLightTransmittance_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "Comment", "/** Whether to apply atmosphere transmittance per sample, instead of using the light global transmittance. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "Whether to apply atmosphere transmittance per sample, instead of using the light global transmittance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightCloudBottomOcclusion_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Occlude the sky light contribution at the bottom of the cloud layer. This is a fast approximation to sky lighting being occluded by cloud without having to trace rays or sample AO texture. Ignored if the cloud material explicitely sets the ambient occlusion value. */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "Occlude the sky light contribution at the bottom of the cloud layer. This is a fast approximation to sky lighting being occluded by cloud without having to trace rays or sample AO texture. Ignored if the cloud material explicitely sets the ambient occlusion value." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewSampleCountScale_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/**\n\x09 * Scale the tracing sample count in primary views. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ViewRaySampleCountMax'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the tracing sample count in primary views. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ViewRaySampleCountMax'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.05" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionViewSampleCountScaleValue_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/**\n\x09 * Scale the tracing sample count in reflection views. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ReflectionRaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the tracing sample count in reflection views. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ReflectionRaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.05" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionViewSampleCountScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionSampleCountScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowViewSampleCountScale_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/**\n\x09 * Scale the shadow tracing sample count in primary views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ViewRaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the shadow tracing sample count in primary views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ViewRaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.05" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowReflectionViewSampleCountScaleValue_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/**\n\x09 * Scale the shadow tracing sample count in reflection views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ReflectionRaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the shadow tracing sample count in reflection views, only used with Advanced Output ray marched shadows. Quality level scalability CVARs affect the maximum range.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.Shadow.ReflectionRaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.05" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowReflectionViewSampleCountScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowReflectionSampleCountScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowTracingDistance_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09 * The shadow tracing distance in kilometers, only used with Advanced Output ray marched shadows.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "The shadow tracing distance in kilometers, only used with Advanced Output ray marched shadows." },
		{ "UIMax", "50" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopTracingTransmittanceThreshold_MetaData[] = {
		{ "Category", "Cloud Tracing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * When the mean transmittance is below this threshold, we stop tracing. This is a good way to reduce the ray marched sample count, and thus to increase performance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "When the mean transmittance is below this threshold, we stop tracing. This is a good way to reduce the ray marched sample count, and thus to increase performance." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveRayleighScatteringStartDistance_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Specify the aerial perspective start distance on cloud for Rayleigh scattering only. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Specify the aerial perspective start distance on cloud for Rayleigh scattering only. (kilometers)" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveRayleighScatteringFadeDistance_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Specify the distance over which the Rayleigh scattering will linearly ramp up to full effect. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Specify the distance over which the Rayleigh scattering will linearly ramp up to full effect. (kilometers)" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveMieScatteringStartDistance_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Specify the aerial perspective start distance on cloud for Mie scattering only. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Specify the aerial perspective start distance on cloud for Mie scattering only. (kilometers)" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveMieScatteringFadeDistance_MetaData[] = {
		{ "Category", "Art Direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Specify the distance over which the Rayleigh scattering will linearly ramp up to full effect. (kilometers) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Specify the distance over which the Rayleigh scattering will linearly ramp up to full effect. (kilometers)" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoldout_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\". */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInMainPass_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be rendered in the main pass (basepass, transparency) */" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ToolTip", "If true, this component will be rendered in the main pass (basepass, transparency)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerBottomAltitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TracingStartMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TracingStartDistanceFromCamera;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TracingMaxDistanceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TracingMaxDistanceMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TracingMaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_bUsePerSampleAtmosphericLightTransmittance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePerSampleAtmosphericLightTransmittance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkyLightCloudBottomOcclusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewSampleCountScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionViewSampleCountScaleValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionViewSampleCountScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionSampleCountScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowViewSampleCountScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowReflectionViewSampleCountScaleValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowReflectionViewSampleCountScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowReflectionSampleCountScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowTracingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopTracingTransmittanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveRayleighScatteringStartDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveRayleighScatteringFadeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveMieScatteringStartDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveMieScatteringFadeDistance;
	static void NewProp_bHoldout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldout;
	static void NewProp_bRenderInMainPass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInMainPass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetbUsePerSampleAtmosphericLightTransmittance, "SetbUsePerSampleAtmosphericLightTransmittance" }, // 869932219
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetGroundAlbedo, "SetGroundAlbedo" }, // 540950991
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetHoldout, "SetHoldout" }, // 2677208646
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerBottomAltitude, "SetLayerBottomAltitude" }, // 3943258237
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetLayerHeight, "SetLayerHeight" }, // 2828260506
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetMaterial, "SetMaterial" }, // 2754844228
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetPlanetRadius, "SetPlanetRadius" }, // 3443667866
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionSampleCountScale, "SetReflectionSampleCountScale" }, // 632309389
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetReflectionViewSampleCountScale, "SetReflectionViewSampleCountScale" }, // 1346739812
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetRenderInMainPass, "SetRenderInMainPass" }, // 2917991006
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionSampleCountScale, "SetShadowReflectionSampleCountScale" }, // 4156051718
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowReflectionViewSampleCountScale, "SetShadowReflectionViewSampleCountScale" }, // 1224615840
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowTracingDistance, "SetShadowTracingDistance" }, // 104215555
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetShadowViewSampleCountScale, "SetShadowViewSampleCountScale" }, // 1666484452
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetSkyLightCloudBottomOcclusion, "SetSkyLightCloudBottomOcclusion" }, // 1104167376
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetStopTracingTransmittanceThreshold, "SetStopTracingTransmittanceThreshold" }, // 2380274628
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingMaxDistance, "SetTracingMaxDistance" }, // 1185555533
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartDistanceFromCamera, "SetTracingStartDistanceFromCamera" }, // 3573258544
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetTracingStartMaxDistance, "SetTracingStartMaxDistance" }, // 1744283537
		{ &Z_Construct_UFunction_UVolumetricCloudComponent_SetViewSampleCountScale, "SetViewSampleCountScale" }, // 4120731488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumetricCloudComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerBottomAltitude = { "LayerBottomAltitude", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, LayerBottomAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerBottomAltitude_MetaData), NewProp_LayerBottomAltitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerHeight = { "LayerHeight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, LayerHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerHeight_MetaData), NewProp_LayerHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartMaxDistance = { "TracingStartMaxDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, TracingStartMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracingStartMaxDistance_MetaData), NewProp_TracingStartMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartDistanceFromCamera = { "TracingStartDistanceFromCamera", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, TracingStartDistanceFromCamera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracingStartDistanceFromCamera_MetaData), NewProp_TracingStartDistanceFromCamera_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistanceMode = { "TracingMaxDistanceMode", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, TracingMaxDistanceMode), Z_Construct_UEnum_Engine_EVolumetricCloudTracingMaxDistanceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracingMaxDistanceMode_MetaData), NewProp_TracingMaxDistanceMode_MetaData) }; // 3056827070
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistance = { "TracingMaxDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, TracingMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracingMaxDistance_MetaData), NewProp_TracingMaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_PlanetRadius = { "PlanetRadius", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, PlanetRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanetRadius_MetaData), NewProp_PlanetRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, GroundAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundAlbedo_MetaData), NewProp_GroundAlbedo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
void Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance_SetBit(void* Obj)
{
	((UVolumetricCloudComponent*)Obj)->bUsePerSampleAtmosphericLightTransmittance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance = { "bUsePerSampleAtmosphericLightTransmittance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UVolumetricCloudComponent), &Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePerSampleAtmosphericLightTransmittance_MetaData), NewProp_bUsePerSampleAtmosphericLightTransmittance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_SkyLightCloudBottomOcclusion = { "SkyLightCloudBottomOcclusion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, SkyLightCloudBottomOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyLightCloudBottomOcclusion_MetaData), NewProp_SkyLightCloudBottomOcclusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ViewSampleCountScale = { "ViewSampleCountScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ViewSampleCountScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewSampleCountScale_MetaData), NewProp_ViewSampleCountScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionViewSampleCountScaleValue = { "ReflectionViewSampleCountScaleValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ReflectionViewSampleCountScaleValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionViewSampleCountScaleValue_MetaData), NewProp_ReflectionViewSampleCountScaleValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionViewSampleCountScale = { "ReflectionViewSampleCountScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ReflectionViewSampleCountScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionViewSampleCountScale_MetaData), NewProp_ReflectionViewSampleCountScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionSampleCountScale = { "ReflectionSampleCountScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ReflectionSampleCountScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionSampleCountScale_MetaData), NewProp_ReflectionSampleCountScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowViewSampleCountScale = { "ShadowViewSampleCountScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowViewSampleCountScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowViewSampleCountScale_MetaData), NewProp_ShadowViewSampleCountScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionViewSampleCountScaleValue = { "ShadowReflectionViewSampleCountScaleValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowReflectionViewSampleCountScaleValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowReflectionViewSampleCountScaleValue_MetaData), NewProp_ShadowReflectionViewSampleCountScaleValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionViewSampleCountScale = { "ShadowReflectionViewSampleCountScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowReflectionViewSampleCountScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowReflectionViewSampleCountScale_MetaData), NewProp_ShadowReflectionViewSampleCountScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionSampleCountScale = { "ShadowReflectionSampleCountScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowReflectionSampleCountScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowReflectionSampleCountScale_MetaData), NewProp_ShadowReflectionSampleCountScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowTracingDistance = { "ShadowTracingDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, ShadowTracingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowTracingDistance_MetaData), NewProp_ShadowTracingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_StopTracingTransmittanceThreshold = { "StopTracingTransmittanceThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, StopTracingTransmittanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopTracingTransmittanceThreshold_MetaData), NewProp_StopTracingTransmittanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveRayleighScatteringStartDistance = { "AerialPespectiveRayleighScatteringStartDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, AerialPespectiveRayleighScatteringStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialPespectiveRayleighScatteringStartDistance_MetaData), NewProp_AerialPespectiveRayleighScatteringStartDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveRayleighScatteringFadeDistance = { "AerialPespectiveRayleighScatteringFadeDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, AerialPespectiveRayleighScatteringFadeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialPespectiveRayleighScatteringFadeDistance_MetaData), NewProp_AerialPespectiveRayleighScatteringFadeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveMieScatteringStartDistance = { "AerialPespectiveMieScatteringStartDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, AerialPespectiveMieScatteringStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialPespectiveMieScatteringStartDistance_MetaData), NewProp_AerialPespectiveMieScatteringStartDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveMieScatteringFadeDistance = { "AerialPespectiveMieScatteringFadeDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVolumetricCloudComponent, AerialPespectiveMieScatteringFadeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AerialPespectiveMieScatteringFadeDistance_MetaData), NewProp_AerialPespectiveMieScatteringFadeDistance_MetaData) };
void Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bHoldout_SetBit(void* Obj)
{
	((UVolumetricCloudComponent*)Obj)->bHoldout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bHoldout = { "bHoldout", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UVolumetricCloudComponent), &Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bHoldout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoldout_MetaData), NewProp_bHoldout_MetaData) };
void Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bRenderInMainPass_SetBit(void* Obj)
{
	((UVolumetricCloudComponent*)Obj)->bRenderInMainPass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bRenderInMainPass = { "bRenderInMainPass", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UVolumetricCloudComponent), &Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bRenderInMainPass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInMainPass_MetaData), NewProp_bRenderInMainPass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumetricCloudComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerBottomAltitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_LayerHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingStartDistanceFromCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistanceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistanceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_TracingMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_PlanetRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_GroundAlbedo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bUsePerSampleAtmosphericLightTransmittance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_SkyLightCloudBottomOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ViewSampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionViewSampleCountScaleValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionViewSampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ReflectionSampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowViewSampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionViewSampleCountScaleValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionViewSampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowReflectionSampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_ShadowTracingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_StopTracingTransmittanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveRayleighScatteringStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveRayleighScatteringFadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveMieScatteringStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_AerialPespectiveMieScatteringFadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bHoldout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricCloudComponent_Statics::NewProp_bRenderInMainPass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVolumetricCloudComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumetricCloudComponent_Statics::ClassParams = {
	&UVolumetricCloudComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVolumetricCloudComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricCloudComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVolumetricCloudComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVolumetricCloudComponent()
{
	if (!Z_Registration_Info_UClass_UVolumetricCloudComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumetricCloudComponent.OuterSingleton, Z_Construct_UClass_UVolumetricCloudComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVolumetricCloudComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVolumetricCloudComponent>()
{
	return UVolumetricCloudComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumetricCloudComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumetricCloudComponent)
// End Class UVolumetricCloudComponent

// Begin Class AVolumetricCloud
void AVolumetricCloud::StaticRegisterNativesAVolumetricCloud()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVolumetricCloud);
UClass* Z_Construct_UClass_AVolumetricCloud_NoRegister()
{
	return AVolumetricCloud::StaticClass();
}
struct Z_Construct_UClass_AVolumetricCloud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n * A placeable actor that represents a participating media material around a planet, e.g. clouds.\n * @see TODO address to the documentation.\n */" },
		{ "HideCategories", "Info Object Input Input WorldPartition Collision HLOD" },
		{ "IncludePath", "Components/VolumetricCloudComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that represents a participating media material around a planet, e.g. clouds.\n@see TODO address to the documentation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricCloudComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/VolumetricCloudComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumetricCloudComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolumetricCloud>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVolumetricCloud_Statics::NewProp_VolumetricCloudComponent = { "VolumetricCloudComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVolumetricCloud, VolumetricCloudComponent), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricCloudComponent_MetaData), NewProp_VolumetricCloudComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVolumetricCloud_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolumetricCloud_Statics::NewProp_VolumetricCloudComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricCloud_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVolumetricCloud_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricCloud_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVolumetricCloud_Statics::ClassParams = {
	&AVolumetricCloud::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVolumetricCloud_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricCloud_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricCloud_Statics::Class_MetaDataParams), Z_Construct_UClass_AVolumetricCloud_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVolumetricCloud()
{
	if (!Z_Registration_Info_UClass_AVolumetricCloud.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVolumetricCloud.OuterSingleton, Z_Construct_UClass_AVolumetricCloud_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVolumetricCloud.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AVolumetricCloud>()
{
	return AVolumetricCloud::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumetricCloud);
AVolumetricCloud::~AVolumetricCloud() {}
// End Class AVolumetricCloud

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVolumetricCloudTracingMaxDistanceMode_StaticEnum, TEXT("EVolumetricCloudTracingMaxDistanceMode"), &Z_Registration_Info_UEnum_EVolumetricCloudTracingMaxDistanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3056827070U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVolumetricCloudComponent, UVolumetricCloudComponent::StaticClass, TEXT("UVolumetricCloudComponent"), &Z_Registration_Info_UClass_UVolumetricCloudComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumetricCloudComponent), 1012146830U) },
		{ Z_Construct_UClass_AVolumetricCloud, AVolumetricCloud::StaticClass, TEXT("AVolumetricCloud"), &Z_Registration_Info_UClass_AVolumetricCloud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVolumetricCloud), 3637370471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_2640622054(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_VolumetricCloudComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
