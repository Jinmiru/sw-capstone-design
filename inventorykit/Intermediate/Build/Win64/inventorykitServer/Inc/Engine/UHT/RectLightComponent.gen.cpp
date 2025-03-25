// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/RectLightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectLightComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
ENGINE_API UClass* Z_Construct_UClass_URectLightComponent();
ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class URectLightComponent Function SetBarnDoorAngle
struct Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics
{
	struct RectLightComponent_eventSetBarnDoorAngle_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RectLightComponent_eventSetBarnDoorAngle_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetBarnDoorAngle", nullptr, nullptr, Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::RectLightComponent_eventSetBarnDoorAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::RectLightComponent_eventSetBarnDoorAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URectLightComponent::execSetBarnDoorAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBarnDoorAngle(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class URectLightComponent Function SetBarnDoorAngle

// Begin Class URectLightComponent Function SetBarnDoorLength
struct Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics
{
	struct RectLightComponent_eventSetBarnDoorLength_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RectLightComponent_eventSetBarnDoorLength_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetBarnDoorLength", nullptr, nullptr, Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::RectLightComponent_eventSetBarnDoorLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::RectLightComponent_eventSetBarnDoorLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URectLightComponent::execSetBarnDoorLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBarnDoorLength(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class URectLightComponent Function SetBarnDoorLength

// Begin Class URectLightComponent Function SetSourceHeight
struct Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics
{
	struct RectLightComponent_eventSetSourceHeight_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RectLightComponent_eventSetSourceHeight_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceHeight", nullptr, nullptr, Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::RectLightComponent_eventSetSourceHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::RectLightComponent_eventSetSourceHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URectLightComponent::execSetSourceHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSourceHeight(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class URectLightComponent Function SetSourceHeight

// Begin Class URectLightComponent Function SetSourceTexture
struct Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics
{
	struct RectLightComponent_eventSetSourceTexture_Parms
	{
		UTexture* NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RectLightComponent_eventSetSourceTexture_Parms, NewValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceTexture", nullptr, nullptr, Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::RectLightComponent_eventSetSourceTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::RectLightComponent_eventSetSourceTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URectLightComponent::execSetSourceTexture)
{
	P_GET_OBJECT(UTexture,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSourceTexture(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class URectLightComponent Function SetSourceTexture

// Begin Class URectLightComponent Function SetSourceWidth
struct Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics
{
	struct RectLightComponent_eventSetSourceWidth_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RectLightComponent_eventSetSourceWidth_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceWidth", nullptr, nullptr, Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::RectLightComponent_eventSetSourceWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::RectLightComponent_eventSetSourceWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URectLightComponent::execSetSourceWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSourceWidth(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class URectLightComponent Function SetSourceWidth

// Begin Class URectLightComponent
void URectLightComponent::StaticRegisterNativesURectLightComponent()
{
	UClass* Class = URectLightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBarnDoorAngle", &URectLightComponent::execSetBarnDoorAngle },
		{ "SetBarnDoorLength", &URectLightComponent::execSetBarnDoorLength },
		{ "SetSourceHeight", &URectLightComponent::execSetSourceHeight },
		{ "SetSourceTexture", &URectLightComponent::execSetSourceTexture },
		{ "SetSourceWidth", &URectLightComponent::execSetSourceWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectLightComponent);
UClass* Z_Construct_UClass_URectLightComponent_NoRegister()
{
	return URectLightComponent::StaticClass();
}
struct Z_Construct_UClass_URectLightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "Comment", "/**\n * A light component which emits light from a rectangle.\n */" },
		{ "HideCategories", "Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RectLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "A light component which emits light from a rectangle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceWidth_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "100000" },
		{ "Comment", "/** \n\x09 * Width of light source rect.\n\x09 * Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Width of light source rect.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceHeight_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "100000" },
		{ "Comment", "/** \n\x09 * Height of light source rect.\n\x09 * Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Height of light source rect.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarnDoorAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Angle of barn door attached to the light source rect.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Angle of barn door attached to the light source rect." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarnDoorLength_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Length of barn door attached to the light source rect.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Length of barn door attached to the light source rect." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Texture mapped to the light source rectangle */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Texture mapped to the light source rectangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarnDoorAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BarnDoorLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle, "SetBarnDoorAngle" }, // 2034057578
		{ &Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength, "SetBarnDoorLength" }, // 1465912462
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceHeight, "SetSourceHeight" }, // 482708311
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceTexture, "SetSourceTexture" }, // 2539375724
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceWidth, "SetSourceWidth" }, // 3770268368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectLightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth = { "SourceWidth", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URectLightComponent, SourceWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceWidth_MetaData), NewProp_SourceWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight = { "SourceHeight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URectLightComponent, SourceHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceHeight_MetaData), NewProp_SourceHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle = { "BarnDoorAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URectLightComponent, BarnDoorAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarnDoorAngle_MetaData), NewProp_BarnDoorAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength = { "BarnDoorLength", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URectLightComponent, BarnDoorLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarnDoorLength_MetaData), NewProp_BarnDoorLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URectLightComponent, SourceTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTexture_MetaData), NewProp_SourceTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectLightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URectLightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalLightComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URectLightComponent_Statics::ClassParams = {
	&URectLightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URectLightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URectLightComponent()
{
	if (!Z_Registration_Info_UClass_URectLightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectLightComponent.OuterSingleton, Z_Construct_UClass_URectLightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URectLightComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URectLightComponent>()
{
	return URectLightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URectLightComponent);
URectLightComponent::~URectLightComponent() {}
// End Class URectLightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URectLightComponent, URectLightComponent::StaticClass, TEXT("URectLightComponent"), &Z_Registration_Info_UClass_URectLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectLightComponent), 156340471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_2261389889(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
