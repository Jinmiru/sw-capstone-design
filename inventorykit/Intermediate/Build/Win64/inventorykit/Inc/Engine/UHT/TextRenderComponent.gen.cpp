// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EHorizTextAligment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHorizTextAligment;
static UEnum* EHorizTextAligment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHorizTextAligment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHorizTextAligment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHorizTextAligment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHorizTextAligment"));
	}
	return Z_Registration_Info_UEnum_EHorizTextAligment.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHorizTextAligment>()
{
	return EHorizTextAligment_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHorizTextAligment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EHTA_Center.Comment", "/**  */" },
		{ "EHTA_Center.DisplayName", "Center" },
		{ "EHTA_Center.Name", "EHTA_Center" },
		{ "EHTA_Left.Comment", "/**  */" },
		{ "EHTA_Left.DisplayName", "Left" },
		{ "EHTA_Left.Name", "EHTA_Left" },
		{ "EHTA_Right.Comment", "/**  */" },
		{ "EHTA_Right.DisplayName", "Right" },
		{ "EHTA_Right.Name", "EHTA_Right" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHTA_Left", (int64)EHTA_Left },
		{ "EHTA_Center", (int64)EHTA_Center },
		{ "EHTA_Right", (int64)EHTA_Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHorizTextAligment",
	"EHorizTextAligment",
	Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment()
{
	if (!Z_Registration_Info_UEnum_EHorizTextAligment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHorizTextAligment.InnerSingleton, Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHorizTextAligment.InnerSingleton;
}
// End Enum EHorizTextAligment

// Begin Enum EVerticalTextAligment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVerticalTextAligment;
static UEnum* EVerticalTextAligment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVerticalTextAligment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVerticalTextAligment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVerticalTextAligment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVerticalTextAligment"));
	}
	return Z_Registration_Info_UEnum_EVerticalTextAligment.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVerticalTextAligment>()
{
	return EVerticalTextAligment_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EVRTA_QuadTop.Comment", "/**  */" },
		{ "EVRTA_QuadTop.DisplayName", "Quad Top" },
		{ "EVRTA_QuadTop.Name", "EVRTA_QuadTop" },
		{ "EVRTA_TextBottom.Comment", "/**  */" },
		{ "EVRTA_TextBottom.DisplayName", "Text Bottom" },
		{ "EVRTA_TextBottom.Name", "EVRTA_TextBottom" },
		{ "EVRTA_TextCenter.Comment", "/**  */" },
		{ "EVRTA_TextCenter.DisplayName", "Text Center" },
		{ "EVRTA_TextCenter.Name", "EVRTA_TextCenter" },
		{ "EVRTA_TextTop.Comment", "/**  */" },
		{ "EVRTA_TextTop.DisplayName", "Text Top" },
		{ "EVRTA_TextTop.Name", "EVRTA_TextTop" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVRTA_TextTop", (int64)EVRTA_TextTop },
		{ "EVRTA_TextCenter", (int64)EVRTA_TextCenter },
		{ "EVRTA_TextBottom", (int64)EVRTA_TextBottom },
		{ "EVRTA_QuadTop", (int64)EVRTA_QuadTop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVerticalTextAligment",
	"EVerticalTextAligment",
	Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment()
{
	if (!Z_Registration_Info_UEnum_EVerticalTextAligment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVerticalTextAligment.InnerSingleton, Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVerticalTextAligment.InnerSingleton;
}
// End Enum EVerticalTextAligment

// Begin Class UTextRenderComponent Function GetTextLocalSize
struct Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics
{
	struct TextRenderComponent_eventGetTextLocalSize_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Get local size of text */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get local size of text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventGetTextLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "GetTextLocalSize", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::TextRenderComponent_eventGetTextLocalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::TextRenderComponent_eventGetTextLocalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execGetTextLocalSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTextLocalSize();
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function GetTextLocalSize

// Begin Class UTextRenderComponent Function GetTextWorldSize
struct Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics
{
	struct TextRenderComponent_eventGetTextWorldSize_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Get world space size of text */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get world space size of text" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventGetTextWorldSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "GetTextWorldSize", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::TextRenderComponent_eventGetTextWorldSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::TextRenderComponent_eventGetTextWorldSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execGetTextWorldSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTextWorldSize();
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function GetTextWorldSize

// Begin Class UTextRenderComponent Function K2_SetText
struct Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics
{
	struct TextRenderComponent_eventK2_SetText_Parms
	{
		FText Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text value and signal the primitives to be rebuilt */" },
		{ "DisplayName", "Set Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ScriptName", "SetText" },
		{ "ToolTip", "Change the text value and signal the primitives to be rebuilt" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventK2_SetText_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "K2_SetText", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::TextRenderComponent_eventK2_SetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::TextRenderComponent_eventK2_SetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_K2_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execK2_SetText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetText(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function K2_SetText

// Begin Class UTextRenderComponent Function SetFont
struct Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics
{
	struct TextRenderComponent_eventSetFont_Parms
	{
		UFont* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the font and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the font and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetFont_Parms, Value), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetFont", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::TextRenderComponent_eventSetFont_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::TextRenderComponent_eventSetFont_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetFont()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetFont)
{
	P_GET_OBJECT(UFont,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFont(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetFont

// Begin Class UTextRenderComponent Function SetHorizontalAlignment
struct Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics
{
	struct TextRenderComponent_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizTextAligment> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the horizontal alignment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the horizontal alignment and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetHorizontalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(0, nullptr) }; // 3415569103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::TextRenderComponent_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::TextRenderComponent_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizTextAligment(Z_Param_Value));
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetHorizontalAlignment

// Begin Class UTextRenderComponent Function SetHorizSpacingAdjust
struct Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics
{
	struct TextRenderComponent_eventSetHorizSpacingAdjust_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text horizontal spacing adjustment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text horizontal spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetHorizSpacingAdjust_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetHorizSpacingAdjust", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::TextRenderComponent_eventSetHorizSpacingAdjust_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::TextRenderComponent_eventSetHorizSpacingAdjust_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetHorizSpacingAdjust)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizSpacingAdjust(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetHorizSpacingAdjust

// Begin Class UTextRenderComponent Function SetText
struct Z_Construct_UFunction_UTextRenderComponent_SetText_Statics
{
	struct TextRenderComponent_eventSetText_Parms
	{
		FText Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Change the text value and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text value and signal the primitives to be rebuilt" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetText_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::TextRenderComponent_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::TextRenderComponent_eventSetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetText(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetText

// Begin Class UTextRenderComponent Function SetTextMaterial
struct Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics
{
	struct TextRenderComponent_eventSetTextMaterial_Parms
	{
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text material and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text material and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetTextMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetTextMaterial", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::TextRenderComponent_eventSetTextMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::TextRenderComponent_eventSetTextMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetTextMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetTextMaterial

// Begin Class UTextRenderComponent Function SetTextRenderColor
struct Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics
{
	struct TextRenderComponent_eventSetTextRenderColor_Parms
	{
		FColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text render color and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text render color and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetTextRenderColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetTextRenderColor", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::TextRenderComponent_eventSetTextRenderColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::TextRenderComponent_eventSetTextRenderColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetTextRenderColor)
{
	P_GET_STRUCT(FColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextRenderColor(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetTextRenderColor

// Begin Class UTextRenderComponent Function SetVerticalAlignment
struct Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics
{
	struct TextRenderComponent_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalTextAligment> Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the vertical alignment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the vertical alignment and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetVerticalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(0, nullptr) }; // 2725170026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::TextRenderComponent_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::TextRenderComponent_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalTextAligment(Z_Param_Value));
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetVerticalAlignment

// Begin Class UTextRenderComponent Function SetVertSpacingAdjust
struct Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics
{
	struct TextRenderComponent_eventSetVertSpacingAdjust_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text vertical spacing adjustment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text vertical spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetVertSpacingAdjust_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetVertSpacingAdjust", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::TextRenderComponent_eventSetVertSpacingAdjust_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::TextRenderComponent_eventSetVertSpacingAdjust_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetVertSpacingAdjust)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVertSpacingAdjust(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetVertSpacingAdjust

// Begin Class UTextRenderComponent Function SetWorldSize
struct Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics
{
	struct TextRenderComponent_eventSetWorldSize_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the world size of the text and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the world size of the text and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetWorldSize_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetWorldSize", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::TextRenderComponent_eventSetWorldSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::TextRenderComponent_eventSetWorldSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetWorldSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetWorldSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWorldSize(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetWorldSize

// Begin Class UTextRenderComponent Function SetXScale
struct Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics
{
	struct TextRenderComponent_eventSetXScale_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text X scale and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text X scale and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetXScale_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetXScale", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::TextRenderComponent_eventSetXScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::TextRenderComponent_eventSetXScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetXScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetXScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetXScale(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetXScale

// Begin Class UTextRenderComponent Function SetYScale
struct Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics
{
	struct TextRenderComponent_eventSetYScale_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text Y scale and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text Y scale and signal the primitives to be rebuilt" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextRenderComponent_eventSetYScale_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetYScale", nullptr, nullptr, Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::TextRenderComponent_eventSetYScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::TextRenderComponent_eventSetYScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextRenderComponent_SetYScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextRenderComponent::execSetYScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetYScale(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTextRenderComponent Function SetYScale

// Begin Class UTextRenderComponent
void UTextRenderComponent::StaticRegisterNativesUTextRenderComponent()
{
	UClass* Class = UTextRenderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTextLocalSize", &UTextRenderComponent::execGetTextLocalSize },
		{ "GetTextWorldSize", &UTextRenderComponent::execGetTextWorldSize },
		{ "K2_SetText", &UTextRenderComponent::execK2_SetText },
		{ "SetFont", &UTextRenderComponent::execSetFont },
		{ "SetHorizontalAlignment", &UTextRenderComponent::execSetHorizontalAlignment },
		{ "SetHorizSpacingAdjust", &UTextRenderComponent::execSetHorizSpacingAdjust },
		{ "SetText", &UTextRenderComponent::execSetText },
		{ "SetTextMaterial", &UTextRenderComponent::execSetTextMaterial },
		{ "SetTextRenderColor", &UTextRenderComponent::execSetTextRenderColor },
		{ "SetVerticalAlignment", &UTextRenderComponent::execSetVerticalAlignment },
		{ "SetVertSpacingAdjust", &UTextRenderComponent::execSetVertSpacingAdjust },
		{ "SetWorldSize", &UTextRenderComponent::execSetWorldSize },
		{ "SetXScale", &UTextRenderComponent::execSetXScale },
		{ "SetYScale", &UTextRenderComponent::execSetYScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextRenderComponent);
UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister()
{
	return UTextRenderComponent::StaticClass();
}
struct Z_Construct_UClass_UTextRenderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc.\n */" },
		{ "HideCategories", "Object LOD Physics TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/TextRenderComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text content, can be multi line using <br> as line separator */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text content, can be multi line using <br> as line separator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text material */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text font */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text font" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal text alignment */" },
		{ "DisplayName", "Horizontal Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal text alignment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical text alignment */" },
		{ "DisplayName", "Vertical Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical text alignment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextRenderColor_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Color of the text, can be accessed as vertex color */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Color of the text, can be accessed as vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XScale_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal scale, default is 1.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal scale, default is 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YScale_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical scale, default is 1.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical scale, default is 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size. */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvDefaultSize_MetaData[] = {
		{ "Comment", "/** The inverse of the Font's character height. */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "The inverse of the Font's character height." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal adjustment per character, default is 0.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal adjustment per character, default is 0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical adjustment per character, default is 0.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical adjustment per character, default is 0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRenderAsText_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Allows text to draw unmodified when using debug visualization modes. **/" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Allows text to draw unmodified when using debug visualization modes. *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextRenderColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvDefaultSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizSpacingAdjust;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VertSpacingAdjust;
	static void NewProp_bAlwaysRenderAsText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRenderAsText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize, "GetTextLocalSize" }, // 549899567
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize, "GetTextWorldSize" }, // 3316420914
		{ &Z_Construct_UFunction_UTextRenderComponent_K2_SetText, "K2_SetText" }, // 2264738805
		{ &Z_Construct_UFunction_UTextRenderComponent_SetFont, "SetFont" }, // 280744172
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3367915359
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust, "SetHorizSpacingAdjust" }, // 2144397692
		{ &Z_Construct_UFunction_UTextRenderComponent_SetText, "SetText" }, // 204433323
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial, "SetTextMaterial" }, // 2923522561
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor, "SetTextRenderColor" }, // 730848300
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment, "SetVerticalAlignment" }, // 2316075648
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust, "SetVertSpacingAdjust" }, // 1467363238
		{ &Z_Construct_UFunction_UTextRenderComponent_SetWorldSize, "SetWorldSize" }, // 550131878
		{ &Z_Construct_UFunction_UTextRenderComponent_SetXScale, "SetXScale" }, // 2132820910
		{ &Z_Construct_UFunction_UTextRenderComponent_SetYScale, "SetYScale" }, // 2437210603
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextRenderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, TextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextMaterial_MetaData), NewProp_TextMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, HorizontalAlignment), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 3415569103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, VerticalAlignment), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 2725170026
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor = { "TextRenderColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, TextRenderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextRenderColor_MetaData), NewProp_TextRenderColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale = { "XScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, XScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XScale_MetaData), NewProp_XScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale = { "YScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, YScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YScale_MetaData), NewProp_YScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, WorldSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSize_MetaData), NewProp_WorldSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize = { "InvDefaultSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, InvDefaultSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvDefaultSize_MetaData), NewProp_InvDefaultSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust = { "HorizSpacingAdjust", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, HorizSpacingAdjust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizSpacingAdjust_MetaData), NewProp_HorizSpacingAdjust_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust = { "VertSpacingAdjust", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextRenderComponent, VertSpacingAdjust), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertSpacingAdjust_MetaData), NewProp_VertSpacingAdjust_MetaData) };
void Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit(void* Obj)
{
	((UTextRenderComponent*)Obj)->bAlwaysRenderAsText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText = { "bAlwaysRenderAsText", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextRenderComponent), &Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysRenderAsText_MetaData), NewProp_bAlwaysRenderAsText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextRenderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams = {
	&UTextRenderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextRenderComponent()
{
	if (!Z_Registration_Info_UClass_UTextRenderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextRenderComponent.OuterSingleton, Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextRenderComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextRenderComponent>()
{
	return UTextRenderComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextRenderComponent);
UTextRenderComponent::~UTextRenderComponent() {}
// End Class UTextRenderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHorizTextAligment_StaticEnum, TEXT("EHorizTextAligment"), &Z_Registration_Info_UEnum_EHorizTextAligment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3415569103U) },
		{ EVerticalTextAligment_StaticEnum, TEXT("EVerticalTextAligment"), &Z_Registration_Info_UEnum_EVerticalTextAligment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2725170026U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextRenderComponent, UTextRenderComponent::StaticClass, TEXT("UTextRenderComponent"), &Z_Registration_Info_UClass_UTextRenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextRenderComponent), 3194091809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_2329009261(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
