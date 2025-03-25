// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/CanvasTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FTextSizingParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextSizingParameters;
class UScriptStruct* FTextSizingParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextSizingParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextSizingParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextSizingParameters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextSizingParameters"));
	}
	return Z_Registration_Info_UScriptStruct_TextSizingParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextSizingParameters>()
{
	return FTextSizingParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextSizingParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * General purpose data structure for grouping all parameters needed when sizing or wrapping a string\n */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "General purpose data structure for grouping all parameters needed when sizing or wrapping a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawX_MetaData[] = {
		{ "Comment", "/** a pixel value representing the horizontal screen location to begin rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the horizontal screen location to begin rendering the string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawY_MetaData[] = {
		{ "Comment", "/** a pixel value representing the vertical screen location to begin rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the vertical screen location to begin rendering the string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawXL_MetaData[] = {
		{ "Comment", "/** a pixel value representing the width of the area available for rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the width of the area available for rendering the string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawYL_MetaData[] = {
		{ "Comment", "/** a pixel value representing the height of the area available for rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the height of the area available for rendering the string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
		{ "Comment", "/** A value between 0.0 and 1.0, which represents how much the width/height should be scaled, where 1.0 represents 100% scaling. */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "A value between 0.0 and 1.0, which represents how much the width/height should be scaled, where 1.0 represents 100% scaling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawFont_MetaData[] = {
		{ "Comment", "/** the font to use for sizing/wrapping the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "the font to use for sizing/wrapping the string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpacingAdjust_MetaData[] = {
		{ "Comment", "/** Horizontal spacing adjustment between characters and vertical spacing adjustment between wrapped lines */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "Horizontal spacing adjustment between characters and vertical spacing adjustment between wrapped lines" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawXL;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawYL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scaling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpacingAdjust;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextSizingParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX = { "DrawX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextSizingParameters, DrawX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawX_MetaData), NewProp_DrawX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY = { "DrawY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextSizingParameters, DrawY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawY_MetaData), NewProp_DrawY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL = { "DrawXL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextSizingParameters, DrawXL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawXL_MetaData), NewProp_DrawXL_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL = { "DrawYL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextSizingParameters, DrawYL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawYL_MetaData), NewProp_DrawYL_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextSizingParameters, Scaling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scaling_MetaData), NewProp_Scaling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont = { "DrawFont", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextSizingParameters, DrawFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawFont_MetaData), NewProp_DrawFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust = { "SpacingAdjust", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextSizingParameters, SpacingAdjust), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpacingAdjust_MetaData), NewProp_SpacingAdjust_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextSizingParameters",
	Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers),
	sizeof(FTextSizingParameters),
	alignof(FTextSizingParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters()
{
	if (!Z_Registration_Info_UScriptStruct_TextSizingParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextSizingParameters.InnerSingleton, Z_Construct_UScriptStruct_FTextSizingParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextSizingParameters.InnerSingleton;
}
// End ScriptStruct FTextSizingParameters

// Begin ScriptStruct FWrappedStringElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WrappedStringElement;
class UScriptStruct* FWrappedStringElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WrappedStringElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WrappedStringElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrappedStringElement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WrappedStringElement"));
	}
	return Z_Registration_Info_UScriptStruct_WrappedStringElement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWrappedStringElement>()
{
	return FWrappedStringElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWrappedStringElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used by UUIString::WrapString to track information about each line that is generated as the result of wrapping.\n */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "Used by UUIString::WrapString to track information about each line that is generated as the result of wrapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Comment", "/** the string associated with this line */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "the string associated with this line" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineExtent_MetaData[] = {
		{ "Comment", "/** the size (in pixels) that it will take to render this string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "the size (in pixels) that it will take to render this string" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineExtent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrappedStringElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWrappedStringElement, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent = { "LineExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWrappedStringElement, LineExtent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineExtent_MetaData), NewProp_LineExtent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"WrappedStringElement",
	Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers),
	sizeof(FWrappedStringElement),
	alignof(FWrappedStringElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement()
{
	if (!Z_Registration_Info_UScriptStruct_WrappedStringElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WrappedStringElement.InnerSingleton, Z_Construct_UScriptStruct_FWrappedStringElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WrappedStringElement.InnerSingleton;
}
// End ScriptStruct FWrappedStringElement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTextSizingParameters::StaticStruct, Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewStructOps, TEXT("TextSizingParameters"), &Z_Registration_Info_UScriptStruct_TextSizingParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextSizingParameters), 2978069311U) },
		{ FWrappedStringElement::StaticStruct, Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewStructOps, TEXT("WrappedStringElement"), &Z_Registration_Info_UScriptStruct_WrappedStringElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWrappedStringElement), 1322525668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_378027211(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
