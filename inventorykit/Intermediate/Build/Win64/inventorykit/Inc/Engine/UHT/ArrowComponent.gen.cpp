// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrowComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteCategoryInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UArrowComponent Function SetArrowColor
struct Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics
{
	struct ArrowComponent_eventSetArrowColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Arrow" },
		{ "Comment", "/** Updates the arrow's colour, and tells it to refresh */" },
		{ "DisplayName", "Set Arrow Color (Linear Color)" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Updates the arrow's colour, and tells it to refresh" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArrowComponent_eventSetArrowColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowColor", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::ArrowComponent_eventSetArrowColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::ArrowComponent_eventSetArrowColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetArrowColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrowColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetArrowColor

// Begin Class UArrowComponent Function SetArrowFColor
struct Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics
{
	struct ArrowComponent_eventSetArrowFColor_Parms
	{
		FColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArrowComponent_eventSetArrowFColor_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowFColor", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::ArrowComponent_eventSetArrowFColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::ArrowComponent_eventSetArrowFColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowFColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetArrowFColor)
{
	P_GET_STRUCT(FColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrowFColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetArrowFColor

// Begin Class UArrowComponent Function SetArrowLength
struct Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics
{
	struct ArrowComponent_eventSetArrowLength_Parms
	{
		float NewLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::NewProp_NewLength = { "NewLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArrowComponent_eventSetArrowLength_Parms, NewLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::NewProp_NewLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowLength", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::ArrowComponent_eventSetArrowLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::ArrowComponent_eventSetArrowLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetArrowLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrowLength(Z_Param_NewLength);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetArrowLength

// Begin Class UArrowComponent Function SetArrowSize
struct Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics
{
	struct ArrowComponent_eventSetArrowSize_Parms
	{
		float NewSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArrowComponent_eventSetArrowSize_Parms, NewSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowSize", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::ArrowComponent_eventSetArrowSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::ArrowComponent_eventSetArrowSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetArrowSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrowSize(Z_Param_NewSize);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetArrowSize

// Begin Class UArrowComponent Function SetIsScreenSizeScaled
struct Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics
{
	struct ArrowComponent_eventSetIsScreenSizeScaled_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((ArrowComponent_eventSetIsScreenSizeScaled_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArrowComponent_eventSetIsScreenSizeScaled_Parms), &Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetIsScreenSizeScaled", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::ArrowComponent_eventSetIsScreenSizeScaled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::ArrowComponent_eventSetIsScreenSizeScaled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetIsScreenSizeScaled)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsScreenSizeScaled(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetIsScreenSizeScaled

// Begin Class UArrowComponent Function SetScreenSize
struct Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics
{
	struct ArrowComponent_eventSetScreenSize_Parms
	{
		float NewScreenSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScreenSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::NewProp_NewScreenSize = { "NewScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArrowComponent_eventSetScreenSize_Parms, NewScreenSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::NewProp_NewScreenSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetScreenSize", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::ArrowComponent_eventSetScreenSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::ArrowComponent_eventSetScreenSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetScreenSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetScreenSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewScreenSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScreenSize(Z_Param_NewScreenSize);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetScreenSize

// Begin Class UArrowComponent Function SetTreatAsASprite
struct Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics
{
	struct ArrowComponent_eventSetTreatAsASprite_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((ArrowComponent_eventSetTreatAsASprite_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArrowComponent_eventSetTreatAsASprite_Parms), &Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetTreatAsASprite", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::ArrowComponent_eventSetTreatAsASprite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::ArrowComponent_eventSetTreatAsASprite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetTreatAsASprite)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTreatAsASprite(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetTreatAsASprite

// Begin Class UArrowComponent Function SetUseInEditorScaling
struct Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics
{
	struct ArrowComponent_eventSetUseInEditorScaling_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((ArrowComponent_eventSetUseInEditorScaling_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArrowComponent_eventSetUseInEditorScaling_Parms), &Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetUseInEditorScaling", nullptr, nullptr, Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::ArrowComponent_eventSetUseInEditorScaling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::ArrowComponent_eventSetUseInEditorScaling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArrowComponent::execSetUseInEditorScaling)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseInEditorScaling(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UArrowComponent Function SetUseInEditorScaling

// Begin Class UArrowComponent
void UArrowComponent::StaticRegisterNativesUArrowComponent()
{
	UClass* Class = UArrowComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetArrowColor", &UArrowComponent::execSetArrowColor },
		{ "SetArrowFColor", &UArrowComponent::execSetArrowFColor },
		{ "SetArrowLength", &UArrowComponent::execSetArrowLength },
		{ "SetArrowSize", &UArrowComponent::execSetArrowSize },
		{ "SetIsScreenSizeScaled", &UArrowComponent::execSetIsScreenSizeScaled },
		{ "SetScreenSize", &UArrowComponent::execSetScreenSize },
		{ "SetTreatAsASprite", &UArrowComponent::execSetTreatAsASprite },
		{ "SetUseInEditorScaling", &UArrowComponent::execSetUseInEditorScaling },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArrowComponent);
UClass* Z_Construct_UClass_UArrowComponent_NoRegister()
{
	return UArrowComponent::StaticClass();
}
struct Z_Construct_UClass_UArrowComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** \n * A simple arrow rendered using lines. Useful for indicating which way an object is facing.\n */" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/ArrowComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "A simple arrow rendered using lines. Useful for indicating which way an object is facing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowColor_MetaData[] = {
		{ "BlueprintSetter", "SetArrowFColor" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Color to draw arrow */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Color to draw arrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[] = {
		{ "BlueprintSetter", "SetArrowSize" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Relative size to scale drawn arrow by */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Relative size to scale drawn arrow by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowLength_MetaData[] = {
		{ "BlueprintSetter", "SetArrowLength" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Total length of drawn arrow including head */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Total length of drawn arrow including head" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "BlueprintSetter", "SetScreenSize" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** The size on screen to limit this arrow to (in screen space) */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "The size on screen to limit this arrow to (in screen space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsScreenSizeScaled_MetaData[] = {
		{ "BlueprintSetter", "SetIsScreenSizeScaled" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Set to limit the screen size of this arrow */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Set to limit the screen size of this arrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatAsASprite_MetaData[] = {
		{ "BlueprintSetter", "SetTreatAsASprite" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** If true, don't show the arrow when EngineShowFlags.BillboardSprites is disabled. */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "If true, don't show the arrow when EngineShowFlags.BillboardSprites is disabled." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteCategoryName_MetaData[] = {
		{ "Comment", "/** Sprite category that the arrow component belongs to, if being treated as a sprite. Value serves as a key into the localization file. */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Sprite category that the arrow component belongs to, if being treated as a sprite. Value serves as a key into the localization file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteInfo_MetaData[] = {
		{ "Comment", "/** Sprite category information regarding the arrow component, if being treated as a sprite. */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Sprite category information regarding the arrow component, if being treated as a sprite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLightAttachment_MetaData[] = {
		{ "Comment", "/** If true, this arrow component is attached to a light actor */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "If true, this arrow component is attached to a light actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInEditorScaling_MetaData[] = {
		{ "BlueprintSetter", "SetUseInEditorScaling" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale) */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArrowColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static void NewProp_bIsScreenSizeScaled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScreenSizeScaled;
	static void NewProp_bTreatAsASprite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatAsASprite;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpriteCategoryName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteInfo;
	static void NewProp_bLightAttachment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLightAttachment;
	static void NewProp_bUseInEditorScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInEditorScaling;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowColor, "SetArrowColor" }, // 52068721
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowFColor, "SetArrowFColor" }, // 1540520272
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowLength, "SetArrowLength" }, // 3706266916
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowSize, "SetArrowSize" }, // 3230811957
		{ &Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled, "SetIsScreenSizeScaled" }, // 3612441923
		{ &Z_Construct_UFunction_UArrowComponent_SetScreenSize, "SetScreenSize" }, // 31982058
		{ &Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite, "SetTreatAsASprite" }, // 600504920
		{ &Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling, "SetUseInEditorScaling" }, // 4213583428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArrowComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor = { "ArrowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArrowComponent, ArrowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowColor_MetaData), NewProp_ArrowColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArrowComponent, ArrowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowSize_MetaData), NewProp_ArrowSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowLength = { "ArrowLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArrowComponent, ArrowLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowLength_MetaData), NewProp_ArrowLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArrowComponent, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit(void* Obj)
{
	((UArrowComponent*)Obj)->bIsScreenSizeScaled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled = { "bIsScreenSizeScaled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsScreenSizeScaled_MetaData), NewProp_bIsScreenSizeScaled_MetaData) };
void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_SetBit(void* Obj)
{
	((UArrowComponent*)Obj)->bTreatAsASprite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite = { "bTreatAsASprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatAsASprite_MetaData), NewProp_bTreatAsASprite_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName = { "SpriteCategoryName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArrowComponent, SpriteCategoryName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteCategoryName_MetaData), NewProp_SpriteCategoryName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo = { "SpriteInfo", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UArrowComponent, SpriteInfo), Z_Construct_UScriptStruct_FSpriteCategoryInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteInfo_MetaData), NewProp_SpriteInfo_MetaData) }; // 3340613696
void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_SetBit(void* Obj)
{
	((UArrowComponent*)Obj)->bLightAttachment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment = { "bLightAttachment", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLightAttachment_MetaData), NewProp_bLightAttachment_MetaData) };
void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_SetBit(void* Obj)
{
	((UArrowComponent*)Obj)->bUseInEditorScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling = { "bUseInEditorScaling", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInEditorScaling_MetaData), NewProp_bUseInEditorScaling_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArrowComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UArrowComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArrowComponent_Statics::ClassParams = {
	&UArrowComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UArrowComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArrowComponent()
{
	if (!Z_Registration_Info_UClass_UArrowComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArrowComponent.OuterSingleton, Z_Construct_UClass_UArrowComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArrowComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UArrowComponent>()
{
	return UArrowComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArrowComponent);
UArrowComponent::~UArrowComponent() {}
// End Class UArrowComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArrowComponent, UArrowComponent::StaticClass, TEXT("UArrowComponent"), &Z_Registration_Info_UClass_UArrowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArrowComponent), 4167381243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_3009023926(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
