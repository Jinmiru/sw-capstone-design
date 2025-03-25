// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushBuilder() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder();
ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FBuilderPoly
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuilderPoly;
class UScriptStruct* FBuilderPoly::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuilderPoly.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuilderPoly.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuilderPoly, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuilderPoly"));
	}
	return Z_Registration_Info_UScriptStruct_BuilderPoly.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuilderPoly>()
{
	return FBuilderPoly::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuilderPoly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Internal state, not accessible to script.\n" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "Internal state, not accessible to script." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PolyFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuilderPoly>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_Inner = { "VertexIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices = { "VertexIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuilderPoly, VertexIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexIndices_MetaData), NewProp_VertexIndices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuilderPoly, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuilderPoly, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags = { "PolyFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuilderPoly, PolyFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyFlags_MetaData), NewProp_PolyFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_VertexIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewProp_PolyFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuilderPoly_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"BuilderPoly",
	Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::PropPointers),
	sizeof(FBuilderPoly),
	alignof(FBuilderPoly),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuilderPoly_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuilderPoly()
{
	if (!Z_Registration_Info_UScriptStruct_BuilderPoly.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuilderPoly.InnerSingleton, Z_Construct_UScriptStruct_FBuilderPoly_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuilderPoly.InnerSingleton;
}
// End ScriptStruct FBuilderPoly

// Begin Class UBrushBuilder
void UBrushBuilder::StaticRegisterNativesUBrushBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushBuilder);
UClass* Z_Construct_UClass_UBrushBuilder_NoRegister()
{
	return UBrushBuilder::StaticClass();
}
struct Z_Construct_UClass_UBrushBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class of UnrealEd brush builders.\n *\n *\n * Tips for writing brush builders:\n *\n * - Always validate the user-specified and call BadParameters function\n *   if anything is wrong, instead of actually building geometry.\n *   If you build an invalid brush due to bad user parameters, you'll\n *   cause an extraordinary amount of pain for the poor user.\n *\n * - When generating polygons with more than 3 vertices, BE SURE all the\n *   polygon's vertices are coplanar!  Out-of-plane polygons will cause\n *   geometry to be corrupted.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/BrushBuilder.h" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "Base class of UnrealEd brush builders.\n\n\nTips for writing brush builders:\n\n- Always validate the user-specified and call BadParameters function\n  if anything is wrong, instead of actually building geometry.\n  If you build an invalid brush due to bad user parameters, you'll\n  cause an extraordinary amount of pain for the poor user.\n\n- When generating polygons with more than 3 vertices, BE SURE all the\n  polygon's vertices are coplanar!  Out-of-plane polygons will cause\n  geometry to be corrupted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitmapFilename_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "Comment", "/** localized FString that will be displayed as the name of this brush builder in the editor */" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "localized FString that will be displayed as the name of this brush builder in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyBadParams_MetaData[] = {
		{ "Comment", "/** If false, disabled the bad param notifications */" },
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
		{ "ToolTip", "If false, disabled the bad param notifications" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Polys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeCoplanars_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BrushBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BitmapFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
	static void NewProp_NotifyBadParams_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NotifyBadParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Polys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Polys;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Layer;
	static void NewProp_MergeCoplanars_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MergeCoplanars;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename = { "BitmapFilename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBuilder, BitmapFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitmapFilename_MetaData), NewProp_BitmapFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBuilder, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
void Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_SetBit(void* Obj)
{
	((UBrushBuilder*)Obj)->NotifyBadParams = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams = { "NotifyBadParams", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBrushBuilder), &Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyBadParams_MetaData), NewProp_NotifyBadParams_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBuilder, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_Inner = { "Polys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuilderPoly, METADATA_PARAMS(0, nullptr) }; // 3777249582
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys = { "Polys", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBuilder, Polys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Polys_MetaData), NewProp_Polys_MetaData) }; // 3777249582
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushBuilder, Layer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
void Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_SetBit(void* Obj)
{
	((UBrushBuilder*)Obj)->MergeCoplanars = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars = { "MergeCoplanars", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UBrushBuilder), &Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeCoplanars_MetaData), NewProp_MergeCoplanars_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_BitmapFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_NotifyBadParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Polys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushBuilder_Statics::NewProp_MergeCoplanars,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBrushBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushBuilder_Statics::ClassParams = {
	&UBrushBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBrushBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushBuilder()
{
	if (!Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton, Z_Construct_UClass_UBrushBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushBuilder.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UBrushBuilder>()
{
	return UBrushBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushBuilder);
UBrushBuilder::~UBrushBuilder() {}
// End Class UBrushBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuilderPoly::StaticStruct, Z_Construct_UScriptStruct_FBuilderPoly_Statics::NewStructOps, TEXT("BuilderPoly"), &Z_Registration_Info_UScriptStruct_BuilderPoly, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuilderPoly), 3777249582U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushBuilder, UBrushBuilder::StaticClass, TEXT("UBrushBuilder"), &Z_Registration_Info_UClass_UBrushBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushBuilder), 933837944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_2935982847(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BrushBuilder_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
