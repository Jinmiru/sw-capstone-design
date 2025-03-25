// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Class UNavArea
void UNavArea::StaticRegisterNativesUNavArea()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea);
UClass* Z_Construct_UClass_UNavArea_NoRegister()
{
	return UNavArea::StaticClass();
}
struct Z_Construct_UClass_UNavArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class containing definition of a navigation area */" },
		{ "IncludePath", "NavAreas/NavArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class containing definition of a navigation area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCost_MetaData[] = {
		{ "Category", "NavArea" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** travel cost multiplier for path distance */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "travel cost multiplier for path distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedAreaEnteringCost_MetaData[] = {
		{ "Category", "NavArea" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** entering cost */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "entering cost" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[] = {
		{ "Category", "NavArea" },
		{ "Comment", "/** area color in navigation view */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "area color in navigation view" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "NavArea" },
		{ "Comment", "/** restrict area only to specified agents */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "restrict area only to specified agents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent0_MetaData[] = {
		{ "Comment", "// DEPRECATED AGENT CONFIG\n" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "DEPRECATED AGENT CONFIG" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent1_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent2_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent3_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent4_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent5_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent6_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent7_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent8_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent9_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent10_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent11_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent12_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent13_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent14_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent15_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedAreaEnteringCost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
	static void NewProp_bSupportsAgent0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent0;
	static void NewProp_bSupportsAgent1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent1;
	static void NewProp_bSupportsAgent2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent2;
	static void NewProp_bSupportsAgent3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent3;
	static void NewProp_bSupportsAgent4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent4;
	static void NewProp_bSupportsAgent5_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent5;
	static void NewProp_bSupportsAgent6_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent6;
	static void NewProp_bSupportsAgent7_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent7;
	static void NewProp_bSupportsAgent8_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent8;
	static void NewProp_bSupportsAgent9_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent9;
	static void NewProp_bSupportsAgent10_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent10;
	static void NewProp_bSupportsAgent11_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent11;
	static void NewProp_bSupportsAgent12_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent12;
	static void NewProp_bSupportsAgent13_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent13;
	static void NewProp_bSupportsAgent14_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent14;
	static void NewProp_bSupportsAgent15_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent15;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_DefaultCost = { "DefaultCost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavArea, DefaultCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCost_MetaData), NewProp_DefaultCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_FixedAreaEnteringCost = { "FixedAreaEnteringCost", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavArea, FixedAreaEnteringCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedAreaEnteringCost_MetaData), NewProp_FixedAreaEnteringCost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavArea, DrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawColor_MetaData), NewProp_DrawColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavArea, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedAgents_MetaData), NewProp_SupportedAgents_MetaData) }; // 1400047301
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0 = { "bSupportsAgent0", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent0_MetaData), NewProp_bSupportsAgent0_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1 = { "bSupportsAgent1", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent1_MetaData), NewProp_bSupportsAgent1_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2 = { "bSupportsAgent2", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent2_MetaData), NewProp_bSupportsAgent2_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3 = { "bSupportsAgent3", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent3_MetaData), NewProp_bSupportsAgent3_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4 = { "bSupportsAgent4", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent4_MetaData), NewProp_bSupportsAgent4_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent5 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5 = { "bSupportsAgent5", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent5_MetaData), NewProp_bSupportsAgent5_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent6 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6 = { "bSupportsAgent6", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent6_MetaData), NewProp_bSupportsAgent6_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent7 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7 = { "bSupportsAgent7", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent7_MetaData), NewProp_bSupportsAgent7_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent8 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8 = { "bSupportsAgent8", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent8_MetaData), NewProp_bSupportsAgent8_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent9 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9 = { "bSupportsAgent9", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent9_MetaData), NewProp_bSupportsAgent9_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent10 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10 = { "bSupportsAgent10", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent10_MetaData), NewProp_bSupportsAgent10_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent11 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11 = { "bSupportsAgent11", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent11_MetaData), NewProp_bSupportsAgent11_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent12 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12 = { "bSupportsAgent12", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent12_MetaData), NewProp_bSupportsAgent12_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent13 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13 = { "bSupportsAgent13", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent13_MetaData), NewProp_bSupportsAgent13_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent14 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14 = { "bSupportsAgent14", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent14_MetaData), NewProp_bSupportsAgent14_MetaData) };
void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_SetBit(void* Obj)
{
	((UNavArea*)Obj)->bSupportsAgent15 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15 = { "bSupportsAgent15", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAgent15_MetaData), NewProp_bSupportsAgent15_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_DefaultCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_FixedAreaEnteringCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_DrawColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_SupportedAgents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavAreaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Statics::ClassParams = {
	&UNavArea::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNavArea_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::PropPointers),
	0,
	0x002800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavArea()
{
	if (!Z_Registration_Info_UClass_UNavArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea.OuterSingleton, Z_Construct_UClass_UNavArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavArea.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea>()
{
	return UNavArea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea);
UNavArea::~UNavArea() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNavArea)
// End Class UNavArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea, UNavArea::StaticClass, TEXT("UNavArea"), &Z_Registration_Info_UClass_UNavArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea), 2457580258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_2910941620(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
