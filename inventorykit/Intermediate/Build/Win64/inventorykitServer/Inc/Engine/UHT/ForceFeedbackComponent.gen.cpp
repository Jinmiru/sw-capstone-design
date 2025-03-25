// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnForceFeedbackFinished
struct Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnForceFeedbackFinished_Parms
	{
		UForceFeedbackComponent* ForceFeedbackComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** called when we finish playing forcefeedback effect, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "called when we finish playing forcefeedback effect, either because it played to completion or because a Stop() call turned it off early" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent = { "ForceFeedbackComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnForceFeedbackFinished_Parms, ForceFeedbackComponent), Z_Construct_UClass_UForceFeedbackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFeedbackComponent_MetaData), NewProp_ForceFeedbackComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnForceFeedbackFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::_Script_Engine_eventOnForceFeedbackFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::_Script_Engine_eventOnForceFeedbackFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnForceFeedbackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnForceFeedbackFinished, UForceFeedbackComponent* ForceFeedbackComponent)
{
	struct _Script_Engine_eventOnForceFeedbackFinished_Parms
	{
		UForceFeedbackComponent* ForceFeedbackComponent;
	};
	_Script_Engine_eventOnForceFeedbackFinished_Parms Parms;
	Parms.ForceFeedbackComponent=ForceFeedbackComponent;
	OnForceFeedbackFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnForceFeedbackFinished

// Begin Class UForceFeedbackComponent Function AdjustAttenuation
struct Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics
{
	struct ForceFeedbackComponent_eventAdjustAttenuation_Parms
	{
		FForceFeedbackAttenuationSettings InAttenuationSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Modify the attenuation settings of the component */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Modify the attenuation settings of the component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAttenuationSettings_MetaData), NewProp_InAttenuationSettings_MetaData) }; // 4113465214
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "AdjustAttenuation", nullptr, nullptr, Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::ForceFeedbackComponent_eventAdjustAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::ForceFeedbackComponent_eventAdjustAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UForceFeedbackComponent::execAdjustAttenuation)
{
	P_GET_STRUCT_REF(FForceFeedbackAttenuationSettings,Z_Param_Out_InAttenuationSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustAttenuation(Z_Param_Out_InAttenuationSettings);
	P_NATIVE_END;
}
// End Class UForceFeedbackComponent Function AdjustAttenuation

// Begin Class UForceFeedbackComponent Function BP_GetAttenuationSettingsToApply
struct Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics
{
	struct ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms
	{
		FForceFeedbackAttenuationSettings OutAttenuationSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(0, nullptr) }; // 4113465214
void Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), sizeof(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UForceFeedbackComponent::execBP_GetAttenuationSettingsToApply)
{
	P_GET_STRUCT_REF(FForceFeedbackAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
	P_NATIVE_END;
}
// End Class UForceFeedbackComponent Function BP_GetAttenuationSettingsToApply

// Begin Class UForceFeedbackComponent Function Play
struct Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics
{
	struct ForceFeedbackComponent_eventPlay_Parms
	{
		float StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Start a feedback effect playing */" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Start a feedback effect playing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::ForceFeedbackComponent_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::ForceFeedbackComponent_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UForceFeedbackComponent::execPlay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play(Z_Param_StartTime);
	P_NATIVE_END;
}
// End Class UForceFeedbackComponent Function Play

// Begin Class UForceFeedbackComponent Function SetForceFeedbackEffect
struct Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics
{
	struct ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms
	{
		UForceFeedbackEffect* NewForceFeedbackEffect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Set what force feedback effect is played by this component */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Set what force feedback effect is played by this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewForceFeedbackEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::NewProp_NewForceFeedbackEffect = { "NewForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms, NewForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::NewProp_NewForceFeedbackEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "SetForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UForceFeedbackComponent::execSetForceFeedbackEffect)
{
	P_GET_OBJECT(UForceFeedbackEffect,Z_Param_NewForceFeedbackEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceFeedbackEffect(Z_Param_NewForceFeedbackEffect);
	P_NATIVE_END;
}
// End Class UForceFeedbackComponent Function SetForceFeedbackEffect

// Begin Class UForceFeedbackComponent Function SetIntensityMultiplier
struct Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics
{
	struct ForceFeedbackComponent_eventSetIntensityMultiplier_Parms
	{
		float NewIntensityMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Set a new intensity multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Set a new intensity multiplier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::NewProp_NewIntensityMultiplier = { "NewIntensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventSetIntensityMultiplier_Parms, NewIntensityMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::NewProp_NewIntensityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "SetIntensityMultiplier", nullptr, nullptr, Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::ForceFeedbackComponent_eventSetIntensityMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::ForceFeedbackComponent_eventSetIntensityMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UForceFeedbackComponent::execSetIntensityMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensityMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntensityMultiplier(Z_Param_NewIntensityMultiplier);
	P_NATIVE_END;
}
// End Class UForceFeedbackComponent Function SetIntensityMultiplier

// Begin Class UForceFeedbackComponent Function Stop
struct Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Stop playing the feedback effect */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Stop playing the feedback effect" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UForceFeedbackComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UForceFeedbackComponent Function Stop

// Begin Class UForceFeedbackComponent
void UForceFeedbackComponent::StaticRegisterNativesUForceFeedbackComponent()
{
	UClass* Class = UForceFeedbackComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustAttenuation", &UForceFeedbackComponent::execAdjustAttenuation },
		{ "BP_GetAttenuationSettingsToApply", &UForceFeedbackComponent::execBP_GetAttenuationSettingsToApply },
		{ "Play", &UForceFeedbackComponent::execPlay },
		{ "SetForceFeedbackEffect", &UForceFeedbackComponent::execSetForceFeedbackEffect },
		{ "SetIntensityMultiplier", &UForceFeedbackComponent::execSetIntensityMultiplier },
		{ "Stop", &UForceFeedbackComponent::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackComponent);
UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister()
{
	return UForceFeedbackComponent::StaticClass();
}
struct Z_Construct_UClass_UForceFeedbackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * ForceFeedbackComponent allows placing a rumble effect in to the world and having it apply to player characters who come near it\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/ForceFeedbackComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ForceFeedbackComponent allows placing a rumble effect in to the world and having it apply to player characters who come near it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** The feedback effect to be played */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "The feedback effect to be played" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop effect when owner is destroyed */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Stop effect when owner is destroyed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Should the playback of the forcefeedback pattern ignore time dilation and use the app's delta time */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Should the playback of the forcefeedback pattern ignore time dilation and use the app's delta time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntensityMultiplier_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** The intensity multiplier to apply to effects generated by this component */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "The intensity multiplier to apply to effects generated by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for effects generated by this component */" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for effects generated by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for effects generated by this component */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for effects generated by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnForceFeedbackFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
	static void NewProp_bAutoDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntensityMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnForceFeedbackFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation, "AdjustAttenuation" }, // 30336830
		{ &Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 1149562582
		{ &Z_Construct_UFunction_UForceFeedbackComponent_Play, "Play" }, // 589331912
		{ &Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect, "SetForceFeedbackEffect" }, // 1853255183
		{ &Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier, "SetIntensityMultiplier" }, // 240002758
		{ &Z_Construct_UFunction_UForceFeedbackComponent_Stop, "Stop" }, // 2780681192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UForceFeedbackComponent, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFeedbackEffect_MetaData), NewProp_ForceFeedbackEffect_MetaData) };
void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((UForceFeedbackComponent*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroy_MetaData), NewProp_bAutoDestroy_MetaData) };
void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
{
	((UForceFeedbackComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenOwnerDestroyed_MetaData), NewProp_bStopWhenOwnerDestroyed_MetaData) };
void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UForceFeedbackComponent*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((UForceFeedbackComponent*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData), NewProp_bIgnoreTimeDilation_MetaData) };
void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
{
	((UForceFeedbackComponent*)Obj)->bOverrideAttenuation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAttenuation_MetaData), NewProp_bOverrideAttenuation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier = { "IntensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UForceFeedbackComponent, IntensityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntensityMultiplier_MetaData), NewProp_IntensityMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationSettings), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationSettings_MetaData), NewProp_AttenuationSettings_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationOverrides_MetaData), NewProp_AttenuationOverrides_MetaData) }; // 4113465214
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished = { "OnForceFeedbackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UForceFeedbackComponent, OnForceFeedbackFinished), Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnForceFeedbackFinished_MetaData), NewProp_OnForceFeedbackFinished_MetaData) }; // 2922351519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UForceFeedbackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackComponent_Statics::ClassParams = {
	&UForceFeedbackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UForceFeedbackComponent()
{
	if (!Z_Registration_Info_UClass_UForceFeedbackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackComponent.OuterSingleton, Z_Construct_UClass_UForceFeedbackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UForceFeedbackComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UForceFeedbackComponent>()
{
	return UForceFeedbackComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackComponent);
UForceFeedbackComponent::~UForceFeedbackComponent() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UForceFeedbackComponent)
#endif // WITH_EDITORONLY_DATA
// End Class UForceFeedbackComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackComponent, UForceFeedbackComponent::StaticClass, TEXT("UForceFeedbackComponent"), &Z_Registration_Info_UClass_UForceFeedbackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackComponent), 1694566365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_3375232789(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
