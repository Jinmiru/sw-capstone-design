// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBillboardComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteCategoryInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UBillboardComponent Function SetOpacityMaskRefVal
struct Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics
{
	struct BillboardComponent_eventSetOpacityMaskRefVal_Parms
	{
		float RefVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Sprite" },
		{ "Comment", "/** Changed the opacity masked used by this component */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Changed the opacity masked used by this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::NewProp_RefVal = { "RefVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetOpacityMaskRefVal_Parms, RefVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::NewProp_RefVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBillboardComponent, nullptr, "SetOpacityMaskRefVal", nullptr, nullptr, Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::BillboardComponent_eventSetOpacityMaskRefVal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::BillboardComponent_eventSetOpacityMaskRefVal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBillboardComponent::execSetOpacityMaskRefVal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RefVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOpacityMaskRefVal(Z_Param_RefVal);
	P_NATIVE_END;
}
// End Class UBillboardComponent Function SetOpacityMaskRefVal

// Begin Class UBillboardComponent Function SetSprite
struct Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics
{
	struct BillboardComponent_eventSetSprite_Parms
	{
		UTexture2D* NewSprite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Sprite" },
		{ "Comment", "/** Change the sprite texture used by this component */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Change the sprite texture used by this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::NewProp_NewSprite = { "NewSprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetSprite_Parms, NewSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::NewProp_NewSprite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBillboardComponent, nullptr, "SetSprite", nullptr, nullptr, Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::BillboardComponent_eventSetSprite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::BillboardComponent_eventSetSprite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBillboardComponent_SetSprite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBillboardComponent::execSetSprite)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewSprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSprite(Z_Param_NewSprite);
	P_NATIVE_END;
}
// End Class UBillboardComponent Function SetSprite

// Begin Class UBillboardComponent Function SetSpriteAndUV
struct Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics
{
	struct BillboardComponent_eventSetSpriteAndUV_Parms
	{
		UTexture2D* NewSprite;
		int32 NewU;
		int32 NewUL;
		int32 NewV;
		int32 NewVL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Sprite" },
		{ "Comment", "/** Change the sprite texture and the UV's used by this component */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Change the sprite texture and the UV's used by this component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSprite;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewU;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewUL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewV;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewVL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewSprite = { "NewSprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewU = { "NewU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewU), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewUL = { "NewUL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewUL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewV = { "NewV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewVL = { "NewVL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewVL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewUL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewVL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBillboardComponent, nullptr, "SetSpriteAndUV", nullptr, nullptr, Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::BillboardComponent_eventSetSpriteAndUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::BillboardComponent_eventSetSpriteAndUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBillboardComponent::execSetSpriteAndUV)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewSprite);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewU);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewUL);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewV);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewVL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpriteAndUV(Z_Param_NewSprite,Z_Param_NewU,Z_Param_NewUL,Z_Param_NewV,Z_Param_NewVL);
	P_NATIVE_END;
}
// End Class UBillboardComponent Function SetSpriteAndUV

// Begin Class UBillboardComponent Function SetUV
struct Z_Construct_UFunction_UBillboardComponent_SetUV_Statics
{
	struct BillboardComponent_eventSetUV_Parms
	{
		int32 NewU;
		int32 NewUL;
		int32 NewV;
		int32 NewVL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Sprite" },
		{ "Comment", "/** Change the sprite's UVs */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Change the sprite's UVs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewU;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewUL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewV;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewVL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewU = { "NewU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewU), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewUL = { "NewUL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewUL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewV = { "NewV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewVL = { "NewVL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewVL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewUL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewVL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBillboardComponent, nullptr, "SetUV", nullptr, nullptr, Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::BillboardComponent_eventSetUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::BillboardComponent_eventSetUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBillboardComponent_SetUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBillboardComponent::execSetUV)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewU);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewUL);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewV);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewVL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUV(Z_Param_NewU,Z_Param_NewUL,Z_Param_NewV,Z_Param_NewVL);
	P_NATIVE_END;
}
// End Class UBillboardComponent Function SetUV

// Begin Class UBillboardComponent
void UBillboardComponent::StaticRegisterNativesUBillboardComponent()
{
	UClass* Class = UBillboardComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetOpacityMaskRefVal", &UBillboardComponent::execSetOpacityMaskRefVal },
		{ "SetSprite", &UBillboardComponent::execSetSprite },
		{ "SetSpriteAndUV", &UBillboardComponent::execSetSpriteAndUV },
		{ "SetUV", &UBillboardComponent::execSetUV },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBillboardComponent);
UClass* Z_Construct_UClass_UBillboardComponent_NoRegister()
{
	return UBillboardComponent::StaticClass();
}
struct Z_Construct_UClass_UBillboardComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A 2d texture that will be rendered always facing the camera.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/BillboardComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "A 2d texture that will be rendered always facing the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsScreenSizeScaled_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UL_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VL_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskRefVal_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** The billboard is not rendered where texture opacity < OpacityMaskRefVal */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "The billboard is not rendered where texture opacity < OpacityMaskRefVal" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteCategoryName_MetaData[] = {
		{ "Comment", "/** Sprite category that the component belongs to. Value serves as a key into the localization file. */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Sprite category that the component belongs to. Value serves as a key into the localization file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteInfo_MetaData[] = {
		{ "Comment", "/** Sprite category information regarding the component */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Sprite category information regarding the component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInEditorScaling_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale) */" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowLockedLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static void NewProp_bIsScreenSizeScaled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScreenSizeScaled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskRefVal;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpriteCategoryName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteInfo;
	static void NewProp_bUseInEditorScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInEditorScaling;
	static void NewProp_bShowLockedLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLockedLocation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBillboardComponent_SetOpacityMaskRefVal, "SetOpacityMaskRefVal" }, // 3078794478
		{ &Z_Construct_UFunction_UBillboardComponent_SetSprite, "SetSprite" }, // 2503627429
		{ &Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV, "SetSpriteAndUV" }, // 985368860
		{ &Z_Construct_UFunction_UBillboardComponent_SetUV, "SetUV" }, // 1264328147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBillboardComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, Sprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprite_MetaData), NewProp_Sprite_MetaData) };
void Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit(void* Obj)
{
	((UBillboardComponent*)Obj)->bIsScreenSizeScaled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled = { "bIsScreenSizeScaled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBillboardComponent), &Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsScreenSizeScaled_MetaData), NewProp_bIsScreenSizeScaled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, ScreenSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSize_MetaData), NewProp_ScreenSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_UL = { "UL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, UL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UL_MetaData), NewProp_UL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, V), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_VL = { "VL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, VL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VL_MetaData), NewProp_VL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_OpacityMaskRefVal = { "OpacityMaskRefVal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, OpacityMaskRefVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityMaskRefVal_MetaData), NewProp_OpacityMaskRefVal_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteCategoryName = { "SpriteCategoryName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, SpriteCategoryName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteCategoryName_MetaData), NewProp_SpriteCategoryName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteInfo = { "SpriteInfo", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBillboardComponent, SpriteInfo), Z_Construct_UScriptStruct_FSpriteCategoryInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteInfo_MetaData), NewProp_SpriteInfo_MetaData) }; // 3340613696
void Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling_SetBit(void* Obj)
{
	((UBillboardComponent*)Obj)->bUseInEditorScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling = { "bUseInEditorScaling", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBillboardComponent), &Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInEditorScaling_MetaData), NewProp_bUseInEditorScaling_MetaData) };
void Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bShowLockedLocation_SetBit(void* Obj)
{
	((UBillboardComponent*)Obj)->bShowLockedLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bShowLockedLocation = { "bShowLockedLocation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBillboardComponent), &Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bShowLockedLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowLockedLocation_MetaData), NewProp_bShowLockedLocation_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBillboardComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_UL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_VL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_OpacityMaskRefVal,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteCategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bShowLockedLocation,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBillboardComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBillboardComponent_Statics::ClassParams = {
	&UBillboardComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBillboardComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBillboardComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBillboardComponent()
{
	if (!Z_Registration_Info_UClass_UBillboardComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBillboardComponent.OuterSingleton, Z_Construct_UClass_UBillboardComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBillboardComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBillboardComponent>()
{
	return UBillboardComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBillboardComponent);
UBillboardComponent::~UBillboardComponent() {}
// End Class UBillboardComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBillboardComponent, UBillboardComponent::StaticClass, TEXT("UBillboardComponent"), &Z_Registration_Info_UClass_UBillboardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBillboardComponent), 4284977720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_4007311883(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
