// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeSourceComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeAttenuation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ECameraShakeAttenuation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakeAttenuation;
static UEnum* ECameraShakeAttenuation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraShakeAttenuation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraShakeAttenuation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeAttenuation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeAttenuation"));
	}
	return Z_Registration_Info_UEnum_ECameraShakeAttenuation.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeAttenuation>()
{
	return ECameraShakeAttenuation_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Linear.Name", "ECameraShakeAttenuation::Linear" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "Quadratic.Name", "ECameraShakeAttenuation::Quadratic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraShakeAttenuation::Linear", (int64)ECameraShakeAttenuation::Linear },
		{ "ECameraShakeAttenuation::Quadratic", (int64)ECameraShakeAttenuation::Quadratic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECameraShakeAttenuation",
	"ECameraShakeAttenuation",
	Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECameraShakeAttenuation()
{
	if (!Z_Registration_Info_UEnum_ECameraShakeAttenuation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakeAttenuation.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakeAttenuation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraShakeAttenuation.InnerSingleton;
}
// End Enum ECameraShakeAttenuation

// Begin Class UCameraShakeSourceComponent Function GetAttenuationFactor
struct Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics
{
	struct CameraShakeSourceComponent_eventGetAttenuationFactor_Parms
	{
		FVector Location;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Computes an attenuation factor from this source */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Computes an attenuation factor from this source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventGetAttenuationFactor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventGetAttenuationFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "GetAttenuationFactor", nullptr, nullptr, Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::CameraShakeSourceComponent_eventGetAttenuationFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::CameraShakeSourceComponent_eventGetAttenuationFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraShakeSourceComponent::execGetAttenuationFactor)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttenuationFactor(Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class UCameraShakeSourceComponent Function GetAttenuationFactor

// Begin Class UCameraShakeSourceComponent Function Start
struct Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "Start", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraShakeSourceComponent::execStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start();
	P_NATIVE_END;
}
// End Class UCameraShakeSourceComponent Function Start

// Begin Class UCameraShakeSourceComponent Function StartCameraShake
struct Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics
{
	struct CameraShakeSourceComponent_eventStartCameraShake_Parms
	{
		TSubclassOf<UCameraShakeBase> InCameraShake;
		float Scale;
		ECameraShakePlaySpace PlaySpace;
		FRotator UserPlaySpaceRot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Starts a new camera shake originating from this source, and apply it on all player controllers */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Starts a new camera shake originating from this source, and apply it on all player controllers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCameraShake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_InCameraShake = { "InCameraShake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, InCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(0, nullptr) }; // 2661961121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStartCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_InCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_PlaySpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::NewProp_UserPlaySpaceRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StartCameraShake", nullptr, nullptr, Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::CameraShakeSourceComponent_eventStartCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::CameraShakeSourceComponent_eventStartCameraShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraShakeSourceComponent::execStartCameraShake)
{
	P_GET_OBJECT(UClass,Z_Param_InCameraShake);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
	P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCameraShake(Z_Param_InCameraShake,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
	P_NATIVE_END;
}
// End Class UCameraShakeSourceComponent Function StartCameraShake

// Begin Class UCameraShakeSourceComponent Function StopAllCameraShakes
struct Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics
{
	struct CameraShakeSourceComponent_eventStopAllCameraShakes_Parms
	{
		bool bImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Stops all currently active camera shakes that are originating from this source from all player controllers */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Stops all currently active camera shakes that are originating from this source from all player controllers" },
	};
#endif // WITH_METADATA
	static void NewProp_bImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit(void* Obj)
{
	((CameraShakeSourceComponent_eventStopAllCameraShakes_Parms*)Obj)->bImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraShakeSourceComponent_eventStopAllCameraShakes_Parms), &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::NewProp_bImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StopAllCameraShakes", nullptr, nullptr, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::CameraShakeSourceComponent_eventStopAllCameraShakes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::CameraShakeSourceComponent_eventStopAllCameraShakes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraShakeSourceComponent::execStopAllCameraShakes)
{
	P_GET_UBOOL(Z_Param_bImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAllCameraShakes(Z_Param_bImmediately);
	P_NATIVE_END;
}
// End Class UCameraShakeSourceComponent Function StopAllCameraShakes

// Begin Class UCameraShakeSourceComponent Function StopAllCameraShakesOfType
struct Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics
{
	struct CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms
	{
		TSubclassOf<UCameraShakeBase> InCameraShake;
		bool bImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Stops a camera shake originating from this source */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Stops a camera shake originating from this source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCameraShake;
	static void NewProp_bImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_InCameraShake = { "InCameraShake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms, InCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately_SetBit(void* Obj)
{
	((CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms*)Obj)->bImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms), &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_InCameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::NewProp_bImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeSourceComponent, nullptr, "StopAllCameraShakesOfType", nullptr, nullptr, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::CameraShakeSourceComponent_eventStopAllCameraShakesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraShakeSourceComponent::execStopAllCameraShakesOfType)
{
	P_GET_OBJECT(UClass,Z_Param_InCameraShake);
	P_GET_UBOOL(Z_Param_bImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAllCameraShakesOfType(Z_Param_InCameraShake,Z_Param_bImmediately);
	P_NATIVE_END;
}
// End Class UCameraShakeSourceComponent Function StopAllCameraShakesOfType

// Begin Class UCameraShakeSourceComponent
void UCameraShakeSourceComponent::StaticRegisterNativesUCameraShakeSourceComponent()
{
	UClass* Class = UCameraShakeSourceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttenuationFactor", &UCameraShakeSourceComponent::execGetAttenuationFactor },
		{ "Start", &UCameraShakeSourceComponent::execStart },
		{ "StartCameraShake", &UCameraShakeSourceComponent::execStartCameraShake },
		{ "StopAllCameraShakes", &UCameraShakeSourceComponent::execStopAllCameraShakes },
		{ "StopAllCameraShakesOfType", &UCameraShakeSourceComponent::execStopAllCameraShakesOfType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraShakeSourceComponent);
UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister()
{
	return UCameraShakeSourceComponent::StaticClass();
}
struct Z_Construct_UClass_UCameraShakeSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/CameraShakeSourceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** The attenuation profile for how camera shakes' intensity falls off with distance */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "The attenuation profile for how camera shakes' intensity falls off with distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerAttenuationRadius_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Under this distance from the source, the camera shakes are at full intensity */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Under this distance from the source, the camera shakes are at full intensity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterAttenuationRadius_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Outside of this distance from the source, the camera shakes don't apply at all */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Outside of this distance from the source, the camera shakes don't apply at all" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The camera shake class to use for this camera shake source actor */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "The camera shake class to use for this camera shake source actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Whether to auto start when created */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Whether to auto start when created" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteTexture_MetaData[] = {
		{ "Comment", "/** Sprite to display in the editor. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Sprite to display in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSpriteTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for display in the editor. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceComponent.h" },
		{ "ToolTip", "Sprite scaling for display in the editor." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Attenuation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerAttenuationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterAttenuationRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShake;
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorSpriteTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EditorSpriteTextureScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_GetAttenuationFactor, "GetAttenuationFactor" }, // 745089443
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_Start, "Start" }, // 1745117145
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StartCameraShake, "StartCameraShake" }, // 1206658304
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakes, "StopAllCameraShakes" }, // 3158133549
		{ &Z_Construct_UFunction_UCameraShakeSourceComponent_StopAllCameraShakesOfType, "StopAllCameraShakesOfType" }, // 596575645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeSourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, Attenuation), Z_Construct_UEnum_Engine_ECameraShakeAttenuation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attenuation_MetaData), NewProp_Attenuation_MetaData) }; // 2790511103
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius = { "InnerAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, InnerAttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerAttenuationRadius_MetaData), NewProp_InnerAttenuationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius = { "OuterAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, OuterAttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterAttenuationRadius_MetaData), NewProp_OuterAttenuationRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, CameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShake_MetaData), NewProp_CameraShake_MetaData) };
void Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((UCameraShakeSourceComponent*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraShakeSourceComponent), &Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture = { "EditorSpriteTexture", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, EditorSpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSpriteTexture_MetaData), NewProp_EditorSpriteTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale = { "EditorSpriteTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraShakeSourceComponent, EditorSpriteTextureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSpriteTextureScale_MetaData), NewProp_EditorSpriteTextureScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_Attenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_InnerAttenuationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_OuterAttenuationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_CameraShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_bAutoStart,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeSourceComponent_Statics::NewProp_EditorSpriteTextureScale,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraShakeSourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeSourceComponent_Statics::ClassParams = {
	&UCameraShakeSourceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraShakeSourceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraShakeSourceComponent()
{
	if (!Z_Registration_Info_UClass_UCameraShakeSourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraShakeSourceComponent.OuterSingleton, Z_Construct_UClass_UCameraShakeSourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraShakeSourceComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCameraShakeSourceComponent>()
{
	return UCameraShakeSourceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeSourceComponent);
UCameraShakeSourceComponent::~UCameraShakeSourceComponent() {}
// End Class UCameraShakeSourceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraShakeAttenuation_StaticEnum, TEXT("ECameraShakeAttenuation"), &Z_Registration_Info_UEnum_ECameraShakeAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2790511103U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraShakeSourceComponent, UCameraShakeSourceComponent::StaticClass, TEXT("UCameraShakeSourceComponent"), &Z_Registration_Info_UClass_UCameraShakeSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraShakeSourceComponent), 4178034345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_4039994172(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
