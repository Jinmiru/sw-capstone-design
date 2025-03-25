// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnchors() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin ScriptStruct FAnchors
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Anchors;
class UScriptStruct* FAnchors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Anchors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Anchors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchors, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("Anchors"));
	}
	return Z_Registration_Info_UScriptStruct_Anchors.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FAnchors>()
{
	return FAnchors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnchors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes how a widget is anchored.\n */" },
		{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
		{ "ToolTip", "Describes how a widget is anchored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the minimum anchors, left + top. */" },
		{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
		{ "ToolTip", "Holds the minimum anchors, left + top." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the maximum anchors, right + bottom. */" },
		{ "ModuleRelativePath", "Public/Widgets/Layout/Anchors.h" },
		{ "ToolTip", "Holds the maximum anchors, right + bottom." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnchors, Minimum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnchors, Maximum), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnchors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchors_Statics::NewProp_Maximum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnchors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	nullptr,
	&NewStructOps,
	"Anchors",
	Z_Construct_UScriptStruct_FAnchors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchors_Statics::PropPointers),
	sizeof(FAnchors),
	alignof(FAnchors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnchors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnchors()
{
	if (!Z_Registration_Info_UScriptStruct_Anchors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Anchors.InnerSingleton, Z_Construct_UScriptStruct_FAnchors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Anchors.InnerSingleton;
}
// End ScriptStruct FAnchors

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_Anchors_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnchors::StaticStruct, Z_Construct_UScriptStruct_FAnchors_Statics::NewStructOps, TEXT("Anchors"), &Z_Registration_Info_UScriptStruct_Anchors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnchors), 675573533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_Anchors_h_707608785(TEXT("/Script/Slate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_Anchors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_Anchors_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
