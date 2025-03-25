// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/WindowTitleBarAreaSlot.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowTitleBarAreaSlot() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UMG_API UClass* Z_Construct_UClass_UWindowTitleBarAreaSlot();
UMG_API UClass* Z_Construct_UClass_UWindowTitleBarAreaSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UWindowTitleBarAreaSlot Function SetHorizontalAlignment
struct Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics
{
	struct WindowTitleBarAreaSlot_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|WindowTitleBarArea Slot" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarAreaSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowTitleBarAreaSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarAreaSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::WindowTitleBarAreaSlot_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::WindowTitleBarAreaSlot_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowTitleBarAreaSlot::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UWindowTitleBarAreaSlot Function SetHorizontalAlignment

// Begin Class UWindowTitleBarAreaSlot Function SetPadding
struct Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics
{
	struct WindowTitleBarAreaSlot_eventSetPadding_Parms
	{
		FMargin InPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|WindowTitleBarArea Slot" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarAreaSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowTitleBarAreaSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(0, nullptr) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::NewProp_InPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarAreaSlot, nullptr, "SetPadding", nullptr, nullptr, Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::WindowTitleBarAreaSlot_eventSetPadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::WindowTitleBarAreaSlot_eventSetPadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowTitleBarAreaSlot::execSetPadding)
{
	P_GET_STRUCT(FMargin,Z_Param_InPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPadding(Z_Param_InPadding);
	P_NATIVE_END;
}
// End Class UWindowTitleBarAreaSlot Function SetPadding

// Begin Class UWindowTitleBarAreaSlot Function SetVerticalAlignment
struct Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics
{
	struct WindowTitleBarAreaSlot_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|WindowTitleBarArea Slot" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarAreaSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowTitleBarAreaSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowTitleBarAreaSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::WindowTitleBarAreaSlot_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::WindowTitleBarAreaSlot_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowTitleBarAreaSlot::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UWindowTitleBarAreaSlot Function SetVerticalAlignment

// Begin Class UWindowTitleBarAreaSlot
void UWindowTitleBarAreaSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
{
	UWindowTitleBarAreaSlot* Obj = (UWindowTitleBarAreaSlot*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetPadding(Value);
}
void UWindowTitleBarAreaSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UWindowTitleBarAreaSlot* Obj = (UWindowTitleBarAreaSlot*)Object;
	EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
	Obj->SetHorizontalAlignment(Value);
}
void UWindowTitleBarAreaSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UWindowTitleBarAreaSlot* Obj = (UWindowTitleBarAreaSlot*)Object;
	EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
	Obj->SetVerticalAlignment(Value);
}
void UWindowTitleBarAreaSlot::StaticRegisterNativesUWindowTitleBarAreaSlot()
{
	UClass* Class = UWindowTitleBarAreaSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHorizontalAlignment", &UWindowTitleBarAreaSlot::execSetHorizontalAlignment },
		{ "SetPadding", &UWindowTitleBarAreaSlot::execSetPadding },
		{ "SetVerticalAlignment", &UWindowTitleBarAreaSlot::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowTitleBarAreaSlot);
UClass* Z_Construct_UClass_UWindowTitleBarAreaSlot_NoRegister()
{
	return UWindowTitleBarAreaSlot::StaticClass();
}
struct Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UWindowTitleBarArea */" },
		{ "IncludePath", "Components/WindowTitleBarAreaSlot.h" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarAreaSlot.h" },
		{ "ToolTip", "The Slot for the UWindowTitleBarArea" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Layout|WindowTitleBarArea Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarAreaSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|WindowTitleBarArea Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarAreaSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|WindowTitleBarArea Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/WindowTitleBarAreaSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2113164399
		{ &Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetPadding, "SetPadding" }, // 2993566745
		{ &Z_Construct_UFunction_UWindowTitleBarAreaSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 440635448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowTitleBarAreaSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UWindowTitleBarAreaSlot::SetPadding_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UWindowTitleBarAreaSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Padding_MetaData), NewProp_Padding_MetaData) }; // 2986890016
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UWindowTitleBarAreaSlot::SetHorizontalAlignment_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UWindowTitleBarAreaSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UWindowTitleBarAreaSlot::SetVerticalAlignment_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UWindowTitleBarAreaSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::NewProp_VerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::ClassParams = {
	&UWindowTitleBarAreaSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowTitleBarAreaSlot()
{
	if (!Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.OuterSingleton, Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWindowTitleBarAreaSlot>()
{
	return UWindowTitleBarAreaSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowTitleBarAreaSlot);
UWindowTitleBarAreaSlot::~UWindowTitleBarAreaSlot() {}
// End Class UWindowTitleBarAreaSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowTitleBarAreaSlot, UWindowTitleBarAreaSlot::StaticClass, TEXT("UWindowTitleBarAreaSlot"), &Z_Registration_Info_UClass_UWindowTitleBarAreaSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowTitleBarAreaSlot), 257277710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_1798707458(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WindowTitleBarAreaSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
