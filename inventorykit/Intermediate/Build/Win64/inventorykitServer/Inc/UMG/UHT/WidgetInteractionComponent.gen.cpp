// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/WidgetInteractionComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetInteractionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent();
UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetInteractionSource();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Enum EWidgetInteractionSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetInteractionSource;
static UEnum* EWidgetInteractionSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetInteractionSource, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetInteractionSource"));
	}
	return Z_Registration_Info_UEnum_EWidgetInteractionSource.OuterSingleton;
}
template<> UMG_API UEnum* StaticEnum<EWidgetInteractionSource>()
{
	return EWidgetInteractionSource_StaticEnum();
}
struct Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CenterScreen.Comment", "/** Sends trace from the center of the first local player's screen. */" },
		{ "CenterScreen.Name", "EWidgetInteractionSource::CenterScreen" },
		{ "CenterScreen.ToolTip", "Sends trace from the center of the first local player's screen." },
		{ "Comment", "/**\n * The interaction source for the widget interaction component, e.g. where do we try and\n * trace from to try to find a widget under a virtual pointer device.\n */" },
		{ "Custom.Comment", "/**\n\x09 * Sends traces from a custom location determined by the user.  Will use whatever \n\x09 * FHitResult is set by the call to SetCustomHitResult.\n\x09 */" },
		{ "Custom.Name", "EWidgetInteractionSource::Custom" },
		{ "Custom.ToolTip", "Sends traces from a custom location determined by the user.  Will use whatever\nFHitResult is set by the call to SetCustomHitResult." },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "Mouse.Comment", "/** Sends traces from the mouse location of the first local player controller. */" },
		{ "Mouse.Name", "EWidgetInteractionSource::Mouse" },
		{ "Mouse.ToolTip", "Sends traces from the mouse location of the first local player controller." },
		{ "ToolTip", "The interaction source for the widget interaction component, e.g. where do we try and\ntrace from to try to find a widget under a virtual pointer device." },
		{ "World.Comment", "/** Sends traces from the world location and orientation of the interaction component. */" },
		{ "World.Name", "EWidgetInteractionSource::World" },
		{ "World.ToolTip", "Sends traces from the world location and orientation of the interaction component." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWidgetInteractionSource::World", (int64)EWidgetInteractionSource::World },
		{ "EWidgetInteractionSource::Mouse", (int64)EWidgetInteractionSource::Mouse },
		{ "EWidgetInteractionSource::CenterScreen", (int64)EWidgetInteractionSource::CenterScreen },
		{ "EWidgetInteractionSource::Custom", (int64)EWidgetInteractionSource::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	"EWidgetInteractionSource",
	"EWidgetInteractionSource",
	Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMG_EWidgetInteractionSource()
{
	if (!Z_Registration_Info_UEnum_EWidgetInteractionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetInteractionSource.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetInteractionSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWidgetInteractionSource.InnerSingleton;
}
// End Enum EWidgetInteractionSource

// Begin Delegate FOnHoveredWidgetChanged
struct Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnHoveredWidgetChanged_Parms
	{
		UWidgetComponent* WidgetComponent;
		UWidgetComponent* PreviousWidgetComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// TODO Come up with a better way to let people forward a lot of keyboard input without a bunch of glue\n" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "TODO Come up with a better way to let people forward a lot of keyboard input without a bunch of glue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousWidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnHoveredWidgetChanged_Parms, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_PreviousWidgetComponent = { "PreviousWidgetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnHoveredWidgetChanged_Parms, PreviousWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousWidgetComponent_MetaData), NewProp_PreviousWidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_WidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::NewProp_PreviousWidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnHoveredWidgetChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::_Script_UMG_eventOnHoveredWidgetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::_Script_UMG_eventOnHoveredWidgetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHoveredWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredWidgetChanged, UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent)
{
	struct _Script_UMG_eventOnHoveredWidgetChanged_Parms
	{
		UWidgetComponent* WidgetComponent;
		UWidgetComponent* PreviousWidgetComponent;
	};
	_Script_UMG_eventOnHoveredWidgetChanged_Parms Parms;
	Parms.WidgetComponent=WidgetComponent;
	Parms.PreviousWidgetComponent=PreviousWidgetComponent;
	OnHoveredWidgetChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHoveredWidgetChanged

// Begin Class UWidgetInteractionComponent Function Get2DHitLocation
struct Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics
{
	struct WidgetInteractionComponent_eventGet2DHitLocation_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Gets the last hit location on the widget in 2D, local pixel units of the render target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Gets the last hit location on the widget in 2D, local pixel units of the render target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventGet2DHitLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "Get2DHitLocation", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::WidgetInteractionComponent_eventGet2DHitLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::WidgetInteractionComponent_eventGet2DHitLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execGet2DHitLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->Get2DHitLocation();
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function Get2DHitLocation

// Begin Class UWidgetInteractionComponent Function GetHoveredWidgetComponent
struct Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics
{
	struct WidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms
	{
		UWidgetComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Get the currently hovered widget component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Get the currently hovered widget component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms, ReturnValue), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "GetHoveredWidgetComponent", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::WidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::WidgetInteractionComponent_eventGetHoveredWidgetComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execGetHoveredWidgetComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredWidgetComponent();
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function GetHoveredWidgetComponent

// Begin Class UWidgetInteractionComponent Function GetLastHitResult
struct Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics
{
	struct WidgetInteractionComponent_eventGetLastHitResult_Parms
	{
		FHitResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Gets the last hit result generated by the component.  Returns the custom hit result if that was set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Gets the last hit result generated by the component.  Returns the custom hit result if that was set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventGetLastHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "GetLastHitResult", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::WidgetInteractionComponent_eventGetLastHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::WidgetInteractionComponent_eventGetLastHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execGetLastHitResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHitResult*)Z_Param__Result=P_THIS->GetLastHitResult();
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function GetLastHitResult

// Begin Class UWidgetInteractionComponent Function IsOverFocusableWidget
struct Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics
{
	struct WidgetInteractionComponent_eventIsOverFocusableWidget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Returns true if a widget under the hit result is focusable.  e.g. Slate widgets that \n\x09 * return true for SupportsKeyboardFocus().\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is focusable.  e.g. Slate widgets that\nreturn true for SupportsKeyboardFocus()." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventIsOverFocusableWidget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventIsOverFocusableWidget_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "IsOverFocusableWidget", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::WidgetInteractionComponent_eventIsOverFocusableWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::WidgetInteractionComponent_eventIsOverFocusableWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execIsOverFocusableWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOverFocusableWidget();
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function IsOverFocusableWidget

// Begin Class UWidgetInteractionComponent Function IsOverHitTestVisibleWidget
struct Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics
{
	struct WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Returns true if a widget under the hit result is has a visibility that makes it hit test \n\x09 * visible.  e.g. Slate widgets that return true for GetVisibility().IsHitTestVisible().\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is has a visibility that makes it hit test\nvisible.  e.g. Slate widgets that return true for GetVisibility().IsHitTestVisible()." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "IsOverHitTestVisibleWidget", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::WidgetInteractionComponent_eventIsOverHitTestVisibleWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execIsOverHitTestVisibleWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOverHitTestVisibleWidget();
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function IsOverHitTestVisibleWidget

// Begin Class UWidgetInteractionComponent Function IsOverInteractableWidget
struct Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics
{
	struct WidgetInteractionComponent_eventIsOverInteractableWidget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Returns true if a widget under the hit result is interactive.  e.g. Slate widgets \n\x09 * that return true for IsInteractable().\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Returns true if a widget under the hit result is interactive.  e.g. Slate widgets\nthat return true for IsInteractable()." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventIsOverInteractableWidget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventIsOverInteractableWidget_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "IsOverInteractableWidget", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::WidgetInteractionComponent_eventIsOverInteractableWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::WidgetInteractionComponent_eventIsOverInteractableWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execIsOverInteractableWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOverInteractableWidget();
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function IsOverInteractableWidget

// Begin Class UWidgetInteractionComponent Function PressAndReleaseKey
struct Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics
{
	struct WidgetInteractionComponent_eventPressAndReleaseKey_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Does both the press and release of a simulated keyboard key.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Does both the press and release of a simulated keyboard key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventPressAndReleaseKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventPressAndReleaseKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventPressAndReleaseKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "PressAndReleaseKey", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::WidgetInteractionComponent_eventPressAndReleaseKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::WidgetInteractionComponent_eventPressAndReleaseKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execPressAndReleaseKey)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PressAndReleaseKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function PressAndReleaseKey

// Begin Class UWidgetInteractionComponent Function PressKey
struct Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics
{
	struct WidgetInteractionComponent_eventPressKey_Parms
	{
		FKey Key;
		bool bRepeat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Press a key as if it had come from the keyboard.  Avoid using this for 'a-z|A-Z', things like\n\x09 * the Editable Textbox in Slate expect OnKeyChar to be called to signal a specific character being\n\x09 * send to the widget.  So for those cases you should use SendKeyChar.\n\x09 */" },
		{ "CPP_Default_bRepeat", "false" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Press a key as if it had come from the keyboard.  Avoid using this for 'a-z|A-Z', things like\nthe Editable Textbox in Slate expect OnKeyChar to be called to signal a specific character being\nsend to the widget.  So for those cases you should use SendKeyChar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_bRepeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventPressKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventPressKey_Parms*)Obj)->bRepeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventPressKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventPressKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventPressKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_bRepeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "PressKey", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::WidgetInteractionComponent_eventPressKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::WidgetInteractionComponent_eventPressKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_PressKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execPressKey)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_GET_UBOOL(Z_Param_bRepeat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PressKey(Z_Param_Key,Z_Param_bRepeat);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function PressKey

// Begin Class UWidgetInteractionComponent Function PressPointerKey
struct Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics
{
	struct WidgetInteractionComponent_eventPressPointerKey_Parms
	{
		FKey Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Presses a key as if the mouse/pointer were the source of it.  Normally you would just use\n\x09 * Left/Right mouse button for the Key.  However - advanced uses could also be imagined where you\n\x09 * send other keys to signal widgets to take special actions if they're under the cursor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Presses a key as if the mouse/pointer were the source of it.  Normally you would just use\nLeft/Right mouse button for the Key.  However - advanced uses could also be imagined where you\nsend other keys to signal widgets to take special actions if they're under the cursor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventPressPointerKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "PressPointerKey", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::WidgetInteractionComponent_eventPressPointerKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::WidgetInteractionComponent_eventPressPointerKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execPressPointerKey)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PressPointerKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function PressPointerKey

// Begin Class UWidgetInteractionComponent Function ReleaseKey
struct Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics
{
	struct WidgetInteractionComponent_eventReleaseKey_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Releases a key as if it had been released by the keyboard.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Releases a key as if it had been released by the keyboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventReleaseKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventReleaseKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventReleaseKey_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "ReleaseKey", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::WidgetInteractionComponent_eventReleaseKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::WidgetInteractionComponent_eventReleaseKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execReleaseKey)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReleaseKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function ReleaseKey

// Begin Class UWidgetInteractionComponent Function ReleasePointerKey
struct Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics
{
	struct WidgetInteractionComponent_eventReleasePointerKey_Parms
	{
		FKey Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Releases a key as if the mouse/pointer were the source of it.  Normally you would just use\n\x09 * Left/Right mouse button for the Key.  However - advanced uses could also be imagined where you\n\x09 * send other keys to signal widgets to take special actions if they're under the cursor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Releases a key as if the mouse/pointer were the source of it.  Normally you would just use\nLeft/Right mouse button for the Key.  However - advanced uses could also be imagined where you\nsend other keys to signal widgets to take special actions if they're under the cursor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventReleasePointerKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "ReleasePointerKey", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::WidgetInteractionComponent_eventReleasePointerKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::WidgetInteractionComponent_eventReleasePointerKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execReleasePointerKey)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleasePointerKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function ReleasePointerKey

// Begin Class UWidgetInteractionComponent Function ScrollWheel
struct Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics
{
	struct WidgetInteractionComponent_eventScrollWheel_Parms
	{
		float ScrollDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Sends a scroll wheel event to the widget under the last hit result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Sends a scroll wheel event to the widget under the last hit result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::NewProp_ScrollDelta = { "ScrollDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventScrollWheel_Parms, ScrollDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::NewProp_ScrollDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "ScrollWheel", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::WidgetInteractionComponent_eventScrollWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::WidgetInteractionComponent_eventScrollWheel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execScrollWheel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScrollDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScrollWheel(Z_Param_ScrollDelta);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function ScrollWheel

// Begin Class UWidgetInteractionComponent Function SendKeyChar
struct Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics
{
	struct WidgetInteractionComponent_eventSendKeyChar_Parms
	{
		FString Characters;
		bool bRepeat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Transmits a list of characters to a widget by simulating a OnKeyChar event for each key listed in\n\x09 * the string.\n\x09 */" },
		{ "CPP_Default_bRepeat", "false" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Transmits a list of characters to a widget by simulating a OnKeyChar event for each key listed in\nthe string." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Characters;
	static void NewProp_bRepeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventSendKeyChar_Parms, Characters), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventSendKeyChar_Parms*)Obj)->bRepeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventSendKeyChar_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetInteractionComponent_eventSendKeyChar_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetInteractionComponent_eventSendKeyChar_Parms), &Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_Characters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_bRepeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "SendKeyChar", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::WidgetInteractionComponent_eventSendKeyChar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::WidgetInteractionComponent_eventSendKeyChar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execSendKeyChar)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Characters);
	P_GET_UBOOL(Z_Param_bRepeat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendKeyChar(Z_Param_Characters,Z_Param_bRepeat);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function SendKeyChar

// Begin Class UWidgetInteractionComponent Function SetCustomHitResult
struct Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics
{
	struct WidgetInteractionComponent_eventSetCustomHitResult_Parms
	{
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Set custom hit result.  This is only taken into account if InteractionSource is set to EWidgetInteractionSource::Custom." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventSetCustomHitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "SetCustomHitResult", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::WidgetInteractionComponent_eventSetCustomHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::WidgetInteractionComponent_eventSetCustomHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execSetCustomHitResult)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomHitResult(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function SetCustomHitResult

// Begin Class UWidgetInteractionComponent Function SetFocus
struct Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics
{
	struct WidgetInteractionComponent_eventSetFocus_Parms
	{
		UWidget* FocusWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Set the focus target of the virtual user managed by this component\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Set the focus target of the virtual user managed by this component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::NewProp_FocusWidget = { "FocusWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetInteractionComponent_eventSetFocus_Parms, FocusWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusWidget_MetaData), NewProp_FocusWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::NewProp_FocusWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetInteractionComponent, nullptr, "SetFocus", nullptr, nullptr, Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::WidgetInteractionComponent_eventSetFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::WidgetInteractionComponent_eventSetFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetInteractionComponent::execSetFocus)
{
	P_GET_OBJECT(UWidget,Z_Param_FocusWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocus(Z_Param_FocusWidget);
	P_NATIVE_END;
}
// End Class UWidgetInteractionComponent Function SetFocus

// Begin Class UWidgetInteractionComponent
void UWidgetInteractionComponent::StaticRegisterNativesUWidgetInteractionComponent()
{
	UClass* Class = UWidgetInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Get2DHitLocation", &UWidgetInteractionComponent::execGet2DHitLocation },
		{ "GetHoveredWidgetComponent", &UWidgetInteractionComponent::execGetHoveredWidgetComponent },
		{ "GetLastHitResult", &UWidgetInteractionComponent::execGetLastHitResult },
		{ "IsOverFocusableWidget", &UWidgetInteractionComponent::execIsOverFocusableWidget },
		{ "IsOverHitTestVisibleWidget", &UWidgetInteractionComponent::execIsOverHitTestVisibleWidget },
		{ "IsOverInteractableWidget", &UWidgetInteractionComponent::execIsOverInteractableWidget },
		{ "PressAndReleaseKey", &UWidgetInteractionComponent::execPressAndReleaseKey },
		{ "PressKey", &UWidgetInteractionComponent::execPressKey },
		{ "PressPointerKey", &UWidgetInteractionComponent::execPressPointerKey },
		{ "ReleaseKey", &UWidgetInteractionComponent::execReleaseKey },
		{ "ReleasePointerKey", &UWidgetInteractionComponent::execReleasePointerKey },
		{ "ScrollWheel", &UWidgetInteractionComponent::execScrollWheel },
		{ "SendKeyChar", &UWidgetInteractionComponent::execSendKeyChar },
		{ "SetCustomHitResult", &UWidgetInteractionComponent::execSetCustomHitResult },
		{ "SetFocus", &UWidgetInteractionComponent::execSetFocus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetInteractionComponent);
UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister()
{
	return UWidgetInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UWidgetInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UserInterface" },
		{ "Comment", "/**\n * This is a component to allow interaction with the Widget Component.  This class allows you to \n * simulate a sort of laser pointer device, when it hovers over widgets it will send the basic signals \n * to show as if the mouse were moving on top of it.  You'll then tell the component to simulate key presses, \n * like Left Mouse, down and up, to simulate a mouse click.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/WidgetInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This is a component to allow interaction with the Widget Component.  This class allows you to\nsimulate a sort of laser pointer device, when it hovers over widgets it will send the basic signals\nto show as if the mouse were moving on top of it.  You'll then tell the component to simulate key presses,\nlike Left Mouse, down and up, to simulate a mouse click." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHoveredWidgetChanged_MetaData[] = {
		{ "Category", "Interaction|Event" },
		{ "Comment", "/**\n\x09 * Called when the hovered Widget Component changes.  The interaction component functions at the Slate\n\x09 * level - so it's unable to report anything about what UWidget is under the hit result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Called when the hovered Widget Component changes.  The interaction component functions at the Slate\nlevel - so it's unable to report anything about what UWidget is under the hit result." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualUserIndex_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Represents the Virtual User Index.  Each virtual user should be represented by a different \n\x09 * index number, this will maintain separate capture and focus states for them.  Each\n\x09 * controller or finger-tip should get a unique PointerIndex.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Represents the Virtual User Index.  Each virtual user should be represented by a different\nindex number, this will maintain separate capture and focus states for them.  Each\ncontroller or finger-tip should get a unique PointerIndex." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerIndex_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Each user virtual controller or virtual finger tips being simulated should use a different pointer index.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Each user virtual controller or virtual finger tips being simulated should use a different pointer index." },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * The trace channel to use when tracing for widget components in the world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The trace channel to use when tracing for widget components in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * The distance in game units the component should be able to interact with a widget component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The distance in game units the component should be able to interact with a widget component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSource_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Should we project from the world location of the component?  If you set this to false, you'll\n\x09 * need to call SetCustomHitResult(), and provide the result of a custom hit test form whatever\n\x09 * location you wish.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Should we project from the world location of the component?  If you set this to false, you'll\nneed to call SetCustomHitResult(), and provide the result of a custom hit test form whatever\nlocation you wish." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHitTesting_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Should the interaction component perform hit testing (Automatic or Custom) and attempt to \n\x09 * simulate hover - if you were going to emulate a keyboard you would want to turn this option off\n\x09 * if the virtual keyboard was separate from the virtual pointer device and used a second interaction\n\x09 * component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Should the interaction component perform hit testing (Automatic or Custom) and attempt to\nsimulate hover - if you were going to emulate a keyboard you would want to turn this option off\nif the virtual keyboard was separate from the virtual pointer device and used a second interaction\ncomponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/**\n\x09 * Shows some debugging lines and a hit sphere to help you debug interactions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Shows some debugging lines and a hit sphere to help you debug interactions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereLineThickness_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09 * Determines the line thickness of the debug sphere.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Determines the line thickness of the debug sphere." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineThickness_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09 * Determines the thickness of the debug lines.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Determines the thickness of the debug lines." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/**\n\x09 * Determines the color of the debug lines.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Determines the color of the debug lines." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomHitResult_MetaData[] = {
		{ "Comment", "/** Stores the custom hit result set by the player. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Stores the custom hit result set by the player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalHitLocation_MetaData[] = {
		{ "Comment", "/** The 2D location on the widget component that was hit. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The 2D location on the widget component that was hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLocalHitLocation_MetaData[] = {
		{ "Comment", "/** The last 2D location on the widget component that was hit. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The last 2D location on the widget component that was hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredWidgetComponent_MetaData[] = {
		{ "Comment", "/** The widget component we're currently hovering over. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The widget component we're currently hovering over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastHitResult_MetaData[] = {
		{ "Comment", "/** The last hit result we used. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The last hit result we used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetInteractable_MetaData[] = {
		{ "Comment", "/** Are we hovering over any interactive widgets. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovering over any interactive widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetFocusable_MetaData[] = {
		{ "Comment", "/** Are we hovering over any focusable widget? */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovering over any focusable widget?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHoveredWidgetHitTestVisible_MetaData[] = {
		{ "Comment", "/** Are we hovered over a widget that is hit test visible? */" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "Are we hovered over a widget that is hit test visible?" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** The arrow component we show at editor time. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetInteractionComponent.h" },
		{ "ToolTip", "The arrow component we show at editor time." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredWidgetChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualUserIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionSource;
	static void NewProp_bEnableHitTesting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHitTesting;
	static void NewProp_bShowDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugSphereLineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalHitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastLocalHitLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredWidgetComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastHitResult;
	static void NewProp_bIsHoveredWidgetInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetInteractable;
	static void NewProp_bIsHoveredWidgetFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetFocusable;
	static void NewProp_bIsHoveredWidgetHitTestVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHoveredWidgetHitTestVisible;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_Get2DHitLocation, "Get2DHitLocation" }, // 3887958064
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_GetHoveredWidgetComponent, "GetHoveredWidgetComponent" }, // 327603725
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_GetLastHitResult, "GetLastHitResult" }, // 1659919851
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverFocusableWidget, "IsOverFocusableWidget" }, // 3334807910
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverHitTestVisibleWidget, "IsOverHitTestVisibleWidget" }, // 1609572749
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_IsOverInteractableWidget, "IsOverInteractableWidget" }, // 2676189335
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_PressAndReleaseKey, "PressAndReleaseKey" }, // 3528641660
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_PressKey, "PressKey" }, // 1966792102
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_PressPointerKey, "PressPointerKey" }, // 3311934163
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_ReleaseKey, "ReleaseKey" }, // 2320904866
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_ReleasePointerKey, "ReleasePointerKey" }, // 406699069
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_ScrollWheel, "ScrollWheel" }, // 2498597598
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_SendKeyChar, "SendKeyChar" }, // 3346314493
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_SetCustomHitResult, "SetCustomHitResult" }, // 2342964779
		{ &Z_Construct_UFunction_UWidgetInteractionComponent_SetFocus, "SetFocus" }, // 1987751212
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged = { "OnHoveredWidgetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, OnHoveredWidgetChanged), Z_Construct_UDelegateFunction_UMG_OnHoveredWidgetChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHoveredWidgetChanged_MetaData), NewProp_OnHoveredWidgetChanged_MetaData) }; // 202493417
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex = { "VirtualUserIndex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, VirtualUserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualUserIndex_MetaData), NewProp_VirtualUserIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_PointerIndex = { "PointerIndex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, PointerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerIndex_MetaData), NewProp_PointerIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource = { "InteractionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, InteractionSource), Z_Construct_UEnum_UMG_EWidgetInteractionSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSource_MetaData), NewProp_InteractionSource_MetaData) }; // 27135360
void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_SetBit(void* Obj)
{
	((UWidgetInteractionComponent*)Obj)->bEnableHitTesting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting = { "bEnableHitTesting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHitTesting_MetaData), NewProp_bEnableHitTesting_MetaData) };
void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_SetBit(void* Obj)
{
	((UWidgetInteractionComponent*)Obj)->bShowDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebug_MetaData), NewProp_bShowDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugSphereLineThickness = { "DebugSphereLineThickness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, DebugSphereLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereLineThickness_MetaData), NewProp_DebugSphereLineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugLineThickness = { "DebugLineThickness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, DebugLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLineThickness_MetaData), NewProp_DebugLineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_CustomHitResult = { "CustomHitResult", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, CustomHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomHitResult_MetaData), NewProp_CustomHitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LocalHitLocation = { "LocalHitLocation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, LocalHitLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalHitLocation_MetaData), NewProp_LocalHitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation = { "LastLocalHitLocation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, LastLocalHitLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLocalHitLocation_MetaData), NewProp_LastLocalHitLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent = { "HoveredWidgetComponent", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, HoveredWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredWidgetComponent_MetaData), NewProp_HoveredWidgetComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastHitResult = { "LastHitResult", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, LastHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastHitResult_MetaData), NewProp_LastHitResult_MetaData) }; // 4100991306
void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_SetBit(void* Obj)
{
	((UWidgetInteractionComponent*)Obj)->bIsHoveredWidgetInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable = { "bIsHoveredWidgetInteractable", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHoveredWidgetInteractable_MetaData), NewProp_bIsHoveredWidgetInteractable_MetaData) };
void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_SetBit(void* Obj)
{
	((UWidgetInteractionComponent*)Obj)->bIsHoveredWidgetFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable = { "bIsHoveredWidgetFocusable", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHoveredWidgetFocusable_MetaData), NewProp_bIsHoveredWidgetFocusable_MetaData) };
void Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_SetBit(void* Obj)
{
	((UWidgetInteractionComponent*)Obj)->bIsHoveredWidgetHitTestVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible = { "bIsHoveredWidgetHitTestVisible", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetInteractionComponent), &Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHoveredWidgetHitTestVisible_MetaData), NewProp_bIsHoveredWidgetHitTestVisible_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetInteractionComponent, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_OnHoveredWidgetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_VirtualUserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_PointerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_InteractionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bEnableHitTesting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bShowDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugSphereLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_CustomHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LocalHitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastLocalHitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_HoveredWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_LastHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetFocusable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_bIsHoveredWidgetHitTestVisible,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetInteractionComponent_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetInteractionComponent_Statics::ClassParams = {
	&UWidgetInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidgetInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UWidgetInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetInteractionComponent.OuterSingleton, Z_Construct_UClass_UWidgetInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetInteractionComponent.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetInteractionComponent>()
{
	return UWidgetInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetInteractionComponent);
UWidgetInteractionComponent::~UWidgetInteractionComponent() {}
// End Class UWidgetInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWidgetInteractionSource_StaticEnum, TEXT("EWidgetInteractionSource"), &Z_Registration_Info_UEnum_EWidgetInteractionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 27135360U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetInteractionComponent, UWidgetInteractionComponent::StaticClass, TEXT("UWidgetInteractionComponent"), &Z_Registration_Info_UClass_UWidgetInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetInteractionComponent), 2658603227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_3292537009(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
