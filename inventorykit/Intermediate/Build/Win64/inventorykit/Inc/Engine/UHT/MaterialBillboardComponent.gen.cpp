// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/MaterialBillboardComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialBillboardComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialSpriteElement();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FMaterialSpriteElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialSpriteElement;
class UScriptStruct* FMaterialSpriteElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialSpriteElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialSpriteElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialSpriteElement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialSpriteElement"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialSpriteElement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialSpriteElement>()
{
	return FMaterialSpriteElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** The material that the sprite is rendered with. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "The material that the sprite is rendered with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToOpacityCurve_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** A curve that maps distance on the X axis to the sprite opacity on the Y axis. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "A curve that maps distance on the X axis to the sprite opacity on the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSizeIsInScreenSpace_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** Whether the size is defined in screen-space or world-space. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Whether the size is defined in screen-space or world-space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSizeX_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** The base width of the sprite, multiplied with the DistanceToSizeCurve. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "The base width of the sprite, multiplied with the DistanceToSizeCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSizeY_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** The base height of the sprite, multiplied with the DistanceToSizeCurve. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "The base height of the sprite, multiplied with the DistanceToSizeCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSizeCurve_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** A curve that maps distance on the X axis to the sprite size on the Y axis. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "A curve that maps distance on the X axis to the sprite size on the Y axis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceToOpacityCurve;
	static void NewProp_bSizeIsInScreenSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeIsInScreenSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceToSizeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialSpriteElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialSpriteElement, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToOpacityCurve = { "DistanceToOpacityCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialSpriteElement, DistanceToOpacityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToOpacityCurve_MetaData), NewProp_DistanceToOpacityCurve_MetaData) };
void Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit(void* Obj)
{
	((FMaterialSpriteElement*)Obj)->bSizeIsInScreenSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace = { "bSizeIsInScreenSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMaterialSpriteElement), &Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSizeIsInScreenSpace_MetaData), NewProp_bSizeIsInScreenSpace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeX = { "BaseSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialSpriteElement, BaseSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSizeX_MetaData), NewProp_BaseSizeX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeY = { "BaseSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialSpriteElement, BaseSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSizeY_MetaData), NewProp_BaseSizeY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToSizeCurve = { "DistanceToSizeCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialSpriteElement, DistanceToSizeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToSizeCurve_MetaData), NewProp_DistanceToSizeCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToOpacityCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToSizeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialSpriteElement",
	Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::PropPointers),
	sizeof(FMaterialSpriteElement),
	alignof(FMaterialSpriteElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialSpriteElement()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialSpriteElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialSpriteElement.InnerSingleton, Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialSpriteElement.InnerSingleton;
}
// End ScriptStruct FMaterialSpriteElement

// Begin Class UMaterialBillboardComponent Function AddElement
struct Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics
{
	struct MaterialBillboardComponent_eventAddElement_Parms
	{
		UMaterialInterface* Material;
		UCurveFloat* DistanceToOpacityCurve;
		bool bSizeIsInScreenSpace;
		float BaseSizeX;
		float BaseSizeY;
		UCurveFloat* DistanceToSizeCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|MaterialSprite" },
		{ "Comment", "/** Adds an element to the sprite. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Adds an element to the sprite." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceToOpacityCurve;
	static void NewProp_bSizeIsInScreenSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeIsInScreenSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceToSizeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToOpacityCurve = { "DistanceToOpacityCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, DistanceToOpacityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit(void* Obj)
{
	((MaterialBillboardComponent_eventAddElement_Parms*)Obj)->bSizeIsInScreenSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace = { "bSizeIsInScreenSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialBillboardComponent_eventAddElement_Parms), &Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeX = { "BaseSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, BaseSizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeY = { "BaseSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, BaseSizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToSizeCurve = { "DistanceToSizeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, DistanceToSizeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToOpacityCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToSizeCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialBillboardComponent, nullptr, "AddElement", nullptr, nullptr, Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::MaterialBillboardComponent_eventAddElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::MaterialBillboardComponent_eventAddElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_AddElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialBillboardComponent::execAddElement)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToOpacityCurve);
	P_GET_UBOOL(Z_Param_bSizeIsInScreenSpace);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSizeX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSizeY);
	P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToSizeCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddElement(Z_Param_Material,Z_Param_DistanceToOpacityCurve,Z_Param_bSizeIsInScreenSpace,Z_Param_BaseSizeX,Z_Param_BaseSizeY,Z_Param_DistanceToSizeCurve);
	P_NATIVE_END;
}
// End Class UMaterialBillboardComponent Function AddElement

// Begin Class UMaterialBillboardComponent Function SetElements
struct Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics
{
	struct MaterialBillboardComponent_eventSetElements_Parms
	{
		TArray<FMaterialSpriteElement> NewElements;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|MaterialSprite" },
		{ "Comment", "/** Set all elements of this material billboard component */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Set all elements of this material billboard component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewElements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewElements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements_Inner = { "NewElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialSpriteElement, METADATA_PARAMS(0, nullptr) }; // 1997885732
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements = { "NewElements", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialBillboardComponent_eventSetElements_Parms, NewElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewElements_MetaData), NewProp_NewElements_MetaData) }; // 1997885732
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialBillboardComponent, nullptr, "SetElements", nullptr, nullptr, Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::MaterialBillboardComponent_eventSetElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::MaterialBillboardComponent_eventSetElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_SetElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialBillboardComponent::execSetElements)
{
	P_GET_TARRAY_REF(FMaterialSpriteElement,Z_Param_Out_NewElements);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetElements(Z_Param_Out_NewElements);
	P_NATIVE_END;
}
// End Class UMaterialBillboardComponent Function SetElements

// Begin Class UMaterialBillboardComponent
void UMaterialBillboardComponent::StaticRegisterNativesUMaterialBillboardComponent()
{
	UClass* Class = UMaterialBillboardComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddElement", &UMaterialBillboardComponent::execAddElement },
		{ "SetElements", &UMaterialBillboardComponent::execSetElements },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialBillboardComponent);
UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister()
{
	return UMaterialBillboardComponent::StaticClass();
}
struct Z_Construct_UClass_UMaterialBillboardComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A 2d material that will be rendered always facing the camera.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/MaterialBillboardComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "A 2d material that will be rendered always facing the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Current array of material billboard elements */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Current array of material billboard elements" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialBillboardComponent_AddElement, "AddElement" }, // 226350254
		{ &Z_Construct_UFunction_UMaterialBillboardComponent_SetElements, "SetElements" }, // 2062617290
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialBillboardComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialSpriteElement, METADATA_PARAMS(0, nullptr) }; // 1997885732
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialBillboardComponent, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elements_MetaData), NewProp_Elements_MetaData) }; // 1997885732
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialBillboardComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBillboardComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialBillboardComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBillboardComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialBillboardComponent_Statics::ClassParams = {
	&UMaterialBillboardComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMaterialBillboardComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBillboardComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBillboardComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialBillboardComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialBillboardComponent()
{
	if (!Z_Registration_Info_UClass_UMaterialBillboardComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialBillboardComponent.OuterSingleton, Z_Construct_UClass_UMaterialBillboardComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialBillboardComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialBillboardComponent>()
{
	return UMaterialBillboardComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialBillboardComponent);
UMaterialBillboardComponent::~UMaterialBillboardComponent() {}
// End Class UMaterialBillboardComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialSpriteElement::StaticStruct, Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewStructOps, TEXT("MaterialSpriteElement"), &Z_Registration_Info_UScriptStruct_MaterialSpriteElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialSpriteElement), 1997885732U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialBillboardComponent, UMaterialBillboardComponent::StaticClass, TEXT("UMaterialBillboardComponent"), &Z_Registration_Info_UClass_UMaterialBillboardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialBillboardComponent), 65807428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_151795076(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
