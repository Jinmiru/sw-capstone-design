// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/WindowTitleBarArea.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowTitleBarArea() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UMG_API UClass* Z_Construct_UClass_UWindowTitleBarArea();
UMG_API UClass* Z_Construct_UClass_UWindowTitleBarArea_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UWindowTitleBarArea Function SetHorizontalAlignment
struct Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics
{
	struct WindowTitleBarArea_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowTitleBarArea_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarArea, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::WindowTitleBarArea_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::WindowTitleBarArea_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowTitleBarArea::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UWindowTitleBarArea Function SetHorizontalAlignment

// Begin Class UWindowTitleBarArea Function SetPadding
struct Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics
{
	struct WindowTitleBarArea_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowTitleBarArea_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarArea, nullptr, "SetPadding", nullptr, nullptr, Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::WindowTitleBarArea_eventSetPadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::WindowTitleBarArea_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowTitleBarArea_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowTitleBarArea_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowTitleBarArea::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// End Class UWindowTitleBarArea Function SetPadding

// Begin Class UWindowTitleBarArea Function SetVerticalAlignment
struct Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics
{
	struct WindowTitleBarArea_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowTitleBarArea_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarArea, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::WindowTitleBarArea_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::WindowTitleBarArea_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowTitleBarArea::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UWindowTitleBarArea Function SetVerticalAlignment

// Begin Class UWindowTitleBarArea
void UWindowTitleBarArea::GetbWindowButtonsEnabled_WrapperImpl(const void* Object, void* OutValue)
{
	const UWindowTitleBarArea* Obj = (const UWindowTitleBarArea*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsWindowButtonsEnabled();
}
void UWindowTitleBarArea::SetbWindowButtonsEnabled_WrapperImpl(void* Object, const void* InValue)
{
	UWindowTitleBarArea* Obj = (UWindowTitleBarArea*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetWindowButtonsEnabled(Value);
}
void UWindowTitleBarArea::GetbDoubleClickTogglesFullscreen_WrapperImpl(const void* Object, void* OutValue)
{
	const UWindowTitleBarArea* Obj = (const UWindowTitleBarArea*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->IsDoubleClickTogglesFullscreen();
}
void UWindowTitleBarArea::SetbDoubleClickTogglesFullscreen_WrapperImpl(void* Object, const void* InValue)
{
	UWindowTitleBarArea* Obj = (UWindowTitleBarArea*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetDoubleClickTogglesFullscreen(Value);
}
void UWindowTitleBarArea::StaticRegisterNativesUWindowTitleBarArea()
{
	UClass* Class = UWindowTitleBarArea::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHorizontalAlignment", &UWindowTitleBarArea::execSetHorizontalAlignment },
		{ "SetPadding", &UWindowTitleBarArea::execSetPadding },
		{ "SetVerticalAlignment", &UWindowTitleBarArea::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowTitleBarArea);
UClass* Z_Construct_UClass_UWindowTitleBarArea_NoRegister()
{
	return UWindowTitleBarArea::StaticClass();
}
struct Z_Construct_UClass_UWindowTitleBarArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A panel for defining a region of the UI that should allow users to drag the window on desktop platforms.\n*/" },
		{ "IncludePath", "Components/WindowTitleBarArea.h" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
		{ "ToolTip", "A panel for defining a region of the UI that should allow users to drag the window on desktop platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWindowButtonsEnabled_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should the title bar area diaplay window minimize/maximize/close buttons. */" },
		{ "DisplayName", "Window Buttons Enabled" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
		{ "ToolTip", "Should the title bar area diaplay window minimize/maximize/close buttons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleClickTogglesFullscreen_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should double clicking the title bar area toggle fullscreen instead of maximizing the window. */" },
		{ "DisplayName", "Toggle Fullscreen" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarArea.h" },
		{ "ToolTip", "Should double clicking the title bar area toggle fullscreen instead of maximizing the window." },
	};
#endif // WITH_METADATA
	static void NewProp_bWindowButtonsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindowButtonsEnabled;
	static void NewProp_bDoubleClickTogglesFullscreen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleClickTogglesFullscreen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowTitleBarArea_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3238840769
		{ &Z_Construct_UFunction_UWindowTitleBarArea_SetPadding, "SetPadding" }, // 1895807063
		{ &Z_Construct_UFunction_UWindowTitleBarArea_SetVerticalAlignment, "SetVerticalAlignment" }, // 1415309115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowTitleBarArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_SetBit(void* Obj)
{
	((UWindowTitleBarArea*)Obj)->bWindowButtonsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled = { "bWindowButtonsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UWindowTitleBarArea::SetbWindowButtonsEnabled_WrapperImpl, &UWindowTitleBarArea::GetbWindowButtonsEnabled_WrapperImpl, 1, sizeof(bool), sizeof(UWindowTitleBarArea), &Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWindowButtonsEnabled_MetaData), NewProp_bWindowButtonsEnabled_MetaData) };
void Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_SetBit(void* Obj)
{
	((UWindowTitleBarArea*)Obj)->bDoubleClickTogglesFullscreen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen = { "bDoubleClickTogglesFullscreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UWindowTitleBarArea::SetbDoubleClickTogglesFullscreen_WrapperImpl, &UWindowTitleBarArea::GetbDoubleClickTogglesFullscreen_WrapperImpl, 1, sizeof(bool), sizeof(UWindowTitleBarArea), &Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoubleClickTogglesFullscreen_MetaData), NewProp_bDoubleClickTogglesFullscreen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowTitleBarArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bWindowButtonsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowTitleBarArea_Statics::NewProp_bDoubleClickTogglesFullscreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWindowTitleBarArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowTitleBarArea_Statics::ClassParams = {
	&UWindowTitleBarArea::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWindowTitleBarArea_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowTitleBarArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowTitleBarArea()
{
	if (!Z_Registration_Info_UClass_UWindowTitleBarArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowTitleBarArea.OuterSingleton, Z_Construct_UClass_UWindowTitleBarArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowTitleBarArea.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWindowTitleBarArea>()
{
	return UWindowTitleBarArea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowTitleBarArea);
UWindowTitleBarArea::~UWindowTitleBarArea() {}
// End Class UWindowTitleBarArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowTitleBarArea, UWindowTitleBarArea::StaticClass, TEXT("UWindowTitleBarArea"), &Z_Registration_Info_UClass_UWindowTitleBarArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowTitleBarArea), 1329440719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_83942216(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
