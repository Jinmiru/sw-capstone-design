// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasPanelSlot() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot();
UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorData();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FAnchorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnchorData;
class UScriptStruct* FAnchorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnchorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnchorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchorData, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("AnchorData"));
	}
	return Z_Registration_Info_UScriptStruct_AnchorData.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FAnchorData>()
{
	return FAnchorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnchorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offsets_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "Comment", "/** Offset. */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "Comment", "/** Anchors. */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Anchors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "AnchorData" },
		{ "Comment", "/**\n\x09 * Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\n\x09 * ending in the lower right at (1,1).  Moving the alignment point allows you to move\n\x09 * the origin of the widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\nending in the lower right at (1,1).  Moving the alignment point allows you to move\nthe origin of the widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offsets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anchors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnchorData, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offsets_MetaData), NewProp_Offsets_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnchorData, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchors_MetaData), NewProp_Anchors_MetaData) }; // 675573533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnchorData, Alignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Offsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Anchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnchorData_Statics::NewProp_Alignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnchorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"AnchorData",
	Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::PropPointers),
	sizeof(FAnchorData),
	alignof(FAnchorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnchorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnchorData()
{
	if (!Z_Registration_Info_UScriptStruct_AnchorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnchorData.InnerSingleton, Z_Construct_UScriptStruct_FAnchorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnchorData.InnerSingleton;
}
// End ScriptStruct FAnchorData

// Begin Class UCanvasPanelSlot Function GetAlignment
struct Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics
{
	struct CanvasPanelSlot_eventGetAlignment_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the alignment on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the alignment on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetAlignment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetAlignment", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::CanvasPanelSlot_eventGetAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::CanvasPanelSlot_eventGetAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetAlignment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetAlignment();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetAlignment

// Begin Class UCanvasPanelSlot Function GetAnchors
struct Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics
{
	struct CanvasPanelSlot_eventGetAnchors_Parms
	{
		FAnchors ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the anchors on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetAnchors_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(0, nullptr) }; // 675573533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetAnchors", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::CanvasPanelSlot_eventGetAnchors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::CanvasPanelSlot_eventGetAnchors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetAnchors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAnchors*)Z_Param__Result=P_THIS->GetAnchors();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetAnchors

// Begin Class UCanvasPanelSlot Function GetAutoSize
struct Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics
{
	struct CanvasPanelSlot_eventGetAutoSize_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets if the slot to be auto-sized */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets if the slot to be auto-sized" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CanvasPanelSlot_eventGetAutoSize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CanvasPanelSlot_eventGetAutoSize_Parms), &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetAutoSize", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::CanvasPanelSlot_eventGetAutoSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::CanvasPanelSlot_eventGetAutoSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetAutoSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAutoSize();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetAutoSize

// Begin Class UCanvasPanelSlot Function GetLayout
struct Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics
{
	struct CanvasPanelSlot_eventGetLayout_Parms
	{
		FAnchorData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the layout data of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the layout data of the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetLayout_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(0, nullptr) }; // 642830197
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetLayout", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::CanvasPanelSlot_eventGetLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::CanvasPanelSlot_eventGetLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetLayout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAnchorData*)Z_Param__Result=P_THIS->GetLayout();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetLayout

// Begin Class UCanvasPanelSlot Function GetOffsets
struct Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics
{
	struct CanvasPanelSlot_eventGetOffsets_Parms
	{
		FMargin ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the offset data of the slot, which could be position and size, or margins depending on the anchor points */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetOffsets", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::CanvasPanelSlot_eventGetOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::CanvasPanelSlot_eventGetOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetOffsets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMargin*)Z_Param__Result=P_THIS->GetOffsets();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetOffsets

// Begin Class UCanvasPanelSlot Function GetPosition
struct Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics
{
	struct CanvasPanelSlot_eventGetPosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the position of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the position of the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::CanvasPanelSlot_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::CanvasPanelSlot_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetPosition

// Begin Class UCanvasPanelSlot Function GetSize
struct Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics
{
	struct CanvasPanelSlot_eventGetSize_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the size of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the size of the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::CanvasPanelSlot_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::CanvasPanelSlot_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetSize

// Begin Class UCanvasPanelSlot Function GetZOrder
struct Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics
{
	struct CanvasPanelSlot_eventGetZOrder_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Gets the z-order on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Gets the z-order on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventGetZOrder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "GetZOrder", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::CanvasPanelSlot_eventGetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::CanvasPanelSlot_eventGetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execGetZOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetZOrder();
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function GetZOrder

// Begin Class UCanvasPanelSlot Function SetAlignment
struct Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics
{
	struct CanvasPanelSlot_eventSetAlignment_Parms
	{
		FVector2D InAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the alignment on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the alignment on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::NewProp_InAlignment = { "InAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetAlignment_Parms, InAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::NewProp_InAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetAlignment", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::CanvasPanelSlot_eventSetAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::CanvasPanelSlot_eventSetAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetAlignment)
{
	P_GET_STRUCT(FVector2D,Z_Param_InAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlignment(Z_Param_InAlignment);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetAlignment

// Begin Class UCanvasPanelSlot Function SetAnchors
struct Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics
{
	struct CanvasPanelSlot_eventSetAnchors_Parms
	{
		FAnchors InAnchors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAnchors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::NewProp_InAnchors = { "InAnchors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetAnchors_Parms, InAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(0, nullptr) }; // 675573533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::NewProp_InAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetAnchors", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::CanvasPanelSlot_eventSetAnchors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::CanvasPanelSlot_eventSetAnchors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetAnchors)
{
	P_GET_STRUCT(FAnchors,Z_Param_InAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnchors(Z_Param_InAnchors);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetAnchors

// Begin Class UCanvasPanelSlot Function SetAutoSize
struct Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics
{
	struct CanvasPanelSlot_eventSetAutoSize_Parms
	{
		bool InbAutoSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets if the slot to be auto-sized */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets if the slot to be auto-sized" },
	};
#endif // WITH_METADATA
	static void NewProp_InbAutoSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InbAutoSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize_SetBit(void* Obj)
{
	((CanvasPanelSlot_eventSetAutoSize_Parms*)Obj)->InbAutoSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize = { "InbAutoSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CanvasPanelSlot_eventSetAutoSize_Parms), &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::NewProp_InbAutoSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetAutoSize", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::CanvasPanelSlot_eventSetAutoSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::CanvasPanelSlot_eventSetAutoSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetAutoSize)
{
	P_GET_UBOOL(Z_Param_InbAutoSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoSize(Z_Param_InbAutoSize);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetAutoSize

// Begin Class UCanvasPanelSlot Function SetLayout
struct Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics
{
	struct CanvasPanelSlot_eventSetLayout_Parms
	{
		FAnchorData InLayoutData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the layout data of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the layout data of the slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLayoutData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLayoutData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData = { "InLayoutData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetLayout_Parms, InLayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLayoutData_MetaData), NewProp_InLayoutData_MetaData) }; // 642830197
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::NewProp_InLayoutData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetLayout", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::CanvasPanelSlot_eventSetLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::CanvasPanelSlot_eventSetLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetLayout)
{
	P_GET_STRUCT_REF(FAnchorData,Z_Param_Out_InLayoutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLayout(Z_Param_Out_InLayoutData);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetLayout

// Begin Class UCanvasPanelSlot Function SetMaximum
struct Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics
{
	struct CanvasPanelSlot_eventSetMaximum_Parms
	{
		FVector2D InMaximumAnchors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMaximumAnchors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::NewProp_InMaximumAnchors = { "InMaximumAnchors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetMaximum_Parms, InMaximumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::NewProp_InMaximumAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetMaximum", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::CanvasPanelSlot_eventSetMaximum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::CanvasPanelSlot_eventSetMaximum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetMaximum)
{
	P_GET_STRUCT(FVector2D,Z_Param_InMaximumAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaximum(Z_Param_InMaximumAnchors);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetMaximum

// Begin Class UCanvasPanelSlot Function SetMinimum
struct Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics
{
	struct CanvasPanelSlot_eventSetMinimum_Parms
	{
		FVector2D InMinimumAnchors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the anchors on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the anchors on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMinimumAnchors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::NewProp_InMinimumAnchors = { "InMinimumAnchors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetMinimum_Parms, InMinimumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::NewProp_InMinimumAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetMinimum", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::CanvasPanelSlot_eventSetMinimum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::CanvasPanelSlot_eventSetMinimum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetMinimum)
{
	P_GET_STRUCT(FVector2D,Z_Param_InMinimumAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinimum(Z_Param_InMinimumAnchors);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetMinimum

// Begin Class UCanvasPanelSlot Function SetOffsets
struct Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics
{
	struct CanvasPanelSlot_eventSetOffsets_Parms
	{
		FMargin InOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the offset data of the slot, which could be position and size, or margins depending on the anchor points */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetOffsets_Parms, InOffset), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::NewProp_InOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetOffsets", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::CanvasPanelSlot_eventSetOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::CanvasPanelSlot_eventSetOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetOffsets)
{
	P_GET_STRUCT(FMargin,Z_Param_InOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOffsets(Z_Param_InOffset);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetOffsets

// Begin Class UCanvasPanelSlot Function SetPosition
struct Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics
{
	struct CanvasPanelSlot_eventSetPosition_Parms
	{
		FVector2D InPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the position of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the position of the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::NewProp_InPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::CanvasPanelSlot_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::CanvasPanelSlot_eventSetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetPosition)
{
	P_GET_STRUCT(FVector2D,Z_Param_InPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosition(Z_Param_InPosition);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetPosition

// Begin Class UCanvasPanelSlot Function SetSize
struct Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics
{
	struct CanvasPanelSlot_eventSetSize_Parms
	{
		FVector2D InSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the size of the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the size of the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::NewProp_InSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetSize", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::CanvasPanelSlot_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::CanvasPanelSlot_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetSize)
{
	P_GET_STRUCT(FVector2D,Z_Param_InSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(Z_Param_InSize);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetSize

// Begin Class UCanvasPanelSlot Function SetZOrder
struct Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics
{
	struct CanvasPanelSlot_eventSetZOrder_Parms
	{
		int32 InZOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** Sets the z-order on the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "Sets the z-order on the slot" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InZOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::NewProp_InZOrder = { "InZOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CanvasPanelSlot_eventSetZOrder_Parms, InZOrder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::NewProp_InZOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, nullptr, "SetZOrder", nullptr, nullptr, Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::CanvasPanelSlot_eventSetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::CanvasPanelSlot_eventSetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCanvasPanelSlot::execSetZOrder)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InZOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetZOrder(Z_Param_InZOrder);
	P_NATIVE_END;
}
// End Class UCanvasPanelSlot Function SetZOrder

// Begin Class UCanvasPanelSlot
void UCanvasPanelSlot::GetLayoutData_WrapperImpl(const void* Object, void* OutValue)
{
	const UCanvasPanelSlot* Obj = (const UCanvasPanelSlot*)Object;
	FAnchorData& Result = *(FAnchorData*)OutValue;
	Result = (FAnchorData)Obj->GetLayout();
}
void UCanvasPanelSlot::SetLayoutData_WrapperImpl(void* Object, const void* InValue)
{
	UCanvasPanelSlot* Obj = (UCanvasPanelSlot*)Object;
	FAnchorData& Value = *(FAnchorData*)InValue;
	Obj->SetLayout(Value);
}
void UCanvasPanelSlot::GetbAutoSize_WrapperImpl(const void* Object, void* OutValue)
{
	const UCanvasPanelSlot* Obj = (const UCanvasPanelSlot*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetAutoSize();
}
void UCanvasPanelSlot::SetbAutoSize_WrapperImpl(void* Object, const void* InValue)
{
	UCanvasPanelSlot* Obj = (UCanvasPanelSlot*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAutoSize(Value);
}
void UCanvasPanelSlot::GetZOrder_WrapperImpl(const void* Object, void* OutValue)
{
	const UCanvasPanelSlot* Obj = (const UCanvasPanelSlot*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetZOrder();
}
void UCanvasPanelSlot::SetZOrder_WrapperImpl(void* Object, const void* InValue)
{
	UCanvasPanelSlot* Obj = (UCanvasPanelSlot*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetZOrder(Value);
}
void UCanvasPanelSlot::StaticRegisterNativesUCanvasPanelSlot()
{
	UClass* Class = UCanvasPanelSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAlignment", &UCanvasPanelSlot::execGetAlignment },
		{ "GetAnchors", &UCanvasPanelSlot::execGetAnchors },
		{ "GetAutoSize", &UCanvasPanelSlot::execGetAutoSize },
		{ "GetLayout", &UCanvasPanelSlot::execGetLayout },
		{ "GetOffsets", &UCanvasPanelSlot::execGetOffsets },
		{ "GetPosition", &UCanvasPanelSlot::execGetPosition },
		{ "GetSize", &UCanvasPanelSlot::execGetSize },
		{ "GetZOrder", &UCanvasPanelSlot::execGetZOrder },
		{ "SetAlignment", &UCanvasPanelSlot::execSetAlignment },
		{ "SetAnchors", &UCanvasPanelSlot::execSetAnchors },
		{ "SetAutoSize", &UCanvasPanelSlot::execSetAutoSize },
		{ "SetLayout", &UCanvasPanelSlot::execSetLayout },
		{ "SetMaximum", &UCanvasPanelSlot::execSetMaximum },
		{ "SetMinimum", &UCanvasPanelSlot::execSetMinimum },
		{ "SetOffsets", &UCanvasPanelSlot::execSetOffsets },
		{ "SetPosition", &UCanvasPanelSlot::execSetPosition },
		{ "SetSize", &UCanvasPanelSlot::execSetSize },
		{ "SetZOrder", &UCanvasPanelSlot::execSetZOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanvasPanelSlot);
UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister()
{
	return UCanvasPanelSlot::StaticClass();
}
struct Z_Construct_UClass_UCanvasPanelSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CanvasPanelSlot.h" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutData_MetaData[] = {
		{ "BlueprintGetter", "GetLayout" },
		{ "BlueprintSetter", "SetLayout" },
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** The anchoring information for the slot */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "The anchoring information for the slot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSize_MetaData[] = {
		{ "BlueprintGetter", "GetAutoSize" },
		{ "BlueprintSetter", "SetAutoSize" },
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** When AutoSize is true we use the widget's desired size */" },
		{ "DisplayName", "Size To Content" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "When AutoSize is true we use the widget's desired size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "BlueprintGetter", "GetZOrder" },
		{ "BlueprintSetter", "SetZOrder" },
		{ "Category", "Layout|Canvas Slot" },
		{ "Comment", "/** The order priority this widget is rendered in.  Higher values are rendered last (and so they will appear to be on top). */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
		{ "ToolTip", "The order priority this widget is rendered in.  Higher values are rendered last (and so they will appear to be on top)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutData;
	static void NewProp_bAutoSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment, "GetAlignment" }, // 1437174204
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors, "GetAnchors" }, // 1718261624
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize, "GetAutoSize" }, // 2796632779
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetLayout, "GetLayout" }, // 4221035034
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets, "GetOffsets" }, // 530098767
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetPosition, "GetPosition" }, // 3420782794
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetSize, "GetSize" }, // 576010406
		{ &Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder, "GetZOrder" }, // 3291448892
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment, "SetAlignment" }, // 3253183136
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors, "SetAnchors" }, // 375243122
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize, "SetAutoSize" }, // 4278299996
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetLayout, "SetLayout" }, // 1783080214
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum, "SetMaximum" }, // 925724449
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum, "SetMinimum" }, // 826323557
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets, "SetOffsets" }, // 1584701239
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetPosition, "SetPosition" }, // 3236701249
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetSize, "SetSize" }, // 3543856157
		{ &Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder, "SetZOrder" }, // 20643597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasPanelSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData = { "LayoutData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UCanvasPanelSlot::SetLayoutData_WrapperImpl, &UCanvasPanelSlot::GetLayoutData_WrapperImpl, 1, STRUCT_OFFSET(UCanvasPanelSlot, LayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutData_MetaData), NewProp_LayoutData_MetaData) }; // 642830197
void Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_SetBit(void* Obj)
{
	((UCanvasPanelSlot*)Obj)->bAutoSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize = { "bAutoSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UCanvasPanelSlot::SetbAutoSize_WrapperImpl, &UCanvasPanelSlot::GetbAutoSize_WrapperImpl, 1, sizeof(bool), sizeof(UCanvasPanelSlot), &Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSize_MetaData), NewProp_bAutoSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UCanvasPanelSlot::SetZOrder_WrapperImpl, &UCanvasPanelSlot::GetZOrder_WrapperImpl, 1, STRUCT_OFFSET(UCanvasPanelSlot, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_LayoutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_bAutoSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasPanelSlot_Statics::NewProp_ZOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCanvasPanelSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanvasPanelSlot_Statics::ClassParams = {
	&UCanvasPanelSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UCanvasPanelSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCanvasPanelSlot()
{
	if (!Z_Registration_Info_UClass_UCanvasPanelSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanvasPanelSlot.OuterSingleton, Z_Construct_UClass_UCanvasPanelSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCanvasPanelSlot.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UCanvasPanelSlot>()
{
	return UCanvasPanelSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasPanelSlot);
UCanvasPanelSlot::~UCanvasPanelSlot() {}
// End Class UCanvasPanelSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnchorData::StaticStruct, Z_Construct_UScriptStruct_FAnchorData_Statics::NewStructOps, TEXT("AnchorData"), &Z_Registration_Info_UScriptStruct_AnchorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnchorData), 642830197U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCanvasPanelSlot, UCanvasPanelSlot::StaticClass, TEXT("UCanvasPanelSlot"), &Z_Registration_Info_UClass_UCanvasPanelSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvasPanelSlot), 2547422169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_2093456689(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
