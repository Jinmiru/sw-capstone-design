// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ScrollBar.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBar() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
UMG_API UClass* Z_Construct_UClass_UScrollBar();
UMG_API UClass* Z_Construct_UClass_UScrollBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UScrollBar Function SetState
struct Z_Construct_UFunction_UScrollBar_SetState_Statics
{
	struct ScrollBar_eventSetState_Parms
	{
		float InOffsetFraction;
		float InThumbSizeFraction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/**\n\x09* Set the offset and size of the track's thumb.\n\x09* Note that the maximum offset is 1.0-ThumbSizeFraction.\n\x09* If the user can view 1/3 of the items in a single page, the maximum offset will be ~0.667f\n\x09*\n\x09* @param InOffsetFraction     Offset of the thumbnail from the top as a fraction of the total available scroll space.\n\x09* @param InThumbSizeFraction  Size of thumbnail as a fraction of the total available scroll space.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "Set the offset and size of the track's thumb.\nNote that the maximum offset is 1.0-ThumbSizeFraction.\nIf the user can view 1/3 of the items in a single page, the maximum offset will be ~0.667f\n\n@param InOffsetFraction     Offset of the thumbnail from the top as a fraction of the total available scroll space.\n@param InThumbSizeFraction  Size of thumbnail as a fraction of the total available scroll space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOffsetFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InThumbSizeFraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InOffsetFraction = { "InOffsetFraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InOffsetFraction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InThumbSizeFraction = { "InThumbSizeFraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InThumbSizeFraction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InOffsetFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InThumbSizeFraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBar_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBar, nullptr, "SetState", nullptr, nullptr, Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScrollBar_SetState_Statics::ScrollBar_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScrollBar_SetState_Statics::ScrollBar_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScrollBar_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScrollBar_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScrollBar::execSetState)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOffsetFraction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InThumbSizeFraction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetState(Z_Param_InOffsetFraction,Z_Param_InThumbSizeFraction);
	P_NATIVE_END;
}
// End Class UScrollBar Function SetState

// Begin Class UScrollBar
void UScrollBar::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UScrollBar* Obj = (const UScrollBar*)Object;
	FScrollBarStyle& Result = *(FScrollBarStyle*)OutValue;
	Result = (FScrollBarStyle)Obj->GetWidgetStyle();
}
void UScrollBar::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	UScrollBar* Obj = (UScrollBar*)Object;
	FScrollBarStyle& Value = *(FScrollBarStyle*)InValue;
	Obj->SetWidgetStyle(Value);
}
void UScrollBar::GetbAlwaysShowScrollbar_WrapperImpl(const void* Object, void* OutValue)
{
	const UScrollBar* Obj = (const UScrollBar*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsAlwaysShowScrollbar();
}
void UScrollBar::SetbAlwaysShowScrollbar_WrapperImpl(void* Object, const void* InValue)
{
	UScrollBar* Obj = (UScrollBar*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAlwaysShowScrollbar(Value);
}
void UScrollBar::GetbAlwaysShowScrollbarTrack_WrapperImpl(const void* Object, void* OutValue)
{
	const UScrollBar* Obj = (const UScrollBar*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsAlwaysShowScrollbarTrack();
}
void UScrollBar::SetbAlwaysShowScrollbarTrack_WrapperImpl(void* Object, const void* InValue)
{
	UScrollBar* Obj = (UScrollBar*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAlwaysShowScrollbarTrack(Value);
}
void UScrollBar::GetOrientation_WrapperImpl(const void* Object, void* OutValue)
{
	const UScrollBar* Obj = (const UScrollBar*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetOrientation();
}
void UScrollBar::GetThickness_WrapperImpl(const void* Object, void* OutValue)
{
	const UScrollBar* Obj = (const UScrollBar*)Object;
	FVector2D& Result = *(FVector2D*)OutValue;
	Result = (FVector2D)Obj->GetThickness();
}
void UScrollBar::SetThickness_WrapperImpl(void* Object, const void* InValue)
{
	UScrollBar* Obj = (UScrollBar*)Object;
	FVector2D& Value = *(FVector2D*)InValue;
	Obj->SetThickness(Value);
}
void UScrollBar::GetPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UScrollBar* Obj = (const UScrollBar*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetPadding();
}
void UScrollBar::SetPadding_WrapperImpl(void* Object, const void* InValue)
{
	UScrollBar* Obj = (UScrollBar*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetPadding(Value);
}
void UScrollBar::StaticRegisterNativesUScrollBar()
{
	UClass* Class = UScrollBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetState", &UScrollBar::execSetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScrollBar);
UClass* Z_Construct_UClass_UScrollBar_NoRegister()
{
	return UScrollBar::StaticClass();
}
struct Z_Construct_UClass_UScrollBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Components/ScrollBar.h" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** Style of the scrollbar */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "Style of the scrollbar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowScrollbar_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowScrollbarTrack_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** The thickness of the scrollbar thumb */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "The thickness of the scrollbar thumb" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** The margin around the scrollbar */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "The margin around the scrollbar" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static void NewProp_bAlwaysShowScrollbar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowScrollbar;
	static void NewProp_bAlwaysShowScrollbarTrack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowScrollbarTrack;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScrollBar_SetState, "SetState" }, // 4348801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UScrollBar::SetWidgetStyle_WrapperImpl, &UScrollBar::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(UScrollBar, WidgetStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 1456599938
void Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_SetBit(void* Obj)
{
	((UScrollBar*)Obj)->bAlwaysShowScrollbar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar = { "bAlwaysShowScrollbar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UScrollBar::SetbAlwaysShowScrollbar_WrapperImpl, &UScrollBar::GetbAlwaysShowScrollbar_WrapperImpl, 1, sizeof(bool), sizeof(UScrollBar), &Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysShowScrollbar_MetaData), NewProp_bAlwaysShowScrollbar_MetaData) };
void Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_SetBit(void* Obj)
{
	((UScrollBar*)Obj)->bAlwaysShowScrollbarTrack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack = { "bAlwaysShowScrollbarTrack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UScrollBar::SetbAlwaysShowScrollbarTrack_WrapperImpl, &UScrollBar::GetbAlwaysShowScrollbarTrack_WrapperImpl, 1, sizeof(bool), sizeof(UScrollBar), &Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysShowScrollbarTrack_MetaData), NewProp_bAlwaysShowScrollbarTrack_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, &UScrollBar::GetOrientation_WrapperImpl, 1, STRUCT_OFFSET(UScrollBar, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) }; // 349032367
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UScrollBar::SetThickness_WrapperImpl, &UScrollBar::GetThickness_WrapperImpl, 1, STRUCT_OFFSET(UScrollBar, Thickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UScrollBar::SetPadding_WrapperImpl, &UScrollBar::GetPadding_WrapperImpl, 1, STRUCT_OFFSET(UScrollBar, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Padding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScrollBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScrollBar_Statics::ClassParams = {
	&UScrollBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScrollBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScrollBar()
{
	if (!Z_Registration_Info_UClass_UScrollBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScrollBar.OuterSingleton, Z_Construct_UClass_UScrollBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScrollBar.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UScrollBar>()
{
	return UScrollBar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBar);
UScrollBar::~UScrollBar() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UScrollBar)
#endif // WITH_EDITORONLY_DATA
// End Class UScrollBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScrollBar, UScrollBar::StaticClass, TEXT("UScrollBar"), &Z_Registration_Info_UClass_UScrollBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScrollBar), 241165479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_4250079557(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
