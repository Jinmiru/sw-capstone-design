// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpCurveEdSetup() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup();
ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCurveEdEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveEdEntry;
class UScriptStruct* FCurveEdEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveEdEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveEdEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CurveEdEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveEdEntry>()
{
	return FCurveEdEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveEdEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Information about a particule curve being viewed.\n// Property could be an FInterpCurve, a DistributionFloat or a DistributionVector\n" },
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
		{ "ToolTip", "Information about a particule curve being viewed.\nProperty could be an FInterpCurve, a DistributionFloat or a DistributionVector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bColorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFloatingPointColorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampLow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampHigh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bHideCurve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bColorCurve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bFloatingPointColorCurve;
	static const UECodeGen_Private::FIntPropertyParams NewProp_bClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampHigh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject = { "CurveObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveObject_MetaData), NewProp_CurveObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor = { "CurveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, CurveColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveColor_MetaData), NewProp_CurveColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve = { "bHideCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, bHideCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideCurve_MetaData), NewProp_bHideCurve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve = { "bColorCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, bColorCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bColorCurve_MetaData), NewProp_bColorCurve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve = { "bFloatingPointColorCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, bFloatingPointColorCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFloatingPointColorCurve_MetaData), NewProp_bFloatingPointColorCurve_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, bClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClamp_MetaData), NewProp_bClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow = { "ClampLow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, ClampLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampLow_MetaData), NewProp_ClampLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh = { "ClampHigh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdEntry, ClampHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampHigh_MetaData), NewProp_ClampHigh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CurveEdEntry",
	Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers),
	sizeof(FCurveEdEntry),
	alignof(FCurveEdEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry()
{
	if (!Z_Registration_Info_UScriptStruct_CurveEdEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveEdEntry.InnerSingleton, Z_Construct_UScriptStruct_FCurveEdEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveEdEntry.InnerSingleton;
}
// End ScriptStruct FCurveEdEntry

// Begin ScriptStruct FCurveEdTab
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveEdTab;
class UScriptStruct* FCurveEdTab::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveEdTab.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveEdTab.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdTab, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdTab"));
	}
	return Z_Registration_Info_UScriptStruct_CurveEdTab.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveEdTab>()
{
	return FCurveEdTab::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveEdTab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewStartInput_MetaData[] = {
		{ "Comment", "// Remember the view setting for each tab.\n" },
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
		{ "ToolTip", "Remember the view setting for each tab." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewEndInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewStartOutput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewEndOutput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TabName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewStartInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewEndInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewStartOutput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewEndOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdTab>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdTab, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TabName_MetaData), NewProp_TabName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveEdEntry, METADATA_PARAMS(0, nullptr) }; // 1133620748
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdTab, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) }; // 1133620748
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput = { "ViewStartInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdTab, ViewStartInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewStartInput_MetaData), NewProp_ViewStartInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput = { "ViewEndInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdTab, ViewEndInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewEndInput_MetaData), NewProp_ViewEndInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput = { "ViewStartOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdTab, ViewStartOutput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewStartOutput_MetaData), NewProp_ViewStartOutput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput = { "ViewEndOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveEdTab, ViewEndOutput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewEndOutput_MetaData), NewProp_ViewEndOutput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CurveEdTab",
	Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers),
	sizeof(FCurveEdTab),
	alignof(FCurveEdTab),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab()
{
	if (!Z_Registration_Info_UScriptStruct_CurveEdTab.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveEdTab.InnerSingleton, Z_Construct_UScriptStruct_FCurveEdTab_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveEdTab.InnerSingleton;
}
// End ScriptStruct FCurveEdTab

// Begin Class UInterpCurveEdSetup
void UInterpCurveEdSetup::StaticRegisterNativesUInterpCurveEdSetup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpCurveEdSetup);
UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister()
{
	return UInterpCurveEdSetup::StaticClass();
}
struct Z_Construct_UClass_UInterpCurveEdSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InterpCurveEdSetup.h" },
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTab_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tabs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tabs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveTab;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpCurveEdSetup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_Inner = { "Tabs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveEdTab, METADATA_PARAMS(0, nullptr) }; // 1035697304
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs = { "Tabs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpCurveEdSetup, Tabs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tabs_MetaData), NewProp_Tabs_MetaData) }; // 1035697304
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab = { "ActiveTab", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpCurveEdSetup, ActiveTab), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTab_MetaData), NewProp_ActiveTab_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterpCurveEdSetup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::ClassParams = {
	&UInterpCurveEdSetup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterpCurveEdSetup()
{
	if (!Z_Registration_Info_UClass_UInterpCurveEdSetup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpCurveEdSetup.OuterSingleton, Z_Construct_UClass_UInterpCurveEdSetup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterpCurveEdSetup.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterpCurveEdSetup>()
{
	return UInterpCurveEdSetup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpCurveEdSetup);
UInterpCurveEdSetup::~UInterpCurveEdSetup() {}
// End Class UInterpCurveEdSetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCurveEdEntry::StaticStruct, Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewStructOps, TEXT("CurveEdEntry"), &Z_Registration_Info_UScriptStruct_CurveEdEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveEdEntry), 1133620748U) },
		{ FCurveEdTab::StaticStruct, Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewStructOps, TEXT("CurveEdTab"), &Z_Registration_Info_UScriptStruct_CurveEdTab, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveEdTab), 1035697304U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterpCurveEdSetup, UInterpCurveEdSetup::StaticClass, TEXT("UInterpCurveEdSetup"), &Z_Registration_Info_UClass_UInterpCurveEdSetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpCurveEdSetup), 3980597467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_3473762063(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InterpCurveEdSetup_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
