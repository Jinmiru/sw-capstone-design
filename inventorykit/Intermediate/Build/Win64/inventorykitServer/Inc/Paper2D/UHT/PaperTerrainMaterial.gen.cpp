// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTerrainMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainMaterial() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial();
PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FPaperTerrainMaterialRule
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule;
class UScriptStruct* FPaperTerrainMaterialRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperTerrainMaterialRule"));
	}
	return Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperTerrainMaterialRule>()
{
	return FPaperTerrainMaterialRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Rule for a single section of a terrain material\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Rule for a single section of a terrain material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCap_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use at the 'left' (closest to spline start) edge of the terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use at the 'left' (closest to spline start) edge of the terrain segment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// A set of sprites to randomly choose to fill up the interior space between the caps in a terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "A set of sprites to randomly choose to fill up the interior space between the caps in a terrain segment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndCap_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use at the 'right' (closest to spline end) edge of the terrain segment\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use at the 'right' (closest to spline end) edge of the terrain segment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumAngle_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Minimum slope angle (in degrees) to apply this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Minimum slope angle (in degrees) to apply this rule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumAngle_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Maximum slope angle (in degrees) to apply this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Maximum slope angle (in degrees) to apply this rule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// If true, collision is enabled for sections matching this rule\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "If true, collision is enabled for sections matching this rule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionOffset_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// How much should the collision be lofted from the spline (positive values go out from the spline, negative values go in to the spline)\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "How much should the collision be lofted from the spline (positive values go out from the spline, negative values go in to the spline)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawOrder_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Specify a draw order for different materials in a spline. Smaller draw orders are drawn first, negative values are allowed.\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Specify a draw order for different materials in a spline. Smaller draw orders are drawn first, negative values are allowed." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Readable description for the rule (unused anywhere, just for clarity when editing the material)\n" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Readable description for the rule (unused anywhere, just for clarity when editing the material)" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartCap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndCap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumAngle;
	static void NewProp_bEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawOrder;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperTerrainMaterialRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap = { "StartCap", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, StartCap), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCap_MetaData), NewProp_StartCap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_Inner = { "Body", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, Body), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap = { "EndCap", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, EndCap), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndCap_MetaData), NewProp_EndCap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle = { "MinimumAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, MinimumAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumAngle_MetaData), NewProp_MinimumAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle = { "MaximumAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, MaximumAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumAngle_MetaData), NewProp_MaximumAngle_MetaData) };
void Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
{
	((FPaperTerrainMaterialRule*)Obj)->bEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPaperTerrainMaterialRule), &Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCollision_MetaData), NewProp_bEnableCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset = { "CollisionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, CollisionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionOffset_MetaData), NewProp_CollisionOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder = { "DrawOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, DrawOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawOrder_MetaData), NewProp_DrawOrder_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperTerrainMaterialRule, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_StartCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_EndCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MinimumAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_MaximumAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_bEnableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_CollisionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_DrawOrder,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"PaperTerrainMaterialRule",
	Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::PropPointers),
	sizeof(FPaperTerrainMaterialRule),
	alignof(FPaperTerrainMaterialRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperTerrainMaterialRule()
{
	if (!Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.InnerSingleton, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule.InnerSingleton;
}
// End ScriptStruct FPaperTerrainMaterialRule

// Begin Class UPaperTerrainMaterial
void UPaperTerrainMaterial::StaticRegisterNativesUPaperTerrainMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTerrainMaterial);
UClass* Z_Construct_UClass_UPaperTerrainMaterial_NoRegister()
{
	return UPaperTerrainMaterial::StaticClass();
}
struct Z_Construct_UClass_UPaperTerrainMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Paper Terrain Material\n *\n * 'Material' setup for a 2D terrain spline (stores references to sprites that will be instanced along the spline path, not actually related to UMaterialInterface).\n */" },
		{ "IncludePath", "PaperTerrainMaterial.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "Paper Terrain Material\n\n'Material' setup for a 2D terrain spline (stores references to sprites that will be instanced along the spline path, not actually related to UMaterialInterface)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteriorFill_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The sprite to use for an interior region fill\n" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperTerrainMaterial.h" },
		{ "ToolTip", "The sprite to use for an interior region fill" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteriorFill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTerrainMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule, METADATA_PARAMS(0, nullptr) }; // 2853858251
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainMaterial, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 2853858251
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill = { "InteriorFill", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperTerrainMaterial, InteriorFill), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteriorFill_MetaData), NewProp_InteriorFill_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_Rules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTerrainMaterial_Statics::NewProp_InteriorFill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperTerrainMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTerrainMaterial_Statics::ClassParams = {
	&UPaperTerrainMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperTerrainMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperTerrainMaterial()
{
	if (!Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton, Z_Construct_UClass_UPaperTerrainMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperTerrainMaterial.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperTerrainMaterial>()
{
	return UPaperTerrainMaterial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTerrainMaterial);
UPaperTerrainMaterial::~UPaperTerrainMaterial() {}
// End Class UPaperTerrainMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperTerrainMaterialRule::StaticStruct, Z_Construct_UScriptStruct_FPaperTerrainMaterialRule_Statics::NewStructOps, TEXT("PaperTerrainMaterialRule"), &Z_Registration_Info_UScriptStruct_PaperTerrainMaterialRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperTerrainMaterialRule), 2853858251U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTerrainMaterial, UPaperTerrainMaterial::StaticClass, TEXT("UPaperTerrainMaterial"), &Z_Registration_Info_UClass_UPaperTerrainMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTerrainMaterial), 1859374165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_1199074053(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTerrainMaterial_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
