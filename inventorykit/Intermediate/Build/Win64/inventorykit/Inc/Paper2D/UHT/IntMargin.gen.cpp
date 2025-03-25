// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/IntMargin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntMargin() {}

// Begin Cross Module References
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FIntMargin();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FIntMargin
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntMargin;
class UScriptStruct* FIntMargin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntMargin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntMargin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntMargin, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("IntMargin"));
	}
	return Z_Registration_Info_UScriptStruct_IntMargin.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FIntMargin>()
{
	return FIntMargin::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntMargin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the space around a 2D area on an integer grid.\n */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Describes the space around a 2D area on an integer grid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the left. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the left." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the top. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the top." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the right. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the right." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Holds the margin to the bottom. */" },
		{ "ModuleRelativePath", "Classes/IntMargin.h" },
		{ "ToolTip", "Holds the margin to the bottom." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Left;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Top;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntMargin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntMargin, Left), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntMargin, Top), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_MetaData), NewProp_Top_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntMargin, Right), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntMargin, Bottom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bottom_MetaData), NewProp_Bottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntMargin_Statics::NewProp_Bottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntMargin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"IntMargin",
	Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::PropPointers),
	sizeof(FIntMargin),
	alignof(FIntMargin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntMargin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntMargin()
{
	if (!Z_Registration_Info_UScriptStruct_IntMargin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntMargin.InnerSingleton, Z_Construct_UScriptStruct_FIntMargin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntMargin.InnerSingleton;
}
// End ScriptStruct FIntMargin

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIntMargin::StaticStruct, Z_Construct_UScriptStruct_FIntMargin_Statics::NewStructOps, TEXT("IntMargin"), &Z_Registration_Info_UScriptStruct_IntMargin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntMargin), 3867409075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_4024600289(TEXT("/Script/Paper2D"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_IntMargin_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
