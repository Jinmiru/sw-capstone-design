// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyle() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin ScriptStruct FSlateWidgetStyle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateWidgetStyle;
class UScriptStruct* FSlateWidgetStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateWidgetStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateWidgetStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateWidgetStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateWidgetStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SlateWidgetStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateWidgetStyle>()
{
	return FSlateWidgetStyle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base structure for widget styles.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyle.h" },
		{ "ToolTip", "Base structure for widget styles." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateWidgetStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	nullptr,
	&NewStructOps,
	"SlateWidgetStyle",
	nullptr,
	0,
	sizeof(FSlateWidgetStyle),
	alignof(FSlateWidgetStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle()
{
	if (!Z_Registration_Info_UScriptStruct_SlateWidgetStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateWidgetStyle.InnerSingleton, Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlateWidgetStyle.InnerSingleton;
}
// End ScriptStruct FSlateWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlateWidgetStyle::StaticStruct, Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::NewStructOps, TEXT("SlateWidgetStyle"), &Z_Registration_Info_UScriptStruct_SlateWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateWidgetStyle), 9259027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_3386836230(TEXT("/Script/SlateCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
